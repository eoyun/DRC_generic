// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__rootIO
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/DRsimInterface.h"
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/RecoInterface.h"
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/RootInterface.h"
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/fastjetInterface.h"
#include "fastjetInterface.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *tuplelEfloatcOfloatcOfloatgR_Dictionary();
   static void tuplelEfloatcOfloatcOfloatgR_TClassManip(TClass*);
   static void *new_tuplelEfloatcOfloatcOfloatgR(void *p = 0);
   static void *newArray_tuplelEfloatcOfloatcOfloatgR(Long_t size, void *p);
   static void delete_tuplelEfloatcOfloatcOfloatgR(void *p);
   static void deleteArray_tuplelEfloatcOfloatcOfloatgR(void *p);
   static void destruct_tuplelEfloatcOfloatcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::tuple<float,float,float>*)
   {
      ::tuple<float,float,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::tuple<float,float,float>));
      static ::ROOT::TGenericClassInfo 
         instance("tuple<float,float,float>", "tuple", 556,
                  typeid(::tuple<float,float,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &tuplelEfloatcOfloatcOfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::tuple<float,float,float>) );
      instance.SetNew(&new_tuplelEfloatcOfloatcOfloatgR);
      instance.SetNewArray(&newArray_tuplelEfloatcOfloatcOfloatgR);
      instance.SetDelete(&delete_tuplelEfloatcOfloatcOfloatgR);
      instance.SetDeleteArray(&deleteArray_tuplelEfloatcOfloatcOfloatgR);
      instance.SetDestructor(&destruct_tuplelEfloatcOfloatcOfloatgR);

      ::ROOT::AddClassAlternate("tuple<float,float,float>","DRsimInterface::threeVector");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::tuple<float,float,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *tuplelEfloatcOfloatcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::tuple<float,float,float>*)0x0)->GetClass();
      tuplelEfloatcOfloatcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void tuplelEfloatcOfloatcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *fastjetInterfacecLcLfastjetDataBase_Dictionary();
   static void fastjetInterfacecLcLfastjetDataBase_TClassManip(TClass*);
   static void *new_fastjetInterfacecLcLfastjetDataBase(void *p = 0);
   static void *newArray_fastjetInterfacecLcLfastjetDataBase(Long_t size, void *p);
   static void delete_fastjetInterfacecLcLfastjetDataBase(void *p);
   static void deleteArray_fastjetInterfacecLcLfastjetDataBase(void *p);
   static void destruct_fastjetInterfacecLcLfastjetDataBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::fastjetInterface::fastjetDataBase*)
   {
      ::fastjetInterface::fastjetDataBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::fastjetInterface::fastjetDataBase));
      static ::ROOT::TGenericClassInfo 
         instance("fastjetInterface::fastjetDataBase", "fastjetInterface.h", 9,
                  typeid(::fastjetInterface::fastjetDataBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &fastjetInterfacecLcLfastjetDataBase_Dictionary, isa_proxy, 4,
                  sizeof(::fastjetInterface::fastjetDataBase) );
      instance.SetNew(&new_fastjetInterfacecLcLfastjetDataBase);
      instance.SetNewArray(&newArray_fastjetInterfacecLcLfastjetDataBase);
      instance.SetDelete(&delete_fastjetInterfacecLcLfastjetDataBase);
      instance.SetDeleteArray(&deleteArray_fastjetInterfacecLcLfastjetDataBase);
      instance.SetDestructor(&destruct_fastjetInterfacecLcLfastjetDataBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::fastjetInterface::fastjetDataBase*)
   {
      return GenerateInitInstanceLocal((::fastjetInterface::fastjetDataBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::fastjetInterface::fastjetDataBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *fastjetInterfacecLcLfastjetDataBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::fastjetInterface::fastjetDataBase*)0x0)->GetClass();
      fastjetInterfacecLcLfastjetDataBase_TClassManip(theClass);
   return theClass;
   }

   static void fastjetInterfacecLcLfastjetDataBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *fastjetInterfacecLcLfastjetData_Dictionary();
   static void fastjetInterfacecLcLfastjetData_TClassManip(TClass*);
   static void *new_fastjetInterfacecLcLfastjetData(void *p = 0);
   static void *newArray_fastjetInterfacecLcLfastjetData(Long_t size, void *p);
   static void delete_fastjetInterfacecLcLfastjetData(void *p);
   static void deleteArray_fastjetInterfacecLcLfastjetData(void *p);
   static void destruct_fastjetInterfacecLcLfastjetData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::fastjetInterface::fastjetData*)
   {
      ::fastjetInterface::fastjetData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::fastjetInterface::fastjetData));
      static ::ROOT::TGenericClassInfo 
         instance("fastjetInterface::fastjetData", "fastjetInterface.h", 20,
                  typeid(::fastjetInterface::fastjetData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &fastjetInterfacecLcLfastjetData_Dictionary, isa_proxy, 4,
                  sizeof(::fastjetInterface::fastjetData) );
      instance.SetNew(&new_fastjetInterfacecLcLfastjetData);
      instance.SetNewArray(&newArray_fastjetInterfacecLcLfastjetData);
      instance.SetDelete(&delete_fastjetInterfacecLcLfastjetData);
      instance.SetDeleteArray(&deleteArray_fastjetInterfacecLcLfastjetData);
      instance.SetDestructor(&destruct_fastjetInterfacecLcLfastjetData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::fastjetInterface::fastjetData*)
   {
      return GenerateInitInstanceLocal((::fastjetInterface::fastjetData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::fastjetInterface::fastjetData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *fastjetInterfacecLcLfastjetData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::fastjetInterface::fastjetData*)0x0)->GetClass();
      fastjetInterfacecLcLfastjetData_TClassManip(theClass);
   return theClass;
   }

   static void fastjetInterfacecLcLfastjetData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimSiPMData_Dictionary();
   static void DRsimInterfacecLcLDRsimSiPMData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimSiPMData(void *p = 0);
   static void *newArray_DRsimInterfacecLcLDRsimSiPMData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimSiPMData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimSiPMData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimSiPMData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimSiPMData*)
   {
      ::DRsimInterface::DRsimSiPMData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimSiPMData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimSiPMData", "DRsimInterface.h", 28,
                  typeid(::DRsimInterface::DRsimSiPMData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimSiPMData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimSiPMData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimSiPMData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimSiPMData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimSiPMData*)
   {
      return GenerateInitInstanceLocal((::DRsimInterface::DRsimSiPMData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DRsimInterface::DRsimSiPMData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimSiPMData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DRsimInterface::DRsimSiPMData*)0x0)->GetClass();
      DRsimInterfacecLcLDRsimSiPMData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimSiPMData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimTowerData_Dictionary();
   static void DRsimInterfacecLcLDRsimTowerData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimTowerData(void *p = 0);
   static void *newArray_DRsimInterfacecLcLDRsimTowerData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimTowerData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimTowerData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimTowerData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimTowerData*)
   {
      ::DRsimInterface::DRsimTowerData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimTowerData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimTowerData", "DRsimInterface.h", 41,
                  typeid(::DRsimInterface::DRsimTowerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimTowerData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimTowerData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimTowerData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimTowerData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimTowerData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimTowerData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimTowerData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimTowerData*)
   {
      return GenerateInitInstanceLocal((::DRsimInterface::DRsimTowerData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DRsimInterface::DRsimTowerData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimTowerData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DRsimInterface::DRsimTowerData*)0x0)->GetClass();
      DRsimInterfacecLcLDRsimTowerData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimTowerData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimEdepData_Dictionary();
   static void DRsimInterfacecLcLDRsimEdepData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimEdepData(void *p = 0);
   static void *newArray_DRsimInterfacecLcLDRsimEdepData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimEdepData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimEdepData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimEdepData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimEdepData*)
   {
      ::DRsimInterface::DRsimEdepData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimEdepData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimEdepData", "DRsimInterface.h", 51,
                  typeid(::DRsimInterface::DRsimEdepData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimEdepData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimEdepData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimEdepData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimEdepData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimEdepData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimEdepData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimEdepData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimEdepData*)
   {
      return GenerateInitInstanceLocal((::DRsimInterface::DRsimEdepData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DRsimInterface::DRsimEdepData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimEdepData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DRsimInterface::DRsimEdepData*)0x0)->GetClass();
      DRsimInterfacecLcLDRsimEdepData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimEdepData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimLeakageData_Dictionary();
   static void DRsimInterfacecLcLDRsimLeakageData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimLeakageData(void *p = 0);
   static void *newArray_DRsimInterfacecLcLDRsimLeakageData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimLeakageData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimLeakageData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimLeakageData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimLeakageData*)
   {
      ::DRsimInterface::DRsimLeakageData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimLeakageData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimLeakageData", "DRsimInterface.h", 70,
                  typeid(::DRsimInterface::DRsimLeakageData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimLeakageData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimLeakageData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimLeakageData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimLeakageData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimLeakageData*)
   {
      return GenerateInitInstanceLocal((::DRsimInterface::DRsimLeakageData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DRsimInterface::DRsimLeakageData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimLeakageData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DRsimInterface::DRsimLeakageData*)0x0)->GetClass();
      DRsimInterfacecLcLDRsimLeakageData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimLeakageData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimGenData_Dictionary();
   static void DRsimInterfacecLcLDRsimGenData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimGenData(void *p = 0);
   static void *newArray_DRsimInterfacecLcLDRsimGenData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimGenData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimGenData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimGenData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimGenData*)
   {
      ::DRsimInterface::DRsimGenData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimGenData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimGenData", "DRsimInterface.h", 85,
                  typeid(::DRsimInterface::DRsimGenData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimGenData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimGenData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimGenData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimGenData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimGenData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimGenData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimGenData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimGenData*)
   {
      return GenerateInitInstanceLocal((::DRsimInterface::DRsimGenData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DRsimInterface::DRsimGenData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimGenData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DRsimInterface::DRsimGenData*)0x0)->GetClass();
      DRsimInterfacecLcLDRsimGenData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimGenData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DRsimInterfacecLcLDRsimEventData_Dictionary();
   static void DRsimInterfacecLcLDRsimEventData_TClassManip(TClass*);
   static void *new_DRsimInterfacecLcLDRsimEventData(void *p = 0);
   static void *newArray_DRsimInterfacecLcLDRsimEventData(Long_t size, void *p);
   static void delete_DRsimInterfacecLcLDRsimEventData(void *p);
   static void deleteArray_DRsimInterfacecLcLDRsimEventData(void *p);
   static void destruct_DRsimInterfacecLcLDRsimEventData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DRsimInterface::DRsimEventData*)
   {
      ::DRsimInterface::DRsimEventData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DRsimInterface::DRsimEventData));
      static ::ROOT::TGenericClassInfo 
         instance("DRsimInterface::DRsimEventData", "DRsimInterface.h", 100,
                  typeid(::DRsimInterface::DRsimEventData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DRsimInterfacecLcLDRsimEventData_Dictionary, isa_proxy, 4,
                  sizeof(::DRsimInterface::DRsimEventData) );
      instance.SetNew(&new_DRsimInterfacecLcLDRsimEventData);
      instance.SetNewArray(&newArray_DRsimInterfacecLcLDRsimEventData);
      instance.SetDelete(&delete_DRsimInterfacecLcLDRsimEventData);
      instance.SetDeleteArray(&deleteArray_DRsimInterfacecLcLDRsimEventData);
      instance.SetDestructor(&destruct_DRsimInterfacecLcLDRsimEventData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DRsimInterface::DRsimEventData*)
   {
      return GenerateInitInstanceLocal((::DRsimInterface::DRsimEventData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DRsimInterface::DRsimEventData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DRsimInterfacecLcLDRsimEventData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DRsimInterface::DRsimEventData*)0x0)->GetClass();
      DRsimInterfacecLcLDRsimEventData_TClassManip(theClass);
   return theClass;
   }

   static void DRsimInterfacecLcLDRsimEventData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoInterfacecLcLRecoFiberData_Dictionary();
   static void RecoInterfacecLcLRecoFiberData_TClassManip(TClass*);
   static void *new_RecoInterfacecLcLRecoFiberData(void *p = 0);
   static void *newArray_RecoInterfacecLcLRecoFiberData(Long_t size, void *p);
   static void delete_RecoInterfacecLcLRecoFiberData(void *p);
   static void deleteArray_RecoInterfacecLcLRecoFiberData(void *p);
   static void destruct_RecoInterfacecLcLRecoFiberData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoInterface::RecoFiberData*)
   {
      ::RecoInterface::RecoFiberData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoInterface::RecoFiberData));
      static ::ROOT::TGenericClassInfo 
         instance("RecoInterface::RecoFiberData", "RecoInterface.h", 11,
                  typeid(::RecoInterface::RecoFiberData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoInterfacecLcLRecoFiberData_Dictionary, isa_proxy, 4,
                  sizeof(::RecoInterface::RecoFiberData) );
      instance.SetNew(&new_RecoInterfacecLcLRecoFiberData);
      instance.SetNewArray(&newArray_RecoInterfacecLcLRecoFiberData);
      instance.SetDelete(&delete_RecoInterfacecLcLRecoFiberData);
      instance.SetDeleteArray(&deleteArray_RecoInterfacecLcLRecoFiberData);
      instance.SetDestructor(&destruct_RecoInterfacecLcLRecoFiberData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoInterface::RecoFiberData*)
   {
      return GenerateInitInstanceLocal((::RecoInterface::RecoFiberData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoInterface::RecoFiberData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoInterfacecLcLRecoFiberData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoInterface::RecoFiberData*)0x0)->GetClass();
      RecoInterfacecLcLRecoFiberData_TClassManip(theClass);
   return theClass;
   }

   static void RecoInterfacecLcLRecoFiberData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoInterfacecLcLRecoTowerData_Dictionary();
   static void RecoInterfacecLcLRecoTowerData_TClassManip(TClass*);
   static void *new_RecoInterfacecLcLRecoTowerData(void *p = 0);
   static void *newArray_RecoInterfacecLcLRecoTowerData(Long_t size, void *p);
   static void delete_RecoInterfacecLcLRecoTowerData(void *p);
   static void deleteArray_RecoInterfacecLcLRecoTowerData(void *p);
   static void destruct_RecoInterfacecLcLRecoTowerData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoInterface::RecoTowerData*)
   {
      ::RecoInterface::RecoTowerData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoInterface::RecoTowerData));
      static ::ROOT::TGenericClassInfo 
         instance("RecoInterface::RecoTowerData", "RecoInterface.h", 27,
                  typeid(::RecoInterface::RecoTowerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoInterfacecLcLRecoTowerData_Dictionary, isa_proxy, 4,
                  sizeof(::RecoInterface::RecoTowerData) );
      instance.SetNew(&new_RecoInterfacecLcLRecoTowerData);
      instance.SetNewArray(&newArray_RecoInterfacecLcLRecoTowerData);
      instance.SetDelete(&delete_RecoInterfacecLcLRecoTowerData);
      instance.SetDeleteArray(&deleteArray_RecoInterfacecLcLRecoTowerData);
      instance.SetDestructor(&destruct_RecoInterfacecLcLRecoTowerData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoInterface::RecoTowerData*)
   {
      return GenerateInitInstanceLocal((::RecoInterface::RecoTowerData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoInterface::RecoTowerData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoInterfacecLcLRecoTowerData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoInterface::RecoTowerData*)0x0)->GetClass();
      RecoInterfacecLcLRecoTowerData_TClassManip(theClass);
   return theClass;
   }

   static void RecoInterfacecLcLRecoTowerData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoInterfacecLcLRecoEventData_Dictionary();
   static void RecoInterfacecLcLRecoEventData_TClassManip(TClass*);
   static void *new_RecoInterfacecLcLRecoEventData(void *p = 0);
   static void *newArray_RecoInterfacecLcLRecoEventData(Long_t size, void *p);
   static void delete_RecoInterfacecLcLRecoEventData(void *p);
   static void deleteArray_RecoInterfacecLcLRecoEventData(void *p);
   static void destruct_RecoInterfacecLcLRecoEventData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoInterface::RecoEventData*)
   {
      ::RecoInterface::RecoEventData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoInterface::RecoEventData));
      static ::ROOT::TGenericClassInfo 
         instance("RecoInterface::RecoEventData", "RecoInterface.h", 46,
                  typeid(::RecoInterface::RecoEventData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoInterfacecLcLRecoEventData_Dictionary, isa_proxy, 4,
                  sizeof(::RecoInterface::RecoEventData) );
      instance.SetNew(&new_RecoInterfacecLcLRecoEventData);
      instance.SetNewArray(&newArray_RecoInterfacecLcLRecoEventData);
      instance.SetDelete(&delete_RecoInterfacecLcLRecoEventData);
      instance.SetDeleteArray(&deleteArray_RecoInterfacecLcLRecoEventData);
      instance.SetDestructor(&destruct_RecoInterfacecLcLRecoEventData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoInterface::RecoEventData*)
   {
      return GenerateInitInstanceLocal((::RecoInterface::RecoEventData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoInterface::RecoEventData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoInterfacecLcLRecoEventData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoInterface::RecoEventData*)0x0)->GetClass();
      RecoInterfacecLcLRecoEventData_TClassManip(theClass);
   return theClass;
   }

   static void RecoInterfacecLcLRecoEventData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_tuplelEfloatcOfloatcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<float,float,float> : new ::tuple<float,float,float>;
   }
   static void *newArray_tuplelEfloatcOfloatcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::tuple<float,float,float>[nElements] : new ::tuple<float,float,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_tuplelEfloatcOfloatcOfloatgR(void *p) {
      delete ((::tuple<float,float,float>*)p);
   }
   static void deleteArray_tuplelEfloatcOfloatcOfloatgR(void *p) {
      delete [] ((::tuple<float,float,float>*)p);
   }
   static void destruct_tuplelEfloatcOfloatcOfloatgR(void *p) {
      typedef ::tuple<float,float,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::tuple<float,float,float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_fastjetInterfacecLcLfastjetDataBase(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::fastjetInterface::fastjetDataBase : new ::fastjetInterface::fastjetDataBase;
   }
   static void *newArray_fastjetInterfacecLcLfastjetDataBase(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::fastjetInterface::fastjetDataBase[nElements] : new ::fastjetInterface::fastjetDataBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_fastjetInterfacecLcLfastjetDataBase(void *p) {
      delete ((::fastjetInterface::fastjetDataBase*)p);
   }
   static void deleteArray_fastjetInterfacecLcLfastjetDataBase(void *p) {
      delete [] ((::fastjetInterface::fastjetDataBase*)p);
   }
   static void destruct_fastjetInterfacecLcLfastjetDataBase(void *p) {
      typedef ::fastjetInterface::fastjetDataBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::fastjetInterface::fastjetDataBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_fastjetInterfacecLcLfastjetData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::fastjetInterface::fastjetData : new ::fastjetInterface::fastjetData;
   }
   static void *newArray_fastjetInterfacecLcLfastjetData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::fastjetInterface::fastjetData[nElements] : new ::fastjetInterface::fastjetData[nElements];
   }
   // Wrapper around operator delete
   static void delete_fastjetInterfacecLcLfastjetData(void *p) {
      delete ((::fastjetInterface::fastjetData*)p);
   }
   static void deleteArray_fastjetInterfacecLcLfastjetData(void *p) {
      delete [] ((::fastjetInterface::fastjetData*)p);
   }
   static void destruct_fastjetInterfacecLcLfastjetData(void *p) {
      typedef ::fastjetInterface::fastjetData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::fastjetInterface::fastjetData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimSiPMData : new ::DRsimInterface::DRsimSiPMData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimSiPMData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimSiPMData[nElements] : new ::DRsimInterface::DRsimSiPMData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      delete ((::DRsimInterface::DRsimSiPMData*)p);
   }
   static void deleteArray_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      delete [] ((::DRsimInterface::DRsimSiPMData*)p);
   }
   static void destruct_DRsimInterfacecLcLDRsimSiPMData(void *p) {
      typedef ::DRsimInterface::DRsimSiPMData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimSiPMData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimTowerData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimTowerData : new ::DRsimInterface::DRsimTowerData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimTowerData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimTowerData[nElements] : new ::DRsimInterface::DRsimTowerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimTowerData(void *p) {
      delete ((::DRsimInterface::DRsimTowerData*)p);
   }
   static void deleteArray_DRsimInterfacecLcLDRsimTowerData(void *p) {
      delete [] ((::DRsimInterface::DRsimTowerData*)p);
   }
   static void destruct_DRsimInterfacecLcLDRsimTowerData(void *p) {
      typedef ::DRsimInterface::DRsimTowerData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimTowerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimEdepData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimEdepData : new ::DRsimInterface::DRsimEdepData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimEdepData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimEdepData[nElements] : new ::DRsimInterface::DRsimEdepData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimEdepData(void *p) {
      delete ((::DRsimInterface::DRsimEdepData*)p);
   }
   static void deleteArray_DRsimInterfacecLcLDRsimEdepData(void *p) {
      delete [] ((::DRsimInterface::DRsimEdepData*)p);
   }
   static void destruct_DRsimInterfacecLcLDRsimEdepData(void *p) {
      typedef ::DRsimInterface::DRsimEdepData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimEdepData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimLeakageData : new ::DRsimInterface::DRsimLeakageData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimLeakageData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimLeakageData[nElements] : new ::DRsimInterface::DRsimLeakageData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      delete ((::DRsimInterface::DRsimLeakageData*)p);
   }
   static void deleteArray_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      delete [] ((::DRsimInterface::DRsimLeakageData*)p);
   }
   static void destruct_DRsimInterfacecLcLDRsimLeakageData(void *p) {
      typedef ::DRsimInterface::DRsimLeakageData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimLeakageData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimGenData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimGenData : new ::DRsimInterface::DRsimGenData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimGenData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimGenData[nElements] : new ::DRsimInterface::DRsimGenData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimGenData(void *p) {
      delete ((::DRsimInterface::DRsimGenData*)p);
   }
   static void deleteArray_DRsimInterfacecLcLDRsimGenData(void *p) {
      delete [] ((::DRsimInterface::DRsimGenData*)p);
   }
   static void destruct_DRsimInterfacecLcLDRsimGenData(void *p) {
      typedef ::DRsimInterface::DRsimGenData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimGenData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DRsimInterfacecLcLDRsimEventData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimEventData : new ::DRsimInterface::DRsimEventData;
   }
   static void *newArray_DRsimInterfacecLcLDRsimEventData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DRsimInterface::DRsimEventData[nElements] : new ::DRsimInterface::DRsimEventData[nElements];
   }
   // Wrapper around operator delete
   static void delete_DRsimInterfacecLcLDRsimEventData(void *p) {
      delete ((::DRsimInterface::DRsimEventData*)p);
   }
   static void deleteArray_DRsimInterfacecLcLDRsimEventData(void *p) {
      delete [] ((::DRsimInterface::DRsimEventData*)p);
   }
   static void destruct_DRsimInterfacecLcLDRsimEventData(void *p) {
      typedef ::DRsimInterface::DRsimEventData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DRsimInterface::DRsimEventData

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoInterfacecLcLRecoFiberData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RecoInterface::RecoFiberData : new ::RecoInterface::RecoFiberData;
   }
   static void *newArray_RecoInterfacecLcLRecoFiberData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RecoInterface::RecoFiberData[nElements] : new ::RecoInterface::RecoFiberData[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoInterfacecLcLRecoFiberData(void *p) {
      delete ((::RecoInterface::RecoFiberData*)p);
   }
   static void deleteArray_RecoInterfacecLcLRecoFiberData(void *p) {
      delete [] ((::RecoInterface::RecoFiberData*)p);
   }
   static void destruct_RecoInterfacecLcLRecoFiberData(void *p) {
      typedef ::RecoInterface::RecoFiberData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoInterface::RecoFiberData

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoInterfacecLcLRecoTowerData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RecoInterface::RecoTowerData : new ::RecoInterface::RecoTowerData;
   }
   static void *newArray_RecoInterfacecLcLRecoTowerData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RecoInterface::RecoTowerData[nElements] : new ::RecoInterface::RecoTowerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoInterfacecLcLRecoTowerData(void *p) {
      delete ((::RecoInterface::RecoTowerData*)p);
   }
   static void deleteArray_RecoInterfacecLcLRecoTowerData(void *p) {
      delete [] ((::RecoInterface::RecoTowerData*)p);
   }
   static void destruct_RecoInterfacecLcLRecoTowerData(void *p) {
      typedef ::RecoInterface::RecoTowerData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoInterface::RecoTowerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoInterfacecLcLRecoEventData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RecoInterface::RecoEventData : new ::RecoInterface::RecoEventData;
   }
   static void *newArray_RecoInterfacecLcLRecoEventData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RecoInterface::RecoEventData[nElements] : new ::RecoInterface::RecoEventData[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoInterfacecLcLRecoEventData(void *p) {
      delete ((::RecoInterface::RecoEventData*)p);
   }
   static void deleteArray_RecoInterfacecLcLRecoEventData(void *p) {
      delete [] ((::RecoInterface::RecoEventData*)p);
   }
   static void destruct_RecoInterfacecLcLRecoEventData(void *p) {
      typedef ::RecoInterface::RecoEventData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoInterface::RecoEventData

namespace ROOT {
   static TClass *vectorlEfastjetInterfacecLcLfastjetDataBasegR_Dictionary();
   static void vectorlEfastjetInterfacecLcLfastjetDataBasegR_TClassManip(TClass*);
   static void *new_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p = 0);
   static void *newArray_vectorlEfastjetInterfacecLcLfastjetDataBasegR(Long_t size, void *p);
   static void delete_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p);
   static void deleteArray_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p);
   static void destruct_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<fastjetInterface::fastjetDataBase>*)
   {
      vector<fastjetInterface::fastjetDataBase> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<fastjetInterface::fastjetDataBase>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<fastjetInterface::fastjetDataBase>", -2, "vector", 339,
                  typeid(vector<fastjetInterface::fastjetDataBase>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfastjetInterfacecLcLfastjetDataBasegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<fastjetInterface::fastjetDataBase>) );
      instance.SetNew(&new_vectorlEfastjetInterfacecLcLfastjetDataBasegR);
      instance.SetNewArray(&newArray_vectorlEfastjetInterfacecLcLfastjetDataBasegR);
      instance.SetDelete(&delete_vectorlEfastjetInterfacecLcLfastjetDataBasegR);
      instance.SetDeleteArray(&deleteArray_vectorlEfastjetInterfacecLcLfastjetDataBasegR);
      instance.SetDestructor(&destruct_vectorlEfastjetInterfacecLcLfastjetDataBasegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<fastjetInterface::fastjetDataBase> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<fastjetInterface::fastjetDataBase>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfastjetInterfacecLcLfastjetDataBasegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<fastjetInterface::fastjetDataBase>*)0x0)->GetClass();
      vectorlEfastjetInterfacecLcLfastjetDataBasegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfastjetInterfacecLcLfastjetDataBasegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<fastjetInterface::fastjetDataBase> : new vector<fastjetInterface::fastjetDataBase>;
   }
   static void *newArray_vectorlEfastjetInterfacecLcLfastjetDataBasegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<fastjetInterface::fastjetDataBase>[nElements] : new vector<fastjetInterface::fastjetDataBase>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p) {
      delete ((vector<fastjetInterface::fastjetDataBase>*)p);
   }
   static void deleteArray_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p) {
      delete [] ((vector<fastjetInterface::fastjetDataBase>*)p);
   }
   static void destruct_vectorlEfastjetInterfacecLcLfastjetDataBasegR(void *p) {
      typedef vector<fastjetInterface::fastjetDataBase> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<fastjetInterface::fastjetDataBase>

namespace ROOT {
   static TClass *vectorlEfastjetInterfacecLcLfastjetDatagR_Dictionary();
   static void vectorlEfastjetInterfacecLcLfastjetDatagR_TClassManip(TClass*);
   static void *new_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p = 0);
   static void *newArray_vectorlEfastjetInterfacecLcLfastjetDatagR(Long_t size, void *p);
   static void delete_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p);
   static void deleteArray_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p);
   static void destruct_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<fastjetInterface::fastjetData>*)
   {
      vector<fastjetInterface::fastjetData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<fastjetInterface::fastjetData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<fastjetInterface::fastjetData>", -2, "vector", 339,
                  typeid(vector<fastjetInterface::fastjetData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfastjetInterfacecLcLfastjetDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<fastjetInterface::fastjetData>) );
      instance.SetNew(&new_vectorlEfastjetInterfacecLcLfastjetDatagR);
      instance.SetNewArray(&newArray_vectorlEfastjetInterfacecLcLfastjetDatagR);
      instance.SetDelete(&delete_vectorlEfastjetInterfacecLcLfastjetDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEfastjetInterfacecLcLfastjetDatagR);
      instance.SetDestructor(&destruct_vectorlEfastjetInterfacecLcLfastjetDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<fastjetInterface::fastjetData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<fastjetInterface::fastjetData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfastjetInterfacecLcLfastjetDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<fastjetInterface::fastjetData>*)0x0)->GetClass();
      vectorlEfastjetInterfacecLcLfastjetDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfastjetInterfacecLcLfastjetDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<fastjetInterface::fastjetData> : new vector<fastjetInterface::fastjetData>;
   }
   static void *newArray_vectorlEfastjetInterfacecLcLfastjetDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<fastjetInterface::fastjetData>[nElements] : new vector<fastjetInterface::fastjetData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p) {
      delete ((vector<fastjetInterface::fastjetData>*)p);
   }
   static void deleteArray_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p) {
      delete [] ((vector<fastjetInterface::fastjetData>*)p);
   }
   static void destruct_vectorlEfastjetInterfacecLcLfastjetDatagR(void *p) {
      typedef vector<fastjetInterface::fastjetData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<fastjetInterface::fastjetData>

namespace ROOT {
   static TClass *vectorlERecoInterfacecLcLRecoTowerDatagR_Dictionary();
   static void vectorlERecoInterfacecLcLRecoTowerDatagR_TClassManip(TClass*);
   static void *new_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p = 0);
   static void *newArray_vectorlERecoInterfacecLcLRecoTowerDatagR(Long_t size, void *p);
   static void delete_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p);
   static void deleteArray_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p);
   static void destruct_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RecoInterface::RecoTowerData>*)
   {
      vector<RecoInterface::RecoTowerData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RecoInterface::RecoTowerData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RecoInterface::RecoTowerData>", -2, "vector", 339,
                  typeid(vector<RecoInterface::RecoTowerData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERecoInterfacecLcLRecoTowerDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RecoInterface::RecoTowerData>) );
      instance.SetNew(&new_vectorlERecoInterfacecLcLRecoTowerDatagR);
      instance.SetNewArray(&newArray_vectorlERecoInterfacecLcLRecoTowerDatagR);
      instance.SetDelete(&delete_vectorlERecoInterfacecLcLRecoTowerDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlERecoInterfacecLcLRecoTowerDatagR);
      instance.SetDestructor(&destruct_vectorlERecoInterfacecLcLRecoTowerDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RecoInterface::RecoTowerData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RecoInterface::RecoTowerData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERecoInterfacecLcLRecoTowerDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RecoInterface::RecoTowerData>*)0x0)->GetClass();
      vectorlERecoInterfacecLcLRecoTowerDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERecoInterfacecLcLRecoTowerDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoInterface::RecoTowerData> : new vector<RecoInterface::RecoTowerData>;
   }
   static void *newArray_vectorlERecoInterfacecLcLRecoTowerDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoInterface::RecoTowerData>[nElements] : new vector<RecoInterface::RecoTowerData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p) {
      delete ((vector<RecoInterface::RecoTowerData>*)p);
   }
   static void deleteArray_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p) {
      delete [] ((vector<RecoInterface::RecoTowerData>*)p);
   }
   static void destruct_vectorlERecoInterfacecLcLRecoTowerDatagR(void *p) {
      typedef vector<RecoInterface::RecoTowerData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RecoInterface::RecoTowerData>

namespace ROOT {
   static TClass *vectorlERecoInterfacecLcLRecoFiberDatagR_Dictionary();
   static void vectorlERecoInterfacecLcLRecoFiberDatagR_TClassManip(TClass*);
   static void *new_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p = 0);
   static void *newArray_vectorlERecoInterfacecLcLRecoFiberDatagR(Long_t size, void *p);
   static void delete_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p);
   static void deleteArray_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p);
   static void destruct_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RecoInterface::RecoFiberData>*)
   {
      vector<RecoInterface::RecoFiberData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RecoInterface::RecoFiberData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RecoInterface::RecoFiberData>", -2, "vector", 339,
                  typeid(vector<RecoInterface::RecoFiberData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERecoInterfacecLcLRecoFiberDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RecoInterface::RecoFiberData>) );
      instance.SetNew(&new_vectorlERecoInterfacecLcLRecoFiberDatagR);
      instance.SetNewArray(&newArray_vectorlERecoInterfacecLcLRecoFiberDatagR);
      instance.SetDelete(&delete_vectorlERecoInterfacecLcLRecoFiberDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlERecoInterfacecLcLRecoFiberDatagR);
      instance.SetDestructor(&destruct_vectorlERecoInterfacecLcLRecoFiberDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RecoInterface::RecoFiberData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RecoInterface::RecoFiberData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERecoInterfacecLcLRecoFiberDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RecoInterface::RecoFiberData>*)0x0)->GetClass();
      vectorlERecoInterfacecLcLRecoFiberDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERecoInterfacecLcLRecoFiberDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoInterface::RecoFiberData> : new vector<RecoInterface::RecoFiberData>;
   }
   static void *newArray_vectorlERecoInterfacecLcLRecoFiberDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoInterface::RecoFiberData>[nElements] : new vector<RecoInterface::RecoFiberData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p) {
      delete ((vector<RecoInterface::RecoFiberData>*)p);
   }
   static void deleteArray_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p) {
      delete [] ((vector<RecoInterface::RecoFiberData>*)p);
   }
   static void destruct_vectorlERecoInterfacecLcLRecoFiberDatagR(void *p) {
      typedef vector<RecoInterface::RecoFiberData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RecoInterface::RecoFiberData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimTowerDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimTowerDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p = 0);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimTowerData>*)
   {
      vector<DRsimInterface::DRsimTowerData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimTowerData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimTowerData>", -2, "vector", 339,
                  typeid(vector<DRsimInterface::DRsimTowerData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimTowerDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimTowerData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimTowerDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimTowerData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimTowerData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimTowerDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimTowerData>*)0x0)->GetClass();
      vectorlEDRsimInterfacecLcLDRsimTowerDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimTowerDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimTowerData> : new vector<DRsimInterface::DRsimTowerData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimTowerData>[nElements] : new vector<DRsimInterface::DRsimTowerData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      delete ((vector<DRsimInterface::DRsimTowerData>*)p);
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      delete [] ((vector<DRsimInterface::DRsimTowerData>*)p);
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimTowerDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimTowerData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimTowerData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p = 0);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimSiPMData>*)
   {
      vector<DRsimInterface::DRsimSiPMData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimSiPMData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimSiPMData>", -2, "vector", 339,
                  typeid(vector<DRsimInterface::DRsimSiPMData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimSiPMData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimSiPMData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimSiPMData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimSiPMData>*)0x0)->GetClass();
      vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimSiPMDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimSiPMData> : new vector<DRsimInterface::DRsimSiPMData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimSiPMData>[nElements] : new vector<DRsimInterface::DRsimSiPMData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      delete ((vector<DRsimInterface::DRsimSiPMData>*)p);
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      delete [] ((vector<DRsimInterface::DRsimSiPMData>*)p);
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimSiPMDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimSiPMData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimSiPMData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimPhotongR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimPhotongR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p = 0);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimPhotongR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimPhoton>*)
   {
      vector<DRsimInterface::DRsimPhoton> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimPhoton>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimPhoton>", -2, "vector", 339,
                  typeid(vector<DRsimInterface::DRsimPhoton>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimPhotongR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimPhoton>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimPhotongR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimPhotongR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimPhotongR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimPhotongR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimPhotongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimPhoton> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimPhoton>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimPhotongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimPhoton>*)0x0)->GetClass();
      vectorlEDRsimInterfacecLcLDRsimPhotongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimPhotongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimPhoton> : new vector<DRsimInterface::DRsimPhoton>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimPhotongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimPhoton>[nElements] : new vector<DRsimInterface::DRsimPhoton>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p) {
      delete ((vector<DRsimInterface::DRsimPhoton>*)p);
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p) {
      delete [] ((vector<DRsimInterface::DRsimPhoton>*)p);
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimPhotongR(void *p) {
      typedef vector<DRsimInterface::DRsimPhoton> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimPhoton>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p = 0);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimLeakageData>*)
   {
      vector<DRsimInterface::DRsimLeakageData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimLeakageData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimLeakageData>", -2, "vector", 339,
                  typeid(vector<DRsimInterface::DRsimLeakageData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimLeakageData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimLeakageData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimLeakageData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimLeakageData>*)0x0)->GetClass();
      vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimLeakageDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimLeakageData> : new vector<DRsimInterface::DRsimLeakageData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimLeakageData>[nElements] : new vector<DRsimInterface::DRsimLeakageData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      delete ((vector<DRsimInterface::DRsimLeakageData>*)p);
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      delete [] ((vector<DRsimInterface::DRsimLeakageData>*)p);
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimLeakageDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimLeakageData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimLeakageData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimGenDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimGenDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p = 0);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimGenData>*)
   {
      vector<DRsimInterface::DRsimGenData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimGenData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimGenData>", -2, "vector", 339,
                  typeid(vector<DRsimInterface::DRsimGenData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimGenDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimGenData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimGenDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimGenData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimGenData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimGenDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimGenData>*)0x0)->GetClass();
      vectorlEDRsimInterfacecLcLDRsimGenDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimGenDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimGenData> : new vector<DRsimInterface::DRsimGenData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimGenData>[nElements] : new vector<DRsimInterface::DRsimGenData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      delete ((vector<DRsimInterface::DRsimGenData>*)p);
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      delete [] ((vector<DRsimInterface::DRsimGenData>*)p);
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimGenDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimGenData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimGenData>

namespace ROOT {
   static TClass *vectorlEDRsimInterfacecLcLDRsimEdepDatagR_Dictionary();
   static void vectorlEDRsimInterfacecLcLDRsimEdepDatagR_TClassManip(TClass*);
   static void *new_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p = 0);
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(Long_t size, void *p);
   static void delete_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p);
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p);
   static void destruct_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DRsimInterface::DRsimEdepData>*)
   {
      vector<DRsimInterface::DRsimEdepData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DRsimInterface::DRsimEdepData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DRsimInterface::DRsimEdepData>", -2, "vector", 339,
                  typeid(vector<DRsimInterface::DRsimEdepData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDRsimInterfacecLcLDRsimEdepDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DRsimInterface::DRsimEdepData>) );
      instance.SetNew(&new_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetNewArray(&newArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetDelete(&delete_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.SetDestructor(&destruct_vectorlEDRsimInterfacecLcLDRsimEdepDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DRsimInterface::DRsimEdepData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimEdepData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDRsimInterfacecLcLDRsimEdepDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DRsimInterface::DRsimEdepData>*)0x0)->GetClass();
      vectorlEDRsimInterfacecLcLDRsimEdepDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDRsimInterfacecLcLDRsimEdepDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimEdepData> : new vector<DRsimInterface::DRsimEdepData>;
   }
   static void *newArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DRsimInterface::DRsimEdepData>[nElements] : new vector<DRsimInterface::DRsimEdepData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      delete ((vector<DRsimInterface::DRsimEdepData>*)p);
   }
   static void deleteArray_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      delete [] ((vector<DRsimInterface::DRsimEdepData>*)p);
   }
   static void destruct_vectorlEDRsimInterfacecLcLDRsimEdepDatagR(void *p) {
      typedef vector<DRsimInterface::DRsimEdepData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DRsimInterface::DRsimEdepData>

namespace ROOT {
   static TClass *maplEpairlEfloatcOfloatgRcOintgR_Dictionary();
   static void maplEpairlEfloatcOfloatgRcOintgR_TClassManip(TClass*);
   static void *new_maplEpairlEfloatcOfloatgRcOintgR(void *p = 0);
   static void *newArray_maplEpairlEfloatcOfloatgRcOintgR(Long_t size, void *p);
   static void delete_maplEpairlEfloatcOfloatgRcOintgR(void *p);
   static void deleteArray_maplEpairlEfloatcOfloatgRcOintgR(void *p);
   static void destruct_maplEpairlEfloatcOfloatgRcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<pair<float,float>,int>*)
   {
      map<pair<float,float>,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<pair<float,float>,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<pair<float,float>,int>", -2, "map", 100,
                  typeid(map<pair<float,float>,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEpairlEfloatcOfloatgRcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<pair<float,float>,int>) );
      instance.SetNew(&new_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetNewArray(&newArray_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetDelete(&delete_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEpairlEfloatcOfloatgRcOintgR);
      instance.SetDestructor(&destruct_maplEpairlEfloatcOfloatgRcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<pair<float,float>,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<pair<float,float>,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEpairlEfloatcOfloatgRcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<pair<float,float>,int>*)0x0)->GetClass();
      maplEpairlEfloatcOfloatgRcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEpairlEfloatcOfloatgRcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<float,float>,int> : new map<pair<float,float>,int>;
   }
   static void *newArray_maplEpairlEfloatcOfloatgRcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<pair<float,float>,int>[nElements] : new map<pair<float,float>,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      delete ((map<pair<float,float>,int>*)p);
   }
   static void deleteArray_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      delete [] ((map<pair<float,float>,int>*)p);
   }
   static void destruct_maplEpairlEfloatcOfloatgRcOintgR(void *p) {
      typedef map<pair<float,float>,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<pair<float,float>,int>

namespace {
  void TriggerDictionaryInitialization_librootIO_Impl() {
    static const char* headers[] = {
"/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/DRsimInterface.h",
"/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/RecoInterface.h",
"/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/RootInterface.h",
"/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/fastjetInterface.h",
0
    };
    static const char* includePaths[] = {
"/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include",
"/cvmfs/sft.cern.ch/lcg/releases/LCG_96b/fastjet/3.3.2/x86_64-centos7-gcc8-opt/include",
"/cvmfs/sft.cern.ch/lcg/releases/LCG_96b/ROOT/6.18.04/x86_64-centos7-gcc8-opt/include",
"/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO",
"/cvmfs/sft.cern.ch/lcg/releases/ROOT/6.18.04-c767d/x86_64-centos7-gcc8-opt/include",
"/d0/scratch/eoyun/DRC_calib/23.02.15/DRC_generic/build/rootIO/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "librootIO dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{template <typename ..._Elements> class __attribute__((annotate("$clingAutoload$type_traits")))  __attribute__((annotate("$clingAutoload$new")))  tuple;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "librootIO dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/DRsimInterface.h"
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/RecoInterface.h"
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/RootInterface.h"
#include "/u/user/eoyun/scratch/DRC_calib/23.02.15/DRC_generic/rootIO/include/fastjetInterface.h"
#include "fastjetInterface.h"
#include <vector>

#if defined(__CLING__) || defined(__CINT__)
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ struct fastjetInterface::fastjetData+;
#pragma link C++ struct fastjetInterface::fastjetDataBase+;
#pragma link C++ class std::vector<fastjetInterface::fastjetData>+;
#pragma link C++ class std::vector<fastjetInterface::fastjetDataBase>+;

#pragma link C++ class DRsimInterface::threeVector+;
#pragma link C++ struct DRsimInterface::DRsimSiPMData+;
#pragma link C++ struct DRsimInterface::DRsimTowerData+;
#pragma link C++ struct DRsimInterface::DRsimEdepData+;
#pragma link C++ struct DRsimInterface::DRsimLeakageData+;
#pragma link C++ struct DRsimInterface::DRsimGenData+;
#pragma link C++ struct DRsimInterface::DRsimEventData+;

#pragma link C++ struct RecoInterface::RecoFiberData+;
#pragma link C++ struct RecoInterface::RecoTowerData+;
#pragma link C++ struct RecoInterface::RecoEventData+;

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"DRsimInterface", payloadCode, "@",
"DRsimInterface::DRsimEdepData", payloadCode, "@",
"DRsimInterface::DRsimEventData", payloadCode, "@",
"DRsimInterface::DRsimGenData", payloadCode, "@",
"DRsimInterface::DRsimLeakageData", payloadCode, "@",
"DRsimInterface::DRsimSiPMData", payloadCode, "@",
"DRsimInterface::DRsimTowerData", payloadCode, "@",
"DRsimInterface::threeVector", payloadCode, "@",
"RecoInterface", payloadCode, "@",
"RecoInterface::RecoEventData", payloadCode, "@",
"RecoInterface::RecoFiberData", payloadCode, "@",
"RecoInterface::RecoTowerData", payloadCode, "@",
"fastjetInterface", payloadCode, "@",
"fastjetInterface::fastjetData", payloadCode, "@",
"fastjetInterface::fastjetDataBase", payloadCode, "@",
"tuple<float,float,float>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("librootIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_librootIO_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_librootIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_librootIO() {
  TriggerDictionaryInitialization_librootIO_Impl();
}
