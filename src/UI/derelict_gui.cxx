// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "derelict_gui.h"

void DerelictGui::cb_derelict_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_DERELICT]);
 return;
}
rkr->EFX_Bypass[EFX_DERELICT]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_DERELICT]->cleanup();
rgui->findpos(EFX_DERELICT,(int)o->value(),o);
}
void DerelictGui::cb_derelict_activar(RKR_Light_Button* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_activar_i(o,v);
}

void DerelictGui::cb_derelict_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12017))rkr->Rack_Effects[EFX_DERELICT]->setpreset((int) o->value());
derelict_WD->value(Dry_Wet(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_DryWet)));
derelict_LRc->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_LR_Cross));
derelict_drive->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Drive));
derelict_level->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Level));
derelict_tipo->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Type));
derelict_neg->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Negate));
derelict_st->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Color));
derelict_oct->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Suboctave));
derelict_pan->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Pan)-64);
derelict_pf->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_Prefilter));
derelict_lpf->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_LPF));
derelict_hpf->value(rkr->Rack_Effects[EFX_DERELICT]->getpar(Dere_HPF));
}
void DerelictGui::cb_derelict_preset(RKR_Choice* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_preset_i(o,v);
}

Fl_Menu_Item DerelictGui::menu_derelict_preset[] = {
 {"Distortion 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Distortion 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Distortion 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void DerelictGui::cb_derelict_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_DryWet);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_DryWet,Dry_Wet((int)(o->value())));
}
void DerelictGui::cb_derelict_WD(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_WD_i(o,v);
}

void DerelictGui::cb_derelict_LRc_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_LR_Cross);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_LR_Cross,(int)(o->value()));
}
void DerelictGui::cb_derelict_LRc(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_LRc_i(o,v);
}

void DerelictGui::cb_derelict_drive_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_Drive);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Drive,(int)o->value());
}
void DerelictGui::cb_derelict_drive(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_drive_i(o,v);
}

void DerelictGui::cb_derelict_level_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_Level);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Level,(int)o->value());
}
void DerelictGui::cb_derelict_level(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_level_i(o,v);
}

void DerelictGui::cb_derelict_tipo_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_Type);
 return;
} 

rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Type,(int)o->value());
}
void DerelictGui::cb_derelict_tipo(RKR_Choice* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_tipo_i(o,v);
}

void DerelictGui::cb_derelict_neg_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Negate,(int)o->value());
}
void DerelictGui::cb_derelict_neg(RKR_Check_Button* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_neg_i(o,v);
}

void DerelictGui::cb_derelict_st_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_Color);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Color,(int)o->value());
}
void DerelictGui::cb_derelict_st(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_st_i(o,v);
}

void DerelictGui::cb_derelict_oct_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_Suboctave);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Suboctave,(int)o->value());
}
void DerelictGui::cb_derelict_oct(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_oct_i(o,v);
}

void DerelictGui::cb_derelict_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_Pan);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Pan,(int)(o->value()+64));
}
void DerelictGui::cb_derelict_pan(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_pan_i(o,v);
}

void DerelictGui::cb_derelict_pf_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_Prefilter,(int)o->value());
}
void DerelictGui::cb_derelict_pf(RKR_Check_Button* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_pf_i(o,v);
}

void DerelictGui::cb_derelict_lpf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_LPF);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_LPF,(int)o->value());
}
void DerelictGui::cb_derelict_lpf(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_lpf_i(o,v);
}

void DerelictGui::cb_derelict_hpf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Dere_HPF);
 return;
} 
rkr->Rack_Effects[EFX_DERELICT]->changepar(Dere_HPF,(int)o->value());
}
void DerelictGui::cb_derelict_hpf(RKR_Slider* o, void* v) {
  ((DerelictGui*)(o->parent()))->cb_derelict_hpf_i(o,v);
}
DerelictGui::DerelictGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = derelict_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  derelict_activar->box(FL_UP_BOX);
  derelict_activar->shortcut(0x33);
  derelict_activar->color((Fl_Color)62);
  derelict_activar->selection_color((Fl_Color)1);
  derelict_activar->labeltype(FL_NORMAL_LABEL);
  derelict_activar->labelfont(0);
  derelict_activar->labelsize(10);
  derelict_activar->labelcolor(FL_FOREGROUND_COLOR);
  derelict_activar->callback((Fl_Callback*)cb_derelict_activar, (void*)(2));
  derelict_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  derelict_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* derelict_activar
{ RKR_Choice* o = derelict_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  derelict_preset->box(FL_FLAT_BOX);
  derelict_preset->down_box(FL_BORDER_BOX);
  derelict_preset->color(FL_BACKGROUND_COLOR);
  derelict_preset->selection_color(FL_FOREGROUND_COLOR);
  derelict_preset->labeltype(FL_NORMAL_LABEL);
  derelict_preset->labelfont(0);
  derelict_preset->labelsize(10);
  derelict_preset->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_preset->textsize(10);
  derelict_preset->textcolor(FL_BACKGROUND2_COLOR);
  derelict_preset->callback((Fl_Callback*)cb_derelict_preset, (void*)(12017));
  derelict_preset->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_preset->when(FL_WHEN_RELEASE_ALWAYS);
  derelict_preset->menu(menu_derelict_preset);
  preset_choice = o;
} // RKR_Choice* derelict_preset
{ derelict_WD = new RKR_Slider(56, 28, 100, 10, "Dry/Wet");
  derelict_WD->type(5);
  derelict_WD->box(FL_FLAT_BOX);
  derelict_WD->color((Fl_Color)178);
  derelict_WD->selection_color((Fl_Color)62);
  derelict_WD->labeltype(FL_NORMAL_LABEL);
  derelict_WD->labelfont(0);
  derelict_WD->labelsize(10);
  derelict_WD->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_WD->maximum(127);
  derelict_WD->step(1);
  derelict_WD->textcolor(FL_BACKGROUND2_COLOR);
  derelict_WD->callback((Fl_Callback*)cb_derelict_WD);
  derelict_WD->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_WD
{ derelict_LRc = new RKR_Slider(56, 42, 100, 10, "L/R Cross");
  derelict_LRc->type(5);
  derelict_LRc->box(FL_FLAT_BOX);
  derelict_LRc->color((Fl_Color)178);
  derelict_LRc->selection_color((Fl_Color)62);
  derelict_LRc->labeltype(FL_NORMAL_LABEL);
  derelict_LRc->labelfont(0);
  derelict_LRc->labelsize(10);
  derelict_LRc->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_LRc->maximum(127);
  derelict_LRc->step(1);
  derelict_LRc->textcolor(FL_BACKGROUND2_COLOR);
  derelict_LRc->callback((Fl_Callback*)cb_derelict_LRc);
  derelict_LRc->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_LRc->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_LRc
{ derelict_drive = new RKR_Slider(56, 56, 100, 10, "Drive");
  derelict_drive->type(5);
  derelict_drive->box(FL_FLAT_BOX);
  derelict_drive->color((Fl_Color)178);
  derelict_drive->selection_color((Fl_Color)62);
  derelict_drive->labeltype(FL_NORMAL_LABEL);
  derelict_drive->labelfont(0);
  derelict_drive->labelsize(10);
  derelict_drive->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_drive->minimum(1);
  derelict_drive->maximum(127);
  derelict_drive->step(1);
  derelict_drive->value(1);
  derelict_drive->textcolor(FL_BACKGROUND2_COLOR);
  derelict_drive->callback((Fl_Callback*)cb_derelict_drive);
  derelict_drive->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_drive->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_drive
{ derelict_level = new RKR_Slider(56, 70, 100, 10, "Level");
  derelict_level->type(5);
  derelict_level->box(FL_FLAT_BOX);
  derelict_level->color((Fl_Color)178);
  derelict_level->selection_color((Fl_Color)62);
  derelict_level->labeltype(FL_NORMAL_LABEL);
  derelict_level->labelfont(0);
  derelict_level->labelsize(10);
  derelict_level->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_level->maximum(127);
  derelict_level->step(1);
  derelict_level->textcolor(FL_BACKGROUND2_COLOR);
  derelict_level->callback((Fl_Callback*)cb_derelict_level);
  derelict_level->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_level->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_level
{ RKR_Choice* o = derelict_tipo = new RKR_Choice(34, 84, 70, 16, "Type");
  derelict_tipo->box(FL_FLAT_BOX);
  derelict_tipo->down_box(FL_BORDER_BOX);
  derelict_tipo->color(FL_BACKGROUND_COLOR);
  derelict_tipo->selection_color(FL_FOREGROUND_COLOR);
  derelict_tipo->labeltype(FL_NORMAL_LABEL);
  derelict_tipo->labelfont(0);
  derelict_tipo->labelsize(10);
  derelict_tipo->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_tipo->textsize(10);
  derelict_tipo->textcolor(FL_BACKGROUND2_COLOR);
  derelict_tipo->callback((Fl_Callback*)cb_derelict_tipo);
  derelict_tipo->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_tipo->when(FL_WHEN_RELEASE);
  o->menu(m_dist_menu->get_distortion_type());
} // RKR_Choice* derelict_tipo
{ derelict_neg = new RKR_Check_Button(110, 84, 42, 15, "Neg.");
  derelict_neg->box(FL_NO_BOX);
  derelict_neg->down_box(FL_BORDER_BOX);
  derelict_neg->color(FL_BACKGROUND_COLOR);
  derelict_neg->selection_color(FL_FOREGROUND_COLOR);
  derelict_neg->labeltype(FL_NORMAL_LABEL);
  derelict_neg->labelfont(0);
  derelict_neg->labelsize(10);
  derelict_neg->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_neg->callback((Fl_Callback*)cb_derelict_neg, (void*)(2));
  derelict_neg->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  derelict_neg->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* derelict_neg
{ derelict_st = new RKR_Slider(56, 106, 100, 10, "Color");
  derelict_st->type(5);
  derelict_st->box(FL_FLAT_BOX);
  derelict_st->color((Fl_Color)178);
  derelict_st->selection_color((Fl_Color)62);
  derelict_st->labeltype(FL_NORMAL_LABEL);
  derelict_st->labelfont(0);
  derelict_st->labelsize(10);
  derelict_st->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_st->maximum(127);
  derelict_st->step(1);
  derelict_st->textcolor(FL_BACKGROUND2_COLOR);
  derelict_st->callback((Fl_Callback*)cb_derelict_st);
  derelict_st->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_st->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_st
{ derelict_oct = new RKR_Slider(56, 120, 100, 10, "Sub Octv");
  derelict_oct->type(5);
  derelict_oct->box(FL_FLAT_BOX);
  derelict_oct->color((Fl_Color)178);
  derelict_oct->selection_color((Fl_Color)62);
  derelict_oct->labeltype(FL_NORMAL_LABEL);
  derelict_oct->labelfont(0);
  derelict_oct->labelsize(10);
  derelict_oct->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_oct->maximum(127);
  derelict_oct->step(1);
  derelict_oct->textcolor(FL_BACKGROUND2_COLOR);
  derelict_oct->callback((Fl_Callback*)cb_derelict_oct);
  derelict_oct->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_oct->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_oct
{ derelict_pan = new RKR_Slider(56, 134, 100, 10, "Pan");
  derelict_pan->type(5);
  derelict_pan->box(FL_FLAT_BOX);
  derelict_pan->color((Fl_Color)178);
  derelict_pan->selection_color((Fl_Color)62);
  derelict_pan->labeltype(FL_NORMAL_LABEL);
  derelict_pan->labelfont(0);
  derelict_pan->labelsize(10);
  derelict_pan->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_pan->minimum(-64);
  derelict_pan->maximum(63);
  derelict_pan->step(1);
  derelict_pan->textcolor(FL_BACKGROUND2_COLOR);
  derelict_pan->callback((Fl_Callback*)cb_derelict_pan);
  derelict_pan->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_pan
{ derelict_pf = new RKR_Check_Button(50, 144, 66, 15, "Pre Filter");
  derelict_pf->box(FL_NO_BOX);
  derelict_pf->down_box(FL_BORDER_BOX);
  derelict_pf->color(FL_BACKGROUND_COLOR);
  derelict_pf->selection_color(FL_FOREGROUND_COLOR);
  derelict_pf->labeltype(FL_NORMAL_LABEL);
  derelict_pf->labelfont(0);
  derelict_pf->labelsize(10);
  derelict_pf->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_pf->callback((Fl_Callback*)cb_derelict_pf, (void*)(2));
  derelict_pf->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  derelict_pf->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* derelict_pf
{ derelict_lpf = new RKR_Slider(56, 159, 100, 10, "LPF");
  derelict_lpf->type(5);
  derelict_lpf->box(FL_FLAT_BOX);
  derelict_lpf->color((Fl_Color)178);
  derelict_lpf->selection_color((Fl_Color)62);
  derelict_lpf->labeltype(FL_NORMAL_LABEL);
  derelict_lpf->labelfont(0);
  derelict_lpf->labelsize(10);
  derelict_lpf->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_lpf->minimum(20);
  derelict_lpf->maximum(26000);
  derelict_lpf->step(1);
  derelict_lpf->value(20000);
  derelict_lpf->textcolor(FL_BACKGROUND2_COLOR);
  derelict_lpf->callback((Fl_Callback*)cb_derelict_lpf);
  derelict_lpf->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_lpf->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_lpf
{ derelict_hpf = new RKR_Slider(56, 171, 100, 10, "HPF");
  derelict_hpf->type(5);
  derelict_hpf->box(FL_FLAT_BOX);
  derelict_hpf->color((Fl_Color)178);
  derelict_hpf->selection_color((Fl_Color)62);
  derelict_hpf->labeltype(FL_NORMAL_LABEL);
  derelict_hpf->labelfont(0);
  derelict_hpf->labelsize(10);
  derelict_hpf->labelcolor(FL_BACKGROUND2_COLOR);
  derelict_hpf->minimum(20);
  derelict_hpf->maximum(20000);
  derelict_hpf->step(1);
  derelict_hpf->value(20);
  derelict_hpf->textcolor(FL_BACKGROUND2_COLOR);
  derelict_hpf->callback((Fl_Callback*)cb_derelict_hpf);
  derelict_hpf->align(Fl_Align(FL_ALIGN_LEFT));
  derelict_hpf->when(FL_WHEN_CHANGED);
} // RKR_Slider* derelict_hpf
position(X, Y);
end();
}
