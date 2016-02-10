{
//=========Macro generated from canvas: tempo8/
//=========  (Tue Apr 14 15:55:58 2015) by ROOT version5.34/09
   TCanvas *tempo8 = new TCanvas("tempo8", "",0,0,700,500);
   gStyle->SetOptStat(0);
   tempo8->SetHighLightColor(2);
   tempo8->Range(-0.8064516,-0.1538462,5.645161,1.128205);
   tempo8->SetFillColor(0);
   tempo8->SetBorderMode(0);
   tempo8->SetBorderSize(3);
   tempo8->SetLeftMargin(0.125);
   tempo8->SetBottomMargin(0.12);
   tempo8->SetFrameBorderMode(0);
   tempo8->SetFrameBorderSize(0);
   tempo8->SetFrameBorderMode(0);
   tempo8->SetFrameBorderSize(0);
   
   THStack *mystack = new THStack();
   mystack->SetName("mystack");
   mystack->SetTitle("");
   
   TH1F *mystack_stack_8 = new TH1F("mystack_stack_8","",100,0,5);
   mystack_stack_8->SetMinimum(0);
   mystack_stack_8->SetMaximum(0);
   mystack_stack_8->SetDirectory(0);
   mystack_stack_8->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   mystack_stack_8->SetLineColor(ci);
   mystack_stack_8->SetLineWidth(2);
   mystack_stack_8->GetXaxis()->SetTitle("dR [ a e- ] ");
   mystack_stack_8->GetXaxis()->SetLabelFont(22);
   mystack_stack_8->GetXaxis()->SetTitleSize(0.06);
   mystack_stack_8->GetXaxis()->SetTitleOffset(0.85);
   mystack_stack_8->GetXaxis()->SetTitleFont(22);
   mystack_stack_8->GetYaxis()->SetTitle("N. of a e- pairs  ( L_{int} = 10 fb^{-1} )");
   mystack_stack_8->GetYaxis()->SetLabelFont(22);
   mystack_stack_8->GetYaxis()->SetTitleOffset(0.98);
   mystack_stack_8->GetYaxis()->SetTitleFont(22);
   mystack_stack_8->GetZaxis()->SetLabelFont(42);
   mystack_stack_8->GetZaxis()->SetLabelSize(0.035);
   mystack_stack_8->GetZaxis()->SetTitleSize(0.035);
   mystack_stack_8->GetZaxis()->SetTitleFont(42);
   mystack->SetHistogram(mystack_stack_8);
   
   
   TH1F *selection_0_2 = new TH1F("selection_0_2","selection_0_2",100,0,5);
   selection_0_2->SetEntries(100);
   selection_0_2->SetStats(0);
   selection_0_2->SetFillColor(9);
   selection_0_2->SetLineColor(9);
   selection_0_2->GetXaxis()->SetLabelFont(22);
   selection_0_2->GetXaxis()->SetLabelSize(0.03);
   selection_0_2->GetXaxis()->SetTitleOffset(0.85);
   selection_0_2->GetXaxis()->SetTitleFont(22);
   selection_0_2->GetYaxis()->SetLabelFont(22);
   selection_0_2->GetYaxis()->SetLabelSize(0.03);
   selection_0_2->GetYaxis()->SetTitleOffset(0.98);
   selection_0_2->GetYaxis()->SetTitleFont(22);
   selection_0_2->GetZaxis()->SetLabelFont(42);
   selection_0_2->GetZaxis()->SetLabelSize(0.035);
   selection_0_2->GetZaxis()->SetTitleSize(0.035);
   selection_0_2->GetZaxis()->SetTitleFont(42);
   mystack->Add(selection_0_2,"");
   mystack->Draw("");
   tempo8->Modified();
   tempo8->cd();
   tempo8->SetSelected(tempo8);
}
