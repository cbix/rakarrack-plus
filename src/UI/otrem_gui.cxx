// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "otrem_gui.h"

void OtremGui::cb_otrem_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_OPTICALTREM]);
 return;
}
rkr->EFX_Bypass[EFX_OPTICALTREM]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_OPTICALTREM]->cleanup();
rgui->findpos(EFX_OPTICALTREM,(int)o->value(),o);
}
void OtremGui::cb_otrem_activar(RKR_Light_Button* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_activar_i(o,v);
}

void OtremGui::cb_otrem_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12044))rkr->Rack_Effects[EFX_OPTICALTREM]->setpreset((int)o->value());

for (int i = 0; i < rkr->EFX_Param_Size[EFX_OPTICALTREM]; i++)
{
    parameter_refresh(i);
};
}
void OtremGui::cb_otrem_preset(RKR_Choice* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_preset_i(o,v);
}

Fl_Menu_Item OtremGui::menu_otrem_preset[] = {
 {"Fast", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Trem 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Hard Pan", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Soft Pan", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Ramp Down", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Hard Ramp", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Slow", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void OtremGui::cb_otrem_dpth_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Optical_Depth);
 return;
}
rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_Depth,(int)o->value());
}
void OtremGui::cb_otrem_dpth(RKR_Slider* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_dpth_i(o,v);
}

void OtremGui::cb_otrem_freq_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Optical_LFO_Tempo);
 return;
}
rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_LFO_Tempo,(int)o->value());
}
void OtremGui::cb_otrem_freq(RKR_Slider* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_freq_i(o,v);
}

void OtremGui::cb_otrem_rnd_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Optical_LFO_Random);
 return;
}
rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_LFO_Random,(int)o->value());
}
void OtremGui::cb_otrem_rnd(RKR_Slider* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_rnd_i(o,v);
}

void OtremGui::cb_otrem_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Optical_LFO_Type);
 return;
}

rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_LFO_Type,(int)o->value());
}
void OtremGui::cb_otrem_lfotype(RKR_Choice* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_lfotype_i(o,v);
}

void OtremGui::cb_otrem_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Optical_LFO_Stereo);
 return;
}
rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_LFO_Stereo,(int)o->value());
}
void OtremGui::cb_otrem_stdf(RKR_Slider* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_stdf_i(o,v);
}

void OtremGui::cb_otrem_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Optical_Pan);
 return;
}
rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_Pan,(int)(o->value()+64));
}
void OtremGui::cb_otrem_pan(RKR_Slider* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_pan_i(o,v);
}

void OtremGui::cb_otrem_invert_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_OPTICALTREM]->changepar(Optical_Invert,(int)o->value());
}
void OtremGui::cb_otrem_invert(RKR_Check_Button* o, void* v) {
  ((OtremGui*)(o->parent()))->cb_otrem_invert_i(o,v);
}
OtremGui::OtremGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = otrem_activar = new RKR_Light_Button(5, 6, 34, 18, "On");
  otrem_activar->box(FL_UP_BOX);
  otrem_activar->shortcut(0x38);
  otrem_activar->color((Fl_Color)62);
  otrem_activar->selection_color((Fl_Color)1);
  otrem_activar->labeltype(FL_NORMAL_LABEL);
  otrem_activar->labelfont(0);
  otrem_activar->labelsize(10);
  otrem_activar->labelcolor(FL_FOREGROUND_COLOR);
  otrem_activar->callback((Fl_Callback*)cb_otrem_activar, (void*)(2));
  otrem_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  otrem_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* otrem_activar
{ RKR_Choice* o = otrem_preset = new RKR_Choice(77, 6, 76, 18, "Preset");
  otrem_preset->box(FL_FLAT_BOX);
  otrem_preset->down_box(FL_BORDER_BOX);
  otrem_preset->color(FL_BACKGROUND_COLOR);
  otrem_preset->selection_color(FL_FOREGROUND_COLOR);
  otrem_preset->labeltype(FL_NORMAL_LABEL);
  otrem_preset->labelfont(0);
  otrem_preset->labelsize(10);
  otrem_preset->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_preset->textsize(10);
  otrem_preset->textcolor(FL_BACKGROUND2_COLOR);
  otrem_preset->callback((Fl_Callback*)cb_otrem_preset, (void*)(12044));
  otrem_preset->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_preset->when(FL_WHEN_RELEASE_ALWAYS);
  otrem_preset->menu(menu_otrem_preset);
  preset_choice = o;
} // RKR_Choice* otrem_preset
{ otrem_dpth = new RKR_Slider(56, 35, 100, 10, "Depth");
  otrem_dpth->type(5);
  otrem_dpth->box(FL_FLAT_BOX);
  otrem_dpth->color((Fl_Color)178);
  otrem_dpth->selection_color((Fl_Color)62);
  otrem_dpth->labeltype(FL_NORMAL_LABEL);
  otrem_dpth->labelfont(0);
  otrem_dpth->labelsize(10);
  otrem_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_dpth->maximum(127);
  otrem_dpth->step(1);
  otrem_dpth->textcolor(FL_BACKGROUND2_COLOR);
  otrem_dpth->callback((Fl_Callback*)cb_otrem_dpth);
  otrem_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_dpth->when(FL_WHEN_CHANGED);
} // RKR_Slider* otrem_dpth
{ otrem_freq = new RKR_Slider(56, 55, 100, 10, "Tempo");
  otrem_freq->type(5);
  otrem_freq->box(FL_FLAT_BOX);
  otrem_freq->color((Fl_Color)178);
  otrem_freq->selection_color((Fl_Color)62);
  otrem_freq->labeltype(FL_NORMAL_LABEL);
  otrem_freq->labelfont(0);
  otrem_freq->labelsize(10);
  otrem_freq->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_freq->minimum(1);
  otrem_freq->maximum(600);
  otrem_freq->step(1);
  otrem_freq->textcolor(FL_BACKGROUND2_COLOR);
  otrem_freq->callback((Fl_Callback*)cb_otrem_freq);
  otrem_freq->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_freq->when(FL_WHEN_CHANGED);
} // RKR_Slider* otrem_freq
{ otrem_rnd = new RKR_Slider(56, 75, 100, 10, "Random");
  otrem_rnd->type(5);
  otrem_rnd->box(FL_FLAT_BOX);
  otrem_rnd->color((Fl_Color)178);
  otrem_rnd->selection_color((Fl_Color)62);
  otrem_rnd->labeltype(FL_NORMAL_LABEL);
  otrem_rnd->labelfont(0);
  otrem_rnd->labelsize(10);
  otrem_rnd->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_rnd->maximum(127);
  otrem_rnd->step(1);
  otrem_rnd->textcolor(FL_BACKGROUND2_COLOR);
  otrem_rnd->callback((Fl_Callback*)cb_otrem_rnd);
  otrem_rnd->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_rnd->when(FL_WHEN_CHANGED);
} // RKR_Slider* otrem_rnd
{ RKR_Choice* o = otrem_lfotype = new RKR_Choice(78, 102, 72, 16, "LFO Type");
  otrem_lfotype->box(FL_FLAT_BOX);
  otrem_lfotype->down_box(FL_BORDER_BOX);
  otrem_lfotype->color(FL_BACKGROUND_COLOR);
  otrem_lfotype->selection_color(FL_FOREGROUND_COLOR);
  otrem_lfotype->labeltype(FL_NORMAL_LABEL);
  otrem_lfotype->labelfont(0);
  otrem_lfotype->labelsize(10);
  otrem_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_lfotype->textsize(10);
  otrem_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  otrem_lfotype->callback((Fl_Callback*)cb_otrem_lfotype);
  otrem_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* otrem_lfotype
{ otrem_stdf = new RKR_Slider(56, 129, 100, 10, "Stereo Df");
  otrem_stdf->tooltip("LFO L/R Delay");
  otrem_stdf->type(5);
  otrem_stdf->box(FL_FLAT_BOX);
  otrem_stdf->color((Fl_Color)178);
  otrem_stdf->selection_color((Fl_Color)62);
  otrem_stdf->labeltype(FL_NORMAL_LABEL);
  otrem_stdf->labelfont(0);
  otrem_stdf->labelsize(10);
  otrem_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_stdf->maximum(127);
  otrem_stdf->step(1);
  otrem_stdf->textcolor(FL_BACKGROUND2_COLOR);
  otrem_stdf->callback((Fl_Callback*)cb_otrem_stdf);
  otrem_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* otrem_stdf
{ otrem_pan = new RKR_Slider(56, 149, 100, 10, "Pan");
  otrem_pan->type(5);
  otrem_pan->box(FL_FLAT_BOX);
  otrem_pan->color((Fl_Color)178);
  otrem_pan->selection_color((Fl_Color)62);
  otrem_pan->labeltype(FL_NORMAL_LABEL);
  otrem_pan->labelfont(0);
  otrem_pan->labelsize(10);
  otrem_pan->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_pan->minimum(-64);
  otrem_pan->maximum(63);
  otrem_pan->step(1);
  otrem_pan->textcolor(FL_BACKGROUND2_COLOR);
  otrem_pan->callback((Fl_Callback*)cb_otrem_pan);
  otrem_pan->align(Fl_Align(FL_ALIGN_LEFT));
  otrem_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* otrem_pan
{ otrem_invert = new RKR_Check_Button(49, 164, 73, 15, "Invert");
  otrem_invert->tooltip("If checked it behaves more like tube preamp trem. If unchecked it behaves lik\
e a stompbox Opto Trem");
  otrem_invert->box(FL_NO_BOX);
  otrem_invert->down_box(FL_BORDER_BOX);
  otrem_invert->color(FL_BACKGROUND_COLOR);
  otrem_invert->selection_color(FL_FOREGROUND_COLOR);
  otrem_invert->labeltype(FL_NORMAL_LABEL);
  otrem_invert->labelfont(0);
  otrem_invert->labelsize(10);
  otrem_invert->labelcolor(FL_BACKGROUND2_COLOR);
  otrem_invert->callback((Fl_Callback*)cb_otrem_invert, (void*)(2));
  otrem_invert->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  otrem_invert->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* otrem_invert
position(X, Y);
end();
}

void OtremGui::parameter_refresh(int index) {
  switch (index)
      {
      case Optical_Depth:
          otrem_dpth->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_Depth));
          break;
      case Optical_LFO_Tempo:
          otrem_freq->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_LFO_Tempo));
          break;
      case Optical_LFO_Random:
          otrem_rnd->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_LFO_Random));
          break;
      case Optical_LFO_Type:
          otrem_lfotype->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_LFO_Type));
          break;
      case Optical_LFO_Stereo:
          otrem_stdf->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_LFO_Stereo));
          break;
      case Optical_Pan:
          otrem_pan->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_Pan)-64);
          break;
      case Optical_Invert:
          otrem_invert->value(rkr->Rack_Effects[EFX_OPTICALTREM]->getpar(Optical_Invert));
          break;
      }
}
