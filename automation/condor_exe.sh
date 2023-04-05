#!/bin/sh

export HOMEG4=`pwd`

export PATH=/cvmfs/sft.cern.ch/lcg/contrib/CMake/3.14.2/Linux-x86_64/bin:$PATH
source /cvmfs/sft.cern.ch/lcg/contrib/gcc/8/x86_64-centos7/setup.sh
source /cvmfs/sft.cern.ch/lcg/releases/LCG_97a_FCC_1/Boost/1.72.0/x86_64-centos7-gcc8-opt/Boost-env.sh
source /cvmfs/sft.cern.ch/lcg/releases/LCG_97a_FCC_1/ROOT/v6.20.06/x86_64-centos7-gcc8-opt/ROOT-env.sh
source /cvmfs/geant4.cern.ch/geant4/10.5.p01/x86_64-centos7-gcc8-opt-MT/CMake-setup.sh

./CBDsim macro $1
