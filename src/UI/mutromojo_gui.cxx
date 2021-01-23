// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "mutromojo_gui.h"

void MutromojoGui::cb_mutromojo_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_MUTROMOJO]);
 return;
}
rkr->EFX_Bypass[EFX_MUTROMOJO]=(int)o->value();
if((int) o->value()==0)
rkr->efx_MuTroMojo->cleanup();
rgui->findpos(EFX_MUTROMOJO,(int)o->value(),o);
}
void MutromojoGui::cb_mutromojo_activar(RKR_Light_Button* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_activar_i(o,v);
}

void MutromojoGui::cb_mutromojo_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12031))rkr->efx_MuTroMojo->setpreset((int) o->value());
mutromojo_WD->value(Dry_Wet(rkr->efx_MuTroMojo->getpar(MuTro_DryWet)));

int temp=rkr->efx_MuTroMojo->getpar(Mutro_Mode_Legacy);

if((temp==1) || (temp==3)) mutromojo_qm->value(1); else mutromojo_qm->value(0);
if((temp==2) || (temp==3)) mutromojo_nat->value(1); else mutromojo_nat->value(0);


mutromojo_q->value(rkr->efx_MuTroMojo->getpar(MuTro_Resonance));
mutromojo_freq->value(rkr->efx_MuTroMojo->getpar(MuTro_LFO_Tempo));
mutromojo_Rnd->value(rkr->efx_MuTroMojo->getpar(MuTro_LFO_Random));
mutromojo_lfotype->value(rkr->efx_MuTroMojo->getpar(MuTro_LFO_Type));
mutromojo_St->value(rkr->efx_MuTroMojo->getpar(MuTro_LFO_Stereo)-64);
mutromojo_dpth->value(rkr->efx_MuTroMojo->getpar(MuTro_Depth));
mutromojo_ampsns->value(rkr->efx_MuTroMojo->getpar(MuTro_Env_Sens));
mutromojo_ampsnsinv->value(rkr->efx_MuTroMojo->getpar(MuTro_Wah));
mutromojo_smooth->value(rkr->efx_MuTroMojo->getpar(MuTro_Env_Smooth));
mutromojo_lp->value(rkr->efx_MuTroMojo->getpar(MuTro_LowPass));
mutromojo_bp->value(rkr->efx_MuTroMojo->getpar(MuTro_BandPass));
mutromojo_hp->value(rkr->efx_MuTroMojo->getpar(MuTro_HighPass));
svfilter_stages->value(rkr->efx_MuTroMojo->getpar(MuTro_Stages));
mutromojo_rng->value(rkr->efx_MuTroMojo->getpar(MuTro_Range));
mutromojo_minfreq->value(rkr->efx_MuTroMojo->getpar(MuTro_St_Freq));
mutromojo_res->value(rkr->efx_MuTroMojo->getpar(MuTro_Mod_Res));
o->value(rkr->efx_MuTroMojo->getpar(Mutro_Preset));
o->redraw();
}
void MutromojoGui::cb_mutromojo_preset(RKR_Choice* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_preset_i(o,v);
}

Fl_Menu_Item MutromojoGui::menu_mutromojo_preset[] = {
 {"WahWah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Mutron", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phase Wah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Phaser", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Quack Quack", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"SmoothTron", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Wah Fever", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void MutromojoGui::cb_mutromojo_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_DryWet);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_DryWet,Dry_Wet((int)(o->value())));
}
void MutromojoGui::cb_mutromojo_WD(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_WD_i(o,v);
}

void MutromojoGui::cb_mutromojo_qm_i(RKR_Check_Button* o, void*) {
  if((int)o->value()) 
rkr->efx_MuTroMojo->Pmode +=1;
else
rkr->efx_MuTroMojo->Pmode -=1;
rkr->efx_MuTroMojo->changepar(Mutro_Mode_Legacy,rkr->efx_MuTroMojo->Pmode);
}
void MutromojoGui::cb_mutromojo_qm(RKR_Check_Button* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_qm_i(o,v);
}

void MutromojoGui::cb_mutromojo_lp_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_LowPass);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_LowPass,(int)o->value());
}
void MutromojoGui::cb_mutromojo_lp(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_lp_i(o,v);
}

void MutromojoGui::cb_mutromojo_nat_i(RKR_Check_Button* o, void*) {
  if((int)o->value()) 
rkr->efx_MuTroMojo->Pmode +=2;
else
rkr->efx_MuTroMojo->Pmode -=2;
rkr->efx_MuTroMojo->changepar(Mutro_Mode_Legacy,rkr->efx_MuTroMojo->Pmode);
}
void MutromojoGui::cb_mutromojo_nat(RKR_Check_Button* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_nat_i(o,v);
}

void MutromojoGui::cb_mutromojo_bp_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_BandPass);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_BandPass,(int)o->value());
}
void MutromojoGui::cb_mutromojo_bp(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_bp_i(o,v);
}

void MutromojoGui::cb_mutromojo_res_i(RKR_Check_Button* o, void*) {
  rkr->efx_MuTroMojo->changepar(MuTro_Mod_Res,(int)o->value());
}
void MutromojoGui::cb_mutromojo_res(RKR_Check_Button* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_res_i(o,v);
}

void MutromojoGui::cb_mutromojo_hp_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_HighPass);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_HighPass,(int)o->value());
}
void MutromojoGui::cb_mutromojo_hp(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_hp_i(o,v);
}

void MutromojoGui::cb_svfilter_stages_i(RKR_Counter* o, void*) {
  rkr->efx_MuTroMojo->changepar(MuTro_Stages,(int)o->value());
}
void MutromojoGui::cb_svfilter_stages(RKR_Counter* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_svfilter_stages_i(o,v);
}

void MutromojoGui::cb_mutromojo_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_LFO_Type);
 return;
}

rkr->efx_MuTroMojo->changepar(MuTro_LFO_Type,(int)o->value());
}
void MutromojoGui::cb_mutromojo_lfotype(RKR_Choice* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_lfotype_i(o,v);
}

void MutromojoGui::cb_mutromojo_dpth_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_Depth);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_Depth,(int)o->value());
}
void MutromojoGui::cb_mutromojo_dpth(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_dpth_i(o,v);
}

void MutromojoGui::cb_mutromojo_freq_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_LFO_Tempo);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_LFO_Tempo,(int)o->value());
}
void MutromojoGui::cb_mutromojo_freq(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_freq_i(o,v);
}

void MutromojoGui::cb_mutromojo_q_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_Resonance);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_Resonance,(int)(o->value()));
}
void MutromojoGui::cb_mutromojo_q(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_q_i(o,v);
}

void MutromojoGui::cb_mutromojo_rng_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_Range);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_Range,(int)o->value());
}
void MutromojoGui::cb_mutromojo_rng(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_rng_i(o,v);
}

void MutromojoGui::cb_mutromojo_ampsnsinv_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_Wah);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_Wah,(int)o->value());
}
void MutromojoGui::cb_mutromojo_ampsnsinv(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_ampsnsinv_i(o,v);
}

void MutromojoGui::cb_mutromojo_ampsns_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_Env_Sens);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_Env_Sens,(int)o->value());
}
void MutromojoGui::cb_mutromojo_ampsns(RKR_Slider* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_ampsns_i(o,v);
}

void MutromojoGui::cb_mutromojo_smooth_i(RKR_Value_Input* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_Env_Smooth);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_Env_Smooth,(int)o->value());
}
void MutromojoGui::cb_mutromojo_smooth(RKR_Value_Input* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_smooth_i(o,v);
}

void MutromojoGui::cb_mutromojo_Rnd_i(RKR_Value_Input* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_LFO_Random);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_LFO_Random,(int)o->value());
}
void MutromojoGui::cb_mutromojo_Rnd(RKR_Value_Input* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_Rnd_i(o,v);
}

void MutromojoGui::cb_mutromojo_St_i(RKR_Value_Input* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_LFO_Stereo);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_LFO_Stereo,(int)o->value()+64);
}
void MutromojoGui::cb_mutromojo_St(RKR_Value_Input* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_St_i(o,v);
}

void MutromojoGui::cb_mutromojo_minfreq_i(RKR_Value_Input* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_MuTro_St_Freq);
 return;
}
rkr->efx_MuTroMojo->changepar(MuTro_St_Freq,(int)o->value());
}
void MutromojoGui::cb_mutromojo_minfreq(RKR_Value_Input* o, void* v) {
  ((MutromojoGui*)(o->parent()))->cb_mutromojo_minfreq_i(o,v);
}
MutromojoGui::MutromojoGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ mutromojo_activar = new RKR_Light_Button(6, 5, 34, 18, "On");
  mutromojo_activar->box(FL_UP_BOX);
  mutromojo_activar->shortcut(0x36);
  mutromojo_activar->color((Fl_Color)62);
  mutromojo_activar->selection_color((Fl_Color)1);
  mutromojo_activar->labeltype(FL_NORMAL_LABEL);
  mutromojo_activar->labelfont(0);
  mutromojo_activar->labelsize(10);
  mutromojo_activar->labelcolor(FL_FOREGROUND_COLOR);
  mutromojo_activar->callback((Fl_Callback*)cb_mutromojo_activar, (void*)(2));
  mutromojo_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  mutromojo_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* mutromojo_activar
{ mutromojo_preset = new RKR_Choice(78, 5, 76, 18, "Preset");
  mutromojo_preset->box(FL_FLAT_BOX);
  mutromojo_preset->down_box(FL_BORDER_BOX);
  mutromojo_preset->color(FL_BACKGROUND_COLOR);
  mutromojo_preset->selection_color(FL_FOREGROUND_COLOR);
  mutromojo_preset->labeltype(FL_NORMAL_LABEL);
  mutromojo_preset->labelfont(0);
  mutromojo_preset->labelsize(10);
  mutromojo_preset->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_preset->textsize(10);
  mutromojo_preset->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_preset->callback((Fl_Callback*)cb_mutromojo_preset, (void*)(12031));
  mutromojo_preset->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_preset->when(FL_WHEN_RELEASE_ALWAYS);
  mutromojo_preset->menu(menu_mutromojo_preset);
} // RKR_Choice* mutromojo_preset
{ mutromojo_WD = new RKR_Slider(56, 25, 100, 10, "Dry/Wet");
  mutromojo_WD->type(5);
  mutromojo_WD->box(FL_FLAT_BOX);
  mutromojo_WD->color((Fl_Color)178);
  mutromojo_WD->selection_color((Fl_Color)62);
  mutromojo_WD->labeltype(FL_NORMAL_LABEL);
  mutromojo_WD->labelfont(0);
  mutromojo_WD->labelsize(10);
  mutromojo_WD->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_WD->maximum(127);
  mutromojo_WD->step(1);
  mutromojo_WD->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_WD->callback((Fl_Callback*)cb_mutromojo_WD);
  mutromojo_WD->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_WD
{ mutromojo_qm = new RKR_Check_Button(18, 34, 15, 15, "M");
  mutromojo_qm->tooltip("Analog Gain Mode");
  mutromojo_qm->box(FL_NO_BOX);
  mutromojo_qm->down_box(FL_BORDER_BOX);
  mutromojo_qm->color(FL_BACKGROUND_COLOR);
  mutromojo_qm->selection_color(FL_FOREGROUND_COLOR);
  mutromojo_qm->labeltype(FL_NORMAL_LABEL);
  mutromojo_qm->labelfont(0);
  mutromojo_qm->labelsize(10);
  mutromojo_qm->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_qm->callback((Fl_Callback*)cb_mutromojo_qm, (void*)(2));
  mutromojo_qm->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_qm->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* mutromojo_qm
{ mutromojo_lp = new RKR_Slider(56, 37, 100, 10, "LP");
  mutromojo_lp->tooltip("Lowpass Level");
  mutromojo_lp->type(5);
  mutromojo_lp->box(FL_FLAT_BOX);
  mutromojo_lp->color((Fl_Color)178);
  mutromojo_lp->selection_color((Fl_Color)62);
  mutromojo_lp->labeltype(FL_NORMAL_LABEL);
  mutromojo_lp->labelfont(0);
  mutromojo_lp->labelsize(10);
  mutromojo_lp->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_lp->minimum(-64);
  mutromojo_lp->maximum(64);
  mutromojo_lp->step(1);
  mutromojo_lp->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_lp->callback((Fl_Callback*)cb_mutromojo_lp);
  mutromojo_lp->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_lp->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_lp
{ mutromojo_nat = new RKR_Check_Button(18, 44, 15, 15, "N");
  mutromojo_nat->tooltip("Exponential Wah");
  mutromojo_nat->box(FL_NO_BOX);
  mutromojo_nat->down_box(FL_BORDER_BOX);
  mutromojo_nat->color(FL_BACKGROUND_COLOR);
  mutromojo_nat->selection_color(FL_FOREGROUND_COLOR);
  mutromojo_nat->labeltype(FL_NORMAL_LABEL);
  mutromojo_nat->labelfont(0);
  mutromojo_nat->labelsize(10);
  mutromojo_nat->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_nat->callback((Fl_Callback*)cb_mutromojo_nat, (void*)(2));
  mutromojo_nat->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_nat->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* mutromojo_nat
{ mutromojo_bp = new RKR_Slider(56, 49, 100, 10, "BP");
  mutromojo_bp->tooltip("Bandpass Level");
  mutromojo_bp->type(5);
  mutromojo_bp->box(FL_FLAT_BOX);
  mutromojo_bp->color((Fl_Color)178);
  mutromojo_bp->selection_color((Fl_Color)62);
  mutromojo_bp->labeltype(FL_NORMAL_LABEL);
  mutromojo_bp->labelfont(0);
  mutromojo_bp->labelsize(10);
  mutromojo_bp->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_bp->minimum(-64);
  mutromojo_bp->maximum(64);
  mutromojo_bp->step(1);
  mutromojo_bp->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_bp->callback((Fl_Callback*)cb_mutromojo_bp);
  mutromojo_bp->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_bp->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_bp
{ mutromojo_res = new RKR_Check_Button(18, 54, 15, 15, "R");
  mutromojo_res->tooltip("Modulate Resonance");
  mutromojo_res->box(FL_NO_BOX);
  mutromojo_res->down_box(FL_BORDER_BOX);
  mutromojo_res->color(FL_BACKGROUND_COLOR);
  mutromojo_res->selection_color(FL_FOREGROUND_COLOR);
  mutromojo_res->labeltype(FL_NORMAL_LABEL);
  mutromojo_res->labelfont(0);
  mutromojo_res->labelsize(10);
  mutromojo_res->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_res->callback((Fl_Callback*)cb_mutromojo_res, (void*)(2));
  mutromojo_res->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_res->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* mutromojo_res
{ mutromojo_hp = new RKR_Slider(56, 61, 100, 10, "HP");
  mutromojo_hp->tooltip("Highpass Level");
  mutromojo_hp->type(5);
  mutromojo_hp->box(FL_FLAT_BOX);
  mutromojo_hp->color((Fl_Color)178);
  mutromojo_hp->selection_color((Fl_Color)62);
  mutromojo_hp->labeltype(FL_NORMAL_LABEL);
  mutromojo_hp->labelfont(0);
  mutromojo_hp->labelsize(10);
  mutromojo_hp->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_hp->minimum(-64);
  mutromojo_hp->maximum(64);
  mutromojo_hp->step(1);
  mutromojo_hp->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_hp->callback((Fl_Callback*)cb_mutromojo_hp);
  mutromojo_hp->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_hp->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_hp
{ RKR_Counter* o = svfilter_stages = new RKR_Counter(27, 74, 27, 12, "Stg");
  svfilter_stages->tooltip("Filter Stages");
  svfilter_stages->type(1);
  svfilter_stages->box(FL_THIN_UP_BOX);
  svfilter_stages->color(FL_BACKGROUND_COLOR);
  svfilter_stages->selection_color(FL_INACTIVE_COLOR);
  svfilter_stages->labeltype(FL_NORMAL_LABEL);
  svfilter_stages->labelfont(0);
  svfilter_stages->labelsize(10);
  svfilter_stages->labelcolor(FL_BACKGROUND2_COLOR);
  svfilter_stages->minimum(1);
  svfilter_stages->maximum(12);
  svfilter_stages->step(1);
  svfilter_stages->value(1);
  svfilter_stages->textsize(9);
  svfilter_stages->callback((Fl_Callback*)cb_svfilter_stages);
  svfilter_stages->align(Fl_Align(FL_ALIGN_LEFT));
  svfilter_stages->when(FL_WHEN_CHANGED);
  o->set_text_offset(-1);
} // RKR_Counter* svfilter_stages
{ RKR_Choice* o = mutromojo_lfotype = new RKR_Choice(80, 73, 72, 16, "LFO");
  mutromojo_lfotype->box(FL_FLAT_BOX);
  mutromojo_lfotype->down_box(FL_BORDER_BOX);
  mutromojo_lfotype->color(FL_BACKGROUND_COLOR);
  mutromojo_lfotype->selection_color(FL_FOREGROUND_COLOR);
  mutromojo_lfotype->labeltype(FL_NORMAL_LABEL);
  mutromojo_lfotype->labelfont(0);
  mutromojo_lfotype->labelsize(10);
  mutromojo_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_lfotype->textsize(10);
  mutromojo_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_lfotype->callback((Fl_Callback*)cb_mutromojo_lfotype);
  mutromojo_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* mutromojo_lfotype
{ mutromojo_dpth = new RKR_Slider(56, 91, 100, 10, "Depth");
  mutromojo_dpth->type(5);
  mutromojo_dpth->box(FL_FLAT_BOX);
  mutromojo_dpth->color((Fl_Color)178);
  mutromojo_dpth->selection_color((Fl_Color)62);
  mutromojo_dpth->labeltype(FL_NORMAL_LABEL);
  mutromojo_dpth->labelfont(0);
  mutromojo_dpth->labelsize(10);
  mutromojo_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_dpth->maximum(127);
  mutromojo_dpth->step(1);
  mutromojo_dpth->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_dpth->callback((Fl_Callback*)cb_mutromojo_dpth);
  mutromojo_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_dpth->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_dpth
{ mutromojo_freq = new RKR_Slider(56, 103, 100, 10, "Tempo");
  mutromojo_freq->type(5);
  mutromojo_freq->box(FL_FLAT_BOX);
  mutromojo_freq->color((Fl_Color)178);
  mutromojo_freq->selection_color((Fl_Color)62);
  mutromojo_freq->labeltype(FL_NORMAL_LABEL);
  mutromojo_freq->labelfont(0);
  mutromojo_freq->labelsize(10);
  mutromojo_freq->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_freq->minimum(1);
  mutromojo_freq->maximum(600);
  mutromojo_freq->step(1);
  mutromojo_freq->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_freq->callback((Fl_Callback*)cb_mutromojo_freq);
  mutromojo_freq->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_freq->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_freq
{ mutromojo_q = new RKR_Slider(56, 116, 100, 10, "Res.");
  mutromojo_q->tooltip("Resonance");
  mutromojo_q->type(5);
  mutromojo_q->box(FL_FLAT_BOX);
  mutromojo_q->color((Fl_Color)178);
  mutromojo_q->selection_color((Fl_Color)62);
  mutromojo_q->labeltype(FL_NORMAL_LABEL);
  mutromojo_q->labelfont(0);
  mutromojo_q->labelsize(10);
  mutromojo_q->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_q->minimum(1);
  mutromojo_q->maximum(127);
  mutromojo_q->step(1);
  mutromojo_q->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_q->callback((Fl_Callback*)cb_mutromojo_q);
  mutromojo_q->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_q->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_q
{ mutromojo_rng = new RKR_Slider(56, 128, 100, 10, "Range");
  mutromojo_rng->tooltip("Sweep Range");
  mutromojo_rng->type(5);
  mutromojo_rng->box(FL_FLAT_BOX);
  mutromojo_rng->color((Fl_Color)178);
  mutromojo_rng->selection_color((Fl_Color)62);
  mutromojo_rng->labeltype(FL_NORMAL_LABEL);
  mutromojo_rng->labelfont(0);
  mutromojo_rng->labelsize(10);
  mutromojo_rng->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_rng->minimum(10);
  mutromojo_rng->maximum(6000);
  mutromojo_rng->step(1);
  mutromojo_rng->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_rng->callback((Fl_Callback*)cb_mutromojo_rng);
  mutromojo_rng->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_rng->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_rng
{ mutromojo_ampsnsinv = new RKR_Slider(56, 140, 100, 10, "Wah");
  mutromojo_ampsnsinv->type(5);
  mutromojo_ampsnsinv->box(FL_FLAT_BOX);
  mutromojo_ampsnsinv->color((Fl_Color)178);
  mutromojo_ampsnsinv->selection_color((Fl_Color)62);
  mutromojo_ampsnsinv->labeltype(FL_NORMAL_LABEL);
  mutromojo_ampsnsinv->labelfont(0);
  mutromojo_ampsnsinv->labelsize(10);
  mutromojo_ampsnsinv->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_ampsnsinv->maximum(127);
  mutromojo_ampsnsinv->step(1);
  mutromojo_ampsnsinv->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_ampsnsinv->callback((Fl_Callback*)cb_mutromojo_ampsnsinv);
  mutromojo_ampsnsinv->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_ampsnsinv->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_ampsnsinv
{ mutromojo_ampsns = new RKR_Slider(56, 152, 100, 10, "E. Sens");
  mutromojo_ampsns->tooltip("Envelope Sensitivity");
  mutromojo_ampsns->type(5);
  mutromojo_ampsns->box(FL_FLAT_BOX);
  mutromojo_ampsns->color((Fl_Color)178);
  mutromojo_ampsns->selection_color((Fl_Color)62);
  mutromojo_ampsns->labeltype(FL_NORMAL_LABEL);
  mutromojo_ampsns->labelfont(0);
  mutromojo_ampsns->labelsize(10);
  mutromojo_ampsns->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_ampsns->minimum(-64);
  mutromojo_ampsns->maximum(64);
  mutromojo_ampsns->step(1);
  mutromojo_ampsns->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_ampsns->callback((Fl_Callback*)cb_mutromojo_ampsns);
  mutromojo_ampsns->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_ampsns->when(FL_WHEN_CHANGED);
} // RKR_Slider* mutromojo_ampsns
{ mutromojo_smooth = new RKR_Value_Input(13, 165, 23, 15, "S");
  mutromojo_smooth->tooltip("Envelope Smoothing");
  mutromojo_smooth->box(FL_DOWN_BOX);
  mutromojo_smooth->color(FL_BACKGROUND2_COLOR);
  mutromojo_smooth->selection_color(FL_SELECTION_COLOR);
  mutromojo_smooth->labeltype(FL_NORMAL_LABEL);
  mutromojo_smooth->labelfont(0);
  mutromojo_smooth->labelsize(10);
  mutromojo_smooth->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_smooth->maximum(127);
  mutromojo_smooth->step(1);
  mutromojo_smooth->textsize(10);
  mutromojo_smooth->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_smooth->callback((Fl_Callback*)cb_mutromojo_smooth);
  mutromojo_smooth->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_smooth->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* mutromojo_smooth
{ mutromojo_Rnd = new RKR_Value_Input(51, 165, 23, 15, "R");
  mutromojo_Rnd->tooltip("LFO Randomness");
  mutromojo_Rnd->box(FL_DOWN_BOX);
  mutromojo_Rnd->color(FL_BACKGROUND2_COLOR);
  mutromojo_Rnd->selection_color(FL_SELECTION_COLOR);
  mutromojo_Rnd->labeltype(FL_NORMAL_LABEL);
  mutromojo_Rnd->labelfont(0);
  mutromojo_Rnd->labelsize(10);
  mutromojo_Rnd->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_Rnd->maximum(127);
  mutromojo_Rnd->step(1);
  mutromojo_Rnd->textsize(10);
  mutromojo_Rnd->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_Rnd->callback((Fl_Callback*)cb_mutromojo_Rnd);
  mutromojo_Rnd->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_Rnd->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* mutromojo_Rnd
{ mutromojo_St = new RKR_Value_Input(90, 165, 23, 15, "D");
  mutromojo_St->tooltip("LFO L/R Delay");
  mutromojo_St->box(FL_DOWN_BOX);
  mutromojo_St->color(FL_BACKGROUND2_COLOR);
  mutromojo_St->selection_color(FL_SELECTION_COLOR);
  mutromojo_St->labeltype(FL_NORMAL_LABEL);
  mutromojo_St->labelfont(0);
  mutromojo_St->labelsize(10);
  mutromojo_St->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_St->minimum(-64);
  mutromojo_St->maximum(63);
  mutromojo_St->step(1);
  mutromojo_St->textsize(10);
  mutromojo_St->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_St->callback((Fl_Callback*)cb_mutromojo_St);
  mutromojo_St->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_St->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* mutromojo_St
{ mutromojo_minfreq = new RKR_Value_Input(127, 165, 26, 15, "F");
  mutromojo_minfreq->tooltip("Starting Frequency");
  mutromojo_minfreq->box(FL_DOWN_BOX);
  mutromojo_minfreq->color(FL_BACKGROUND2_COLOR);
  mutromojo_minfreq->selection_color(FL_SELECTION_COLOR);
  mutromojo_minfreq->labeltype(FL_NORMAL_LABEL);
  mutromojo_minfreq->labelfont(0);
  mutromojo_minfreq->labelsize(10);
  mutromojo_minfreq->labelcolor(FL_BACKGROUND2_COLOR);
  mutromojo_minfreq->minimum(30);
  mutromojo_minfreq->maximum(800);
  mutromojo_minfreq->step(1);
  mutromojo_minfreq->value(450);
  mutromojo_minfreq->textsize(10);
  mutromojo_minfreq->textcolor(FL_BACKGROUND2_COLOR);
  mutromojo_minfreq->callback((Fl_Callback*)cb_mutromojo_minfreq);
  mutromojo_minfreq->align(Fl_Align(FL_ALIGN_LEFT));
  mutromojo_minfreq->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* mutromojo_minfreq
position(X, Y);
end();
}
