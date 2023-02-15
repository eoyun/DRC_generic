#include "dimensionCalc.hh"

#include "G4ThreeVector.hh"
#include "G4ios.hh"
#include "G4SystemOfUnits.hh"
#include "geomdefs.hh"

#include <cmath>
#include <stdio.h>
#include <float.h>

using namespace std;

dimensionCalc::dimensionCalc() {

  fFrontL       = 0;
  fNofModules   = 0;
  fNofRow       = 0;
  ftower_height = 0;
  fPMTT         = 0;
  fReflectorT   = 0;
  fisModule     = false;

}

dimensionCalc::~dimensionCalc() {}

G4ThreeVector dimensionCalc::GetOrigin(G4int i) {

  double row = i/fNofRow;
  double col = i%fNofRow;

  return G4ThreeVector( -22.5 * (double)fNofRow/2. + row * 22.5 + 22.5/2., -23. * (double)fNofRow/2. + col * 23. + 23./2., ftower_height/2 + fFrontL);
}

G4ThreeVector dimensionCalc::GetOrigin_PMTG(G4int i) {

  double row = i/fNofRow;
  double col = i%fNofRow;

  return G4ThreeVector( -22.5 * (double)fNofRow/2. + row * 22.5 + 22.5/2., -23. * (double)fNofRow/2. + col * 23. + 23./2., ftower_height + fFrontL + fPMTT/2);
}

G4ThreeVector dimensionCalc::GetOrigin_Reflector(G4int i) {

  double row = i/fNofRow;
  double col = i%fNofRow;

  return G4ThreeVector( -22.5 * (double)fNofRow/2. + row * 22.5 + 22.5/2., -23. * (double)fNofRow/2. + col * 23. + 23./2., fFrontL - fReflectorT/2);
}
