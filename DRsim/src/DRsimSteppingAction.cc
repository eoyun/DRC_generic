#include "DRsimSteppingAction.hh"

#include "G4Track.hh"
#include "G4StepPoint.hh"
#include "G4ParticleDefinition.hh"
#include "G4ParticleTypes.hh"
#include "G4UnitsTable.hh"
#include "Randomize.hh"

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
  //G4cout << "stepping Action"<< G4endl;
  if ( matName=="G4_Galactic" || matName=="Air" ) return;

  G4VPhysicalVolume* motherTower = GetMotherTower(theTouchable);
  fEdep.ModuleNum = GetModuleNum(motherTower->GetName());

  G4double pdgCharge = particle->GetPDGCharge();

  fEdep.Edep = step->GetTotalEnergyDeposit();
  fEdep.EdepEle = (std::abs(pdgID)==11) ? fEdep.Edep : 0.;
  fEdep.EdepGamma = (std::abs(pdgID)==22) ? fEdep.Edep : 0.;
  fEdep.EdepCharged = ( std::round(std::abs(pdgCharge)) != 0. ) ? fEdep.Edep : 0.;

  if ( fEdep.Edep > 0. ) { 
    fEventAction->fillEdeps(fEdep);

    fstep.Edep = step->GetTotalEnergyDeposit();
    fstep.E = step->GetPreStepPoint()->GetKineticEnergy();
    if (step->GetTrack()->GetDefinition()->GetPDGCharge()==0){
      fstep.px =step->GetPostStepPoint()->GetMomentum().getX();  
      fstep.py =step->GetPostStepPoint()->GetMomentum().getY();  
      fstep.pz =step->GetPostStepPoint()->GetMomentum().getZ();  
      fstep.vx =step->GetPostStepPoint()->GetPosition().getX();  
      fstep.vy =step->GetPostStepPoint()->GetPosition().getY();  
      fstep.vz =step->GetPostStepPoint()->GetPosition().getZ();
    }
    else { 
      fstep.px =step->GetPreStepPoint()->GetMomentum().getX()+G4UniformRand()*(step->GetPostStepPoint()->GetMomentum().getX()-step->GetPreStepPoint()->GetMomentum().getX())/2.;  
      fstep.py =step->GetPreStepPoint()->GetMomentum().getY()+G4UniformRand()*(step->GetPostStepPoint()->GetMomentum().getY()-step->GetPreStepPoint()->GetMomentum().getY())/2.;  
      fstep.pz =step->GetPreStepPoint()->GetMomentum().getZ()+G4UniformRand()*(step->GetPostStepPoint()->GetMomentum().getZ()-step->GetPreStepPoint()->GetMomentum().getZ())/2.;  
      fstep.vx =step->GetPreStepPoint()->GetPosition().getX()+G4UniformRand()*(step->GetPostStepPoint()->GetPosition().getX()-step->GetPreStepPoint()->GetPosition().getX())/2.;  
      fstep.vy =step->GetPreStepPoint()->GetPosition().getY()+G4UniformRand()*(step->GetPostStepPoint()->GetPosition().getY()-step->GetPreStepPoint()->GetPosition().getY())/2.;  
      fstep.vz =step->GetPreStepPoint()->GetPosition().getZ()+G4UniformRand()*(step->GetPostStepPoint()->GetPosition().getZ()-step->GetPreStepPoint()->GetPosition().getZ())/2.;
    } 
    fstep.vt =  step->GetPostStepPoint()->GetGlobalTime();
    fstep.pdgId = track->GetDefinition()->GetPDGEncoding();
    fstep.trackId = step->GetTrack()->GetTrackID();
  
    fEventAction->fillSteps(fstep);
  }

  return;
}
