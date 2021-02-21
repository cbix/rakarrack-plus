// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "stereoharm_gui.h"

void SharGui::cb_shar_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Multi_On_Off);
 o->value(m_process->EFX_Bypass[EFX_STEREOHARM]);
 return;
}
m_process->EFX_Bypass[EFX_STEREOHARM]=(int)o->value();
if((int) o->value()==0)
m_process->Rack_Effects[EFX_STEREOHARM]->cleanup();
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_L_Chroma,m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_L_Chroma));
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_R_Chroma,m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_R_Chroma));
m_parent->Chord(1);
m_parent->findpos(EFX_STEREOHARM,(int)o->value(),o);
}
void SharGui::cb_shar_activar(RKR_Light_Button* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_activar_i(o,v);
}

void SharGui::cb_shar_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12042))m_process->Rack_Effects[EFX_STEREOHARM]->setpreset((int)o->value());

for (int i = 0; i < m_process->EFX_Param_Size[EFX_STEREOHARM]; i++)
{
    parameter_refresh(i);
};


StereoHarm *Efx_StereoHarm = static_cast<StereoHarm*>(m_process->Rack_Effects[EFX_STEREOHARM]);
if ((Efx_StereoHarm->PMIDI) || (Efx_StereoHarm->PSELECT)) m_parent->Chord(1);
}
void SharGui::cb_shar_preset(RKR_Choice* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_preset_i(o,v);
}

Fl_Menu_Item SharGui::menu_shar_preset[] = {
 {"Plain", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Octavator", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Hard Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void SharGui::cb_shar_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_DryWet);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_DryWet,Dry_Wet((int)(o->value())));
}
void SharGui::cb_shar_WD(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_WD_i(o,v);
}

void SharGui::cb_shar_intl_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_L_Interval);
 return;
}
m_process->EFX_Bypass[EFX_STEREOHARM]=0;
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_L_Interval,(int)(o->value()+12));
if((int)shar_activar->value())m_process->EFX_Bypass[EFX_STEREOHARM]=1;
}
void SharGui::cb_shar_intl(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_intl_i(o,v);
}

void SharGui::cb_shar_chl_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_L_Chroma);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_L_Chroma,(int)o->value());
}
void SharGui::cb_shar_chl(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_chl_i(o,v);
}

void SharGui::cb_shar_ganl_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_L_Gain);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_L_Gain,(int)(o->value()+64));
}
void SharGui::cb_shar_ganl(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_ganl_i(o,v);
}

void SharGui::cb_shar_intr_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_R_Interval);
 return;
}
m_process->EFX_Bypass[EFX_STEREOHARM]=0;
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_R_Interval,(int)(o->value()+12));
if((int)shar_activar->value())m_process->EFX_Bypass[EFX_STEREOHARM]=1;
}
void SharGui::cb_shar_intr(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_intr_i(o,v);
}

void SharGui::cb_shar_chr_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_R_Chroma);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_R_Chroma,(int)o->value());
}
void SharGui::cb_shar_chr(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_chr_i(o,v);
}

void SharGui::cb_shar_ganr_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_R_Gain);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_R_Gain,(int)(o->value()+64));
}
void SharGui::cb_shar_ganr(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_ganr_i(o,v);
}

void SharGui::cb_shar_lrc_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_LR_Cross);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_LR_Cross,(int)(o->value()));
}
void SharGui::cb_shar_lrc(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_lrc_i(o,v);
}

void SharGui::cb_shar_MIDI_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_MIDI,(int)o->value());
m_process->RC_Stereo_Harm->cleanup();

if(!(int)o->value())
{
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_L_Chroma,m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_L_Chroma));
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_R_Chroma,m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_R_Chroma));
};
}
void SharGui::cb_shar_MIDI(RKR_Check_Button* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_MIDI_i(o,v);
}

void SharGui::cb_shar_SELECT_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_Select);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_Select,(int)o->value());
m_process->RC_Stereo_Harm->cleanup();
m_parent->Chord(1);

if(!(int)o->value())
{
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_L_Chroma,m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_L_Chroma));
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_R_Chroma,m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_R_Chroma));
};
}
void SharGui::cb_shar_SELECT(RKR_Check_Button* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_SELECT_i(o,v);
}

void SharGui::cb_shar_note_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_Note);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_Note,(int)o->value());
m_parent->Chord(1);
}
void SharGui::cb_shar_note(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_note_i(o,v);
}

void SharGui::cb_shar_type_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Sharm_Chord);
 return;
}
m_process->Rack_Effects[EFX_STEREOHARM]->changepar(Sharm_Chord,(int)o->value());
m_parent->Chord(1);
}
void SharGui::cb_shar_type(RKR_Slider* o, void* v) {
  ((SharGui*)(o->parent()))->cb_shar_type_i(o,v);
}
SharGui::SharGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = shar_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  shar_activar->box(FL_UP_BOX);
  shar_activar->shortcut(0x30);
  shar_activar->color((Fl_Color)62);
  shar_activar->selection_color((Fl_Color)1);
  shar_activar->labeltype(FL_NORMAL_LABEL);
  shar_activar->labelfont(0);
  shar_activar->labelsize(10);
  shar_activar->labelcolor(FL_FOREGROUND_COLOR);
  shar_activar->callback((Fl_Callback*)cb_shar_activar, (void*)(2));
  shar_activar->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  shar_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* shar_activar
{ RKR_Choice* o = shar_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  shar_preset->box(FL_FLAT_BOX);
  shar_preset->down_box(FL_BORDER_BOX);
  shar_preset->color(FL_BACKGROUND_COLOR);
  shar_preset->selection_color(FL_FOREGROUND_COLOR);
  shar_preset->labeltype(FL_NORMAL_LABEL);
  shar_preset->labelfont(0);
  shar_preset->labelsize(10);
  shar_preset->labelcolor(FL_BACKGROUND2_COLOR);
  shar_preset->textsize(10);
  shar_preset->textcolor(FL_BACKGROUND2_COLOR);
  shar_preset->callback((Fl_Callback*)cb_shar_preset, (void*)(12042));
  shar_preset->align(Fl_Align(FL_ALIGN_LEFT));
  shar_preset->when(FL_WHEN_RELEASE_ALWAYS);
  shar_preset->menu(menu_shar_preset);
  preset_choice = o;
} // RKR_Choice* shar_preset
{ shar_WD = new RKR_Slider(56, 26, 100, 10, "Dry/Wet");
  shar_WD->type(5);
  shar_WD->box(FL_FLAT_BOX);
  shar_WD->color((Fl_Color)178);
  shar_WD->selection_color((Fl_Color)62);
  shar_WD->labeltype(FL_NORMAL_LABEL);
  shar_WD->labelfont(0);
  shar_WD->labelsize(10);
  shar_WD->labelcolor(FL_BACKGROUND2_COLOR);
  shar_WD->maximum(127);
  shar_WD->step(1);
  shar_WD->textcolor(FL_BACKGROUND2_COLOR);
  shar_WD->callback((Fl_Callback*)cb_shar_WD);
  shar_WD->align(Fl_Align(FL_ALIGN_LEFT));
  shar_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_WD
{ shar_intl = new RKR_Slider(56, 39, 100, 10, "Int L");
  shar_intl->tooltip("Left Interval");
  shar_intl->type(5);
  shar_intl->box(FL_FLAT_BOX);
  shar_intl->color((Fl_Color)178);
  shar_intl->selection_color((Fl_Color)62);
  shar_intl->labeltype(FL_NORMAL_LABEL);
  shar_intl->labelfont(0);
  shar_intl->labelsize(10);
  shar_intl->labelcolor(FL_BACKGROUND2_COLOR);
  shar_intl->minimum(-12);
  shar_intl->maximum(12);
  shar_intl->step(1);
  shar_intl->textcolor(FL_BACKGROUND2_COLOR);
  shar_intl->callback((Fl_Callback*)cb_shar_intl);
  shar_intl->align(Fl_Align(FL_ALIGN_LEFT));
  shar_intl->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_intl
{ shar_chl = new RKR_Slider(56, 52, 100, 10, "Chrm L");
  shar_chl->tooltip("Left Chroma");
  shar_chl->type(5);
  shar_chl->box(FL_FLAT_BOX);
  shar_chl->color((Fl_Color)178);
  shar_chl->selection_color((Fl_Color)62);
  shar_chl->labeltype(FL_NORMAL_LABEL);
  shar_chl->labelfont(0);
  shar_chl->labelsize(10);
  shar_chl->labelcolor(FL_BACKGROUND2_COLOR);
  shar_chl->minimum(-2000);
  shar_chl->maximum(2000);
  shar_chl->step(1);
  shar_chl->textcolor(FL_BACKGROUND2_COLOR);
  shar_chl->callback((Fl_Callback*)cb_shar_chl);
  shar_chl->align(Fl_Align(FL_ALIGN_LEFT));
  shar_chl->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_chl
{ shar_ganl = new RKR_Slider(56, 65, 100, 10, "Gain L");
  shar_ganl->type(5);
  shar_ganl->box(FL_FLAT_BOX);
  shar_ganl->color((Fl_Color)178);
  shar_ganl->selection_color((Fl_Color)62);
  shar_ganl->labeltype(FL_NORMAL_LABEL);
  shar_ganl->labelfont(0);
  shar_ganl->labelsize(10);
  shar_ganl->labelcolor(FL_BACKGROUND2_COLOR);
  shar_ganl->minimum(-64);
  shar_ganl->maximum(64);
  shar_ganl->step(1);
  shar_ganl->textcolor(FL_BACKGROUND2_COLOR);
  shar_ganl->callback((Fl_Callback*)cb_shar_ganl);
  shar_ganl->align(Fl_Align(FL_ALIGN_LEFT));
  shar_ganl->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_ganl
{ shar_intr = new RKR_Slider(56, 78, 100, 10, "Int R");
  shar_intr->tooltip("Right Interval");
  shar_intr->type(5);
  shar_intr->box(FL_FLAT_BOX);
  shar_intr->color((Fl_Color)178);
  shar_intr->selection_color((Fl_Color)62);
  shar_intr->labeltype(FL_NORMAL_LABEL);
  shar_intr->labelfont(0);
  shar_intr->labelsize(10);
  shar_intr->labelcolor(FL_BACKGROUND2_COLOR);
  shar_intr->minimum(-12);
  shar_intr->maximum(12);
  shar_intr->step(1);
  shar_intr->textcolor(FL_BACKGROUND2_COLOR);
  shar_intr->callback((Fl_Callback*)cb_shar_intr);
  shar_intr->align(Fl_Align(FL_ALIGN_LEFT));
  shar_intr->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_intr
{ shar_chr = new RKR_Slider(56, 91, 100, 10, "Chrm R");
  shar_chr->tooltip("Right Chroma");
  shar_chr->type(5);
  shar_chr->box(FL_FLAT_BOX);
  shar_chr->color((Fl_Color)178);
  shar_chr->selection_color((Fl_Color)62);
  shar_chr->labeltype(FL_NORMAL_LABEL);
  shar_chr->labelfont(0);
  shar_chr->labelsize(10);
  shar_chr->labelcolor(FL_BACKGROUND2_COLOR);
  shar_chr->minimum(-2000);
  shar_chr->maximum(2000);
  shar_chr->step(1);
  shar_chr->textcolor(FL_BACKGROUND2_COLOR);
  shar_chr->callback((Fl_Callback*)cb_shar_chr);
  shar_chr->align(Fl_Align(FL_ALIGN_LEFT));
  shar_chr->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_chr
{ shar_ganr = new RKR_Slider(56, 104, 100, 10, "Gain R");
  shar_ganr->type(5);
  shar_ganr->box(FL_FLAT_BOX);
  shar_ganr->color((Fl_Color)178);
  shar_ganr->selection_color((Fl_Color)62);
  shar_ganr->labeltype(FL_NORMAL_LABEL);
  shar_ganr->labelfont(0);
  shar_ganr->labelsize(10);
  shar_ganr->labelcolor(FL_BACKGROUND2_COLOR);
  shar_ganr->minimum(-64);
  shar_ganr->maximum(64);
  shar_ganr->step(1);
  shar_ganr->textcolor(FL_BACKGROUND2_COLOR);
  shar_ganr->callback((Fl_Callback*)cb_shar_ganr);
  shar_ganr->align(Fl_Align(FL_ALIGN_LEFT));
  shar_ganr->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_ganr
{ shar_lrc = new RKR_Slider(56, 117, 100, 10, "L/R Cross");
  shar_lrc->type(5);
  shar_lrc->box(FL_FLAT_BOX);
  shar_lrc->color((Fl_Color)178);
  shar_lrc->selection_color((Fl_Color)62);
  shar_lrc->labeltype(FL_NORMAL_LABEL);
  shar_lrc->labelfont(0);
  shar_lrc->labelsize(10);
  shar_lrc->labelcolor(FL_BACKGROUND2_COLOR);
  shar_lrc->maximum(127);
  shar_lrc->step(1);
  shar_lrc->textcolor(FL_BACKGROUND2_COLOR);
  shar_lrc->callback((Fl_Callback*)cb_shar_lrc);
  shar_lrc->align(Fl_Align(FL_ALIGN_LEFT));
  shar_lrc->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_lrc
{ shar_MIDI = new RKR_Check_Button(9, 129, 15, 15, "MIDI");
  shar_MIDI->box(FL_NO_BOX);
  shar_MIDI->down_box(FL_BORDER_BOX);
  shar_MIDI->color(FL_BACKGROUND_COLOR);
  shar_MIDI->selection_color(FL_FOREGROUND_COLOR);
  shar_MIDI->labeltype(FL_NORMAL_LABEL);
  shar_MIDI->labelfont(0);
  shar_MIDI->labelsize(10);
  shar_MIDI->labelcolor(FL_BACKGROUND2_COLOR);
  shar_MIDI->callback((Fl_Callback*)cb_shar_MIDI, (void*)(2));
  shar_MIDI->align(Fl_Align(FL_ALIGN_RIGHT));
  shar_MIDI->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* shar_MIDI
{ shar_SELECT = new RKR_Check_Button(9, 142, 15, 15, "SELECT");
  shar_SELECT->box(FL_NO_BOX);
  shar_SELECT->down_box(FL_BORDER_BOX);
  shar_SELECT->color(FL_BACKGROUND_COLOR);
  shar_SELECT->selection_color(FL_FOREGROUND_COLOR);
  shar_SELECT->labeltype(FL_NORMAL_LABEL);
  shar_SELECT->labelfont(0);
  shar_SELECT->labelsize(10);
  shar_SELECT->labelcolor(FL_BACKGROUND2_COLOR);
  shar_SELECT->callback((Fl_Callback*)cb_shar_SELECT, (void*)(2));
  shar_SELECT->align(Fl_Align(FL_ALIGN_RIGHT));
  shar_SELECT->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* shar_SELECT
{ RKR_Box* o = shar_chordname = new RKR_Box(56, 132, 98, 21);
  shar_chordname->box(FL_NO_BOX);
  shar_chordname->color(FL_BACKGROUND_COLOR);
  shar_chordname->selection_color(FL_BACKGROUND_COLOR);
  shar_chordname->labeltype(FL_NORMAL_LABEL);
  shar_chordname->labelfont(0);
  shar_chordname->labelsize(12);
  shar_chordname->labelcolor(FL_BACKGROUND2_COLOR);
  shar_chordname->align(Fl_Align(FL_ALIGN_CENTER));
  shar_chordname->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Box* shar_chordname
{ shar_note = new RKR_Slider(56, 158, 100, 10, "Note");
  shar_note->type(5);
  shar_note->box(FL_FLAT_BOX);
  shar_note->color((Fl_Color)178);
  shar_note->selection_color((Fl_Color)62);
  shar_note->labeltype(FL_NORMAL_LABEL);
  shar_note->labelfont(0);
  shar_note->labelsize(10);
  shar_note->labelcolor(FL_BACKGROUND2_COLOR);
  shar_note->maximum(23);
  shar_note->step(1);
  shar_note->textcolor(FL_BACKGROUND2_COLOR);
  shar_note->callback((Fl_Callback*)cb_shar_note);
  shar_note->align(Fl_Align(FL_ALIGN_LEFT));
  shar_note->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_note
{ shar_type = new RKR_Slider(56, 170, 100, 10, "Chord");
  shar_type->type(5);
  shar_type->box(FL_FLAT_BOX);
  shar_type->color((Fl_Color)178);
  shar_type->selection_color((Fl_Color)62);
  shar_type->labeltype(FL_NORMAL_LABEL);
  shar_type->labelfont(0);
  shar_type->labelsize(10);
  shar_type->labelcolor(FL_BACKGROUND2_COLOR);
  shar_type->maximum(33);
  shar_type->step(1);
  shar_type->textcolor(FL_BACKGROUND2_COLOR);
  shar_type->callback((Fl_Callback*)cb_shar_type);
  shar_type->align(Fl_Align(FL_ALIGN_LEFT));
  shar_type->when(FL_WHEN_CHANGED);
} // RKR_Slider* shar_type
position(X, Y);
end();
}

void SharGui::parameter_refresh(int index) {
  switch (index)
      {
      case Sharm_DryWet:
          shar_WD->value(Dry_Wet(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_DryWet)));
          break;
      case Sharm_L_Gain:
          shar_ganl->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_L_Gain)-64);
          break;
      case Sharm_L_Interval:
          shar_intl->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_L_Interval)-12);
          break;
      case Sharm_L_Chroma:
          shar_chl->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_L_Chroma));
          break;
      case Sharm_R_Gain:
          shar_ganr->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_R_Gain)-64);
          break;
      case Sharm_R_Interval:
          shar_intr->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_R_Interval)-12);
          break;
      case Sharm_R_Chroma:
          shar_chr->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_R_Chroma));
          break;
      case Sharm_Select:
          shar_SELECT->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_Select));
          break;
      case Sharm_Note:
          shar_note->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_Note));
          m_parent->Chord(1);
          break;
      case Sharm_Chord:
          shar_type->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_Chord));
          m_parent->Chord(1);
          break;
      case Sharm_MIDI:
          shar_MIDI->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_MIDI));
          break;
      case Sharm_LR_Cross:
          shar_lrc->value(m_process->Rack_Effects[EFX_STEREOHARM]->getpar(Sharm_LR_Cross));
          break;
      }
}
