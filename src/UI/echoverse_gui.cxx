// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "echoverse_gui.h"

void EchoverseGui::cb_echoverse_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Multi_On_Off);
 o->value(rkr->EFX_Bypass[EFX_ECHOVERSE]);
 return;
}
rkr->EFX_Bypass[EFX_ECHOVERSE]=(int)o->value();
if((int) o->value()==0)
rkr->Rack_Effects[EFX_ECHOVERSE]->cleanup();
rgui->findpos(EFX_ECHOVERSE,(int)o->value(),o);
}
void EchoverseGui::cb_echoverse_activar(RKR_Light_Button* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_activar_i(o,v);
}

void EchoverseGui::cb_echoverse_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12032))rkr->Rack_Effects[EFX_ECHOVERSE]->setpreset((int) o->value());
echoverse_WD->value(Dry_Wet(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_DryWet)));
echoverse_pan->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Pan)-64);
echoverse_delay->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Tempo));
echoverse_LRdl->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_LR_Delay));
echoverse_angle->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Angle)-64);
echoverse_fb->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Feedback));
echoverse_damp->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Damp));
echoverse_RV->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Reverse));
echoverse_subdiv->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Subdivision));
echoverse_es->value(rkr->Rack_Effects[EFX_ECHOVERSE]->getpar(Echoverse_Ext_Stereo));
}
void EchoverseGui::cb_echoverse_preset(RKR_Choice* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_preset_i(o,v);
}

Fl_Menu_Item EchoverseGui::menu_echoverse_preset[] = {
 {"Echo 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Echo 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Echo 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Echo 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void EchoverseGui::cb_echoverse_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_DryWet);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_DryWet,Dry_Wet((int)(o->value())));
}
void EchoverseGui::cb_echoverse_WD(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_WD_i(o,v);
}

void EchoverseGui::cb_echoverse_RV_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Reverse);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Reverse,(int)o->value());
}
void EchoverseGui::cb_echoverse_RV(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_RV_i(o,v);
}

void EchoverseGui::cb_echoverse_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Pan);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Pan,(int)(o->value()+64));
}
void EchoverseGui::cb_echoverse_pan(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_pan_i(o,v);
}

void EchoverseGui::cb_echoverse_delay_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Tempo);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Tempo,(int)o->value());
}
void EchoverseGui::cb_echoverse_delay(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_delay_i(o,v);
}

void EchoverseGui::cb_echoverse_LRdl_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_LR_Delay);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_LR_Delay,(int)o->value());
}
void EchoverseGui::cb_echoverse_LRdl(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_LRdl_i(o,v);
}

void EchoverseGui::cb_echoverse_fb_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Feedback);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Feedback,(int)o->value());
}
void EchoverseGui::cb_echoverse_fb(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_fb_i(o,v);
}

void EchoverseGui::cb_echoverse_subdiv_i(RKR_Choice* o, void*) {
  rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Subdivision,(int)o->value());
}
void EchoverseGui::cb_echoverse_subdiv(RKR_Choice* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_subdiv_i(o,v);
}

void EchoverseGui::cb_echoverse_damp_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Damp);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Damp,(int)o->value());
}
void EchoverseGui::cb_echoverse_damp(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_damp_i(o,v);
}

void EchoverseGui::cb_echoverse_es_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Ext_Stereo);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Ext_Stereo,(int)o->value());
}
void EchoverseGui::cb_echoverse_es(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_es_i(o,v);
}

void EchoverseGui::cb_echoverse_angle_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(MC_Echoverse_Angle);
 return;
}
rkr->Rack_Effects[EFX_ECHOVERSE]->changepar(Echoverse_Angle,(int)(o->value()+64));
}
void EchoverseGui::cb_echoverse_angle(RKR_Slider* o, void* v) {
  ((EchoverseGui*)(o->parent()))->cb_echoverse_angle_i(o,v);
}
EchoverseGui::EchoverseGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = echoverse_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  echoverse_activar->box(FL_UP_BOX);
  echoverse_activar->shortcut(0x35);
  echoverse_activar->color((Fl_Color)62);
  echoverse_activar->selection_color((Fl_Color)1);
  echoverse_activar->labeltype(FL_NORMAL_LABEL);
  echoverse_activar->labelfont(0);
  echoverse_activar->labelsize(10);
  echoverse_activar->labelcolor(FL_FOREGROUND_COLOR);
  echoverse_activar->callback((Fl_Callback*)cb_echoverse_activar, (void*)(2));
  echoverse_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  echoverse_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* echoverse_activar
{ RKR_Choice* o = echoverse_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  echoverse_preset->box(FL_FLAT_BOX);
  echoverse_preset->down_box(FL_BORDER_BOX);
  echoverse_preset->color(FL_BACKGROUND_COLOR);
  echoverse_preset->selection_color(FL_FOREGROUND_COLOR);
  echoverse_preset->labeltype(FL_NORMAL_LABEL);
  echoverse_preset->labelfont(0);
  echoverse_preset->labelsize(10);
  echoverse_preset->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_preset->textsize(10);
  echoverse_preset->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_preset->callback((Fl_Callback*)cb_echoverse_preset, (void*)(12032));
  echoverse_preset->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_preset->when(FL_WHEN_RELEASE_ALWAYS);
  echoverse_preset->menu(menu_echoverse_preset);
  preset_choice = o;
} // RKR_Choice* echoverse_preset
{ echoverse_WD = new RKR_Slider(56, 27, 100, 10, "Dry/Wet");
  echoverse_WD->type(5);
  echoverse_WD->box(FL_FLAT_BOX);
  echoverse_WD->color((Fl_Color)178);
  echoverse_WD->selection_color((Fl_Color)62);
  echoverse_WD->labeltype(FL_NORMAL_LABEL);
  echoverse_WD->labelfont(0);
  echoverse_WD->labelsize(10);
  echoverse_WD->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_WD->maximum(127);
  echoverse_WD->step(1);
  echoverse_WD->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_WD->callback((Fl_Callback*)cb_echoverse_WD);
  echoverse_WD->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_WD
{ echoverse_RV = new RKR_Slider(56, 41, 100, 10, "Reverse");
  echoverse_RV->type(5);
  echoverse_RV->box(FL_FLAT_BOX);
  echoverse_RV->color((Fl_Color)178);
  echoverse_RV->selection_color((Fl_Color)62);
  echoverse_RV->labeltype(FL_NORMAL_LABEL);
  echoverse_RV->labelfont(0);
  echoverse_RV->labelsize(10);
  echoverse_RV->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_RV->maximum(127);
  echoverse_RV->step(1);
  echoverse_RV->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_RV->callback((Fl_Callback*)cb_echoverse_RV);
  echoverse_RV->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_RV->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_RV
{ echoverse_pan = new RKR_Slider(56, 55, 100, 10, "Pan");
  echoverse_pan->type(5);
  echoverse_pan->box(FL_FLAT_BOX);
  echoverse_pan->color((Fl_Color)178);
  echoverse_pan->selection_color((Fl_Color)62);
  echoverse_pan->labeltype(FL_NORMAL_LABEL);
  echoverse_pan->labelfont(0);
  echoverse_pan->labelsize(10);
  echoverse_pan->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_pan->minimum(-64);
  echoverse_pan->maximum(63);
  echoverse_pan->step(1);
  echoverse_pan->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_pan->callback((Fl_Callback*)cb_echoverse_pan);
  echoverse_pan->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_pan
{ echoverse_delay = new RKR_Slider(56, 69, 100, 10, "Tempo");
  echoverse_delay->type(5);
  echoverse_delay->box(FL_FLAT_BOX);
  echoverse_delay->color((Fl_Color)178);
  echoverse_delay->selection_color((Fl_Color)62);
  echoverse_delay->labeltype(FL_NORMAL_LABEL);
  echoverse_delay->labelfont(0);
  echoverse_delay->labelsize(10);
  echoverse_delay->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_delay->minimum(1);
  echoverse_delay->maximum(600);
  echoverse_delay->step(1);
  echoverse_delay->value(20);
  echoverse_delay->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_delay->callback((Fl_Callback*)cb_echoverse_delay);
  echoverse_delay->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_delay->when(FL_WHEN_RELEASE);
} // RKR_Slider* echoverse_delay
{ echoverse_LRdl = new RKR_Slider(56, 83, 100, 10, "L/R Delay");
  echoverse_LRdl->type(5);
  echoverse_LRdl->box(FL_FLAT_BOX);
  echoverse_LRdl->color((Fl_Color)178);
  echoverse_LRdl->selection_color((Fl_Color)62);
  echoverse_LRdl->labeltype(FL_NORMAL_LABEL);
  echoverse_LRdl->labelfont(0);
  echoverse_LRdl->labelsize(10);
  echoverse_LRdl->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_LRdl->maximum(127);
  echoverse_LRdl->step(1);
  echoverse_LRdl->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_LRdl->callback((Fl_Callback*)cb_echoverse_LRdl);
  echoverse_LRdl->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_LRdl->when(FL_WHEN_RELEASE);
} // RKR_Slider* echoverse_LRdl
{ echoverse_fb = new RKR_Slider(56, 97, 100, 10, "Feedback");
  echoverse_fb->type(5);
  echoverse_fb->box(FL_FLAT_BOX);
  echoverse_fb->color((Fl_Color)178);
  echoverse_fb->selection_color((Fl_Color)62);
  echoverse_fb->labeltype(FL_NORMAL_LABEL);
  echoverse_fb->labelfont(0);
  echoverse_fb->labelsize(10);
  echoverse_fb->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_fb->maximum(127);
  echoverse_fb->step(1);
  echoverse_fb->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_fb->callback((Fl_Callback*)cb_echoverse_fb);
  echoverse_fb->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_fb->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_fb
{ RKR_Choice* o = echoverse_subdiv = new RKR_Choice(77, 111, 76, 18, "SubDivision");
  echoverse_subdiv->box(FL_FLAT_BOX);
  echoverse_subdiv->down_box(FL_BORDER_BOX);
  echoverse_subdiv->color(FL_BACKGROUND_COLOR);
  echoverse_subdiv->selection_color(FL_FOREGROUND_COLOR);
  echoverse_subdiv->labeltype(FL_NORMAL_LABEL);
  echoverse_subdiv->labelfont(0);
  echoverse_subdiv->labelsize(10);
  echoverse_subdiv->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_subdiv->textsize(10);
  echoverse_subdiv->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_subdiv->callback((Fl_Callback*)cb_echoverse_subdiv);
  echoverse_subdiv->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_subdiv->when(FL_WHEN_RELEASE_ALWAYS);
  o->menu(m_subdiv_menu->get_subdiv_type());
} // RKR_Choice* echoverse_subdiv
{ echoverse_damp = new RKR_Slider(56, 134, 100, 10, "Damp");
  echoverse_damp->type(5);
  echoverse_damp->box(FL_FLAT_BOX);
  echoverse_damp->color((Fl_Color)178);
  echoverse_damp->selection_color((Fl_Color)62);
  echoverse_damp->labeltype(FL_NORMAL_LABEL);
  echoverse_damp->labelfont(0);
  echoverse_damp->labelsize(10);
  echoverse_damp->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_damp->maximum(127);
  echoverse_damp->step(1);
  echoverse_damp->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_damp->callback((Fl_Callback*)cb_echoverse_damp);
  echoverse_damp->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_damp->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_damp
{ echoverse_es = new RKR_Slider(56, 148, 100, 10, "Ex Stereo");
  echoverse_es->tooltip("Extra Stereo");
  echoverse_es->type(5);
  echoverse_es->box(FL_FLAT_BOX);
  echoverse_es->color((Fl_Color)178);
  echoverse_es->selection_color((Fl_Color)62);
  echoverse_es->labeltype(FL_NORMAL_LABEL);
  echoverse_es->labelfont(0);
  echoverse_es->labelsize(10);
  echoverse_es->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_es->maximum(127);
  echoverse_es->step(1);
  echoverse_es->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_es->callback((Fl_Callback*)cb_echoverse_es);
  echoverse_es->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_es->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_es
{ echoverse_angle = new RKR_Slider(56, 162, 100, 10, "Angle");
  echoverse_angle->type(5);
  echoverse_angle->box(FL_FLAT_BOX);
  echoverse_angle->color((Fl_Color)178);
  echoverse_angle->selection_color((Fl_Color)62);
  echoverse_angle->labeltype(FL_NORMAL_LABEL);
  echoverse_angle->labelfont(0);
  echoverse_angle->labelsize(10);
  echoverse_angle->labelcolor(FL_BACKGROUND2_COLOR);
  echoverse_angle->minimum(-64);
  echoverse_angle->maximum(64);
  echoverse_angle->step(1);
  echoverse_angle->textcolor(FL_BACKGROUND2_COLOR);
  echoverse_angle->callback((Fl_Callback*)cb_echoverse_angle);
  echoverse_angle->align(Fl_Align(FL_ALIGN_LEFT));
  echoverse_angle->when(FL_WHEN_CHANGED);
} // RKR_Slider* echoverse_angle
position(X, Y);
end();
}
