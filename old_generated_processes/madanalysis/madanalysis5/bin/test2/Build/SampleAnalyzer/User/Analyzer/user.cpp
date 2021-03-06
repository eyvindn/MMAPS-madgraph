#include "SampleAnalyzer/User/Analyzer/user.h"
using namespace MA5;

bool user::Initialize(const MA5::Configuration& cfg,
                      const std::map<std::string,std::string>& parameters)
{
  // Initializing PhysicsService for MC
  PHYSICS->mcConfig().Reset();

  // definition of the multiparticle "hadronic"
  PHYSICS->mcConfig().AddHadronicId(-5);
  PHYSICS->mcConfig().AddHadronicId(-4);
  PHYSICS->mcConfig().AddHadronicId(-3);
  PHYSICS->mcConfig().AddHadronicId(-2);
  PHYSICS->mcConfig().AddHadronicId(-1);
  PHYSICS->mcConfig().AddHadronicId(1);
  PHYSICS->mcConfig().AddHadronicId(2);
  PHYSICS->mcConfig().AddHadronicId(3);
  PHYSICS->mcConfig().AddHadronicId(4);
  PHYSICS->mcConfig().AddHadronicId(5);
  PHYSICS->mcConfig().AddHadronicId(21);

  // definition of the multiparticle "invisible"
  PHYSICS->mcConfig().AddInvisibleId(-16);
  PHYSICS->mcConfig().AddInvisibleId(-14);
  PHYSICS->mcConfig().AddInvisibleId(-12);
  PHYSICS->mcConfig().AddInvisibleId(12);
  PHYSICS->mcConfig().AddInvisibleId(14);
  PHYSICS->mcConfig().AddInvisibleId(16);
  PHYSICS->mcConfig().AddInvisibleId(1000022);

  // Initializing each selection item
  H0_ = plots_.Add_Histo("selection_0",100,0.0,1000.0);
  H1_ = plots_.Add_Histo("selection_1",20,0.0,100.0);
  H2_ = plots_.Add_Histo("selection_2",50,0.0,1.0);
  H3_ = plots_.Add_Histo("selection_3",50,0.0,0.1);
  H4_ = plots_.Add_Histo("selection_4",100,0.0,0.05);

  // No problem during initialization
  return true;
}

bool user::Execute(SampleFormat& sample, const EventFormat& event)
{
  Float_t __event_weight__ = 1.0;
  if (weighted_events_ && event.mc()!=0) __event_weight__ = event.mc()->weight();

  if (sample.mc()!=0) sample.mc()->addWeightedEvents(__event_weight__);
  // Clearing particle containers
  {
      _P_aPTorderingfinalstate.clear();
  }
  // Filling particle containers
  {
    for (UInt_t i=0;i<event.mc()->particles().size();i++)
    {
      if (isP__aPTorderingfinalstate((&(event.mc()->particles()[i])))) _P_aPTorderingfinalstate.push_back(&(event.mc()->particles()[i]));
    }
  }

  // Sorting particles
  // Histogram/Cut number 0
  //   * Plot: MET
  {
  H0_->IncrementNEvents(__event_weight__);
    H0_->Fill(PHYSICS->Transverse->EventMET(event.mc()),__event_weight__);
  }

  // Histogram/Cut number 1
  //   * Plot: PT ( a ) 
  {
  H1_->IncrementNEvents(__event_weight__);
  {
    UInt_t ind[1];
    for (ind[0]=0;ind[0]<_P_aPTorderingfinalstate.size();ind[0]++)
    {
      H1_->Fill(_P_aPTorderingfinalstate[ind[0]]->pt(),__event_weight__);
    }
  }
  }

  // Histogram/Cut number 2
  //   * Plot: PT ( a ) 
  {
  H2_->IncrementNEvents(__event_weight__);
  {
    UInt_t ind[1];
    for (ind[0]=0;ind[0]<_P_aPTorderingfinalstate.size();ind[0]++)
    {
      H2_->Fill(_P_aPTorderingfinalstate[ind[0]]->pt(),__event_weight__);
    }
  }
  }

  // Histogram/Cut number 3
  //   * Plot: PT ( a ) 
  {
  H3_->IncrementNEvents(__event_weight__);
  {
    UInt_t ind[1];
    for (ind[0]=0;ind[0]<_P_aPTorderingfinalstate.size();ind[0]++)
    {
      H3_->Fill(_P_aPTorderingfinalstate[ind[0]]->pt(),__event_weight__);
    }
  }
  }

  // Histogram/Cut number 4
  //   * Plot: PT ( a ) 
  {
  H4_->IncrementNEvents(__event_weight__);
  {
    UInt_t ind[1];
    for (ind[0]=0;ind[0]<_P_aPTorderingfinalstate.size();ind[0]++)
    {
      H4_->Fill(_P_aPTorderingfinalstate[ind[0]]->pt(),__event_weight__);
    }
  }
  }

  return true;
}

void user::Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files)
{
  // Saving histogram
  *out().GetStream() << "<Selection>\n";

  plots_.Write_TextFormat(out());
  // Saving cut cuts
  cuts_.Write_TextFormat(out());

  *out().GetStream() << "</Selection>\n";

  // Finalizing cuts and histos
  plots_.Finalize();
  cuts_.Finalize();

}
