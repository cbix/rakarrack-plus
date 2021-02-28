// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "coil_gui.h"

void CoilGui::cb_coil_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Multi_On_Off);
 o->value(m_process->EFX_Bypass[EFX_COILCRAFTER]);
 return;
}
m_process->EFX_Bypass[EFX_COILCRAFTER]=(int)o->value();
if((int) o->value()==0)
m_process->Rack_Effects[EFX_COILCRAFTER]->cleanup();
m_parent->findpos(EFX_COILCRAFTER,(int)o->value(),o);
}
void CoilGui::cb_coil_activar(RKR_Light_Button* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_activar_i(o,v);
}

void CoilGui::cb_coil_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==UD_PRESET_COILCRAFTER))
    m_process->Rack_Effects[EFX_COILCRAFTER]->setpreset((int) o->value());

for (int i = 0; i < m_process->EFX_Param_Size[EFX_COILCRAFTER]; i++)
{
    parameter_refresh(i);
};
}
void CoilGui::cb_coil_preset(RKR_Choice* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_preset_i(o,v);
}

Fl_Menu_Item CoilGui::menu_coil_preset[] = {
 {"H to S", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"S to H", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void CoilGui::cb_coil_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Coil_Gain);
 return;
}
m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Gain,(int)o->value());
}
void CoilGui::cb_coil_WD(RKR_Slider* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_WD_i(o,v);
}

void CoilGui::cb_coil_tone_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Coil_Tone);
 return;
}
m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Tone,(int)o->value());
}
void CoilGui::cb_coil_tone(RKR_Slider* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_tone_i(o,v);
}

void CoilGui::cb_coil_origin_i(RKR_Choice* o, void*) {
  m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Origin,(int)o->value());
coil_freq1->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Freq_1));
coil_q1->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Q_1));
}
void CoilGui::cb_coil_origin(RKR_Choice* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_origin_i(o,v);
}

Fl_Menu_Item CoilGui::menu_coil_origin[] = {
 {"Off", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Fender Strat (old)", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Fender Strat (new)", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Squire Strat", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Fender Hambucker", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Gibson P90", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Gibson Standard", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Gibson Mini", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Gibson Super L6S", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void CoilGui::cb_coil_freq1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Coil_Freq_1);
 return;
}
m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Freq_1,(int)o->value());
}
void CoilGui::cb_coil_freq1(RKR_Slider* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_freq1_i(o,v);
}

void CoilGui::cb_coil_q1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Coil_Q_1);
 return;
}
m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Q_1,(int)o->value());
}
void CoilGui::cb_coil_q1(RKR_Slider* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_q1_i(o,v);
}

void CoilGui::cb_coil_destiny_i(RKR_Choice* o, void*) {
  m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Destiny,(int)o->value());
coil_freq2->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Freq_2));
coil_q2->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Q_2));
}
void CoilGui::cb_coil_destiny(RKR_Choice* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_destiny_i(o,v);
}

void CoilGui::cb_coil_freq2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Coil_Freq_2);
 return;
}
m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Freq_2,(int)o->value());
}
void CoilGui::cb_coil_freq2(RKR_Slider* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_freq2_i(o,v);
}

void CoilGui::cb_coil_q2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Coil_Q_2);
 return;
}
m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_Q_2,(int)o->value());
}
void CoilGui::cb_coil_q2(RKR_Slider* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_q2_i(o,v);
}

void CoilGui::cb_coil_mode_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_COILCRAFTER]->changepar(Coil_NeckMode,(int)o->value());
}
void CoilGui::cb_coil_mode(RKR_Check_Button* o, void* v) {
  ((CoilGui*)(o->parent()))->cb_coil_mode_i(o,v);
}
CoilGui::CoilGui(int X, int Y, int W, int H, const char *L)
  : RKR_Gui_Effect(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
this->when(FL_WHEN_RELEASE);
{ RKR_Light_Button* o = coil_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  coil_activar->box(FL_UP_BOX);
  coil_activar->shortcut(0x31);
  coil_activar->color((Fl_Color)62);
  coil_activar->selection_color((Fl_Color)1);
  coil_activar->labeltype(FL_NORMAL_LABEL);
  coil_activar->labelfont(0);
  coil_activar->labelsize(10);
  coil_activar->labelcolor(FL_FOREGROUND_COLOR);
  coil_activar->callback((Fl_Callback*)cb_coil_activar, (void*)(2));
  coil_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  coil_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* coil_activar
{ RKR_Choice* o = coil_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  coil_preset->box(FL_FLAT_BOX);
  coil_preset->down_box(FL_BORDER_BOX);
  coil_preset->color(FL_BACKGROUND_COLOR);
  coil_preset->selection_color(FL_FOREGROUND_COLOR);
  coil_preset->labeltype(FL_NORMAL_LABEL);
  coil_preset->labelfont(0);
  coil_preset->labelsize(10);
  coil_preset->labelcolor(FL_BACKGROUND2_COLOR);
  coil_preset->textsize(10);
  coil_preset->textcolor(FL_BACKGROUND2_COLOR);
  coil_preset->callback((Fl_Callback*)cb_coil_preset, (void*)(UD_PRESET_COILCRAFTER));
  coil_preset->align(Fl_Align(FL_ALIGN_LEFT));
  coil_preset->when(FL_WHEN_RELEASE_ALWAYS);
  coil_preset->menu(menu_coil_preset);
  preset_choice = o;
} // RKR_Choice* coil_preset
{ coil_WD = new RKR_Slider(56, 25, 100, 10, "Gain");
  coil_WD->type(5);
  coil_WD->box(FL_FLAT_BOX);
  coil_WD->color((Fl_Color)178);
  coil_WD->selection_color((Fl_Color)62);
  coil_WD->labeltype(FL_NORMAL_LABEL);
  coil_WD->labelfont(0);
  coil_WD->labelsize(10);
  coil_WD->labelcolor(FL_BACKGROUND2_COLOR);
  coil_WD->maximum(127);
  coil_WD->step(1);
  coil_WD->value(127);
  coil_WD->textcolor(FL_BACKGROUND2_COLOR);
  coil_WD->callback((Fl_Callback*)cb_coil_WD);
  coil_WD->align(Fl_Align(FL_ALIGN_LEFT));
  coil_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* coil_WD
{ coil_tone = new RKR_Slider(56, 41, 100, 10, "Tone");
  coil_tone->type(5);
  coil_tone->box(FL_FLAT_BOX);
  coil_tone->color((Fl_Color)178);
  coil_tone->selection_color((Fl_Color)62);
  coil_tone->labeltype(FL_NORMAL_LABEL);
  coil_tone->labelfont(0);
  coil_tone->labelsize(10);
  coil_tone->labelcolor(FL_BACKGROUND2_COLOR);
  coil_tone->minimum(20);
  coil_tone->maximum(4400);
  coil_tone->step(1);
  coil_tone->value(20);
  coil_tone->textcolor(FL_BACKGROUND2_COLOR);
  coil_tone->callback((Fl_Callback*)cb_coil_tone);
  coil_tone->align(Fl_Align(FL_ALIGN_LEFT));
  coil_tone->when(FL_WHEN_CHANGED);
} // RKR_Slider* coil_tone
{ coil_origin = new RKR_Choice(61, 55, 90, 18, "Origin");
  coil_origin->box(FL_FLAT_BOX);
  coil_origin->down_box(FL_BORDER_BOX);
  coil_origin->color(FL_BACKGROUND_COLOR);
  coil_origin->selection_color(FL_FOREGROUND_COLOR);
  coil_origin->labeltype(FL_NORMAL_LABEL);
  coil_origin->labelfont(0);
  coil_origin->labelsize(10);
  coil_origin->labelcolor(FL_BACKGROUND2_COLOR);
  coil_origin->textsize(10);
  coil_origin->textcolor(FL_BACKGROUND2_COLOR);
  coil_origin->callback((Fl_Callback*)cb_coil_origin, (void*)(12));
  coil_origin->align(Fl_Align(FL_ALIGN_LEFT));
  coil_origin->when(FL_WHEN_RELEASE_ALWAYS);
  coil_origin->menu(menu_coil_origin);
} // RKR_Choice* coil_origin
{ coil_freq1 = new RKR_Slider(56, 79, 100, 10, "Freq 1");
  coil_freq1->tooltip("Origin Pickup Frequency");
  coil_freq1->type(5);
  coil_freq1->box(FL_FLAT_BOX);
  coil_freq1->color((Fl_Color)178);
  coil_freq1->selection_color((Fl_Color)62);
  coil_freq1->labeltype(FL_NORMAL_LABEL);
  coil_freq1->labelfont(0);
  coil_freq1->labelsize(10);
  coil_freq1->labelcolor(FL_BACKGROUND2_COLOR);
  coil_freq1->minimum(2600);
  coil_freq1->maximum(4500);
  coil_freq1->step(1);
  coil_freq1->value(3200);
  coil_freq1->textcolor(FL_BACKGROUND2_COLOR);
  coil_freq1->callback((Fl_Callback*)cb_coil_freq1);
  coil_freq1->align(Fl_Align(FL_ALIGN_LEFT));
  coil_freq1->when(FL_WHEN_CHANGED);
} // RKR_Slider* coil_freq1
{ coil_q1 = new RKR_Slider(56, 94, 100, 10, "Q 1");
  coil_q1->tooltip("Origin Pickup Resonance");
  coil_q1->type(5);
  coil_q1->box(FL_FLAT_BOX);
  coil_q1->color((Fl_Color)178);
  coil_q1->selection_color((Fl_Color)62);
  coil_q1->labeltype(FL_NORMAL_LABEL);
  coil_q1->labelfont(0);
  coil_q1->labelsize(10);
  coil_q1->labelcolor(FL_BACKGROUND2_COLOR);
  coil_q1->minimum(10);
  coil_q1->maximum(65);
  coil_q1->step(1);
  coil_q1->textcolor(FL_BACKGROUND2_COLOR);
  coil_q1->callback((Fl_Callback*)cb_coil_q1);
  coil_q1->align(Fl_Align(FL_ALIGN_LEFT));
  coil_q1->when(FL_WHEN_CHANGED);
} // RKR_Slider* coil_q1
{ RKR_Choice* o = coil_destiny = new RKR_Choice(61, 107, 90, 18, "Destiny");
  coil_destiny->box(FL_FLAT_BOX);
  coil_destiny->down_box(FL_BORDER_BOX);
  coil_destiny->color(FL_BACKGROUND_COLOR);
  coil_destiny->selection_color(FL_FOREGROUND_COLOR);
  coil_destiny->labeltype(FL_NORMAL_LABEL);
  coil_destiny->labelfont(0);
  coil_destiny->labelsize(10);
  coil_destiny->labelcolor(FL_BACKGROUND2_COLOR);
  coil_destiny->textsize(10);
  coil_destiny->textcolor(FL_BACKGROUND2_COLOR);
  coil_destiny->callback((Fl_Callback*)cb_coil_destiny);
  coil_destiny->align(Fl_Align(FL_ALIGN_LEFT));
  coil_destiny->when(FL_WHEN_RELEASE_ALWAYS);
  o->menu(menu_coil_origin);
} // RKR_Choice* coil_destiny
{ coil_freq2 = new RKR_Slider(56, 132, 100, 10, "Freq 2");
  coil_freq2->tooltip("Destination Pickup Frequency");
  coil_freq2->type(5);
  coil_freq2->box(FL_FLAT_BOX);
  coil_freq2->color((Fl_Color)178);
  coil_freq2->selection_color((Fl_Color)62);
  coil_freq2->labeltype(FL_NORMAL_LABEL);
  coil_freq2->labelfont(0);
  coil_freq2->labelsize(10);
  coil_freq2->labelcolor(FL_BACKGROUND2_COLOR);
  coil_freq2->minimum(2600);
  coil_freq2->maximum(4500);
  coil_freq2->step(1);
  coil_freq2->value(3200);
  coil_freq2->textcolor(FL_BACKGROUND2_COLOR);
  coil_freq2->callback((Fl_Callback*)cb_coil_freq2);
  coil_freq2->align(Fl_Align(FL_ALIGN_LEFT));
  coil_freq2->when(FL_WHEN_CHANGED);
} // RKR_Slider* coil_freq2
{ coil_q2 = new RKR_Slider(56, 147, 100, 10, "Q 2");
  coil_q2->tooltip("Destination Pickup Resonance");
  coil_q2->type(5);
  coil_q2->box(FL_FLAT_BOX);
  coil_q2->color((Fl_Color)178);
  coil_q2->selection_color((Fl_Color)62);
  coil_q2->labeltype(FL_NORMAL_LABEL);
  coil_q2->labelfont(0);
  coil_q2->labelsize(10);
  coil_q2->labelcolor(FL_BACKGROUND2_COLOR);
  coil_q2->minimum(10);
  coil_q2->maximum(65);
  coil_q2->step(1);
  coil_q2->value(20);
  coil_q2->textcolor(FL_BACKGROUND2_COLOR);
  coil_q2->callback((Fl_Callback*)cb_coil_q2);
  coil_q2->align(Fl_Align(FL_ALIGN_LEFT));
  coil_q2->when(FL_WHEN_CHANGED);
} // RKR_Slider* coil_q2
{ coil_mode = new RKR_Check_Button(13, 161, 41, 15, "Neck Pickup");
  coil_mode->box(FL_NO_BOX);
  coil_mode->down_box(FL_BORDER_BOX);
  coil_mode->color(FL_BACKGROUND_COLOR);
  coil_mode->selection_color(FL_FOREGROUND_COLOR);
  coil_mode->labeltype(FL_NORMAL_LABEL);
  coil_mode->labelfont(0);
  coil_mode->labelsize(10);
  coil_mode->labelcolor(FL_BACKGROUND2_COLOR);
  coil_mode->callback((Fl_Callback*)cb_coil_mode, (void*)(2));
  coil_mode->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  coil_mode->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* coil_mode
position(X, Y);
end();
}

void CoilGui::parameter_refresh(int index) {
  switch (index)
      {
      case Coil_Gain:
          coil_WD->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Gain));
          break;
      case Coil_Origin:
          coil_origin->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Origin));
          break;
      case Coil_Destiny:
          coil_destiny->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Destiny));
          break;
      case Coil_Freq_1:
          coil_freq1->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Freq_1));
          break;
      case Coil_Q_1:
          coil_q1->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Q_1));
          break;
      case Coil_Freq_2:
          coil_freq2->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Freq_2));
          break;
      case Coil_Q_2:
          coil_q2->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Q_2));
          break;
      case Coil_Tone:
          coil_tone->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_Tone));
          break;
      case Coil_NeckMode:
          coil_mode->value(m_process->Rack_Effects[EFX_COILCRAFTER]->getpar(Coil_NeckMode));
          break;
      }
}
