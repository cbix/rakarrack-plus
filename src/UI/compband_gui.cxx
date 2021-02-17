// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "compband_gui.h"

void CbandGui::cb_cband_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_COMPBAND]);
 return;
}
rkr->EFX_Bypass[EFX_COMPBAND]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_COMPBAND]->cleanup();
rgui->findpos(EFX_COMPBAND,(int)o->value(),o);
}
void CbandGui::cb_cband_activar(RKR_Light_Button* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_activar_i(o,v);
}

void CbandGui::cb_cband_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12043))rkr->Rack_Effects[EFX_COMPBAND]->setpreset((int)o->value());

for (int i = 0; i < rkr->EFX_Param_Size[EFX_COMPBAND]; i++)
{
    parameter_refresh(i);
};
}
void CbandGui::cb_cband_preset(RKR_Choice* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_preset_i(o,v);
}

Fl_Menu_Item CbandGui::menu_cband_preset[] = {
 {"Good Start", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Loudness", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Loudness 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void CbandGui::cb_cband_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_DryWet);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_DryWet,Dry_Wet((int)(o->value())));
}
void CbandGui::cb_cband_WD(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_WD_i(o,v);
}

void CbandGui::cb_cband_gain_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Gain);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Gain,(int)o->value());
}
void CbandGui::cb_cband_gain(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_gain_i(o,v);
}

void CbandGui::cb_cband_Lratio_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Low_Ratio);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Low_Ratio, (int) o->value());
}
void CbandGui::cb_cband_Lratio(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_Lratio_i(o,v);
}

void CbandGui::cb_cband_MLratio_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Mid_1_Ratio);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Mid_1_Ratio, (int) o->value());
}
void CbandGui::cb_cband_MLratio(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_MLratio_i(o,v);
}

void CbandGui::cb_cband_MHratio_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Mid_2_Ratio);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Mid_2_Ratio, (int) o->value());
}
void CbandGui::cb_cband_MHratio(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_MHratio_i(o,v);
}

void CbandGui::cb_cband_Hratio_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_High_Ratio);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_High_Ratio, (int) o->value());
}
void CbandGui::cb_cband_Hratio(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_Hratio_i(o,v);
}

void CbandGui::cb_cband_Lthres_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Low_Thresh);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Low_Thresh, (int)o->value());
}
void CbandGui::cb_cband_Lthres(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_Lthres_i(o,v);
}

void CbandGui::cb_cband_MLthres_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Mid_1_Thresh);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Mid_1_Thresh, (int)o->value());
}
void CbandGui::cb_cband_MLthres(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_MLthres_i(o,v);
}

void CbandGui::cb_cband_MHthres_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Mid_2_Thresh);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Mid_2_Thresh, (int)o->value());
}
void CbandGui::cb_cband_MHthres(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_MHthres_i(o,v);
}

void CbandGui::cb_cband_Hthres_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_High_Thresh);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_High_Thresh, (int)o->value());
}
void CbandGui::cb_cband_Hthres(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_Hthres_i(o,v);
}

void CbandGui::cb_cband_cross1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Cross_1);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Cross_1,(int)o->value());
}
void CbandGui::cb_cband_cross1(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_cross1_i(o,v);
}

void CbandGui::cb_cband_cross2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Cross_2);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Cross_2,(int)o->value());
}
void CbandGui::cb_cband_cross2(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_cross2_i(o,v);
}

void CbandGui::cb_cband_cross3_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_CompBand_Cross_3);
 return;
}
rkr->Rack_Effects[EFX_COMPBAND]->changepar(CompBand_Cross_3,(int)o->value());
}
void CbandGui::cb_cband_cross3(RKR_Slider* o, void* v) {
  ((CbandGui*)(o->parent()))->cb_cband_cross3_i(o,v);
}
CbandGui::CbandGui(int X, int Y, int W, int H, const char *L)
  : RKR_Gui_Effect(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
this->when(FL_WHEN_RELEASE);
{ RKR_Light_Button* o = cband_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  cband_activar->box(FL_UP_BOX);
  cband_activar->shortcut(0x38);
  cband_activar->color((Fl_Color)62);
  cband_activar->selection_color((Fl_Color)1);
  cband_activar->labeltype(FL_NORMAL_LABEL);
  cband_activar->labelfont(0);
  cband_activar->labelsize(10);
  cband_activar->labelcolor(FL_FOREGROUND_COLOR);
  cband_activar->callback((Fl_Callback*)cb_cband_activar, (void*)(2));
  cband_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  cband_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* cband_activar
{ RKR_Choice* o = cband_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  cband_preset->box(FL_FLAT_BOX);
  cband_preset->down_box(FL_BORDER_BOX);
  cband_preset->color(FL_BACKGROUND_COLOR);
  cband_preset->selection_color(FL_FOREGROUND_COLOR);
  cband_preset->labeltype(FL_NORMAL_LABEL);
  cband_preset->labelfont(0);
  cband_preset->labelsize(10);
  cband_preset->labelcolor(FL_BACKGROUND2_COLOR);
  cband_preset->textsize(10);
  cband_preset->textcolor(FL_BACKGROUND2_COLOR);
  cband_preset->callback((Fl_Callback*)cb_cband_preset, (void*)(12043));
  cband_preset->align(Fl_Align(FL_ALIGN_LEFT));
  cband_preset->when(FL_WHEN_RELEASE_ALWAYS);
  cband_preset->menu(menu_cband_preset);
  preset_choice = o;
} // RKR_Choice* cband_preset
{ cband_WD = new RKR_Slider(56, 27, 100, 10, "Dry/Wet");
  cband_WD->type(5);
  cband_WD->box(FL_FLAT_BOX);
  cband_WD->color((Fl_Color)178);
  cband_WD->selection_color((Fl_Color)62);
  cband_WD->labeltype(FL_NORMAL_LABEL);
  cband_WD->labelfont(0);
  cband_WD->labelsize(10);
  cband_WD->labelcolor(FL_BACKGROUND2_COLOR);
  cband_WD->maximum(127);
  cband_WD->step(1);
  cband_WD->textcolor(FL_BACKGROUND2_COLOR);
  cband_WD->callback((Fl_Callback*)cb_cband_WD);
  cband_WD->align(Fl_Align(FL_ALIGN_LEFT));
  cband_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_WD
{ cband_gain = new RKR_Slider(56, 39, 100, 10, "Gain");
  cband_gain->type(5);
  cband_gain->box(FL_FLAT_BOX);
  cband_gain->color((Fl_Color)178);
  cband_gain->selection_color((Fl_Color)62);
  cband_gain->labeltype(FL_NORMAL_LABEL);
  cband_gain->labelfont(0);
  cband_gain->labelsize(10);
  cband_gain->labelcolor(FL_BACKGROUND2_COLOR);
  cband_gain->maximum(127);
  cband_gain->step(1);
  cband_gain->textcolor(FL_BACKGROUND2_COLOR);
  cband_gain->callback((Fl_Callback*)cb_cband_gain);
  cband_gain->align(Fl_Align(FL_ALIGN_LEFT));
  cband_gain->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_gain
{ cband_Lratio = new RKR_Slider(56, 51, 100, 10, "L Ratio");
  cband_Lratio->type(5);
  cband_Lratio->box(FL_FLAT_BOX);
  cband_Lratio->color((Fl_Color)178);
  cband_Lratio->selection_color((Fl_Color)62);
  cband_Lratio->labeltype(FL_NORMAL_LABEL);
  cband_Lratio->labelfont(0);
  cband_Lratio->labelsize(10);
  cband_Lratio->labelcolor(FL_BACKGROUND2_COLOR);
  cband_Lratio->minimum(2);
  cband_Lratio->maximum(42);
  cband_Lratio->step(1);
  cband_Lratio->value(2);
  cband_Lratio->textcolor(FL_BACKGROUND2_COLOR);
  cband_Lratio->callback((Fl_Callback*)cb_cband_Lratio);
  cband_Lratio->align(Fl_Align(FL_ALIGN_LEFT));
  cband_Lratio->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_Lratio
{ cband_MLratio = new RKR_Slider(56, 63, 100, 10, "ML Ratio");
  cband_MLratio->type(5);
  cband_MLratio->box(FL_FLAT_BOX);
  cband_MLratio->color((Fl_Color)178);
  cband_MLratio->selection_color((Fl_Color)62);
  cband_MLratio->labeltype(FL_NORMAL_LABEL);
  cband_MLratio->labelfont(0);
  cband_MLratio->labelsize(10);
  cband_MLratio->labelcolor(FL_BACKGROUND2_COLOR);
  cband_MLratio->minimum(2);
  cband_MLratio->maximum(42);
  cband_MLratio->step(1);
  cband_MLratio->value(2);
  cband_MLratio->textcolor(FL_BACKGROUND2_COLOR);
  cband_MLratio->callback((Fl_Callback*)cb_cband_MLratio);
  cband_MLratio->align(Fl_Align(FL_ALIGN_LEFT));
  cband_MLratio->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_MLratio
{ cband_MHratio = new RKR_Slider(56, 75, 100, 10, "MH Ratio");
  cband_MHratio->type(5);
  cband_MHratio->box(FL_FLAT_BOX);
  cband_MHratio->color((Fl_Color)178);
  cband_MHratio->selection_color((Fl_Color)62);
  cband_MHratio->labeltype(FL_NORMAL_LABEL);
  cband_MHratio->labelfont(0);
  cband_MHratio->labelsize(10);
  cband_MHratio->labelcolor(FL_BACKGROUND2_COLOR);
  cband_MHratio->minimum(2);
  cband_MHratio->maximum(42);
  cband_MHratio->step(1);
  cband_MHratio->value(2);
  cband_MHratio->textcolor(FL_BACKGROUND2_COLOR);
  cband_MHratio->callback((Fl_Callback*)cb_cband_MHratio);
  cband_MHratio->align(Fl_Align(FL_ALIGN_LEFT));
  cband_MHratio->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_MHratio
{ cband_Hratio = new RKR_Slider(56, 87, 100, 10, "H Ratio");
  cband_Hratio->type(5);
  cband_Hratio->box(FL_FLAT_BOX);
  cband_Hratio->color((Fl_Color)178);
  cband_Hratio->selection_color((Fl_Color)62);
  cband_Hratio->labeltype(FL_NORMAL_LABEL);
  cband_Hratio->labelfont(0);
  cband_Hratio->labelsize(10);
  cband_Hratio->labelcolor(FL_BACKGROUND2_COLOR);
  cband_Hratio->minimum(2);
  cband_Hratio->maximum(42);
  cband_Hratio->step(1);
  cband_Hratio->value(2);
  cband_Hratio->textcolor(FL_BACKGROUND2_COLOR);
  cband_Hratio->callback((Fl_Callback*)cb_cband_Hratio);
  cband_Hratio->align(Fl_Align(FL_ALIGN_LEFT));
  cband_Hratio->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_Hratio
{ cband_Lthres = new RKR_Slider(56, 99, 100, 10, "L Thres");
  cband_Lthres->type(5);
  cband_Lthres->box(FL_FLAT_BOX);
  cband_Lthres->color((Fl_Color)178);
  cband_Lthres->selection_color((Fl_Color)62);
  cband_Lthres->labeltype(FL_NORMAL_LABEL);
  cband_Lthres->labelfont(0);
  cband_Lthres->labelsize(10);
  cband_Lthres->labelcolor(FL_BACKGROUND2_COLOR);
  cband_Lthres->minimum(-70);
  cband_Lthres->maximum(24);
  cband_Lthres->step(1);
  cband_Lthres->textcolor(FL_BACKGROUND2_COLOR);
  cband_Lthres->callback((Fl_Callback*)cb_cband_Lthres);
  cband_Lthres->align(Fl_Align(FL_ALIGN_LEFT));
  cband_Lthres->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_Lthres
{ cband_MLthres = new RKR_Slider(56, 111, 100, 10, "ML Thres");
  cband_MLthres->type(5);
  cband_MLthres->box(FL_FLAT_BOX);
  cband_MLthres->color((Fl_Color)178);
  cband_MLthres->selection_color((Fl_Color)62);
  cband_MLthres->labeltype(FL_NORMAL_LABEL);
  cband_MLthres->labelfont(0);
  cband_MLthres->labelsize(10);
  cband_MLthres->labelcolor(FL_BACKGROUND2_COLOR);
  cband_MLthres->minimum(-70);
  cband_MLthres->maximum(24);
  cband_MLthres->step(1);
  cband_MLthres->textcolor(FL_BACKGROUND2_COLOR);
  cband_MLthres->callback((Fl_Callback*)cb_cband_MLthres);
  cband_MLthres->align(Fl_Align(FL_ALIGN_LEFT));
  cband_MLthres->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_MLthres
{ cband_MHthres = new RKR_Slider(56, 123, 100, 10, "MH Thres");
  cband_MHthres->type(5);
  cband_MHthres->box(FL_FLAT_BOX);
  cband_MHthres->color((Fl_Color)178);
  cband_MHthres->selection_color((Fl_Color)62);
  cband_MHthres->labeltype(FL_NORMAL_LABEL);
  cband_MHthres->labelfont(0);
  cband_MHthres->labelsize(10);
  cband_MHthres->labelcolor(FL_BACKGROUND2_COLOR);
  cband_MHthres->minimum(-70);
  cband_MHthres->maximum(24);
  cband_MHthres->step(1);
  cband_MHthres->textcolor(FL_BACKGROUND2_COLOR);
  cband_MHthres->callback((Fl_Callback*)cb_cband_MHthres);
  cband_MHthres->align(Fl_Align(FL_ALIGN_LEFT));
  cband_MHthres->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_MHthres
{ cband_Hthres = new RKR_Slider(56, 135, 100, 10, "H Thres");
  cband_Hthres->type(5);
  cband_Hthres->box(FL_FLAT_BOX);
  cband_Hthres->color((Fl_Color)178);
  cband_Hthres->selection_color((Fl_Color)62);
  cband_Hthres->labeltype(FL_NORMAL_LABEL);
  cband_Hthres->labelfont(0);
  cband_Hthres->labelsize(10);
  cband_Hthres->labelcolor(FL_BACKGROUND2_COLOR);
  cband_Hthres->minimum(-70);
  cband_Hthres->maximum(24);
  cband_Hthres->step(1);
  cband_Hthres->textcolor(FL_BACKGROUND2_COLOR);
  cband_Hthres->callback((Fl_Callback*)cb_cband_Hthres);
  cband_Hthres->align(Fl_Align(FL_ALIGN_LEFT));
  cband_Hthres->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_Hthres
{ cband_cross1 = new RKR_Slider(56, 147, 100, 10, "Cross 1");
  cband_cross1->type(5);
  cband_cross1->box(FL_FLAT_BOX);
  cband_cross1->color((Fl_Color)178);
  cband_cross1->selection_color((Fl_Color)62);
  cband_cross1->labeltype(FL_NORMAL_LABEL);
  cband_cross1->labelfont(0);
  cband_cross1->labelsize(10);
  cband_cross1->labelcolor(FL_BACKGROUND2_COLOR);
  cband_cross1->minimum(20);
  cband_cross1->maximum(1000);
  cband_cross1->step(1);
  cband_cross1->textcolor(FL_BACKGROUND2_COLOR);
  cband_cross1->callback((Fl_Callback*)cb_cband_cross1);
  cband_cross1->align(Fl_Align(FL_ALIGN_LEFT));
  cband_cross1->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_cross1
{ cband_cross2 = new RKR_Slider(56, 159, 100, 10, "Cross 2");
  cband_cross2->type(5);
  cband_cross2->box(FL_FLAT_BOX);
  cband_cross2->color((Fl_Color)178);
  cband_cross2->selection_color((Fl_Color)62);
  cband_cross2->labeltype(FL_NORMAL_LABEL);
  cband_cross2->labelfont(0);
  cband_cross2->labelsize(10);
  cband_cross2->labelcolor(FL_BACKGROUND2_COLOR);
  cband_cross2->minimum(1000);
  cband_cross2->maximum(8000);
  cband_cross2->step(1);
  cband_cross2->textcolor(FL_BACKGROUND2_COLOR);
  cband_cross2->callback((Fl_Callback*)cb_cband_cross2);
  cband_cross2->align(Fl_Align(FL_ALIGN_LEFT));
  cband_cross2->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_cross2
{ cband_cross3 = new RKR_Slider(56, 171, 100, 10, "Cross 3");
  cband_cross3->type(5);
  cband_cross3->box(FL_FLAT_BOX);
  cband_cross3->color((Fl_Color)178);
  cband_cross3->selection_color((Fl_Color)62);
  cband_cross3->labeltype(FL_NORMAL_LABEL);
  cband_cross3->labelfont(0);
  cband_cross3->labelsize(10);
  cband_cross3->labelcolor(FL_BACKGROUND2_COLOR);
  cband_cross3->minimum(2000);
  cband_cross3->maximum(26000);
  cband_cross3->step(1);
  cband_cross3->textcolor(FL_BACKGROUND2_COLOR);
  cband_cross3->callback((Fl_Callback*)cb_cband_cross3);
  cband_cross3->align(Fl_Align(FL_ALIGN_LEFT));
  cband_cross3->when(FL_WHEN_CHANGED);
} // RKR_Slider* cband_cross3
position(X, Y);
end();
}

void CbandGui::parameter_refresh(int index) {
  switch (index)
      {
      case CompBand_DryWet:
          cband_WD->value(Dry_Wet(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_DryWet)));
          break;
      case CompBand_Low_Ratio:
          cband_Lratio->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Low_Ratio));
          break;
      case CompBand_Mid_1_Ratio:
          cband_MLratio->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Mid_1_Ratio));
          break;
      case CompBand_Mid_2_Ratio:
          cband_MHratio->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Mid_2_Ratio));
          break;
      case CompBand_High_Ratio:
          cband_Hratio->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_High_Ratio));
          break;
      case CompBand_Low_Thresh:
          cband_Lthres->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Low_Thresh));
          break;
      case CompBand_Mid_1_Thresh:
          cband_MLthres->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Mid_1_Thresh));
          break;
      case CompBand_Mid_2_Thresh:
          cband_MHthres->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Mid_2_Thresh));
          break;
      case CompBand_High_Thresh:
          cband_Hthres->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_High_Thresh));
          break;
      case CompBand_Cross_1:
          cband_cross1->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Cross_1));
          break;
      case CompBand_Cross_2:
          cband_cross2->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Cross_2));
          break;
      case CompBand_Cross_3:
          cband_cross3->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Cross_3));
          break;
      case CompBand_Gain:
          cband_gain->value(rkr->Rack_Effects[EFX_COMPBAND]->getpar(CompBand_Gain));
          break;
      }
}
