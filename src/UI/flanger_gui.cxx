// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "flanger_gui.h"

void FlangerGui::cb_flanger_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_FLANGER]);
 return;
}
rkr->EFX_Bypass[EFX_FLANGER]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_FLANGER]->cleanup();
rgui->findpos(EFX_FLANGER,(int)o->value(),o);
}
void FlangerGui::cb_flanger_activar(RKR_Light_Button* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_activar_i(o,v);
}

void FlangerGui::cb_flanger_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12007))rkr->Rack_Effects[EFX_FLANGER]->setpreset((int)(o->value()));

for (int i = 0; i < rkr->EFX_Param_Size[EFX_FLANGER]; i++)
{
    parameter_refresh(i);
};
}
void FlangerGui::cb_flanger_preset(RKR_Choice* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_preset_i(o,v);
}

Fl_Menu_Item FlangerGui::menu_flanger_preset[] = {
 {"Flange 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Flange 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Flange 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Flange 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Flange 5", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void FlangerGui::cb_flanger_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_DryWet);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_DryWet,Dry_Wet((int)(o->value())));
}
void FlangerGui::cb_flanger_WD(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_WD_i(o,v);
}

void FlangerGui::cb_flanger_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_Pan);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_Pan,(int)(o->value()+64));
}
void FlangerGui::cb_flanger_pan(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_pan_i(o,v);
}

void FlangerGui::cb_flanger_freq_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_LFO_Tempo);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_LFO_Tempo,(int)o->value());
}
void FlangerGui::cb_flanger_freq(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_freq_i(o,v);
}

void FlangerGui::cb_flanger_rnd_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_LFO_Random);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_LFO_Random,(int)o->value());
}
void FlangerGui::cb_flanger_rnd(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_rnd_i(o,v);
}

void FlangerGui::cb_flanger_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_LFO_Type);
 return;
} 

rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_LFO_Type,(int)o->value());
}
void FlangerGui::cb_flanger_lfotype(RKR_Choice* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_lfotype_i(o,v);
}

void FlangerGui::cb_flanger_subs_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_Subtract,(int)o->value());
}
void FlangerGui::cb_flanger_subs(RKR_Check_Button* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_subs_i(o,v);
}

void FlangerGui::cb_flanger_awesome_i(RKR_Check_Button* o, void*) {
  rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_Intense,(int)o->value());
}
void FlangerGui::cb_flanger_awesome(RKR_Check_Button* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_awesome_i(o,v);
}

void FlangerGui::cb_flanger_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_LFO_Stereo);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_LFO_Stereo,(int)o->value());
}
void FlangerGui::cb_flanger_stdf(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_stdf_i(o,v);
}

void FlangerGui::cb_flanger_dpth_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_Depth);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_Depth,(int)o->value());
}
void FlangerGui::cb_flanger_dpth(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_dpth_i(o,v);
}

void FlangerGui::cb_flanger_delay_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_Delay);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_Delay,(int)o->value());
}
void FlangerGui::cb_flanger_delay(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_delay_i(o,v);
}

void FlangerGui::cb_flanger_fb_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_Feedback);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_Feedback,(int)o->value());
}
void FlangerGui::cb_flanger_fb(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_fb_i(o,v);
}

void FlangerGui::cb_flanger_LR_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Flanger_LR_Cross);
 return;
} 
rkr->Rack_Effects[EFX_FLANGER]->changepar(Flanger_LR_Cross,(int)(o->value()));
}
void FlangerGui::cb_flanger_LR(RKR_Slider* o, void* v) {
  ((FlangerGui*)(o->parent()))->cb_flanger_LR_i(o,v);
}
FlangerGui::FlangerGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = flanger_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  flanger_activar->box(FL_UP_BOX);
  flanger_activar->shortcut(0x38);
  flanger_activar->color((Fl_Color)62);
  flanger_activar->selection_color((Fl_Color)1);
  flanger_activar->labeltype(FL_NORMAL_LABEL);
  flanger_activar->labelfont(0);
  flanger_activar->labelsize(10);
  flanger_activar->labelcolor(FL_FOREGROUND_COLOR);
  flanger_activar->callback((Fl_Callback*)cb_flanger_activar, (void*)(2));
  flanger_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  flanger_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* flanger_activar
{ RKR_Choice* o = flanger_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  flanger_preset->box(FL_FLAT_BOX);
  flanger_preset->down_box(FL_BORDER_BOX);
  flanger_preset->color(FL_BACKGROUND_COLOR);
  flanger_preset->selection_color(FL_FOREGROUND_COLOR);
  flanger_preset->labeltype(FL_NORMAL_LABEL);
  flanger_preset->labelfont(0);
  flanger_preset->labelsize(10);
  flanger_preset->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_preset->textsize(10);
  flanger_preset->textcolor(FL_BACKGROUND2_COLOR);
  flanger_preset->callback((Fl_Callback*)cb_flanger_preset, (void*)(12007));
  flanger_preset->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_preset->when(FL_WHEN_RELEASE_ALWAYS);
  flanger_preset->menu(menu_flanger_preset);
  preset_choice = o;
} // RKR_Choice* flanger_preset
{ flanger_WD = new RKR_Slider(56, 29, 100, 10, "Dry/Wet");
  flanger_WD->type(5);
  flanger_WD->box(FL_FLAT_BOX);
  flanger_WD->color((Fl_Color)178);
  flanger_WD->selection_color((Fl_Color)62);
  flanger_WD->labeltype(FL_NORMAL_LABEL);
  flanger_WD->labelfont(0);
  flanger_WD->labelsize(10);
  flanger_WD->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_WD->maximum(127);
  flanger_WD->step(1);
  flanger_WD->textcolor(FL_BACKGROUND2_COLOR);
  flanger_WD->callback((Fl_Callback*)cb_flanger_WD);
  flanger_WD->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_WD
{ flanger_pan = new RKR_Slider(56, 41, 100, 10, "Pan");
  flanger_pan->type(5);
  flanger_pan->box(FL_FLAT_BOX);
  flanger_pan->color((Fl_Color)178);
  flanger_pan->selection_color((Fl_Color)62);
  flanger_pan->labeltype(FL_NORMAL_LABEL);
  flanger_pan->labelfont(0);
  flanger_pan->labelsize(10);
  flanger_pan->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_pan->minimum(-64);
  flanger_pan->maximum(63);
  flanger_pan->step(1);
  flanger_pan->textcolor(FL_BACKGROUND2_COLOR);
  flanger_pan->callback((Fl_Callback*)cb_flanger_pan);
  flanger_pan->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_pan
{ flanger_freq = new RKR_Slider(56, 53, 100, 10, "Tempo");
  flanger_freq->type(5);
  flanger_freq->box(FL_FLAT_BOX);
  flanger_freq->color((Fl_Color)178);
  flanger_freq->selection_color((Fl_Color)62);
  flanger_freq->labeltype(FL_NORMAL_LABEL);
  flanger_freq->labelfont(0);
  flanger_freq->labelsize(10);
  flanger_freq->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_freq->minimum(1);
  flanger_freq->maximum(600);
  flanger_freq->step(1);
  flanger_freq->textcolor(FL_BACKGROUND2_COLOR);
  flanger_freq->callback((Fl_Callback*)cb_flanger_freq);
  flanger_freq->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_freq->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_freq
{ flanger_rnd = new RKR_Slider(56, 65, 100, 10, "Random");
  flanger_rnd->type(5);
  flanger_rnd->box(FL_FLAT_BOX);
  flanger_rnd->color((Fl_Color)178);
  flanger_rnd->selection_color((Fl_Color)62);
  flanger_rnd->labeltype(FL_NORMAL_LABEL);
  flanger_rnd->labelfont(0);
  flanger_rnd->labelsize(10);
  flanger_rnd->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_rnd->maximum(127);
  flanger_rnd->step(1);
  flanger_rnd->textcolor(FL_BACKGROUND2_COLOR);
  flanger_rnd->callback((Fl_Callback*)cb_flanger_rnd);
  flanger_rnd->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_rnd->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_rnd
{ RKR_Choice* o = flanger_lfotype = new RKR_Choice(78, 77, 72, 16, "LFO Type");
  flanger_lfotype->box(FL_FLAT_BOX);
  flanger_lfotype->down_box(FL_BORDER_BOX);
  flanger_lfotype->color(FL_BACKGROUND_COLOR);
  flanger_lfotype->selection_color(FL_FOREGROUND_COLOR);
  flanger_lfotype->labeltype(FL_NORMAL_LABEL);
  flanger_lfotype->labelfont(0);
  flanger_lfotype->labelsize(10);
  flanger_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_lfotype->textsize(10);
  flanger_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  flanger_lfotype->callback((Fl_Callback*)cb_flanger_lfotype);
  flanger_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* flanger_lfotype
{ flanger_subs = new RKR_Check_Button(32, 94, 62, 15, "Subtract");
  flanger_subs->box(FL_NO_BOX);
  flanger_subs->down_box(FL_BORDER_BOX);
  flanger_subs->color(FL_BACKGROUND_COLOR);
  flanger_subs->selection_color(FL_FOREGROUND_COLOR);
  flanger_subs->labeltype(FL_NORMAL_LABEL);
  flanger_subs->labelfont(0);
  flanger_subs->labelsize(10);
  flanger_subs->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_subs->callback((Fl_Callback*)cb_flanger_subs, (void*)(2));
  flanger_subs->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  flanger_subs->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* flanger_subs
{ flanger_awesome = new RKR_Check_Button(94, 94, 58, 15, "Intense");
  flanger_awesome->box(FL_NO_BOX);
  flanger_awesome->down_box(FL_BORDER_BOX);
  flanger_awesome->color(FL_BACKGROUND_COLOR);
  flanger_awesome->selection_color(FL_FOREGROUND_COLOR);
  flanger_awesome->labeltype(FL_NORMAL_LABEL);
  flanger_awesome->labelfont(0);
  flanger_awesome->labelsize(10);
  flanger_awesome->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_awesome->callback((Fl_Callback*)cb_flanger_awesome, (void*)(2));
  flanger_awesome->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  flanger_awesome->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* flanger_awesome
{ flanger_stdf = new RKR_Slider(56, 115, 100, 10, "Stereo Df");
  flanger_stdf->type(5);
  flanger_stdf->box(FL_FLAT_BOX);
  flanger_stdf->color((Fl_Color)178);
  flanger_stdf->selection_color((Fl_Color)62);
  flanger_stdf->labeltype(FL_NORMAL_LABEL);
  flanger_stdf->labelfont(0);
  flanger_stdf->labelsize(10);
  flanger_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_stdf->maximum(127);
  flanger_stdf->step(1);
  flanger_stdf->textcolor(FL_BACKGROUND2_COLOR);
  flanger_stdf->callback((Fl_Callback*)cb_flanger_stdf);
  flanger_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_stdf
{ flanger_dpth = new RKR_Slider(56, 128, 100, 10, "Depth");
  flanger_dpth->type(5);
  flanger_dpth->box(FL_FLAT_BOX);
  flanger_dpth->color((Fl_Color)178);
  flanger_dpth->selection_color((Fl_Color)62);
  flanger_dpth->labeltype(FL_NORMAL_LABEL);
  flanger_dpth->labelfont(0);
  flanger_dpth->labelsize(10);
  flanger_dpth->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_dpth->maximum(127);
  flanger_dpth->step(1);
  flanger_dpth->textcolor(FL_BACKGROUND2_COLOR);
  flanger_dpth->callback((Fl_Callback*)cb_flanger_dpth);
  flanger_dpth->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_dpth->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_dpth
{ flanger_delay = new RKR_Slider(56, 141, 100, 10, "Delay");
  flanger_delay->type(5);
  flanger_delay->box(FL_FLAT_BOX);
  flanger_delay->color((Fl_Color)178);
  flanger_delay->selection_color((Fl_Color)62);
  flanger_delay->labeltype(FL_NORMAL_LABEL);
  flanger_delay->labelfont(0);
  flanger_delay->labelsize(10);
  flanger_delay->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_delay->maximum(127);
  flanger_delay->step(1);
  flanger_delay->textcolor(FL_BACKGROUND2_COLOR);
  flanger_delay->callback((Fl_Callback*)cb_flanger_delay);
  flanger_delay->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_delay->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_delay
{ flanger_fb = new RKR_Slider(56, 154, 100, 10, "Feedback");
  flanger_fb->type(5);
  flanger_fb->box(FL_FLAT_BOX);
  flanger_fb->color((Fl_Color)178);
  flanger_fb->selection_color((Fl_Color)62);
  flanger_fb->labeltype(FL_NORMAL_LABEL);
  flanger_fb->labelfont(0);
  flanger_fb->labelsize(10);
  flanger_fb->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_fb->maximum(127);
  flanger_fb->step(1);
  flanger_fb->textcolor(FL_BACKGROUND2_COLOR);
  flanger_fb->callback((Fl_Callback*)cb_flanger_fb);
  flanger_fb->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_fb->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_fb
{ flanger_LR = new RKR_Slider(56, 168, 100, 10, "L/R Cross");
  flanger_LR->type(5);
  flanger_LR->box(FL_FLAT_BOX);
  flanger_LR->color((Fl_Color)178);
  flanger_LR->selection_color((Fl_Color)62);
  flanger_LR->labeltype(FL_NORMAL_LABEL);
  flanger_LR->labelfont(0);
  flanger_LR->labelsize(10);
  flanger_LR->labelcolor(FL_BACKGROUND2_COLOR);
  flanger_LR->maximum(127);
  flanger_LR->step(1);
  flanger_LR->textcolor(FL_BACKGROUND2_COLOR);
  flanger_LR->callback((Fl_Callback*)cb_flanger_LR);
  flanger_LR->align(Fl_Align(FL_ALIGN_LEFT));
  flanger_LR->when(FL_WHEN_CHANGED);
} // RKR_Slider* flanger_LR
position(X, Y);
end();
}

void FlangerGui::parameter_refresh(int index) {
  switch (index)
      {
      case Flanger_DryWet:
          flanger_WD->value(Dry_Wet(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_DryWet)));
          break;
      case Flanger_Pan:
          flanger_pan->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_Pan)-64);
          break;
      case Flanger_LFO_Tempo:
          flanger_freq->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_LFO_Tempo));
          break;
      case Flanger_LFO_Random:
          flanger_rnd->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_LFO_Random));
          break;
      case Flanger_LFO_Type:
          flanger_lfotype->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_LFO_Type));
          break;
      case Flanger_LFO_Stereo:
          flanger_stdf->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_LFO_Stereo));
          break;
      case Flanger_Depth:
          flanger_dpth->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_Depth));
          break;
      case Flanger_Delay:
          flanger_delay->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_Delay));
          break;
      case Flanger_Feedback:
          flanger_fb->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_Feedback));
          break;
      case Flanger_LR_Cross:
          flanger_LR->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_LR_Cross));
          break;
      case Flanger_SKIP_Flange_10:
          break;
      case Flanger_Subtract:
          flanger_subs->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_Subtract));
          break;
      case Flanger_Intense:
          flanger_awesome->value(rkr->Rack_Effects[EFX_FLANGER]->getpar(Flanger_Intense));
          break;
      }
}
