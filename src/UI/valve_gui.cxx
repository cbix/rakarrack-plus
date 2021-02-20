// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "valve_gui.h"

void ValveGui::cb_valve_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Multi_On_Off);
 o->value(m_process->EFX_Bypass[EFX_VALVE]);
 return;
}
m_process->EFX_Bypass[EFX_VALVE]=(int)o->value();
if((int) o->value()==0)
m_process->Rack_Effects[EFX_VALVE]->cleanup();
m_parent->findpos(EFX_VALVE,(int)o->value(),o);
}
void ValveGui::cb_valve_activar(RKR_Light_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_activar_i(o,v);
}

void ValveGui::cb_valve_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12019))m_process->Rack_Effects[EFX_VALVE]->setpreset((int)o->value());

for (int i = 0; i < m_process->EFX_Param_Size[EFX_VALVE]; i++)
{
    parameter_refresh(i);
};
}
void ValveGui::cb_valve_preset(RKR_Choice* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_preset_i(o,v);
}

Fl_Menu_Item ValveGui::menu_valve_preset[] = {
 {"Valve 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Valve 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Valve 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Valve 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void ValveGui::cb_valve_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_DryWet);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_DryWet,Dry_Wet((int)(o->value())));
}
void ValveGui::cb_valve_WD(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_WD_i(o,v);
}

void ValveGui::cb_valve_LRc_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_LR_Cross);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_LR_Cross,(int)(o->value()));
}
void ValveGui::cb_valve_LRc(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_LRc_i(o,v);
}

void ValveGui::cb_valve_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_Pan);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Pan,(int)(o->value()+64));
}
void ValveGui::cb_valve_pan(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_pan_i(o,v);
}

void ValveGui::cb_valve_level_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_Level);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Level,(int)o->value());
}
void ValveGui::cb_valve_level(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_level_i(o,v);
}

void ValveGui::cb_valve_drive_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_Drive);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Drive,(int)o->value());
}
void ValveGui::cb_valve_drive(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_drive_i(o,v);
}

void ValveGui::cb_valve_ed_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Ex_Dist,(int)o->value());
}
void ValveGui::cb_valve_ed(RKR_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_ed_i(o,v);
}

void ValveGui::cb_valve_Q_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_Distortion);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Distortion,(int)o->value());
}
void ValveGui::cb_valve_Q(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_Q_i(o,v);
}

void ValveGui::cb_valve_Pre_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_Presence);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Presence,(int)o->value());
}
void ValveGui::cb_valve_Pre(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_Pre_i(o,v);
}

void ValveGui::cb_valve_pf_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Prefilter,(int)o->value());
}
void ValveGui::cb_valve_pf(RKR_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_pf_i(o,v);
}

void ValveGui::cb_valve_st_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Stereo,(int)o->value());
}
void ValveGui::cb_valve_st(RKR_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_st_i(o,v);
}

void ValveGui::cb_valve_neg_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_Negate,(int)o->value());
}
void ValveGui::cb_valve_neg(RKR_Check_Button* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_neg_i(o,v);
}

void ValveGui::cb_valve_lpf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_LPF);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_LPF,(int)o->value());
}
void ValveGui::cb_valve_lpf(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_lpf_i(o,v);
}

void ValveGui::cb_valve_hpf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 m_parent->getMIDIControl(MC_Valve_HPF);
 return;
} 
m_process->Rack_Effects[EFX_VALVE]->changepar(Valve_HPF,(int)o->value());
}
void ValveGui::cb_valve_hpf(RKR_Slider* o, void* v) {
  ((ValveGui*)(o->parent()))->cb_valve_hpf_i(o,v);
}
ValveGui::ValveGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = valve_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  valve_activar->box(FL_UP_BOX);
  valve_activar->shortcut(0x33);
  valve_activar->color((Fl_Color)62);
  valve_activar->selection_color((Fl_Color)1);
  valve_activar->labeltype(FL_NORMAL_LABEL);
  valve_activar->labelfont(0);
  valve_activar->labelsize(10);
  valve_activar->labelcolor(FL_FOREGROUND_COLOR);
  valve_activar->callback((Fl_Callback*)cb_valve_activar, (void*)(2));
  valve_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  valve_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* valve_activar
{ RKR_Choice* o = valve_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  valve_preset->box(FL_FLAT_BOX);
  valve_preset->down_box(FL_BORDER_BOX);
  valve_preset->color(FL_BACKGROUND_COLOR);
  valve_preset->selection_color(FL_FOREGROUND_COLOR);
  valve_preset->labeltype(FL_NORMAL_LABEL);
  valve_preset->labelfont(0);
  valve_preset->labelsize(10);
  valve_preset->labelcolor(FL_BACKGROUND2_COLOR);
  valve_preset->textsize(10);
  valve_preset->textcolor(FL_BACKGROUND2_COLOR);
  valve_preset->callback((Fl_Callback*)cb_valve_preset, (void*)(12019));
  valve_preset->align(Fl_Align(FL_ALIGN_LEFT));
  valve_preset->when(FL_WHEN_RELEASE_ALWAYS);
  valve_preset->menu(menu_valve_preset);
  preset_choice = o;
} // RKR_Choice* valve_preset
{ valve_WD = new RKR_Slider(56, 31, 100, 10, "Dry/Wet");
  valve_WD->type(5);
  valve_WD->box(FL_FLAT_BOX);
  valve_WD->color((Fl_Color)178);
  valve_WD->selection_color((Fl_Color)62);
  valve_WD->labeltype(FL_NORMAL_LABEL);
  valve_WD->labelfont(0);
  valve_WD->labelsize(10);
  valve_WD->labelcolor(FL_BACKGROUND2_COLOR);
  valve_WD->maximum(127);
  valve_WD->step(1);
  valve_WD->textcolor(FL_BACKGROUND2_COLOR);
  valve_WD->callback((Fl_Callback*)cb_valve_WD);
  valve_WD->align(Fl_Align(FL_ALIGN_LEFT));
  valve_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_WD
{ valve_LRc = new RKR_Slider(56, 44, 100, 10, "L/R Cross");
  valve_LRc->type(5);
  valve_LRc->box(FL_FLAT_BOX);
  valve_LRc->color((Fl_Color)178);
  valve_LRc->selection_color((Fl_Color)62);
  valve_LRc->labeltype(FL_NORMAL_LABEL);
  valve_LRc->labelfont(0);
  valve_LRc->labelsize(10);
  valve_LRc->labelcolor(FL_BACKGROUND2_COLOR);
  valve_LRc->maximum(127);
  valve_LRc->step(1);
  valve_LRc->textcolor(FL_BACKGROUND2_COLOR);
  valve_LRc->callback((Fl_Callback*)cb_valve_LRc);
  valve_LRc->align(Fl_Align(FL_ALIGN_LEFT));
  valve_LRc->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_LRc
{ valve_pan = new RKR_Slider(56, 57, 100, 10, "Pan");
  valve_pan->type(5);
  valve_pan->box(FL_FLAT_BOX);
  valve_pan->color((Fl_Color)178);
  valve_pan->selection_color((Fl_Color)62);
  valve_pan->labeltype(FL_NORMAL_LABEL);
  valve_pan->labelfont(0);
  valve_pan->labelsize(10);
  valve_pan->labelcolor(FL_BACKGROUND2_COLOR);
  valve_pan->minimum(-64);
  valve_pan->maximum(63);
  valve_pan->step(1);
  valve_pan->textcolor(FL_BACKGROUND2_COLOR);
  valve_pan->callback((Fl_Callback*)cb_valve_pan);
  valve_pan->align(Fl_Align(FL_ALIGN_LEFT));
  valve_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_pan
{ valve_level = new RKR_Slider(56, 71, 100, 10, "Level");
  valve_level->type(5);
  valve_level->box(FL_FLAT_BOX);
  valve_level->color((Fl_Color)178);
  valve_level->selection_color((Fl_Color)62);
  valve_level->labeltype(FL_NORMAL_LABEL);
  valve_level->labelfont(0);
  valve_level->labelsize(10);
  valve_level->labelcolor(FL_BACKGROUND2_COLOR);
  valve_level->maximum(127);
  valve_level->step(1);
  valve_level->textcolor(FL_BACKGROUND2_COLOR);
  valve_level->callback((Fl_Callback*)cb_valve_level);
  valve_level->align(Fl_Align(FL_ALIGN_LEFT));
  valve_level->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_level
{ valve_drive = new RKR_Slider(56, 84, 100, 10, "Drive");
  valve_drive->type(5);
  valve_drive->box(FL_FLAT_BOX);
  valve_drive->color((Fl_Color)178);
  valve_drive->selection_color((Fl_Color)62);
  valve_drive->labeltype(FL_NORMAL_LABEL);
  valve_drive->labelfont(0);
  valve_drive->labelsize(10);
  valve_drive->labelcolor(FL_BACKGROUND2_COLOR);
  valve_drive->maximum(127);
  valve_drive->step(1);
  valve_drive->textcolor(FL_BACKGROUND2_COLOR);
  valve_drive->callback((Fl_Callback*)cb_valve_drive);
  valve_drive->align(Fl_Align(FL_ALIGN_LEFT));
  valve_drive->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_drive
{ valve_ed = new RKR_Check_Button(15, 96, 72, 15, "Extra Dist.");
  valve_ed->box(FL_NO_BOX);
  valve_ed->down_box(FL_BORDER_BOX);
  valve_ed->color(FL_BACKGROUND_COLOR);
  valve_ed->selection_color(FL_FOREGROUND_COLOR);
  valve_ed->labeltype(FL_NORMAL_LABEL);
  valve_ed->labelfont(0);
  valve_ed->labelsize(10);
  valve_ed->labelcolor(FL_BACKGROUND2_COLOR);
  valve_ed->callback((Fl_Callback*)cb_valve_ed, (void*)(2));
  valve_ed->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  valve_ed->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* valve_ed
{ valve_Q = new RKR_Slider(56, 112, 100, 10, "Dist.");
  valve_Q->tooltip("Distortion");
  valve_Q->type(5);
  valve_Q->box(FL_FLAT_BOX);
  valve_Q->color((Fl_Color)178);
  valve_Q->selection_color((Fl_Color)62);
  valve_Q->labeltype(FL_NORMAL_LABEL);
  valve_Q->labelfont(0);
  valve_Q->labelsize(10);
  valve_Q->labelcolor(FL_BACKGROUND2_COLOR);
  valve_Q->maximum(127);
  valve_Q->step(1);
  valve_Q->textcolor(FL_BACKGROUND2_COLOR);
  valve_Q->callback((Fl_Callback*)cb_valve_Q);
  valve_Q->align(Fl_Align(FL_ALIGN_LEFT));
  valve_Q->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_Q
{ valve_Pre = new RKR_Slider(56, 127, 100, 10, "Presence");
  valve_Pre->type(5);
  valve_Pre->box(FL_FLAT_BOX);
  valve_Pre->color((Fl_Color)178);
  valve_Pre->selection_color((Fl_Color)62);
  valve_Pre->labeltype(FL_NORMAL_LABEL);
  valve_Pre->labelfont(0);
  valve_Pre->labelsize(10);
  valve_Pre->labelcolor(FL_BACKGROUND2_COLOR);
  valve_Pre->maximum(100);
  valve_Pre->step(1);
  valve_Pre->textcolor(FL_BACKGROUND2_COLOR);
  valve_Pre->callback((Fl_Callback*)cb_valve_Pre);
  valve_Pre->align(Fl_Align(FL_ALIGN_LEFT));
  valve_Pre->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_Pre
{ valve_pf = new RKR_Check_Button(5, 139, 62, 15, "Pre Filter");
  valve_pf->box(FL_NO_BOX);
  valve_pf->down_box(FL_BORDER_BOX);
  valve_pf->color(FL_BACKGROUND_COLOR);
  valve_pf->selection_color(FL_FOREGROUND_COLOR);
  valve_pf->labeltype(FL_NORMAL_LABEL);
  valve_pf->labelfont(0);
  valve_pf->labelsize(10);
  valve_pf->labelcolor(FL_BACKGROUND2_COLOR);
  valve_pf->callback((Fl_Callback*)cb_valve_pf, (void*)(2));
  valve_pf->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  valve_pf->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* valve_pf
{ valve_st = new RKR_Check_Button(65, 139, 50, 15, "Stereo");
  valve_st->box(FL_NO_BOX);
  valve_st->down_box(FL_BORDER_BOX);
  valve_st->color(FL_BACKGROUND_COLOR);
  valve_st->selection_color(FL_FOREGROUND_COLOR);
  valve_st->labeltype(FL_NORMAL_LABEL);
  valve_st->labelfont(0);
  valve_st->labelsize(10);
  valve_st->labelcolor(FL_BACKGROUND2_COLOR);
  valve_st->callback((Fl_Callback*)cb_valve_st, (void*)(2));
  valve_st->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  valve_st->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* valve_st
{ valve_neg = new RKR_Check_Button(114, 139, 40, 15, "Neg.");
  valve_neg->box(FL_NO_BOX);
  valve_neg->down_box(FL_BORDER_BOX);
  valve_neg->color(FL_BACKGROUND_COLOR);
  valve_neg->selection_color(FL_FOREGROUND_COLOR);
  valve_neg->labeltype(FL_NORMAL_LABEL);
  valve_neg->labelfont(0);
  valve_neg->labelsize(10);
  valve_neg->labelcolor(FL_BACKGROUND2_COLOR);
  valve_neg->callback((Fl_Callback*)cb_valve_neg, (void*)(2));
  valve_neg->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  valve_neg->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* valve_neg
{ valve_lpf = new RKR_Slider(56, 156, 100, 10, "LPF");
  valve_lpf->type(5);
  valve_lpf->box(FL_FLAT_BOX);
  valve_lpf->color((Fl_Color)178);
  valve_lpf->selection_color((Fl_Color)62);
  valve_lpf->labeltype(FL_NORMAL_LABEL);
  valve_lpf->labelfont(0);
  valve_lpf->labelsize(10);
  valve_lpf->labelcolor(FL_BACKGROUND2_COLOR);
  valve_lpf->minimum(20);
  valve_lpf->maximum(26000);
  valve_lpf->step(1);
  valve_lpf->value(20000);
  valve_lpf->textcolor(FL_BACKGROUND2_COLOR);
  valve_lpf->callback((Fl_Callback*)cb_valve_lpf);
  valve_lpf->align(Fl_Align(FL_ALIGN_LEFT));
  valve_lpf->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_lpf
{ valve_hpf = new RKR_Slider(56, 169, 100, 10, "HPF");
  valve_hpf->type(5);
  valve_hpf->box(FL_FLAT_BOX);
  valve_hpf->color((Fl_Color)178);
  valve_hpf->selection_color((Fl_Color)62);
  valve_hpf->labeltype(FL_NORMAL_LABEL);
  valve_hpf->labelfont(0);
  valve_hpf->labelsize(10);
  valve_hpf->labelcolor(FL_BACKGROUND2_COLOR);
  valve_hpf->minimum(20);
  valve_hpf->maximum(20000);
  valve_hpf->step(1);
  valve_hpf->value(20);
  valve_hpf->textcolor(FL_BACKGROUND2_COLOR);
  valve_hpf->callback((Fl_Callback*)cb_valve_hpf);
  valve_hpf->align(Fl_Align(FL_ALIGN_LEFT));
  valve_hpf->when(FL_WHEN_CHANGED);
} // RKR_Slider* valve_hpf
position(X, Y);
end();
}

void ValveGui::parameter_refresh(int index) {
  switch (index)
      {
      case Valve_DryWet:
          valve_WD->value(Dry_Wet(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_DryWet)));
          break;
      case Valve_Pan:
          valve_pan->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Pan)-64);
          break;
      case Valve_LR_Cross:
          valve_LRc->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_LR_Cross));
          break;
      case Valve_Drive:
          valve_drive->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Drive));
          break;
      case Valve_Level:
          valve_level->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Level));
          break;
      case Valve_Negate:
          valve_neg->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Negate));
          break;
      case Valve_LPF:
          valve_lpf->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_LPF));
          break;
      case Valve_HPF:
          valve_hpf->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_HPF));
          break;
      case Valve_Stereo:
          valve_st->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Stereo));
          break;
      case Valve_Prefilter:
          valve_pf->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Prefilter));
          break;
      case Valve_Distortion:
          valve_Q->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Distortion));
          break;
      case Valve_Ex_Dist:
          valve_ed->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Ex_Dist));
          break;
      case Valve_Presence:
          valve_Pre->value(m_process->Rack_Effects[EFX_VALVE]->getpar(Valve_Presence));
          break;
      }
}
