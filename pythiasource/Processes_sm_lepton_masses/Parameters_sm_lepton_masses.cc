//==========================================================================
// This file has been automatically generated for Pythia 8 by
// MadGraph5_aMC@NLO v. 2.1.2, 2014-07-03
// By the MadGraph5_aMC@NLO Development Team
// Visit launchpad.net/madgraph5 and amcatnlo.web.cern.ch
//==========================================================================

#include <iostream> 
#include "Parameters_sm_lepton_masses.h"
#include "Pythia8/PythiaStdlib.h"

namespace Pythia8 
{

// Initialize static instance
Parameters_sm_lepton_masses * Parameters_sm_lepton_masses::instance = 0; 

// Function to get static instance - only one instance per program
Parameters_sm_lepton_masses * Parameters_sm_lepton_masses::getInstance()
{
  if (instance == 0)
    instance = new Parameters_sm_lepton_masses(); 

  return instance; 
}

void Parameters_sm_lepton_masses::setIndependentParameters(ParticleData * & pd,
    Couplings * & csm, SusyLesHouches * & slhaPtr)
{
  mdl_WTau = pd->mWidth(15); 
  mdl_WH = pd->mWidth(25); 
  mdl_WT = pd->mWidth(6); 
  mdl_WW = pd->mWidth(24); 
  mdl_WZ = pd->mWidth(23); 
  mdl_MTA = pd->m0(15); 
  mdl_MM = pd->m0(13); 
  mdl_Me = pd->m0(11); 
  mdl_MH = pd->m0(25); 
  mdl_MB = pd->m0(5); 
  mdl_MT = pd->m0(6); 
  mdl_MZ = pd->m0(23); 
  mdl_ymtau = pd->mRun(15, pd->m0(24)); 
  mdl_ymm = pd->mRun(13, pd->m0(24)); 
  mdl_yme = pd->mRun(11, pd->m0(24)); 
  mdl_ymt = pd->mRun(6, pd->m0(24)); 
  mdl_ymb = pd->mRun(5, pd->m0(24)); 
  mdl_Gf = M_PI * csm->alphaEM(pow(pd->m0(23), 2)) * pow(pd->m0(23),
      2)/(sqrt(2.) * pow(pd->m0(24), 2) * (pow(pd->m0(23), 2) - pow(pd->m0(24),
      2)));
  aEWM1 = 1./csm->alphaEM(pow(pd->m0(23), 2)); 
  mdl_conjg__CKM3x3 = 1.; 
  mdl_CKM3x3 = 1.; 
  mdl_conjg__CKM1x1 = 1.; 
  ZERO = 0.; 
  mdl_complexi = std::complex<double> (0., 1.); 
  mdl_MZ__exp__2 = pow(mdl_MZ, 2.); 
  mdl_MZ__exp__4 = pow(mdl_MZ, 4.); 
  mdl_sqrt__2 = sqrt(2.); 
  mdl_MH__exp__2 = pow(mdl_MH, 2.); 
  mdl_aEW = 1./aEWM1; 
  mdl_MW = sqrt(mdl_MZ__exp__2/2. + sqrt(mdl_MZ__exp__4/4. - (mdl_aEW * M_PI *
      mdl_MZ__exp__2)/(mdl_Gf * mdl_sqrt__2)));
  mdl_sqrt__aEW = sqrt(mdl_aEW); 
  mdl_ee = 2. * mdl_sqrt__aEW * sqrt(M_PI); 
  mdl_MW__exp__2 = pow(mdl_MW, 2.); 
  mdl_sw2 = 1. - mdl_MW__exp__2/mdl_MZ__exp__2; 
  mdl_cw = sqrt(1. - mdl_sw2); 
  mdl_sqrt__sw2 = sqrt(mdl_sw2); 
  mdl_sw = mdl_sqrt__sw2; 
  mdl_g1 = mdl_ee/mdl_cw; 
  mdl_gw = mdl_ee/mdl_sw; 
  mdl_vev = (2. * mdl_MW * mdl_sw)/mdl_ee; 
  mdl_vev__exp__2 = pow(mdl_vev, 2.); 
  mdl_lam = mdl_MH__exp__2/(2. * mdl_vev__exp__2); 
  mdl_yb = (mdl_ymb * mdl_sqrt__2)/mdl_vev; 
  mdl_ye = (mdl_yme * mdl_sqrt__2)/mdl_vev; 
  mdl_ym = (mdl_ymm * mdl_sqrt__2)/mdl_vev; 
  mdl_yt = (mdl_ymt * mdl_sqrt__2)/mdl_vev; 
  mdl_ytau = (mdl_ymtau * mdl_sqrt__2)/mdl_vev; 
  mdl_muH = sqrt(mdl_lam * mdl_vev__exp__2); 
  mdl_I1x33 = mdl_yb * mdl_conjg__CKM3x3; 
  mdl_I2x33 = mdl_yt * mdl_conjg__CKM3x3; 
  mdl_I3x33 = mdl_CKM3x3 * mdl_yt; 
  mdl_I4x33 = mdl_CKM3x3 * mdl_yb; 
  mdl_ee__exp__2 = pow(mdl_ee, 2.); 
  mdl_sw__exp__2 = pow(mdl_sw, 2.); 
  mdl_cw__exp__2 = pow(mdl_cw, 2.); 
}
void Parameters_sm_lepton_masses::setIndependentCouplings()
{
  GC_1 = -(mdl_ee * mdl_complexi)/3.; 
  GC_2 = (2. * mdl_ee * mdl_complexi)/3.; 
  GC_3 = -(mdl_ee * mdl_complexi); 
  GC_4 = mdl_ee * mdl_complexi; 
  GC_5 = mdl_ee__exp__2 * mdl_complexi; 
  GC_6 = 2. * mdl_ee__exp__2 * mdl_complexi; 
  GC_7 = -mdl_ee__exp__2/(2. * mdl_cw); 
  GC_8 = (mdl_ee__exp__2 * mdl_complexi)/(2. * mdl_cw); 
  GC_9 = mdl_ee__exp__2/(2. * mdl_cw); 
  GC_15 = mdl_I1x33; 
  GC_21 = -mdl_I2x33; 
  GC_27 = mdl_I3x33; 
  GC_30 = -mdl_I4x33; 
  GC_31 = -2. * mdl_complexi * mdl_lam; 
  GC_32 = -4. * mdl_complexi * mdl_lam; 
  GC_33 = -6. * mdl_complexi * mdl_lam; 
  GC_34 = (mdl_ee__exp__2 * mdl_complexi)/(2. * mdl_sw__exp__2); 
  GC_35 = -((mdl_ee__exp__2 * mdl_complexi)/mdl_sw__exp__2); 
  GC_36 = (mdl_cw__exp__2 * mdl_ee__exp__2 * mdl_complexi)/mdl_sw__exp__2; 
  GC_37 = -mdl_ee/(2. * mdl_sw); 
  GC_38 = -(mdl_ee * mdl_complexi)/(2. * mdl_sw); 
  GC_39 = (mdl_ee * mdl_complexi)/(2. * mdl_sw); 
  GC_50 = -(mdl_cw * mdl_ee * mdl_complexi)/(2. * mdl_sw); 
  GC_51 = (mdl_cw * mdl_ee * mdl_complexi)/(2. * mdl_sw); 
  GC_52 = -((mdl_cw * mdl_ee * mdl_complexi)/mdl_sw); 
  GC_53 = (mdl_cw * mdl_ee * mdl_complexi)/mdl_sw; 
  GC_54 = -mdl_ee__exp__2/(2. * mdl_sw); 
  GC_55 = -(mdl_ee__exp__2 * mdl_complexi)/(2. * mdl_sw); 
  GC_56 = mdl_ee__exp__2/(2. * mdl_sw); 
  GC_57 = (-2. * mdl_cw * mdl_ee__exp__2 * mdl_complexi)/mdl_sw; 
  GC_58 = -(mdl_ee * mdl_complexi * mdl_sw)/(6. * mdl_cw); 
  GC_59 = (mdl_ee * mdl_complexi * mdl_sw)/(2. * mdl_cw); 
  GC_60 = -(mdl_cw * mdl_ee)/(2. * mdl_sw) - (mdl_ee * mdl_sw)/(2. * mdl_cw); 
  GC_61 = -(mdl_cw * mdl_ee * mdl_complexi)/(2. * mdl_sw) + (mdl_ee *
      mdl_complexi * mdl_sw)/(2. * mdl_cw);
  GC_62 = (mdl_cw * mdl_ee * mdl_complexi)/(2. * mdl_sw) + (mdl_ee *
      mdl_complexi * mdl_sw)/(2. * mdl_cw);
  GC_63 = (mdl_cw * mdl_ee__exp__2 * mdl_complexi)/mdl_sw - (mdl_ee__exp__2 *
      mdl_complexi * mdl_sw)/mdl_cw;
  GC_64 = -(mdl_ee__exp__2 * mdl_complexi) + (mdl_cw__exp__2 * mdl_ee__exp__2 *
      mdl_complexi)/(2. * mdl_sw__exp__2) + (mdl_ee__exp__2 * mdl_complexi *
      mdl_sw__exp__2)/(2. * mdl_cw__exp__2);
  GC_65 = mdl_ee__exp__2 * mdl_complexi + (mdl_cw__exp__2 * mdl_ee__exp__2 *
      mdl_complexi)/(2. * mdl_sw__exp__2) + (mdl_ee__exp__2 * mdl_complexi *
      mdl_sw__exp__2)/(2. * mdl_cw__exp__2);
  GC_66 = -(mdl_ee__exp__2 * mdl_vev)/(2. * mdl_cw); 
  GC_67 = (mdl_ee__exp__2 * mdl_vev)/(2. * mdl_cw); 
  GC_68 = -2. * mdl_complexi * mdl_lam * mdl_vev; 
  GC_69 = -6. * mdl_complexi * mdl_lam * mdl_vev; 
  GC_70 = -(mdl_ee__exp__2 * mdl_vev)/(4. * mdl_sw__exp__2); 
  GC_71 = -(mdl_ee__exp__2 * mdl_complexi * mdl_vev)/(4. * mdl_sw__exp__2); 
  GC_72 = (mdl_ee__exp__2 * mdl_complexi * mdl_vev)/(2. * mdl_sw__exp__2); 
  GC_73 = (mdl_ee__exp__2 * mdl_vev)/(4. * mdl_sw__exp__2); 
  GC_74 = -(mdl_ee__exp__2 * mdl_vev)/(2. * mdl_sw); 
  GC_75 = (mdl_ee__exp__2 * mdl_vev)/(2. * mdl_sw); 
  GC_76 = -(mdl_ee__exp__2 * mdl_vev)/(4. * mdl_cw) - (mdl_cw * mdl_ee__exp__2
      * mdl_vev)/(4. * mdl_sw__exp__2);
  GC_77 = (mdl_ee__exp__2 * mdl_vev)/(4. * mdl_cw) - (mdl_cw * mdl_ee__exp__2 *
      mdl_vev)/(4. * mdl_sw__exp__2);
  GC_78 = -(mdl_ee__exp__2 * mdl_vev)/(4. * mdl_cw) + (mdl_cw * mdl_ee__exp__2
      * mdl_vev)/(4. * mdl_sw__exp__2);
  GC_79 = (mdl_ee__exp__2 * mdl_vev)/(4. * mdl_cw) + (mdl_cw * mdl_ee__exp__2 *
      mdl_vev)/(4. * mdl_sw__exp__2);
  GC_80 = -(mdl_ee__exp__2 * mdl_complexi * mdl_vev)/2. - (mdl_cw__exp__2 *
      mdl_ee__exp__2 * mdl_complexi * mdl_vev)/(4. * mdl_sw__exp__2) -
      (mdl_ee__exp__2 * mdl_complexi * mdl_sw__exp__2 * mdl_vev)/(4. *
      mdl_cw__exp__2);
  GC_81 = mdl_ee__exp__2 * mdl_complexi * mdl_vev + (mdl_cw__exp__2 *
      mdl_ee__exp__2 * mdl_complexi * mdl_vev)/(2. * mdl_sw__exp__2) +
      (mdl_ee__exp__2 * mdl_complexi * mdl_sw__exp__2 * mdl_vev)/(2. *
      mdl_cw__exp__2);
  GC_82 = -(mdl_yb/mdl_sqrt__2); 
  GC_83 = -((mdl_complexi * mdl_yb)/mdl_sqrt__2); 
  GC_86 = -mdl_ye; 
  GC_87 = mdl_ye; 
  GC_88 = -(mdl_ye/mdl_sqrt__2); 
  GC_89 = -((mdl_complexi * mdl_ye)/mdl_sqrt__2); 
  GC_90 = -mdl_ym; 
  GC_91 = mdl_ym; 
  GC_92 = -(mdl_ym/mdl_sqrt__2); 
  GC_93 = -((mdl_complexi * mdl_ym)/mdl_sqrt__2); 
  GC_94 = -((mdl_complexi * mdl_yt)/mdl_sqrt__2); 
  GC_95 = mdl_yt/mdl_sqrt__2; 
  GC_96 = -mdl_ytau; 
  GC_97 = mdl_ytau; 
  GC_98 = -(mdl_ytau/mdl_sqrt__2); 
  GC_99 = -((mdl_complexi * mdl_ytau)/mdl_sqrt__2); 
  GC_100 = (mdl_ee * mdl_complexi * mdl_conjg__CKM1x1)/(mdl_sw * mdl_sqrt__2); 
}
void Parameters_sm_lepton_masses::setDependentParameters(ParticleData * & pd,
    Couplings * & csm, SusyLesHouches * & slhaPtr, double alpS)
{
  aS = alpS; 
  mdl_sqrt__aS = sqrt(aS); 
  G = 2. * mdl_sqrt__aS * sqrt(M_PI); 
  mdl_G__exp__2 = pow(G, 2.); 
}
void Parameters_sm_lepton_masses::setDependentCouplings()
{
  GC_12 = mdl_complexi * mdl_G__exp__2; 
  GC_11 = mdl_complexi * G; 
  GC_10 = -G; 
}

// Routines for printing out parameters
void Parameters_sm_lepton_masses::printIndependentParameters()
{
  cout <<  "sm_lepton_masses model parameters independent of event kinematics:"
      << endl;
  cout << setw(20) <<  "mdl_WTau " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_WTau << endl;
  cout << setw(20) <<  "mdl_WH " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_WH << endl;
  cout << setw(20) <<  "mdl_WT " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_WT << endl;
  cout << setw(20) <<  "mdl_WW " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_WW << endl;
  cout << setw(20) <<  "mdl_WZ " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_WZ << endl;
  cout << setw(20) <<  "mdl_MTA " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MTA << endl;
  cout << setw(20) <<  "mdl_MM " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MM << endl;
  cout << setw(20) <<  "mdl_Me " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_Me << endl;
  cout << setw(20) <<  "mdl_MH " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MH << endl;
  cout << setw(20) <<  "mdl_MB " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MB << endl;
  cout << setw(20) <<  "mdl_MT " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MT << endl;
  cout << setw(20) <<  "mdl_MZ " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MZ << endl;
  cout << setw(20) <<  "mdl_ymtau " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ymtau << endl;
  cout << setw(20) <<  "mdl_ymm " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ymm << endl;
  cout << setw(20) <<  "mdl_yme " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_yme << endl;
  cout << setw(20) <<  "mdl_ymt " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ymt << endl;
  cout << setw(20) <<  "mdl_ymb " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ymb << endl;
  cout << setw(20) <<  "mdl_Gf " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_Gf << endl;
  cout << setw(20) <<  "aEWM1 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << aEWM1 << endl;
  cout << setw(20) <<  "mdl_conjg__CKM3x3 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_conjg__CKM3x3 << endl;
  cout << setw(20) <<  "mdl_CKM3x3 " <<  "= " << setiosflags(ios::scientific)
      << setw(10) << mdl_CKM3x3 << endl;
  cout << setw(20) <<  "mdl_conjg__CKM1x1 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_conjg__CKM1x1 << endl;
  cout << setw(20) <<  "ZERO " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << ZERO << endl;
  cout << setw(20) <<  "mdl_complexi " <<  "= " << setiosflags(ios::scientific)
      << setw(10) << mdl_complexi << endl;
  cout << setw(20) <<  "mdl_MZ__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_MZ__exp__2 << endl;
  cout << setw(20) <<  "mdl_MZ__exp__4 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_MZ__exp__4 << endl;
  cout << setw(20) <<  "mdl_sqrt__2 " <<  "= " << setiosflags(ios::scientific)
      << setw(10) << mdl_sqrt__2 << endl;
  cout << setw(20) <<  "mdl_MH__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_MH__exp__2 << endl;
  cout << setw(20) <<  "mdl_aEW " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_aEW << endl;
  cout << setw(20) <<  "mdl_MW " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_MW << endl;
  cout << setw(20) <<  "mdl_sqrt__aEW " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_sqrt__aEW << endl;
  cout << setw(20) <<  "mdl_ee " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ee << endl;
  cout << setw(20) <<  "mdl_MW__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_MW__exp__2 << endl;
  cout << setw(20) <<  "mdl_sw2 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_sw2 << endl;
  cout << setw(20) <<  "mdl_cw " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_cw << endl;
  cout << setw(20) <<  "mdl_sqrt__sw2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_sqrt__sw2 << endl;
  cout << setw(20) <<  "mdl_sw " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_sw << endl;
  cout << setw(20) <<  "mdl_g1 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_g1 << endl;
  cout << setw(20) <<  "mdl_gw " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_gw << endl;
  cout << setw(20) <<  "mdl_vev " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_vev << endl;
  cout << setw(20) <<  "mdl_vev__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_vev__exp__2 << endl;
  cout << setw(20) <<  "mdl_lam " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_lam << endl;
  cout << setw(20) <<  "mdl_yb " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_yb << endl;
  cout << setw(20) <<  "mdl_ye " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ye << endl;
  cout << setw(20) <<  "mdl_ym " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ym << endl;
  cout << setw(20) <<  "mdl_yt " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_yt << endl;
  cout << setw(20) <<  "mdl_ytau " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_ytau << endl;
  cout << setw(20) <<  "mdl_muH " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_muH << endl;
  cout << setw(20) <<  "mdl_I1x33 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_I1x33 << endl;
  cout << setw(20) <<  "mdl_I2x33 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_I2x33 << endl;
  cout << setw(20) <<  "mdl_I3x33 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_I3x33 << endl;
  cout << setw(20) <<  "mdl_I4x33 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << mdl_I4x33 << endl;
  cout << setw(20) <<  "mdl_ee__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_ee__exp__2 << endl;
  cout << setw(20) <<  "mdl_sw__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_sw__exp__2 << endl;
  cout << setw(20) <<  "mdl_cw__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_cw__exp__2 << endl;
}
void Parameters_sm_lepton_masses::printIndependentCouplings()
{
  cout <<  "sm_lepton_masses model couplings independent of event kinematics:"
      << endl;
  cout << setw(20) <<  "GC_1 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_1 << endl;
  cout << setw(20) <<  "GC_2 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_2 << endl;
  cout << setw(20) <<  "GC_3 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_3 << endl;
  cout << setw(20) <<  "GC_4 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_4 << endl;
  cout << setw(20) <<  "GC_5 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_5 << endl;
  cout << setw(20) <<  "GC_6 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_6 << endl;
  cout << setw(20) <<  "GC_7 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_7 << endl;
  cout << setw(20) <<  "GC_8 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_8 << endl;
  cout << setw(20) <<  "GC_9 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_9 << endl;
  cout << setw(20) <<  "GC_15 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_15 << endl;
  cout << setw(20) <<  "GC_21 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_21 << endl;
  cout << setw(20) <<  "GC_27 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_27 << endl;
  cout << setw(20) <<  "GC_30 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_30 << endl;
  cout << setw(20) <<  "GC_31 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_31 << endl;
  cout << setw(20) <<  "GC_32 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_32 << endl;
  cout << setw(20) <<  "GC_33 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_33 << endl;
  cout << setw(20) <<  "GC_34 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_34 << endl;
  cout << setw(20) <<  "GC_35 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_35 << endl;
  cout << setw(20) <<  "GC_36 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_36 << endl;
  cout << setw(20) <<  "GC_37 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_37 << endl;
  cout << setw(20) <<  "GC_38 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_38 << endl;
  cout << setw(20) <<  "GC_39 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_39 << endl;
  cout << setw(20) <<  "GC_50 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_50 << endl;
  cout << setw(20) <<  "GC_51 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_51 << endl;
  cout << setw(20) <<  "GC_52 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_52 << endl;
  cout << setw(20) <<  "GC_53 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_53 << endl;
  cout << setw(20) <<  "GC_54 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_54 << endl;
  cout << setw(20) <<  "GC_55 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_55 << endl;
  cout << setw(20) <<  "GC_56 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_56 << endl;
  cout << setw(20) <<  "GC_57 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_57 << endl;
  cout << setw(20) <<  "GC_58 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_58 << endl;
  cout << setw(20) <<  "GC_59 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_59 << endl;
  cout << setw(20) <<  "GC_60 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_60 << endl;
  cout << setw(20) <<  "GC_61 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_61 << endl;
  cout << setw(20) <<  "GC_62 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_62 << endl;
  cout << setw(20) <<  "GC_63 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_63 << endl;
  cout << setw(20) <<  "GC_64 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_64 << endl;
  cout << setw(20) <<  "GC_65 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_65 << endl;
  cout << setw(20) <<  "GC_66 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_66 << endl;
  cout << setw(20) <<  "GC_67 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_67 << endl;
  cout << setw(20) <<  "GC_68 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_68 << endl;
  cout << setw(20) <<  "GC_69 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_69 << endl;
  cout << setw(20) <<  "GC_70 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_70 << endl;
  cout << setw(20) <<  "GC_71 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_71 << endl;
  cout << setw(20) <<  "GC_72 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_72 << endl;
  cout << setw(20) <<  "GC_73 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_73 << endl;
  cout << setw(20) <<  "GC_74 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_74 << endl;
  cout << setw(20) <<  "GC_75 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_75 << endl;
  cout << setw(20) <<  "GC_76 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_76 << endl;
  cout << setw(20) <<  "GC_77 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_77 << endl;
  cout << setw(20) <<  "GC_78 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_78 << endl;
  cout << setw(20) <<  "GC_79 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_79 << endl;
  cout << setw(20) <<  "GC_80 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_80 << endl;
  cout << setw(20) <<  "GC_81 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_81 << endl;
  cout << setw(20) <<  "GC_82 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_82 << endl;
  cout << setw(20) <<  "GC_83 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_83 << endl;
  cout << setw(20) <<  "GC_86 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_86 << endl;
  cout << setw(20) <<  "GC_87 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_87 << endl;
  cout << setw(20) <<  "GC_88 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_88 << endl;
  cout << setw(20) <<  "GC_89 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_89 << endl;
  cout << setw(20) <<  "GC_90 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_90 << endl;
  cout << setw(20) <<  "GC_91 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_91 << endl;
  cout << setw(20) <<  "GC_92 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_92 << endl;
  cout << setw(20) <<  "GC_93 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_93 << endl;
  cout << setw(20) <<  "GC_94 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_94 << endl;
  cout << setw(20) <<  "GC_95 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_95 << endl;
  cout << setw(20) <<  "GC_96 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_96 << endl;
  cout << setw(20) <<  "GC_97 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_97 << endl;
  cout << setw(20) <<  "GC_98 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_98 << endl;
  cout << setw(20) <<  "GC_99 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_99 << endl;
  cout << setw(20) <<  "GC_100 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_100 << endl;
}
void Parameters_sm_lepton_masses::printDependentParameters()
{
  cout <<  "sm_lepton_masses model parameters dependent on event kinematics:"
      << endl;
  cout << setw(20) <<  "aS " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << aS << endl;
  cout << setw(20) <<  "mdl_sqrt__aS " <<  "= " << setiosflags(ios::scientific)
      << setw(10) << mdl_sqrt__aS << endl;
  cout << setw(20) <<  "G " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << G << endl;
  cout << setw(20) <<  "mdl_G__exp__2 " <<  "= " <<
      setiosflags(ios::scientific) << setw(10) << mdl_G__exp__2 << endl;
}
void Parameters_sm_lepton_masses::printDependentCouplings()
{
  cout <<  "sm_lepton_masses model couplings dependent on event kinematics:" <<
      endl;
  cout << setw(20) <<  "GC_12 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_12 << endl;
  cout << setw(20) <<  "GC_11 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_11 << endl;
  cout << setw(20) <<  "GC_10 " <<  "= " << setiosflags(ios::scientific) <<
      setw(10) << GC_10 << endl;
}

}  // end namespace Pythia8

