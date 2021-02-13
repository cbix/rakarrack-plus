// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "pan_gui.h"

void PanGui::cb_pan_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_PAN]);
 return;
}
rkr->EFX_Bypass[EFX_PAN]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_PAN]->cleanup();
rgui->findpos(EFX_PAN,(int)o->value(),o);
}
void PanGui::cb_pan_activar(RKR_Light_Button* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_activar_i(o,v);
}

void PanGui::cb_pan_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12013))rkr->Rack_Effects[EFX_PAN]->setpreset((int) o->value());
pan_WD->value(Dry_Wet(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_DryWet)));
pan_pan->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_Pan)-64);
pan_freq->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_LFO_Tempo));
pan_rnd->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_LFO_Random));
pan_lfotype->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_LFO_Type));
pan_stdf->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_LFO_Stereo));
pan_extra->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_Ex_St_Amt));
pan_autopan->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_AutoPan));
pan_extraon->value(rkr->Rack_Effects[EFX_PAN]->getpar(Pan_Enable_Extra));
}
void PanGui::cb_pan_preset(RKR_Choice* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_preset_i(o,v);
}

Fl_Menu_Item PanGui::menu_pan_preset[] = {
 {"AutoPan", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Extra Stereo", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void PanGui::cb_pan_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_DryWet);
 return;
} 
rkr->Rack_Effects[EFX_PAN]->changepar(Pan_DryWet,Dry_Wet((int)(o->value())));
}
void PanGui::cb_pan_WD(RKR_Slider* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_WD_i(o,v);
}

void PanGui::cb_pan_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_Pan);
 return;
} 
rkr->Rack_Effects[EFX_PAN]->changepar(Pan_Pan,(int)(o->value()+64));
}
void PanGui::cb_pan_pan(RKR_Slider* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_pan_i(o,v);
}

void PanGui::cb_pan_autopan_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_PAN]->changepar(Pan_AutoPan,(int)o->value());
}
void PanGui::cb_pan_autopan(RKR_Check_Button* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_autopan_i(o,v);
}

void PanGui::cb_pan_freq_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_LFO_Tempo);
 return;
} 
rkr->Rack_Effects[EFX_PAN]->changepar(Pan_LFO_Tempo,(int)o->value());
}
void PanGui::cb_pan_freq(RKR_Slider* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_freq_i(o,v);
}

void PanGui::cb_pan_rnd_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_LFO_Random);
 return;
} 
rkr->Rack_Effects[EFX_PAN]->changepar(Pan_LFO_Random,(int)o->value());
}
void PanGui::cb_pan_rnd(RKR_Slider* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_rnd_i(o,v);
}

void PanGui::cb_pan_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_LFO_Type);
 return;
} 

rkr->Rack_Effects[EFX_PAN]->changepar(Pan_LFO_Type,(int)o->value());
}
void PanGui::cb_pan_lfotype(RKR_Choice* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_lfotype_i(o,v);
}

void PanGui::cb_pan_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_LFO_Stereo);
 return;
} 
rkr->Rack_Effects[EFX_PAN]->changepar(Pan_LFO_Stereo,(int)o->value());
}
void PanGui::cb_pan_stdf(RKR_Slider* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_stdf_i(o,v);
}

void PanGui::cb_pan_extraon_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_PAN]->changepar(Pan_Enable_Extra,(int)o->value());
}
void PanGui::cb_pan_extraon(RKR_Check_Button* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_extraon_i(o,v);
}

void PanGui::cb_pan_extra_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Pan_Ex_St_Amt);
 return;
}
rkr->Rack_Effects[EFX_PAN]->changepar(Pan_Ex_St_Amt,(int)o->value());
}
void PanGui::cb_pan_extra(RKR_Slider* o, void* v) {
  ((PanGui*)(o->parent()))->cb_pan_extra_i(o,v);
}
PanGui::PanGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = pan_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  pan_activar->box(FL_UP_BOX);
  pan_activar->shortcut(0x36);
  pan_activar->color((Fl_Color)62);
  pan_activar->selection_color((Fl_Color)1);
  pan_activar->labeltype(FL_NORMAL_LABEL);
  pan_activar->labelfont(0);
  pan_activar->labelsize(10);
  pan_activar->labelcolor(FL_FOREGROUND_COLOR);
  pan_activar->callback((Fl_Callback*)cb_pan_activar, (void*)(2));
  pan_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  pan_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* pan_activar
{ RKR_Choice* o = pan_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  pan_preset->box(FL_FLAT_BOX);
  pan_preset->down_box(FL_BORDER_BOX);
  pan_preset->color(FL_BACKGROUND_COLOR);
  pan_preset->selection_color(FL_FOREGROUND_COLOR);
  pan_preset->labeltype(FL_NORMAL_LABEL);
  pan_preset->labelfont(0);
  pan_preset->labelsize(10);
  pan_preset->labelcolor(FL_BACKGROUND2_COLOR);
  pan_preset->textsize(10);
  pan_preset->textcolor(FL_BACKGROUND2_COLOR);
  pan_preset->callback((Fl_Callback*)cb_pan_preset, (void*)(12013));
  pan_preset->align(Fl_Align(FL_ALIGN_LEFT));
  pan_preset->when(FL_WHEN_RELEASE_ALWAYS);
  pan_preset->menu(menu_pan_preset);
  preset_choice = o;
} // RKR_Choice* pan_preset
{ pan_WD = new RKR_Slider(56, 29, 100, 10, "Dry/Wet");
  pan_WD->type(5);
  pan_WD->box(FL_FLAT_BOX);
  pan_WD->color((Fl_Color)178);
  pan_WD->selection_color((Fl_Color)62);
  pan_WD->labeltype(FL_NORMAL_LABEL);
  pan_WD->labelfont(0);
  pan_WD->labelsize(10);
  pan_WD->labelcolor(FL_BACKGROUND2_COLOR);
  pan_WD->maximum(127);
  pan_WD->step(1);
  pan_WD->textcolor(FL_BACKGROUND2_COLOR);
  pan_WD->callback((Fl_Callback*)cb_pan_WD);
  pan_WD->align(Fl_Align(FL_ALIGN_LEFT));
  pan_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* pan_WD
{ pan_pan = new RKR_Slider(56, 44, 100, 10, "Pan");
  pan_pan->type(5);
  pan_pan->box(FL_FLAT_BOX);
  pan_pan->color((Fl_Color)178);
  pan_pan->selection_color((Fl_Color)62);
  pan_pan->labeltype(FL_NORMAL_LABEL);
  pan_pan->labelfont(0);
  pan_pan->labelsize(10);
  pan_pan->labelcolor(FL_BACKGROUND2_COLOR);
  pan_pan->minimum(-64);
  pan_pan->maximum(63);
  pan_pan->step(1);
  pan_pan->textcolor(FL_BACKGROUND2_COLOR);
  pan_pan->callback((Fl_Callback*)cb_pan_pan);
  pan_pan->align(Fl_Align(FL_ALIGN_LEFT));
  pan_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* pan_pan
{ pan_autopan = new RKR_Check_Button(35, 56, 70, 18, "AutoPan");
  pan_autopan->box(FL_NO_BOX);
  pan_autopan->down_box(FL_BORDER_BOX);
  pan_autopan->color(FL_BACKGROUND_COLOR);
  pan_autopan->selection_color(FL_FOREGROUND_COLOR);
  pan_autopan->labeltype(FL_NORMAL_LABEL);
  pan_autopan->labelfont(0);
  pan_autopan->labelsize(10);
  pan_autopan->labelcolor(FL_BACKGROUND2_COLOR);
  pan_autopan->callback((Fl_Callback*)cb_pan_autopan, (void*)(2));
  pan_autopan->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  pan_autopan->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* pan_autopan
{ pan_freq = new RKR_Slider(56, 73, 100, 10, "Tempo");
  pan_freq->type(5);
  pan_freq->box(FL_FLAT_BOX);
  pan_freq->color((Fl_Color)178);
  pan_freq->selection_color((Fl_Color)62);
  pan_freq->labeltype(FL_NORMAL_LABEL);
  pan_freq->labelfont(0);
  pan_freq->labelsize(10);
  pan_freq->labelcolor(FL_BACKGROUND2_COLOR);
  pan_freq->minimum(1);
  pan_freq->maximum(600);
  pan_freq->step(1);
  pan_freq->textcolor(FL_BACKGROUND2_COLOR);
  pan_freq->callback((Fl_Callback*)cb_pan_freq);
  pan_freq->align(Fl_Align(FL_ALIGN_LEFT));
  pan_freq->when(FL_WHEN_CHANGED);
} // RKR_Slider* pan_freq
{ pan_rnd = new RKR_Slider(56, 85, 100, 10, "Random");
  pan_rnd->type(5);
  pan_rnd->box(FL_FLAT_BOX);
  pan_rnd->color((Fl_Color)178);
  pan_rnd->selection_color((Fl_Color)62);
  pan_rnd->labeltype(FL_NORMAL_LABEL);
  pan_rnd->labelfont(0);
  pan_rnd->labelsize(10);
  pan_rnd->labelcolor(FL_BACKGROUND2_COLOR);
  pan_rnd->maximum(127);
  pan_rnd->step(1);
  pan_rnd->textcolor(FL_BACKGROUND2_COLOR);
  pan_rnd->callback((Fl_Callback*)cb_pan_rnd);
  pan_rnd->align(Fl_Align(FL_ALIGN_LEFT));
  pan_rnd->when(FL_WHEN_CHANGED);
} // RKR_Slider* pan_rnd
{ RKR_Choice* o = pan_lfotype = new RKR_Choice(78, 103, 72, 16, "LFO Type");
  pan_lfotype->box(FL_FLAT_BOX);
  pan_lfotype->down_box(FL_BORDER_BOX);
  pan_lfotype->color(FL_BACKGROUND_COLOR);
  pan_lfotype->selection_color(FL_FOREGROUND_COLOR);
  pan_lfotype->labeltype(FL_NORMAL_LABEL);
  pan_lfotype->labelfont(0);
  pan_lfotype->labelsize(10);
  pan_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  pan_lfotype->textsize(10);
  pan_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  pan_lfotype->callback((Fl_Callback*)cb_pan_lfotype);
  pan_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  pan_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* pan_lfotype
{ pan_stdf = new RKR_Slider(56, 124, 100, 10, "Stereo Df");
  pan_stdf->tooltip("LFO L/R Delay");
  pan_stdf->type(5);
  pan_stdf->box(FL_FLAT_BOX);
  pan_stdf->color((Fl_Color)178);
  pan_stdf->selection_color((Fl_Color)62);
  pan_stdf->labeltype(FL_NORMAL_LABEL);
  pan_stdf->labelfont(0);
  pan_stdf->labelsize(10);
  pan_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  pan_stdf->maximum(127);
  pan_stdf->step(1);
  pan_stdf->textcolor(FL_BACKGROUND2_COLOR);
  pan_stdf->callback((Fl_Callback*)cb_pan_stdf);
  pan_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  pan_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* pan_stdf
{ pan_extraon = new RKR_Check_Button(35, 140, 82, 15, "Extra Stereo");
  pan_extraon->tooltip("Enable Extra Stereo");
  pan_extraon->box(FL_NO_BOX);
  pan_extraon->down_box(FL_BORDER_BOX);
  pan_extraon->color(FL_BACKGROUND_COLOR);
  pan_extraon->selection_color(FL_FOREGROUND_COLOR);
  pan_extraon->labeltype(FL_NORMAL_LABEL);
  pan_extraon->labelfont(0);
  pan_extraon->labelsize(10);
  pan_extraon->labelcolor(FL_BACKGROUND2_COLOR);
  pan_extraon->callback((Fl_Callback*)cb_pan_extraon, (void*)(2));
  pan_extraon->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  pan_extraon->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* pan_extraon
{ pan_extra = new RKR_Slider(56, 161, 100, 10, "E.Stereo");
  pan_extra->tooltip("Extra Stereo Amount");
  pan_extra->type(5);
  pan_extra->box(FL_FLAT_BOX);
  pan_extra->color((Fl_Color)178);
  pan_extra->selection_color((Fl_Color)62);
  pan_extra->labeltype(FL_NORMAL_LABEL);
  pan_extra->labelfont(0);
  pan_extra->labelsize(10);
  pan_extra->labelcolor(FL_BACKGROUND2_COLOR);
  pan_extra->maximum(127);
  pan_extra->step(1);
  pan_extra->textcolor(FL_BACKGROUND2_COLOR);
  pan_extra->callback((Fl_Callback*)cb_pan_extra);
  pan_extra->align(Fl_Align(FL_ALIGN_LEFT));
  pan_extra->when(FL_WHEN_CHANGED);
} // RKR_Slider* pan_extra
position(X, Y);
end();
}
