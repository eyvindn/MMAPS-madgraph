{
//=========Macro generated from canvas: tempo6/
//=========  (Tue Apr 14 16:06:24 2015) by ROOT version5.34/09
   TCanvas *tempo6 = new TCanvas("tempo6", "",0,0,700,500);
   gStyle->SetOptStat(0);
   tempo6->SetHighLightColor(2);
   tempo6->Range(-0.8064516,-0.1538462,5.645161,1.128205);
   tempo6->SetFillColor(0);
   tempo6->SetBorderMode(0);
   tempo6->SetBorderSize(3);
   tempo6->SetLeftMargin(0.125);
   tempo6->SetBottomMargin(0.12);
   tempo6->SetFrameBorderMode(0);
   tempo6->SetFrameBorderSize(0);
   tempo6->SetFrameBorderMode(0);
   tempo6->SetFrameBorderSize(0);
   
   THStack *mystack = new THStack();
   mystack->SetName("mystack");
   mystack->SetTitle("");
   
   TH1F *mystack_stack_6 = new TH1F("mystack_stack_6","",100,0,5);
   mystack_stack_6->SetMinimum(0);
   mystack_stack_6->SetMaximum(0);
   mystack_stack_6->SetDirectory(0);
   mystack_stack_6->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   mystack_stack_6->SetLineColor(ci);
   mystack_stack_6->SetLineWidth(2);
   mystack_stack_6->GetXaxis()->SetTitle("dR [ a e+ ] ");
   mystack_stack_6->GetXaxis()->SetLabelFont(22);
   mystack_stack_6->GetXaxis()->SetTitleSize(0.06);
   mystack_stack_6->GetXaxis()->SetTitleOffset(0.85);
   mystack_stack_6->GetXaxis()->SetTitleFont(22);
   mystack_stack_6->GetYaxis()->SetTitle("N. of a e+ pairs  ( L_{int} = 10 fb^{-1} )");
   mystack_stack_6->GetYaxis()->SetLabelFont(22);
   mystack_stack_6->GetYaxis()->SetTitleOffset(0.98);
   mystack_stack_6->GetYaxis()->SetTitleFont(22);
   mystack_stack_6->GetZaxis()->SetLabelFont(42);
   mystack_stack_6->GetZaxis()->SetLabelSize(0.035);
   mystack_stack_6->GetZaxis()->SetTitleSize(0.035);
   mystack_stack_6->GetZaxis()->SetTitleFont(42);
   mystack->SetHistogram(mystack_stack_6);
   
   
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
   tempo6->Modified();
   tempo6->cd();
   tempo6->SetSelected(tempo6);
}
