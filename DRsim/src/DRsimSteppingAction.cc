#include "DRsimSteppingAction.hh"

#include "G4Track.hh"
#include "G4StepPoint.hh"
#include "G4ParticleDefinition.hh"
#include "G4ParticleTypes.hh"
#include "G4UnitsTable.hh"

DRsimSteppingAction::DRsimSteppingAction(DRsimEventAction* eventAction)
: G4UserSteppingAction(), fEventAction(eventAction)
{}

DRsimSteppingAction::~DRsimSteppingAction() {}

void DRsimSteppingAction::UserSteppingAction(const G4Step* step) {
  if (step->GetTrack()->GetDefinition() == G4OpticalPhoton::OpticalPhotonDefinition()) return;

  G4Track* track = step->GetTrack();
  G4ParticleDefinition* particle = track->GetDefinition();
  G4int pdgID = particle->GetPDGEncoding();

  G4StepPoint* presteppoint = step->GetPreStepPoint();
  G4StepPoint* poststeppoint = step->GetPostStepPoint();
  G4LogicalVolume* preVol = presteppoint->GetPhysicalVolume()->GetLogicalVolume();
  G4TouchableHandle theTouchable = presteppoint->GetTouchableHandle();
  
  if (poststeppoint->GetStepStatus() == fWorldBoundary) {
    fLeak.E = track->GetTotalEnergy();
    fLeak.px = track->GetMomentum().x();
    fLeak.py = track->GetMomentum().y();
    fLeak.pz = track->GetMomentum().z();
    fLeak.vx = presteppoint->GetPosition().x();
    fLeak.vy = presteppoint->GetPosition().y();
    fLeak.vz = presteppoint->GetPosition().z();
    fLeak.vt = presteppoint->GetGlobalTime();
    fLeak.pdgId = track->GetDefinition()->GetPDGEncoding();

    fEventAction->fillLeaks(fLeak);
  }

  G4String matName = preVol->GetMaterial()->GetName();

  if ( matName=="G4_Galactic" || matName=="Air" ) return;

  G4VPhysicalVolume* motherTower = GetMotherTower(theTouchable);
  fEdep.ModuleNum = GetModuleNum(motherTower->GetName());

  G4double pdgCharge = particle->GetPDGCharge();

  fEdep.Edep = step->GetTotalEnergyDeposit();
  fEdep.EdepEle = (std::abs(pdgID)==11) ? fEdep.Edep : 0.;
  fEdep.EdepGamma = (std::abs(pdgID)==22) ? fEdep.Edep : 0.;
  fEdep.EdepCharged = ( std::round(std::abs(pdgCharge)) != 0. ) ? fEdep.Edep : 0.;

  if ( fEdep.Edep > 0. ) fEventAction->fillEdeps(fEdep);

  G4StepStatus stepStatus = fpSteppingManager->GetfStepStatus();
    
  //G4cout << "The step status is " << stepStatus << G4endl;
       
  G4int nSecAtRest = fpSteppingManager->GetfN2ndariesAtRestDoIt();
  G4int nSecAlong  = fpSteppingManager->GetfN2ndariesAlongStepDoIt();
  G4int nSecPost   = fpSteppingManager->GetfN2ndariesPostStepDoIt();
  G4int nSecTotal  = nSecAtRest+nSecAlong+nSecPost;
  G4TrackVector* secVec = fpSteppingManager->GetfSecondary();
              
  // get volume of the current step
  auto volume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume();
  // G4cout << volume->GetName() << G4endl;
        
  // energy deposit
  auto edep = step->GetTotalEnergyDeposit();
  auto deltaE = step->GetDeltaEnergy();
                        
  //const G4ParticleDefinition* particle;
  //particle = step->GetTrack()->GetParticleDefinition();
          
  // Process name
  G4String proc_name = step->GetPostStepPoint()->GetProcessDefinedStep()->GetProcessName();
                      
                          
  G4cout << "******************************" << G4endl;
  G4cout << "Step is limited by "
  << step->GetPostStepPoint()->GetProcessDefinedStep()->GetProcessName()
  << G4endl;
  G4cout << "Processes involved to the step" << G4endl;
  G4cout << "******************************" << G4endl;
                      
  G4cout << "Particle Name is " << particle->GetParticleName() <<
  " and its kinetic energy is " << step->GetPreStepPoint()->GetKineticEnergy()/CLHEP::MeV <<
  " and the total energy is " << step->GetPreStepPoint()->GetTotalEnergy()/CLHEP::MeV <<
  " Energy deposit is " << edep <<
  " Track ID is " << step->GetTrack()->GetTrackID() <<
  " parent ID is " << step->GetTrack()->GetParentID() <<
  " lepton # " << particle->GetLeptonNumber() <<
  " Baryon # " << particle->GetBaryonNumber() <<
  " Type " << particle->GetParticleType() << G4endl;
      
   // G4cout << "----------------------------------------" << G4endl;
              
  G4double sum_all_ke = 0;
  G4double sum_all_e = 0;
  
  G4int SoPnumber =0;
  G4int CoPnumber =0;
        
  if(nSecTotal>0)
  {
    G4cout << "  :----- List of 2ndaries - " << std::setw(3) << nSecTotal
    << " (Rest=" << std::setw(2) << nSecAtRest
    << ",Along=" << std::setw(2) << nSecAlong
    << ",Post="  << std::setw(2) << nSecPost << ")" << G4endl;
                  
    for(size_t lp1=(*secVec).size()-nSecTotal; lp1<(*secVec).size(); lp1++)
    {
      if ( (*secVec)[lp1]->GetDefinition() == G4OpticalPhoton::OpticalPhotonDefinition() ){ 
        if ( (*secVec)[lp1]->GetCreatorProcess()->GetProcessName() == "Scintillation"){
          SoPnumber+=1;
        }
        if ( (*secVec)[lp1]->GetCreatorProcess()->GetProcessName() == "Cerenkov"){
          CoPnumber+=1;
        }
      }
      G4cout << "    : "
      << G4BestUnit((*secVec)[lp1]->GetPosition(), "Length") << " "
      << std::setw( 9) << G4BestUnit((*secVec)[lp1]->GetKineticEnergy() , "Energy") << " "
      << std::setw( 9) << G4BestUnit((*secVec)[lp1]->GetTotalEnergy() , "Energy") << " "
      << std::setw(18) << (*secVec)[lp1]->GetDefinition()->GetParticleName()
      << " generated by " << (*secVec)[lp1]->GetCreatorProcess()->GetProcessName() << "  "
      << " Track ID " << (*secVec)[lp1]->GetTrackID() << G4endl;
      sum_all_ke += (*secVec)[lp1]->GetKineticEnergy();
      sum_all_e += (*secVec)[lp1]->GetTotalEnergy();
                  
      if ( (*secVec)[lp1]->GetDefinition()->GetParticleType() == "nucleus" ){
                                              
        G4cout << (*secVec)[lp1]->GetDefinition()->GetParticleName() << "   "
        << (*secVec)[lp1]->GetDefinition()->GetAtomicMass() << "   "
        << (*secVec)[lp1]->GetDefinition()->GetAtomicNumber() << "   "
        << (*secVec)[lp1]->GetDefinition()->GetParticleSubType() << G4endl;
      }
    }
    fEventAction->fillOpticalPhoton(photon,SoPnumber,CoPnumber);
  }
                                                                                
  G4cout << sum_all_ke/CLHEP::MeV << "   " << sum_all_e/CLHEP::MeV << G4endl;

  return;
}
