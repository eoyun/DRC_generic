#include "DRsimMaterials.hh"
#include "G4SystemOfUnits.hh"

#include <stdio.h>
#include <algorithm>
#include <cmath>

DRsimMaterials* DRsimMaterials::fInstance = 0;

DRsimMaterials::DRsimMaterials() {
  fNistMan = G4NistManager::Instance();
  CreateMaterials();
}

DRsimMaterials::~DRsimMaterials() {}

DRsimMaterials* DRsimMaterials::GetInstance() {
  if (fInstance==0) fInstance = new DRsimMaterials();

  return fInstance;
}

G4Material* DRsimMaterials::GetMaterial(const G4String matName) {
  G4Material* mat = fNistMan->FindOrBuildMaterial(matName);

  if (!mat) mat = G4Material::GetMaterial(matName);
  if (!mat) {
    std::ostringstream o;
    o << "Material " << matName << " not found!";
    G4Exception("DRsimMaterials::GetMaterial","",FatalException,o.str().c_str());
  }

  return mat;
}

G4OpticalSurface* DRsimMaterials::GetOpticalSurface(const G4String surfName) {
  if (surfName=="SiPMSurf") return fSiPMSurf;
  else if (surfName=="FilterSurf") return fFilterSurf;
  else if (surfName=="MirrorSurf") return fMirrorSurf;
  else {
    std::ostringstream o;
    o << "OpticalSurface " << surfName << " not found!";
    G4Exception("DRsimMaterials::GetOpticalSurface","",FatalException,o.str().c_str());
  }

  return nullptr;
}

void DRsimMaterials::CreateMaterials() {
  fNistMan->FindOrBuildMaterial("G4_Galactic");
  fNistMan->FindOrBuildMaterial("G4_AIR");

  G4String symbol;
  G4double a, z, density;
  G4int ncomponents, natoms;
  G4Element* H  = new G4Element("Hydrogen",symbol="H" , z=1., a=1.01*g/mole);
  G4Element* C  = new G4Element("Carbon"  ,symbol="C" , z=6., a=12.01*g/mole);
  G4Element* N  = new G4Element("Nitrogen",symbol="N" , z=7., a=14.01*g/mole);
  G4Element* O  = new G4Element("Oxygen"  ,symbol="O" , z=8., a=16.00*g/mole);
  G4Element* F  = new G4Element("Fluorine",symbol="F" , z=9., a=18.9984*g/mole);
  G4Element* Si = new G4Element("Silicon" ,symbol="Si", z= 14., a= 28.085*g/mole);
  G4Element* Y  = new G4Element("Yttrium" ,symbol="Y" , z= 39., a= 88.905*g/mole);
  G4Element* Ce = new G4Element("Cerium"  ,symbol="Ce", z= 58., a= 140.116*g/mole);
  G4Element* Lu = new G4Element("Lutetium",symbol="Lu", z= 71., a= 174.9668*g/mole);
  G4Element* W  = new G4Element("Tungsten",symbol="W" , z=74.,a=183.8400*g/mole);
  G4Element* Pb = new G4Element("Lead"    ,symbol="Pb", z= 82., a=207.2*g/mole);
  G4Element* Al = new G4Element("Aluminum",symbol="Al",z=13,a=26.982*g/mole);
  G4Element* Cs = new G4Element("Cesium",symbol="Cs",z=55,a=132.90545*g/mole);
  G4Element* I  = new G4Element("Iodine",symbol="I",z=53,a=126.90447*g/mole);
  G4Element* Bi = new G4Element("Bismuth",symbol="Bi",z=83,a=208.980*g/mole);
  G4Element* Ge = new G4Element("Germanium",symbol="Ge",z=32,a=72.630*g/mole);


  fCu = new G4Material("Copper"  , z = 29., a = 63.546 * g/mole, density = 8.96  * g/cm3);
  fW  = new G4Material("Tungsten", z = 74., a = 183.84 * g/mole, density = 19.30 * g/cm3);
  fFe = new G4Material("Iron"    , z = 26., a = 55.845 * g/mole, density = 7.874 * g/cm3);
  fPb = new G4Material("Lead"    , z = 82., a = 207.2  * g/mole, density = 11.35 * g/cm3);

  fSi = new G4Material("Silicon", z=14., a=28.09*g/mole, density=2.33*g/cm3);
  fAl = new G4Material("Aluminum", z=13., a=26.98*g/mole, density=2.699*g/cm3);

  fVacuum = G4Material::GetMaterial("G4_Galactic");
  fAir = G4Material::GetMaterial("G4_AIR");

  fFluoPoly = new G4Material("FluorinatedPolymer", density=1.43*g/cm3, ncomponents=2);
  fFluoPoly->AddElement(C, 2);
  fFluoPoly->AddElement(F, 2);

  fGlass = new G4Material("Glass", density=1.032*g/cm3, 2);
  fGlass->AddElement(C, 91.533*perCent);
  fGlass->AddElement(H, 8.467*perCent);

  fPS = new G4Material("Polystyrene", density=1.05*g/cm3, ncomponents=2);
  fPS->AddElement(C, natoms=8);
  fPS->AddElement(H, natoms=8);

  fPMMA = new G4Material("PMMA", density= 1.19*g/cm3, ncomponents=3);
  fPMMA->AddElement(C, natoms=5);
  fPMMA->AddElement(H, natoms=8);
  fPMMA->AddElement(O, natoms=2);

  fGelatin = new G4Material("Gelatin", density=1.27*g/cm3, ncomponents=4);
  fGelatin->AddElement(C, natoms=102);
  fGelatin->AddElement(H, natoms=151);
  fGelatin->AddElement(N, natoms=31);
  fGelatin->AddElement(O, natoms=39);

  fCSI = new G4Material("CsI",density=4.51*g/cm3, ncomponents=2);
  fCSI -> AddElement(Cs,natoms=1);
  fCSI -> AddElement(I ,natoms=1);

  fBGO = new G4Material("BGO",density=7.13*g/cm3, ncomponents=3);
  fBGO -> AddElement(Bi,natoms=4);
  fBGO -> AddElement(Ge,natoms=3);
  fBGO -> AddElement(O ,natoms=12);
 
  fPWO = new G4Material("PWO",density=8.28*g/cm3, ncomponents=3);
  fPWO -> AddElement(Pb,natoms=1);
  fPWO -> AddElement(W, natoms=1);
  fPWO -> AddElement(O, natoms=4);

  fLSO = new G4Material("LSO", density=7.40*g/cm3, ncomponents=4);
  fLSO->AddElement(Lu, 76.25*perCent);
  fLSO->AddElement(Ce, 0.2*perCent);
  fLSO->AddElement(Si, 6.12*perCent);
  fLSO->AddElement(O , 17.43*perCent);

  fLYSO = new G4Material("LYSO", density=7.25*g/cm3, ncomponents=5);
  fLYSO->AddElement(Lu, 73.856*perCent);
  fLYSO->AddElement(Y , 1.975*perCent);
  fLYSO->AddElement(Si, 6.240*perCent);
  fLYSO->AddElement(O , 17.773*perCent);
  fLYSO->AddElement(Ce, 0.156*perCent);

  G4MaterialPropertiesTable* mpAir;
  G4MaterialPropertiesTable* mpPS;
  G4MaterialPropertiesTable* mpPMMA;
  G4MaterialPropertiesTable* mpFluoPoly;
  G4MaterialPropertiesTable* mpGlass;
  G4MaterialPropertiesTable* mpSiPM;
  G4MaterialPropertiesTable* mpFilter;
  G4MaterialPropertiesTable* mpFilterSurf;
  G4MaterialPropertiesTable* mpMirror;
  G4MaterialPropertiesTable* mpMirrorSurf;

  G4MaterialPropertiesTable* mpPWO;
  G4MaterialPropertiesTable* mpLSO;
  G4MaterialPropertiesTable* mpLYSO;
  G4MaterialPropertiesTable* mpCSI;
  G4MaterialPropertiesTable* mpBGO;

  G4double opEn[] = { // from 900nm to 300nm with 25nm step
    1.37760*eV, 1.41696*eV, 1.45864*eV, 1.50284*eV, 1.54980*eV, 1.59980*eV, 1.65312*eV, 1.71013*eV,
    1.77120*eV, 1.83680*eV, 1.90745*eV, 1.98375*eV, 2.06640*eV, 2.15625*eV, 2.25426*eV, 2.36160*eV,
    2.47968*eV, 2.61019*eV, 2.75520*eV, 2.91728*eV, 3.09960*eV, 3.30625*eV, 3.54241*eV, 3.81490*eV, 4.13281*eV
  };

  const G4int nEnt = sizeof(opEn) / sizeof(G4double);

  //--- LSO ---
  G4double RI_LSO[nEnt]; std::fill_n(RI_LSO, nEnt, 1.82);
  G4double Abslength_LSO[nEnt]; std::fill_n(Abslength_LSO, nEnt, 1.14*cm);
  G4double scintFast_LSO[nEnt]={//이거 근거 더 찾기
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.03, 0.07, 0.12, 0.16, 0.32,
    0.50, 0.68, 0.92, 0.97, 0.50, 0.07, 0.00, 0.00, 0.00};
  mpLSO = new G4MaterialPropertiesTable();
  mpLSO->AddProperty("RINDEX",opEn,RI_LSO,nEnt);
  mpLSO->AddProperty("ABSLENGTH",opEn,Abslength_LSO,nEnt);
  mpLSO->AddConstProperty("SCINTILLATIONYIELD",30000./MeV);
  mpLSO->AddConstProperty("RESOLUTIONSCALE",1.0);//이것도
  mpLSO->AddProperty("FASTCOMPONENT",opEn,scintFast_LSO,nEnt);
  mpLSO->AddConstProperty("FASTTIMECONSTANT",40*ns);
  fLSO->SetMaterialPropertiesTable(mpLSO);
  
  //--- LYSO ---
  G4double RI_LYSO[nEnt]; std::fill_n(RI_LYSO, nEnt, 1.81);
  G4double Abslength_LYSO[nEnt]; std::fill_n(Abslength_LYSO, nEnt, 42*cm);
  G4double scintFast_LYSO[nEnt] = {
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.03, 0.07, 0.12, 0.16, 0.32,
    0.50, 0.68, 0.92, 0.97, 0.50, 0.07, 0.00, 0.00, 0.00
  };
  mpLYSO = new G4MaterialPropertiesTable();
  mpLYSO->AddProperty("RINDEX",opEn,RI_LYSO,nEnt);
  mpLYSO->AddProperty("ABSLENGTH",opEn,Abslength_LYSO,nEnt);
  mpLYSO->AddProperty("FASTCOMPONENT",opEn,scintFast_LYSO,nEnt);
  mpLYSO->AddConstProperty("SCINTILLATIONYIELD",33200./MeV);
  mpLYSO->AddConstProperty("RESOLUTIONSCALE",2.0);
  mpLYSO->AddConstProperty("FASTTIMECONSTANT",36*ns);
  fLYSO->SetMaterialPropertiesTable(mpLYSO);
  
  //--- PbWO4 ---
  G4double RI_PWO[nEnt]; std::fill_n(RI_PWO,nEnt,2.16);
  G4double Abslength_PWO[nEnt]; std::fill_n(Abslength_PWO,nEnt,0.92*cm);
  //G4double scintFast_PWO[nEnt]={};
  //G4double scintSlow_PWO[nEnt]={};
  mpPWO = new G4MaterialPropertiesTable();
  mpPWO->AddProperty("RINDEX",opEn,RI_PWO,nEnt);
  mpPWO->AddProperty("ABSLENGTH",opEn,Abslength_PWO,nEnt);
  //mpPWO->AddProperty("FASTCOMPONENT",opEn,scintFast_PWO,nEnt);
  //mpPWO->AddProperty("FASTCOMPONENT",opEn,scintSlow_PWO,nEnt);
  mpPWO->AddConstProperty("SCINTILLATIONYIELD",400/MeV);
  mpPWO->AddConstProperty("RESOLUTIONSCALE",1.0);
  mpPWO->AddConstProperty("FASTTIMECONSTANT",6*ns);
  mpPWO->AddConstProperty("SLOWTIMECONSTANT",30*ns);
  fPWO->SetMaterialPropertiesTable(mpPWO);
  
  //--- CsI ---
  G4double RI_CSI[nEnt]; std::fill_n(RI_CSI,nEnt,1.95);
  G4double Abslength_CSI[nEnt]; std::fill_n(Abslength_CSI,nEnt,40*cm);
  //G4double scintFast_PWO[nEnt]={};
  //G4double scintSlow_PWO[nEnt]={};
  mpCSI = new G4MaterialPropertiesTable();
  mpCSI->AddProperty("RINDEX",opEn,RI_CSI,nEnt);
  mpCSI->AddProperty("ABSLENGTH",opEn,Abslength_CSI,nEnt);
  //mpPWO->AddProperty("FASTCOMPONENT",opEn,scintFast_PWO,nEnt);
  //mpPWO->AddProperty("FASTCOMPONENT",opEn,scintSlow_PWO,nEnt);
  /*G4double scintFast_CSI[nEnt] = {
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.00, 0.00, 0.01, 0.03, 0.04,
    0.05, 0.05, 0.04, 0.04, 0.04, 0.07, 0.17, 0.49, 0.59};/
  };
  G4double scintSlow_CSI[nEnt] = {
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.00, 0.00, 0.01, 0.02, 0.03,
    0.03, 0.03, 0.03, 0.02, 0.03, 0.05, 0.11, 0.32, 0.39
  };*/
  G4double scintFast_CSI[nEnt] = {
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.00, 0.00, 0.02, 0.05, 0.07,
    0.08, 0.08, 0.07, 0.06, 0.07, 0.12, 0.28, 0.81, 0.98
  };
  mpCSI->AddProperty("FASTCOMPONENT",opEn,scintFast_CSI,nEnt);
  //mpCSI->AddProperty("SLOWCOMPONENT",opEn,scintSlow_CSI,nEnt);
  mpCSI->AddConstProperty("SCINTILLATIONYIELD",1900/MeV);
  mpCSI->AddConstProperty("RESOLUTIONSCALE",1.0);
  mpCSI->AddConstProperty("FASTTIMECONSTANT",15.7*ns);
  //mpCSI->AddConstProperty("SLOWTIMECONSTANT",35.8*ns);
  fCSI->SetMaterialPropertiesTable(mpCSI);
  
  //--- BGO ---
  G4double RI_BGO[nEnt]; std::fill_n(RI_BGO,nEnt,2.15);
  G4double Abslength_BGO[nEnt]; std::fill_n(Abslength_BGO,nEnt,40*cm);
  //G4double scintFast_PWO[nEnt]={};
  //G4double scintSlow_PWO[nEnt]={};
  G4double scintFast_BGO[nEnt] = {
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.02,
    0.12, 0.47, 0.98, 0.72, 0.08, 0.02, 0.00, 0.00, 0.00
  };
  
  mpBGO = new G4MaterialPropertiesTable();
  mpBGO->AddProperty("RINDEX",opEn,RI_BGO,nEnt);
  mpBGO->AddProperty("ABSLENGTH",opEn,Abslength_BGO,nEnt);
  mpBGO->AddProperty("FASTCOMPONENT",opEn,scintFast_BGO,nEnt);
  //mpPWO->AddProperty("FASTCOMPONENT",opEn,scintSlow_PWO,nEnt);
  mpBGO->AddConstProperty("SCINTILLATIONYIELD",8000/MeV);
  mpBGO->AddConstProperty("RESOLUTIONSCALE",1.0);
  mpBGO->AddConstProperty("FASTTIMECONSTANT",300*ns);
  fBGO->SetMaterialPropertiesTable(mpBGO);
  

  G4double RI_Air[nEnt]; std::fill_n(RI_Air,nEnt,1.0);
  mpAir = new G4MaterialPropertiesTable();
  mpAir->AddProperty("RINDEX",opEn,RI_Air,nEnt);
  fAir->SetMaterialPropertiesTable(mpAir);

  G4double RI_PMMA[nEnt] = {
    1.48329, 1.48355, 1.48392, 1.48434, 1.48467, 1.48515, 1.48569, 1.48628,
    1.48677, 1.48749, 1.48831, 1.48899, 1.49000, 1.49119, 1.49219, 1.49372,
    1.49552, 1.49766, 1.49953, 1.50252, 1.50519, 1.51000, 1.51518, 1.52182, 1.53055
  };
  G4double AbsLen_PMMA[nEnt] = {
    0.414*m, 0.543*m, 0.965*m, 2.171*m, 2.171*m, 3.341*m, 4.343*m, 1.448*m,
    4.343*m, 14.48*m, 21.71*m, 8.686*m, 28.95*m, 54.29*m, 43.43*m, 48.25*m,
    54.29*m, 48.25*m, 43.43*m, 28.95*m, 21.71*m, 4.343*m, 2.171*m, 0.869*m, 0.434*m
  };
  mpPMMA = new G4MaterialPropertiesTable();
  mpPMMA->AddProperty("RINDEX",opEn,RI_PMMA,nEnt);
  mpPMMA->AddProperty("ABSLENGTH",opEn,AbsLen_PMMA,nEnt);
  fPMMA->SetMaterialPropertiesTable(mpPMMA);

  G4double RI_FluoPoly[nEnt]; std::fill_n(RI_FluoPoly, nEnt, 1.42);
  mpFluoPoly = new G4MaterialPropertiesTable();
  mpFluoPoly->AddProperty("RINDEX",opEn,RI_FluoPoly,nEnt);
  fFluoPoly->SetMaterialPropertiesTable(mpFluoPoly);

  G4double RI_PS[nEnt] = {
    1.57483, 1.57568, 1.57644, 1.57726, 1.57817, 1.57916, 1.58026, 1.58148,
    1.58284, 1.58435, 1.58605, 1.58796, 1.59013, 1.59328, 1.59621, 1.59960,
    1.60251, 1.60824, 1.61229, 1.62032, 1.62858, 1.63886, 1.65191, 1.66888, 1.69165
  };
  G4double AbsLen_PS[nEnt] = {
    2.714*m, 3.102*m, 3.619*m, 4.343*m, 5.791*m, 7.896*m, 4.343*m, 7.896*m,
    5.429*m, 36.19*m, 17.37*m, 36.19*m, 5.429*m, 28.95*m, 21.71*m, 14.48*m,
    12.41*m, 8.686*m, 7.238*m, 1.200*m, 0.200*m, 0.500*m, 0.200*m, 0.100*m, 0.100*m
  };
  G4double scintFast_PS[nEnt] = {
    0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00,
    0.00, 0.00, 0.00, 0.00, 0.00, 0.03, 0.07, 0.13,
    0.33, 0.63, 1.00, 0.50, 0.00, 0.00, 0.00, 0.00, 0.00
  };
  mpPS = new G4MaterialPropertiesTable();
  mpPS->AddProperty("RINDEX",opEn,RI_PS,nEnt);
  mpPS->AddProperty("ABSLENGTH",opEn,AbsLen_PS,nEnt);
  mpPS->AddProperty("FASTCOMPONENT",opEn,scintFast_PS,nEnt);
  mpPS->AddConstProperty("SCINTILLATIONYIELD",10./keV);
  mpPS->AddConstProperty("RESOLUTIONSCALE",1.0);
  mpPS->AddConstProperty("FASTTIMECONSTANT",2.8*ns);
  fPS->SetMaterialPropertiesTable(mpPS);
  fPS->GetIonisation()->SetBirksConstant(0.126*mm/MeV);

  G4double RI_Glass[nEnt]; std::fill_n(RI_Glass, nEnt, 1.52);
  G4double Abslength_Glass[nEnt]; std::fill_n(Abslength_Glass, nEnt, 420.*cm);
  mpGlass = new G4MaterialPropertiesTable();
  mpGlass->AddProperty("RINDEX",opEn,RI_Glass,nEnt);
  mpGlass->AddProperty("ABSLENGTH",opEn,Abslength_Glass,nEnt);
  fGlass->SetMaterialPropertiesTable(mpGlass);

  G4double refl_SiPM[nEnt]; std::fill_n(refl_SiPM, nEnt, 0.);
  G4double eff_SiPM[nEnt] = {
    0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.10,
    0.11, 0.13, 0.15, 0.17, 0.19, 0.20, 0.22, 0.23,
    0.24, 0.25, 0.24, 0.23, 0.21, 0.20, 0.17, 0.14, 0.10
  };
  mpSiPM = new G4MaterialPropertiesTable();
  mpSiPM->AddProperty("REFLECTIVITY",opEn,refl_SiPM,nEnt);
  mpSiPM->AddProperty("EFFICIENCY",opEn,eff_SiPM,nEnt);
  fSiPMSurf = new G4OpticalSurface("SiPMSurf",glisur,polished,dielectric_metal);
  fSiPMSurf->SetMaterialPropertiesTable(mpSiPM);

  G4double filterEff[nEnt]; std::fill_n(filterEff, nEnt, 1.);
  // G4double filterEff[nEnt] = {
  //   0.913, 0.913, 0.913, 0.913, 0.913, 0.913, 0.913, 0.913, 
  //   0.913, 0.912, 0.910, 0.907, 0.904, 0.899, 0.884, 0.692, 
  //   0.015, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000, 0.000
  // };
  
  G4double filterRef[nEnt]; std::fill_n(filterRef,nEnt,0.);
  G4double RI_gel[nEnt]; std::fill_n(RI_gel,nEnt,1.52);
  mpFilter = new G4MaterialPropertiesTable();
  mpFilter->AddProperty("RINDEX",opEn,RI_gel,nEnt);
  fGelatin->SetMaterialPropertiesTable(mpFilter);
  mpFilterSurf = new G4MaterialPropertiesTable();
  mpFilterSurf->AddProperty("TRANSMITTANCE",opEn,filterEff,nEnt);
  mpFilterSurf->AddProperty("REFLECTIVITY",opEn,filterRef,nEnt);
  fFilterSurf = new G4OpticalSurface("FilterSurf",glisur,polished,dielectric_dielectric);
  fFilterSurf->SetMaterialPropertiesTable(mpFilterSurf);

  G4double MirrorRef[nEnt]; std::fill_n(MirrorRef, nEnt, 0.9);
  G4double MirrorEff[nEnt]; std::fill_n(MirrorEff, nEnt, 0.);

  mpMirrorSurf = new G4MaterialPropertiesTable();
  mpMirrorSurf->AddProperty("TRANSMITTANCE",opEn,MirrorEff,nEnt);
  mpMirrorSurf->AddProperty("REFLECTIVITY",opEn,MirrorRef,nEnt);
  fMirrorSurf = new G4OpticalSurface("MirrorSurf",glisur,polished,dielectric_metal);
  fMirrorSurf->SetMaterialPropertiesTable(mpMirrorSurf);
}
