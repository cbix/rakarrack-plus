// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "phaser_gui.h"

void PhaserGui::cb_phaser_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_PHASER]);
 return;
}
rkr->EFX_Bypass[EFX_PHASER]=(int)o->value();
if((int) o->value()==0)
rkr->efx_Phaser->cleanup();
rgui->findpos(EFX_PHASER,(int)o->value(),o);
}
void PhaserGui::cb_phaser_activar(RKR_Light_Button* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_activar_i(o,v);
}

void PhaserGui::cb_phaser_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12006))rkr->efx_Phaser->setpreset((int) o->value());
phaser_WD->value(Dry_Wet(rkr->efx_Phaser->getpar(Phaser_DryWet)));
phaser_pan->value(rkr->efx_Phaser->getpar(Phaser_Pan)-64);
phaser_freq->value(rkr->efx_Phaser->getpar(Phaser_LFO_Tempo));
phaser_rnd->value(rkr->efx_Phaser->getpar(Phaser_LFO_Random));
phaser_lfotype->value(rkr->efx_Phaser->getpar(Phaser_LFO_Type));
phaser_stdf->value(rkr->efx_Phaser->getpar(Phaser_LFO_Stereo));
phaser_dpth->value(rkr->efx_Phaser->getpar(Phaser_Depth));
phaser_fb->value(rkr->efx_Phaser->getpar(Phaser_Feedback));
phaser_stages->value(rkr->efx_Phaser->getpar(Phaser_Stages));
phaser_LR->value(rkr->efx_Phaser->getpar(Phaser_LR_Cross)-64);
phaser_subs->value(rkr->efx_Phaser->getpar(Phaser_Subtract));
phaser_phase->value(rkr->efx_Phaser->getpar(Phaser_Phase));
}
void PhaserGui::cb_phaser_preset(RKR_Choice* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_preset_i(o,v);
}

Fl_Menu_Item PhaserGui::menu_phaser_preset[] = {
 {"Phaser 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phaser 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phaser 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phaser 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phaser 5", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phaser 6", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void PhaserGui::cb_phaser_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_DryWet);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_DryWet,Dry_Wet((int)(o->value())));
}
void PhaserGui::cb_phaser_WD(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_WD_i(o,v);
}

void PhaserGui::cb_phaser_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_Pan);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_Pan,(int)(o->value()+64));
}
void PhaserGui::cb_phaser_pan(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_pan_i(o,v);
}

void PhaserGui::cb_phaser_freq_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_LFO_Tempo);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_LFO_Tempo,(int)o->value());
}
void PhaserGui::cb_phaser_freq(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_freq_i(o,v);
}

void PhaserGui::cb_phaser_rnd_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_LFO_Random);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_LFO_Random,(int)o->value());
}
void PhaserGui::cb_phaser_rnd(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_rnd_i(o,v);
}

void PhaserGui::cb_phaser_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_LFO_Type);
 return;
} 

rkr->efx_Phaser->changepar(Phaser_LFO_Type,(int)o->value());
}
void PhaserGui::cb_phaser_lfotype(RKR_Choice* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_lfotype_i(o,v);
}

void PhaserGui::cb_phaser_subs_i(RKR_Check_Button* o, void*) {
  rkr->efx_Phaser->changepar(Phaser_Subtract,(int)o->value());
}
void PhaserGui::cb_phaser_subs(RKR_Check_Button* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_subs_i(o,v);
}

void PhaserGui::cb_phaser_phase_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_Phase);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_Phase,(int)o->value());
}
void PhaserGui::cb_phaser_phase(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_phase_i(o,v);
}

void PhaserGui::cb_phaser_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_LFO_Stereo);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_LFO_Stereo,(int)o->value());
}
void PhaserGui::cb_phaser_stdf(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_stdf_i(o,v);
}

void PhaserGui::cb_phaser_dpth_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_Depth);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_Depth,(int)o->value());
}
void PhaserGui::cb_phaser_dpth(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_dpth_i(o,v);
}

void PhaserGui::cb_phaser_fb_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_Feedback);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_Feedback,(int)o->value());
}
void PhaserGui::cb_phaser_fb(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_fb_i(o,v);
}

void PhaserGui::cb_phaser_stages_i(RKR_Counter* o, void*) {
  rkr->efx_Phaser->changepar(Phaser_Stages,(int)o->value());
}
void PhaserGui::cb_phaser_stages(RKR_Counter* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_stages_i(o,v);
}

void PhaserGui::cb_phaser_LR_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Phaser_LR_Cross);
 return;
} 
rkr->efx_Phaser->changepar(Phaser_LR_Cross,(int)(o->value()+64));
}
void PhaserGui::cb_phaser_LR(RKR_Slider* o, void* v) {
  ((PhaserGui*)(o->parent()))->cb_phaser_LR_i(o,v);
}
PhaserGui::PhaserGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ phaser_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  phaser_activar->box(FL_UP_BOX);
  phaser_activar->shortcut(0x37);
  phaser_activar->color((Fl_Color)62);
  phaser_activar->selection_color((Fl_Color)1);
  phaser_activar->labeltype(FL_NORMAL_LABEL);
  phaser_activar->labelfont(0);
  phaser_activar->labelsize(10);
  phaser_activar->labelcolor(FL_FOREGROUND_COLOR);
  phaser_activar->callback((Fl_Callback*)cb_phaser_activar, (void*)(2));
  phaser_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  phaser_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* phaser_activar
{ phaser_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  phaser_preset->box(FL_FLAT_BOX);
  phaser_preset->down_box(FL_BORDER_BOX);
  phaser_preset->color(FL_BACKGROUND_COLOR);
  phaser_preset->selection_color(FL_FOREGROUND_COLOR);
  phaser_preset->labeltype(FL_NORMAL_LABEL);
  phaser_preset->labelfont(0);
  phaser_preset->labelsize(10);
  phaser_preset->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_preset->textsize(10);
  phaser_preset->textcolor(FL_BACKGROUND2_COLOR);
  phaser_preset->callback((Fl_Callback*)cb_phaser_preset, (void*)(12006));
  phaser_preset->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_preset->when(FL_WHEN_RELEASE_ALWAYS);
  phaser_preset->menu(menu_phaser_preset);
} // RKR_Choice* phaser_preset
{ phaser_WD = new RKR_Slider(56, 29, 100, 10, "Dry/Wet");
  phaser_WD->type(5);
  phaser_WD->box(FL_FLAT_BOX);
  phaser_WD->color((Fl_Color)178);
  phaser_WD->selection_color((Fl_Color)62);
  phaser_WD->labeltype(FL_NORMAL_LABEL);
  phaser_WD->labelfont(0);
  phaser_WD->labelsize(10);
  phaser_WD->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_WD->maximum(127);
  phaser_WD->step(1);
  phaser_WD->textcolor(FL_BACKGROUND2_COLOR);
  phaser_WD->callback((Fl_Callback*)cb_phaser_WD);
  phaser_WD->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_WD
{ phaser_pan = new RKR_Slider(56, 41, 100, 10, "Pan");
  phaser_pan->type(5);
  phaser_pan->box(FL_FLAT_BOX);
  phaser_pan->color((Fl_Color)178);
  phaser_pan->selection_color((Fl_Color)62);
  phaser_pan->labeltype(FL_NORMAL_LABEL);
  phaser_pan->labelfont(0);
  phaser_pan->labelsize(10);
  phaser_pan->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_pan->minimum(-64);
  phaser_pan->maximum(63);
  phaser_pan->step(1);
  phaser_pan->textcolor(FL_BACKGROUND2_COLOR);
  phaser_pan->callback((Fl_Callback*)cb_phaser_pan);
  phaser_pan->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_pan
{ phaser_freq = new RKR_Slider(56, 53, 100, 10, "Tempo");
  phaser_freq->type(5);
  phaser_freq->box(FL_FLAT_BOX);
  phaser_freq->color((Fl_Color)178);
  phaser_freq->selection_color((Fl_Color)62);
  phaser_freq->labeltype(FL_NORMAL_LABEL);
  phaser_freq->labelfont(0);
  phaser_freq->labelsize(10);
  phaser_freq->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_freq->minimum(1);
  phaser_freq->maximum(600);
  phaser_freq->step(1);
  phaser_freq->textcolor(FL_BACKGROUND2_COLOR);
  phaser_freq->callback((Fl_Callback*)cb_phaser_freq);
  phaser_freq->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_freq->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_freq
{ phaser_rnd = new RKR_Slider(56, 65, 100, 10, "Random");
  phaser_rnd->type(5);
  phaser_rnd->box(FL_FLAT_BOX);
  phaser_rnd->color((Fl_Color)178);
  phaser_rnd->selection_color((Fl_Color)62);
  phaser_rnd->labeltype(FL_NORMAL_LABEL);
  phaser_rnd->labelfont(0);
  phaser_rnd->labelsize(10);
  phaser_rnd->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_rnd->maximum(127);
  phaser_rnd->step(1);
  phaser_rnd->textcolor(FL_BACKGROUND2_COLOR);
  phaser_rnd->callback((Fl_Callback*)cb_phaser_rnd);
  phaser_rnd->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_rnd->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_rnd
{ RKR_Choice* o = phaser_lfotype = new RKR_Choice(78, 77, 72, 16, "LFO Type");
  phaser_lfotype->box(FL_FLAT_BOX);
  phaser_lfotype->down_box(FL_BORDER_BOX);
  phaser_lfotype->color(FL_BACKGROUND_COLOR);
  phaser_lfotype->selection_color(FL_FOREGROUND_COLOR);
  phaser_lfotype->labeltype(FL_NORMAL_LABEL);
  phaser_lfotype->labelfont(0);
  phaser_lfotype->labelsize(10);
  phaser_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_lfotype->textsize(10);
  phaser_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  phaser_lfotype->callback((Fl_Callback*)cb_phaser_lfotype);
  phaser_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* phaser_lfotype
{ phaser_subs = new RKR_Check_Button(40, 94, 65, 15, "Subtract");
  phaser_subs->box(FL_NO_BOX);
  phaser_subs->down_box(FL_BORDER_BOX);
  phaser_subs->color(FL_BACKGROUND_COLOR);
  phaser_subs->selection_color(FL_FOREGROUND_COLOR);
  phaser_subs->labeltype(FL_NORMAL_LABEL);
  phaser_subs->labelfont(0);
  phaser_subs->labelsize(10);
  phaser_subs->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_subs->callback((Fl_Callback*)cb_phaser_subs, (void*)(2));
  phaser_subs->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  phaser_subs->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* phaser_subs
{ phaser_phase = new RKR_Slider(56, 110, 100, 10, "Phase");
  phaser_phase->type(5);
  phaser_phase->box(FL_FLAT_BOX);
  phaser_phase->color((Fl_Color)178);
  phaser_phase->selection_color((Fl_Color)62);
  phaser_phase->labeltype(FL_NORMAL_LABEL);
  phaser_phase->labelfont(0);
  phaser_phase->labelsize(10);
  phaser_phase->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_phase->maximum(127);
  phaser_phase->step(1);
  phaser_phase->textcolor(FL_BACKGROUND2_COLOR);
  phaser_phase->callback((Fl_Callback*)cb_phaser_phase);
  phaser_phase->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_phase->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_phase
{ phaser_stdf = new RKR_Slider(56, 121, 100, 10, "Stereo Df");
  phaser_stdf->tooltip("LFO L/R Delay");
  phaser_stdf->type(5);
  phaser_stdf->box(FL_FLAT_BOX);
  phaser_stdf->color((Fl_Color)178);
  phaser_stdf->selection_color((Fl_Color)62);
  phaser_stdf->labeltype(FL_NORMAL_LABEL);
  phaser_stdf->labelfont(0);
  phaser_stdf->labelsize(10);
  phaser_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_stdf->maximum(127);
  phaser_stdf->step(1);
  phaser_stdf->textcolor(FL_BACKGROUND2_COLOR);
  phaser_stdf->callback((Fl_Callback*)cb_phaser_stdf);
  phaser_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_stdf
{ phaser_dpth = new RKR_Slider(56, 132, 100, 10, "Depth");
  phaser_dpth->tooltip("Phase Depth");
  phaser_dpth->type(5);
  phaser_dpth->box(FL_FLAT_BOX);
  phaser_dpth->color((Fl_Color)178);
  phaser_dpth->selection_color((Fl_Color)62);
  phaser_dpth->labeltype(FL_NORMAL_LABEL);
  phaser_dpth->labelfont(0);
  phaser_dpth->labelsize(10);
  phaser_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_dpth->maximum(127);
  phaser_dpth->step(1);
  phaser_dpth->textcolor(FL_BACKGROUND2_COLOR);
  phaser_dpth->callback((Fl_Callback*)cb_phaser_dpth);
  phaser_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_dpth->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_dpth
{ phaser_fb = new RKR_Slider(56, 144, 100, 10, "Feedback");
  phaser_fb->type(5);
  phaser_fb->box(FL_FLAT_BOX);
  phaser_fb->color((Fl_Color)178);
  phaser_fb->selection_color((Fl_Color)62);
  phaser_fb->labeltype(FL_NORMAL_LABEL);
  phaser_fb->labelfont(0);
  phaser_fb->labelsize(10);
  phaser_fb->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_fb->maximum(127);
  phaser_fb->step(1);
  phaser_fb->textcolor(FL_BACKGROUND2_COLOR);
  phaser_fb->callback((Fl_Callback*)cb_phaser_fb);
  phaser_fb->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_fb->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_fb
{ RKR_Counter* o = phaser_stages = new RKR_Counter(72, 156, 52, 12, "Stages");
  phaser_stages->type(1);
  phaser_stages->box(FL_THIN_UP_BOX);
  phaser_stages->color(FL_BACKGROUND_COLOR);
  phaser_stages->selection_color(FL_INACTIVE_COLOR);
  phaser_stages->labeltype(FL_NORMAL_LABEL);
  phaser_stages->labelfont(0);
  phaser_stages->labelsize(10);
  phaser_stages->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_stages->minimum(1);
  phaser_stages->maximum(12);
  phaser_stages->step(1);
  phaser_stages->value(1);
  phaser_stages->textsize(9);
  phaser_stages->callback((Fl_Callback*)cb_phaser_stages);
  phaser_stages->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_stages->when(FL_WHEN_CHANGED);
  o->set_text_offset(-1);
} // RKR_Counter* phaser_stages
{ phaser_LR = new RKR_Slider(56, 171, 100, 10, "L/R Cross");
  phaser_LR->type(5);
  phaser_LR->box(FL_FLAT_BOX);
  phaser_LR->color((Fl_Color)178);
  phaser_LR->selection_color((Fl_Color)62);
  phaser_LR->labeltype(FL_NORMAL_LABEL);
  phaser_LR->labelfont(0);
  phaser_LR->labelsize(10);
  phaser_LR->labelcolor(FL_BACKGROUND2_COLOR);
  phaser_LR->minimum(-64);
  phaser_LR->maximum(63);
  phaser_LR->step(1);
  phaser_LR->textcolor(FL_BACKGROUND2_COLOR);
  phaser_LR->callback((Fl_Callback*)cb_phaser_LR);
  phaser_LR->align(Fl_Align(FL_ALIGN_LEFT));
  phaser_LR->when(FL_WHEN_CHANGED);
} // RKR_Slider* phaser_LR
position(X, Y);
end();
}
