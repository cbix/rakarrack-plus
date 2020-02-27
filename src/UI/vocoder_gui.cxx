// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "vocoder_gui.h"

void VocoderGui::cb_vo_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Vocoder_Bypass);
 return;
}
rkr->Vocoder_Bypass=(int)o->value();
if((int) o->value()==0)
vu_vu->value(-48);
rgui->findpos(35,(int)o->value(),o);
}
void VocoderGui::cb_vo_activar(Fl_Light_Button* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_activar_i(o,v);
}

void VocoderGui::cb_vo_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
        if((ud==0)||(ud==12035))rkr->efx_Vocoder->setpreset((int) o->value());
        vo_WD->value(Dry_Wet(rkr->efx_Vocoder->getpar(0)));
        vo_pan->value(rkr->efx_Vocoder->getpar(1)-64);
        vo_mu->value(rkr->efx_Vocoder->getpar(2));
        vo_q->value(rkr->efx_Vocoder->getpar(3));
        vo_input->value(rkr->efx_Vocoder->getpar(4));
        vo_ring->value(rkr->efx_Vocoder->getpar(6));
        vo_level->value(rkr->efx_Vocoder->getpar(5));
}
void VocoderGui::cb_vo_preset(Fl_Choice* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_preset_i(o,v);
}

Fl_Menu_Item VocoderGui::menu_vo_preset[] = {
 {"Vocoder 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Vocoder 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Vocoder 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Vocoder 4", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void VocoderGui::cb_vo_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(296);
         return;
        }
        rkr->efx_Vocoder->changepar(0,Dry_Wet((int)(o->value())));
}
void VocoderGui::cb_vo_WD(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_WD_i(o,v);
}

void VocoderGui::cb_vo_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(297);
         return;
        }
        rkr->efx_Vocoder->changepar(1,(int)(o->value()+64));
}
void VocoderGui::cb_vo_pan(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_pan_i(o,v);
}

void VocoderGui::cb_vo_input_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(298);
         return;
        }
        rkr->efx_Vocoder->changepar(4,(int)o->value());
}
void VocoderGui::cb_vo_input(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_input_i(o,v);
}

void VocoderGui::cb_vo_mu_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(299);
         return;
        }
        rkr->efx_Vocoder->changepar(2,(int)o->value());
}
void VocoderGui::cb_vo_mu(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_mu_i(o,v);
}

void VocoderGui::cb_vo_q_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(300);
         return;
        }
        rkr->efx_Vocoder->changepar(3,(int)o->value());
}
void VocoderGui::cb_vo_q(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_q_i(o,v);
}

void VocoderGui::cb_vo_ring_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(301);
         return;
        }
        rkr->efx_Vocoder->changepar(6,(int)o->value());
}
void VocoderGui::cb_vo_ring(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_ring_i(o,v);
}

void VocoderGui::cb_vo_level_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(302);
         return;
        }
        rkr->efx_Vocoder->changepar(5,(int)o->value());
}
void VocoderGui::cb_vo_level(SliderW* o, void* v) {
  ((VocoderGui*)(o->parent()))->cb_vo_level_i(o,v);
}
VocoderGui::VocoderGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ vo_activar = new Fl_Light_Button(6, 4, 34, 18, "On");
  vo_activar->shortcut(0x35);
  vo_activar->color((Fl_Color)62);
  vo_activar->selection_color((Fl_Color)1);
  vo_activar->labelsize(10);
  vo_activar->callback((Fl_Callback*)cb_vo_activar, (void*)(2));
  vo_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  vo_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* vo_activar
{ vo_preset = new Fl_Choice(79, 4, 76, 18, "Preset");
  vo_preset->down_box(FL_BORDER_BOX);
  vo_preset->selection_color(FL_FOREGROUND_COLOR);
  vo_preset->labelsize(10);
  vo_preset->labelcolor(FL_BACKGROUND2_COLOR);
  vo_preset->textsize(10);
  vo_preset->textcolor(FL_BACKGROUND2_COLOR);
  vo_preset->callback((Fl_Callback*)cb_vo_preset, (void*)(12035));
  vo_preset->when(FL_WHEN_RELEASE_ALWAYS);
  vo_preset->menu(menu_vo_preset);
} // Fl_Choice* vo_preset
{ vo_WD = new SliderW(52, 30, 100, 10, "Dry/Wet");
  vo_WD->type(5);
  vo_WD->box(FL_FLAT_BOX);
  vo_WD->color((Fl_Color)178);
  vo_WD->selection_color((Fl_Color)62);
  vo_WD->labeltype(FL_NORMAL_LABEL);
  vo_WD->labelfont(0);
  vo_WD->labelsize(10);
  vo_WD->labelcolor(FL_BACKGROUND2_COLOR);
  vo_WD->maximum(127);
  vo_WD->step(1);
  vo_WD->textcolor(FL_BACKGROUND2_COLOR);
  vo_WD->callback((Fl_Callback*)cb_vo_WD);
  vo_WD->align(Fl_Align(FL_ALIGN_LEFT));
  vo_WD->when(FL_WHEN_CHANGED);
} // SliderW* vo_WD
{ vo_pan = new SliderW(52, 50, 100, 10, "Pan");
  vo_pan->type(5);
  vo_pan->box(FL_FLAT_BOX);
  vo_pan->color((Fl_Color)178);
  vo_pan->selection_color((Fl_Color)62);
  vo_pan->labeltype(FL_NORMAL_LABEL);
  vo_pan->labelfont(0);
  vo_pan->labelsize(10);
  vo_pan->labelcolor(FL_BACKGROUND2_COLOR);
  vo_pan->minimum(-64);
  vo_pan->maximum(64);
  vo_pan->step(1);
  vo_pan->textcolor(FL_BACKGROUND2_COLOR);
  vo_pan->callback((Fl_Callback*)cb_vo_pan);
  vo_pan->align(Fl_Align(FL_ALIGN_LEFT));
  vo_pan->when(FL_WHEN_CHANGED);
} // SliderW* vo_pan
{ vo_input = new SliderW(52, 70, 100, 10, "Input");
  vo_input->type(5);
  vo_input->box(FL_FLAT_BOX);
  vo_input->color((Fl_Color)178);
  vo_input->selection_color((Fl_Color)62);
  vo_input->labeltype(FL_NORMAL_LABEL);
  vo_input->labelfont(0);
  vo_input->labelsize(10);
  vo_input->labelcolor(FL_BACKGROUND2_COLOR);
  vo_input->maximum(127);
  vo_input->step(1);
  vo_input->textcolor(FL_BACKGROUND2_COLOR);
  vo_input->callback((Fl_Callback*)cb_vo_input);
  vo_input->align(Fl_Align(FL_ALIGN_LEFT));
  vo_input->when(FL_WHEN_CHANGED);
} // SliderW* vo_input
{ vo_mu = new SliderW(52, 90, 100, 10, "Muf.");
  vo_mu->type(5);
  vo_mu->box(FL_FLAT_BOX);
  vo_mu->color((Fl_Color)178);
  vo_mu->selection_color((Fl_Color)62);
  vo_mu->labeltype(FL_NORMAL_LABEL);
  vo_mu->labelfont(0);
  vo_mu->labelsize(10);
  vo_mu->labelcolor(FL_BACKGROUND2_COLOR);
  vo_mu->minimum(1);
  vo_mu->maximum(127);
  vo_mu->step(1);
  vo_mu->value(1);
  vo_mu->textcolor(FL_BACKGROUND2_COLOR);
  vo_mu->callback((Fl_Callback*)cb_vo_mu);
  vo_mu->align(Fl_Align(FL_ALIGN_LEFT));
  vo_mu->when(FL_WHEN_CHANGED);
} // SliderW* vo_mu
{ vo_q = new SliderW(52, 110, 100, 10, "Q");
  vo_q->type(5);
  vo_q->box(FL_FLAT_BOX);
  vo_q->color((Fl_Color)178);
  vo_q->selection_color((Fl_Color)62);
  vo_q->labeltype(FL_NORMAL_LABEL);
  vo_q->labelfont(0);
  vo_q->labelsize(10);
  vo_q->labelcolor(FL_BACKGROUND2_COLOR);
  vo_q->minimum(40);
  vo_q->maximum(170);
  vo_q->step(1);
  vo_q->value(120);
  vo_q->textcolor(FL_BACKGROUND2_COLOR);
  vo_q->callback((Fl_Callback*)cb_vo_q);
  vo_q->align(Fl_Align(FL_ALIGN_LEFT));
  vo_q->when(FL_WHEN_CHANGED);
} // SliderW* vo_q
{ vo_ring = new SliderW(52, 130, 100, 10, "Ring");
  vo_ring->type(5);
  vo_ring->box(FL_FLAT_BOX);
  vo_ring->color((Fl_Color)178);
  vo_ring->selection_color((Fl_Color)62);
  vo_ring->labeltype(FL_NORMAL_LABEL);
  vo_ring->labelfont(0);
  vo_ring->labelsize(10);
  vo_ring->labelcolor(FL_BACKGROUND2_COLOR);
  vo_ring->maximum(127);
  vo_ring->step(1);
  vo_ring->textcolor(FL_BACKGROUND2_COLOR);
  vo_ring->callback((Fl_Callback*)cb_vo_ring);
  vo_ring->align(Fl_Align(FL_ALIGN_LEFT));
  vo_ring->when(FL_WHEN_CHANGED);
} // SliderW* vo_ring
{ vo_level = new SliderW(52, 150, 100, 10, "Level");
  vo_level->type(5);
  vo_level->box(FL_FLAT_BOX);
  vo_level->color((Fl_Color)178);
  vo_level->selection_color((Fl_Color)62);
  vo_level->labeltype(FL_NORMAL_LABEL);
  vo_level->labelfont(0);
  vo_level->labelsize(10);
  vo_level->labelcolor(FL_BACKGROUND2_COLOR);
  vo_level->maximum(127);
  vo_level->step(1);
  vo_level->textcolor(FL_BACKGROUND2_COLOR);
  vo_level->callback((Fl_Callback*)cb_vo_level);
  vo_level->align(Fl_Align(FL_ALIGN_LEFT));
  vo_level->when(FL_WHEN_CHANGED);
} // SliderW* vo_level
{ vu_vu = new NewVum(7, 55, 11, 122);
  vu_vu->type(2);
  vu_vu->box(FL_NO_BOX);
  vu_vu->color((Fl_Color)178);
  vu_vu->selection_color((Fl_Color)90);
  vu_vu->labeltype(FL_NORMAL_LABEL);
  vu_vu->labelfont(0);
  vu_vu->labelsize(14);
  vu_vu->labelcolor(FL_FOREGROUND_COLOR);
  vu_vu->minimum(15);
  vu_vu->maximum(-48);
  vu_vu->step(1);
  vu_vu->value(-48);
  vu_vu->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
  vu_vu->when(FL_WHEN_NEVER);
} // NewVum* vu_vu
position(X, Y);
end();
}
