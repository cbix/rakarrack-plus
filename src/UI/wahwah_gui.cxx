// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "wahwah_gui.h"

void WahwahGui::cb_WahWah_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Multi_On_Off);
 o->value(m_process->EFX_Bypass[EFX_WAHWAH]);
 return;
}
m_process->EFX_Bypass[EFX_WAHWAH]=(int)o->value();
if((int) o->value()==0)
m_process->Rack_Effects[EFX_WAHWAH]->cleanup();
m_parent->findpos(EFX_WAHWAH,(int)o->value(),o);
}
void WahwahGui::cb_WahWah_activar(RKR_Light_Button* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_activar_i(o,v);
}

void WahwahGui::cb_WahWah_preset_i(RKR_Choice* o, void* v) {
  m_process->EFX_Bypass[EFX_WAHWAH]=0;
long long ud= (long long) v;
if((ud==0)||(ud==12010))m_process->Rack_Effects[EFX_WAHWAH]->setpreset((int) o->value());

for (int i = 0; i < m_process->EFX_Param_Size[EFX_WAHWAH]; i++)
{
    parameter_refresh(i);
};

if((int)WahWah_activar->value()) m_process->EFX_Bypass[EFX_WAHWAH]=1;
}
void WahwahGui::cb_WahWah_preset(RKR_Choice* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_preset_i(o,v);
}

Fl_Menu_Item WahwahGui::menu_WahWah_preset[] = {
 {"WahWah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"AutoWah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Sweep", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VocalMorph1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"VocalMorph2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void WahwahGui::cb_WahWah_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_DryWet);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_DryWet,Dry_Wet((int)(o->value())));
}
void WahwahGui::cb_WahWah_WD(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_WD_i(o,v);
}

void WahwahGui::cb_WahWah_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_Pan);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_Pan,(int)(o->value()+64));
}
void WahwahGui::cb_WahWah_pan(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_pan_i(o,v);
}

void WahwahGui::cb_WahWah_freq_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_LFO_Tempo);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_LFO_Tempo,(int)o->value());
}
void WahwahGui::cb_WahWah_freq(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_freq_i(o,v);
}

void WahwahGui::cb_WahWah_rnd_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_LFO_Random);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_LFO_Random,(int)o->value());
}
void WahwahGui::cb_WahWah_rnd(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_rnd_i(o,v);
}

void WahwahGui::cb_WahWah_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_LFO_Type);
 return;
} 

m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_LFO_Type,(int)o->value());
}
void WahwahGui::cb_WahWah_lfotype(RKR_Choice* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_lfotype_i(o,v);
}

void WahwahGui::cb_WahWah_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_LFO_Stereo);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_LFO_Stereo,(int)o->value());
}
void WahwahGui::cb_WahWah_stdf(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_stdf_i(o,v);
}

void WahwahGui::cb_WahWah_dpth_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_Depth);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_Depth,(int)o->value());
}
void WahwahGui::cb_WahWah_dpth(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_dpth_i(o,v);
}

void WahwahGui::cb_WahWah_ampsns_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_Sense);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_Sense,(int)o->value());
}
void WahwahGui::cb_WahWah_ampsns(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_ampsns_i(o,v);
}

void WahwahGui::cb_WahWah_ampsnsinv_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_ASI);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_ASI,(int)o->value());
}
void WahwahGui::cb_WahWah_ampsnsinv(RKR_Check_Button* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_ampsnsinv_i(o,v);
}

void WahwahGui::cb_WahWah_ftype_i(RKR_Choice* o, void*) {
  m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_Mode,(int)o->value());
}
void WahwahGui::cb_WahWah_ftype(RKR_Choice* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_ftype_i(o,v);
}

Fl_Menu_Item WahwahGui::menu_WahWah_ftype[] = {
 {"Low-Pass Analog", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"State Variable LPF", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Band-Pass Analog", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Formant 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Formant 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void WahwahGui::cb_WahWah_smooth_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_WahWah_Smooth);
 return;
} 
m_process->Rack_Effects[EFX_WAHWAH]->changepar(WahWah_Smooth,(int)o->value());
}
void WahwahGui::cb_WahWah_smooth(RKR_Slider* o, void* v) {
  ((WahwahGui*)(o->parent()))->cb_WahWah_smooth_i(o,v);
}
WahwahGui::WahwahGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = WahWah_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  WahWah_activar->box(FL_UP_BOX);
  WahWah_activar->shortcut(0x36);
  WahWah_activar->color((Fl_Color)62);
  WahWah_activar->selection_color((Fl_Color)1);
  WahWah_activar->labeltype(FL_NORMAL_LABEL);
  WahWah_activar->labelfont(0);
  WahWah_activar->labelsize(10);
  WahWah_activar->labelcolor(FL_FOREGROUND_COLOR);
  WahWah_activar->callback((Fl_Callback*)cb_WahWah_activar, (void*)(2));
  WahWah_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  WahWah_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* WahWah_activar
{ RKR_Choice* o = WahWah_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  WahWah_preset->box(FL_FLAT_BOX);
  WahWah_preset->down_box(FL_BORDER_BOX);
  WahWah_preset->color(FL_BACKGROUND_COLOR);
  WahWah_preset->selection_color(FL_FOREGROUND_COLOR);
  WahWah_preset->labeltype(FL_NORMAL_LABEL);
  WahWah_preset->labelfont(0);
  WahWah_preset->labelsize(10);
  WahWah_preset->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_preset->textsize(10);
  WahWah_preset->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_preset->callback((Fl_Callback*)cb_WahWah_preset, (void*)(12010));
  WahWah_preset->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_preset->when(FL_WHEN_RELEASE_ALWAYS);
  WahWah_preset->menu(menu_WahWah_preset);
  preset_choice = o;
} // RKR_Choice* WahWah_preset
{ WahWah_WD = new RKR_Slider(56, 29, 100, 10, "Dry/Wet");
  WahWah_WD->type(5);
  WahWah_WD->box(FL_FLAT_BOX);
  WahWah_WD->color((Fl_Color)178);
  WahWah_WD->selection_color((Fl_Color)62);
  WahWah_WD->labeltype(FL_NORMAL_LABEL);
  WahWah_WD->labelfont(0);
  WahWah_WD->labelsize(10);
  WahWah_WD->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_WD->maximum(127);
  WahWah_WD->step(1);
  WahWah_WD->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_WD->callback((Fl_Callback*)cb_WahWah_WD);
  WahWah_WD->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_WD
{ WahWah_pan = new RKR_Slider(56, 41, 100, 10, "Pan");
  WahWah_pan->type(5);
  WahWah_pan->box(FL_FLAT_BOX);
  WahWah_pan->color((Fl_Color)178);
  WahWah_pan->selection_color((Fl_Color)62);
  WahWah_pan->labeltype(FL_NORMAL_LABEL);
  WahWah_pan->labelfont(0);
  WahWah_pan->labelsize(10);
  WahWah_pan->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_pan->minimum(-64);
  WahWah_pan->maximum(63);
  WahWah_pan->step(1);
  WahWah_pan->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_pan->callback((Fl_Callback*)cb_WahWah_pan);
  WahWah_pan->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_pan
{ WahWah_freq = new RKR_Slider(56, 53, 100, 10, "Tempo");
  WahWah_freq->type(5);
  WahWah_freq->box(FL_FLAT_BOX);
  WahWah_freq->color((Fl_Color)178);
  WahWah_freq->selection_color((Fl_Color)62);
  WahWah_freq->labeltype(FL_NORMAL_LABEL);
  WahWah_freq->labelfont(0);
  WahWah_freq->labelsize(10);
  WahWah_freq->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_freq->minimum(1);
  WahWah_freq->maximum(600);
  WahWah_freq->step(1);
  WahWah_freq->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_freq->callback((Fl_Callback*)cb_WahWah_freq);
  WahWah_freq->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_freq->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_freq
{ WahWah_rnd = new RKR_Slider(56, 65, 100, 10, "Random");
  WahWah_rnd->type(5);
  WahWah_rnd->box(FL_FLAT_BOX);
  WahWah_rnd->color((Fl_Color)178);
  WahWah_rnd->selection_color((Fl_Color)62);
  WahWah_rnd->labeltype(FL_NORMAL_LABEL);
  WahWah_rnd->labelfont(0);
  WahWah_rnd->labelsize(10);
  WahWah_rnd->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_rnd->maximum(127);
  WahWah_rnd->step(1);
  WahWah_rnd->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_rnd->callback((Fl_Callback*)cb_WahWah_rnd);
  WahWah_rnd->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_rnd->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_rnd
{ RKR_Choice* o = WahWah_lfotype = new RKR_Choice(78, 79, 72, 16, "LFO Type");
  WahWah_lfotype->box(FL_FLAT_BOX);
  WahWah_lfotype->down_box(FL_BORDER_BOX);
  WahWah_lfotype->color(FL_BACKGROUND_COLOR);
  WahWah_lfotype->selection_color(FL_FOREGROUND_COLOR);
  WahWah_lfotype->labeltype(FL_NORMAL_LABEL);
  WahWah_lfotype->labelfont(0);
  WahWah_lfotype->labelsize(10);
  WahWah_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_lfotype->textsize(10);
  WahWah_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_lfotype->callback((Fl_Callback*)cb_WahWah_lfotype);
  WahWah_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* WahWah_lfotype
{ WahWah_stdf = new RKR_Slider(56, 105, 100, 10, "Stereo Df");
  WahWah_stdf->tooltip("LFO L/R Delay");
  WahWah_stdf->type(5);
  WahWah_stdf->box(FL_FLAT_BOX);
  WahWah_stdf->color((Fl_Color)178);
  WahWah_stdf->selection_color((Fl_Color)62);
  WahWah_stdf->labeltype(FL_NORMAL_LABEL);
  WahWah_stdf->labelfont(0);
  WahWah_stdf->labelsize(10);
  WahWah_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_stdf->maximum(127);
  WahWah_stdf->step(1);
  WahWah_stdf->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_stdf->callback((Fl_Callback*)cb_WahWah_stdf);
  WahWah_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_stdf
{ WahWah_dpth = new RKR_Slider(56, 117, 100, 10, "Depth");
  WahWah_dpth->type(5);
  WahWah_dpth->box(FL_FLAT_BOX);
  WahWah_dpth->color((Fl_Color)178);
  WahWah_dpth->selection_color((Fl_Color)62);
  WahWah_dpth->labeltype(FL_NORMAL_LABEL);
  WahWah_dpth->labelfont(0);
  WahWah_dpth->labelsize(10);
  WahWah_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_dpth->maximum(127);
  WahWah_dpth->step(1);
  WahWah_dpth->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_dpth->callback((Fl_Callback*)cb_WahWah_dpth);
  WahWah_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_dpth->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_dpth
{ WahWah_ampsns = new RKR_Slider(56, 129, 100, 10, "Amp.S.");
  WahWah_ampsns->tooltip("Amplitude Sensitivity");
  WahWah_ampsns->type(5);
  WahWah_ampsns->box(FL_FLAT_BOX);
  WahWah_ampsns->color((Fl_Color)178);
  WahWah_ampsns->selection_color((Fl_Color)62);
  WahWah_ampsns->labeltype(FL_NORMAL_LABEL);
  WahWah_ampsns->labelfont(0);
  WahWah_ampsns->labelsize(10);
  WahWah_ampsns->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_ampsns->maximum(127);
  WahWah_ampsns->step(1);
  WahWah_ampsns->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_ampsns->callback((Fl_Callback*)cb_WahWah_ampsns);
  WahWah_ampsns->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_ampsns->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_ampsns
{ WahWah_ampsnsinv = new RKR_Check_Button(8, 145, 70, 15, "A.S.I.");
  WahWah_ampsnsinv->tooltip("Amplitude Sensitivity Inverse");
  WahWah_ampsnsinv->box(FL_NO_BOX);
  WahWah_ampsnsinv->down_box(FL_BORDER_BOX);
  WahWah_ampsnsinv->color(FL_BACKGROUND_COLOR);
  WahWah_ampsnsinv->selection_color(FL_FOREGROUND_COLOR);
  WahWah_ampsnsinv->labeltype(FL_NORMAL_LABEL);
  WahWah_ampsnsinv->labelfont(0);
  WahWah_ampsnsinv->labelsize(10);
  WahWah_ampsnsinv->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_ampsnsinv->callback((Fl_Callback*)cb_WahWah_ampsnsinv, (void*)(2));
  WahWah_ampsnsinv->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  WahWah_ampsnsinv->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* WahWah_ampsnsinv
{ WahWah_ftype = new RKR_Choice(95, 145, 59, 16, "F. Type");
  WahWah_ftype->tooltip("Filter Type");
  WahWah_ftype->box(FL_FLAT_BOX);
  WahWah_ftype->down_box(FL_BORDER_BOX);
  WahWah_ftype->color(FL_BACKGROUND_COLOR);
  WahWah_ftype->selection_color(FL_FOREGROUND_COLOR);
  WahWah_ftype->labeltype(FL_NORMAL_LABEL);
  WahWah_ftype->labelfont(0);
  WahWah_ftype->labelsize(10);
  WahWah_ftype->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_ftype->textsize(10);
  WahWah_ftype->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_ftype->callback((Fl_Callback*)cb_WahWah_ftype);
  WahWah_ftype->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_ftype->when(FL_WHEN_RELEASE);
  WahWah_ftype->menu(menu_WahWah_ftype);
} // RKR_Choice* WahWah_ftype
{ WahWah_smooth = new RKR_Slider(56, 165, 100, 10, "Smooth");
  WahWah_smooth->type(5);
  WahWah_smooth->box(FL_FLAT_BOX);
  WahWah_smooth->color((Fl_Color)178);
  WahWah_smooth->selection_color((Fl_Color)62);
  WahWah_smooth->labeltype(FL_NORMAL_LABEL);
  WahWah_smooth->labelfont(0);
  WahWah_smooth->labelsize(10);
  WahWah_smooth->labelcolor(FL_BACKGROUND2_COLOR);
  WahWah_smooth->maximum(127);
  WahWah_smooth->step(1);
  WahWah_smooth->textcolor(FL_BACKGROUND2_COLOR);
  WahWah_smooth->callback((Fl_Callback*)cb_WahWah_smooth);
  WahWah_smooth->align(Fl_Align(FL_ALIGN_LEFT));
  WahWah_smooth->when(FL_WHEN_CHANGED);
} // RKR_Slider* WahWah_smooth
position(X, Y);
end();
}

void WahwahGui::parameter_refresh(int index) {
  switch (index)
      {
      case WahWah_DryWet:
          WahWah_WD->value(Dry_Wet(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_DryWet)));
          break;
      case WahWah_Pan:
          WahWah_pan->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_Pan)-64);
          break;
      case WahWah_LFO_Tempo:
          WahWah_freq->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_LFO_Tempo));
          break;
      case WahWah_LFO_Random:
          WahWah_rnd->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_LFO_Random));
          break;
      case WahWah_LFO_Type:
          WahWah_lfotype->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_LFO_Type));
          break;
      case WahWah_LFO_Stereo:
          WahWah_stdf->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_LFO_Stereo));
          break;
      case WahWah_Depth:
          WahWah_dpth->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_Depth));
          break;
      case WahWah_Sense:
          WahWah_ampsns->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_Sense));
          break;
      case WahWah_ASI:
          WahWah_ampsnsinv->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_ASI));
          break;
      case WahWah_Smooth:
          WahWah_smooth->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_Smooth));
          break;
      case WahWah_Mode:
           WahWah_ftype->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_Mode));
          break;
      }
}

void WahwahGui::tap_tempo_update() {
  WahWah_freq->value(m_process->Rack_Effects[EFX_WAHWAH]->getpar(WahWah_LFO_Tempo));
}
