#ifndef DRsimEventAction_h
#define DRsimEventAction_h 1

#include "DRsimInterface.h"
#include "DRsimSiPMHit.hh"

#include "G4UserEventAction.hh"
#include "G4HCofThisEvent.hh"
#include "G4Event.hh"

class DRsimEventAction : public G4UserEventAction {
public:

  DRsimEventAction();
  virtual ~DRsimEventAction();

  virtual void BeginOfEventAction(const G4Event*);
  virtual void EndOfEventAction(const G4Event*);

  void fillEdeps(DRsimInterface::DRsimEdepData edepData);
  void fillLeaks(DRsimInterface::DRsimLeakageData leakData);
  void fillOpticalPhoton(DRsimInterface::DRsimPhoton& photon, G4int SoPnumber, G4int CoPnumber);

private:
  void clear();
  void fillHits(DRsimSiPMHit* hit);
  void fillPtcs(G4PrimaryVertex* vtx, G4PrimaryParticle* ptc);
  void queue();
  G4int ClearFlag;

  DRsimInterface::DRsimEventData* fEventData;
  std::map<int, DRsimInterface::DRsimTowerData> fTowerMap;
  std::map<int, DRsimInterface::DRsimEdepData> fEdepMap;

  std::vector<G4int> fSiPMCollID;
  std::vector<DRsimInterface::DRsimPhoton> fPhotonVector;
};

#endif
