{
//=========Macro generated from canvas: tempo3/
//=========  (Tue Apr 14 15:54:09 2015) by ROOT version5.34/09
   TCanvas *tempo3 = new TCanvas("tempo3", "",0,0,700,500);
   gStyle->SetOptStat(0);
   tempo3->SetHighLightColor(2);
   tempo3->Range(-0.8064516,-0.1538462,5.645161,1.128205);
   tempo3->SetFillColor(0);
   tempo3->SetBorderMode(0);
   tempo3->SetBorderSize(3);
   tempo3->SetLeftMargin(0.125);
   tempo3->SetBottomMargin(0.12);
   tempo3->SetFrameBorderMode(0);
   tempo3->SetFrameBorderSize(0);
   tempo3->SetFrameBorderMode(0);
   tempo3->SetFrameBorderSize(0);
   
   THStack *mystack = new THStack();
   mystack->SetName("mystack");
   mystack->SetTitle("");
   
   TH1F *mystack_stack_3 = new TH1F("mystack_stack_3","",100,0,5);
   mystack_stack_3->SetMinimum(0);
   mystack_stack_3->SetMaximum(0);
   mystack_stack_3->SetDirectory(0);
   mystack_stack_3->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   mystack_stack_3->SetLineColor(ci);
   mystack_stack_3->SetLineWidth(2);
   mystack_stack_3->GetXaxis()->SetTitle("dR [ a e- ] ");
   mystack_stack_3->GetXaxis()->SetLabelFont(22);
   mystack_stack_3->GetXaxis()->SetTitleSize(0.06);
   mystack_stack_3->GetXaxis()->SetTitleOffset(0.85);
   mystack_stack_3->GetXaxis()->SetTitleFont(22);
   mystack_stack_3->GetYaxis()->SetTitle("N. of a e- pairs  ( L_{int} = 10 fb^{-1} )");
   mystack_stack_3->GetYaxis()->SetLabelFont(22);
   mystack_stack_3->GetYaxis()->SetTitleOffset(0.98);
   mystack_stack_3->GetYaxis()->SetTitleFont(22);
   mystack_stack_3->GetZaxis()->SetLabelFont(42);
   mystack_stack_3->GetZaxis()->SetLabelSize(0.035);
   mystack_stack_3->GetZaxis()->SetTitleSize(0.035);
   mystack_stack_3->GetZaxis()->SetTitleFont(42);
   mystack->SetHistogram(mystack_stack_3);
   
   
   TH1F *selection_0_1 = new TH1F("selection_0_1","selection_0_1",100,0,5);
   selection_0_1->SetEntries(100);
   selection_0_1->SetFillColor(9);
   selection_0_1->SetLineColor(9);
   selection_0_1->GetXaxis()->SetLabelFont(42);
   selection_0_1->GetXaxis()->SetLabelSize(0.035);
   selection_0_1->GetXaxis()->SetTitleSize(0.035);
   selection_0_1->GetXaxis()->SetTitleFont(42);
   selection_0_1->GetYaxis()->SetLabelFont(42);
   selection_0_1->GetYaxis()->SetLabelSize(0.035);
   selection_0_1->GetYaxis()->SetTitleSize(0.035);
   selection_0_1->GetYaxis()->SetTitleFont(42);
   selection_0_1->GetZaxis()->SetLabelFont(42);
   selection_0_1->GetZaxis()->SetLabelSize(0.035);
   selection_0_1->GetZaxis()->SetTitleSize(0.035);
   selection_0_1->GetZaxis()->SetTitleFont(42);
   mystack->Add(selection_0_1,"");
   mystack->Draw("");
   tempo3->Modified();
   tempo3->cd();
   tempo3->SetSelected(tempo3);
}
