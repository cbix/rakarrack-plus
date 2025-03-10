// generated by Fast Light User Interface Designer (fluid) version 1.0308

#include "echotron_gui.h"

void EchotronGui::cb_echotron_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Multi_On_Off);
 o->value(m_process->EFX_Active[EFX_ECHOTRON]);
 return;
}
m_process->EFX_Active[EFX_ECHOTRON]=(int)o->value();
if((int) o->value()==0) m_process->Rack_Effects[EFX_ECHOTRON]->cleanup();
m_parent->findpos(EFX_ECHOTRON,(int)o->value(),o);
}
void EchotronGui::cb_echotron_activar(RKR_Light_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_activar_i(o,v);
}

void EchotronGui::cb_echotron_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==UD_PRESET_ECHOTRON))
    m_process->Rack_Effects[EFX_ECHOTRON]->setpreset((int) o->value());

for (int i = 0; i < m_process->EFX_Param_Size[EFX_ECHOTRON]; i++)
{
    parameter_refresh(i);
};

Echotron *Efx_Echotron = static_cast<Echotron*>(m_process->Rack_Effects[EFX_ECHOTRON]);
echotron_length->maximum(Efx_Echotron->get_file_length());
}
void EchotronGui::cb_echotron_preset(RKR_Choice* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_preset_i(o,v);
}

Fl_Menu_Item EchotronGui::menu_echotron_preset[] = {
 {"Summer", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Ambience", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Arranjer", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Suction", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"SuctionFlange", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Soft", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void EchotronGui::cb_echotron_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_DryWet);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_DryWet,Dry_Wet((int)(o->value())));
}
void EchotronGui::cb_echotron_WD(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_WD_i(o,v);
}

void EchotronGui::cb_echotron_pan_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_Pan);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Pan,(int)(o->value()+64));
}
void EchotronGui::cb_echotron_pan(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_pan_i(o,v);
}

void EchotronGui::cb_echotron_tempo_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_Tempo);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Tempo,(int)o->value());
}
void EchotronGui::cb_echotron_tempo(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_tempo_i(o,v);
}

void EchotronGui::cb_echotron_damp_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_Damp);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Damp,(int)o->value());
}
void EchotronGui::cb_echotron_damp(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_damp_i(o,v);
}

void EchotronGui::cb_echotron_fb_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_Feedback);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Feedback,(int)o->value());
}
void EchotronGui::cb_echotron_fb(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_fb_i(o,v);
}

void EchotronGui::cb_echotron_lrcross_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_LR_Cross);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_LR_Cross,(int)(o->value()+64));
}
void EchotronGui::cb_echotron_lrcross(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_lrcross_i(o,v);
}

void EchotronGui::cb_echotron_width_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_LFO_Width);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_LFO_Width,(int)o->value());
}
void EchotronGui::cb_echotron_width(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_width_i(o,v);
}

void EchotronGui::cb_echotron_deep_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_Depth);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Depth,((int)o->value()+64));
}
void EchotronGui::cb_echotron_deep(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_deep_i(o,v);
}

void EchotronGui::cb_echotron_stdf_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_LFO_Stereo);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_LFO_Stereo,(int)o->value());
}
void EchotronGui::cb_echotron_stdf(RKR_Slider* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_stdf_i(o,v);
}

void EchotronGui::cb_echotron_af_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Filters,(int)o->value());
}
void EchotronGui::cb_echotron_af(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_af_i(o,v);
}

void EchotronGui::cb_echotron_lfotype_i(RKR_Choice* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_LFO_Type);
 return;
}

m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_LFO_Type,(int)o->value());
}
void EchotronGui::cb_echotron_lfotype(RKR_Choice* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_lfotype_i(o,v);
}

void EchotronGui::cb_echotron_mf_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Mod_Filter,(int)o->value());
}
void EchotronGui::cb_echotron_mf(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_mf_i(o,v);
}

void EchotronGui::cb_echotron_md_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Mod_Delay,(int)o->value());
}
void EchotronGui::cb_echotron_md(RKR_Check_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_md_i(o,v);
}

void EchotronGui::cb_B_scan_i(RKR_Button*, void*) {
  scan_for_new_dly_files();
}
void EchotronGui::cb_B_scan(RKR_Button* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_B_scan_i(o,v);
}

void EchotronGui::cb_echotron_length_i(RKR_Counter* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Echotron_Taps);
 return;
}
m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Taps,(int)o->value());
}
void EchotronGui::cb_echotron_length(RKR_Counter* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_length_i(o,v);
}

void EchotronGui::cb_echotron_fnum_i(RKR_Choice* o, void*) {
  if(Fl::event_button() == 3)
    {
        if(!m_parent->DelayFile->visible())
        {
            m_parent->DelayFile->apply_button->activate();
            m_parent->DelayFile->show();
            m_parent->put_icon(m_parent->DelayFile);
        }
        else
        {
            m_parent->DelayFile->hide();
        }
        return;
    }

    int user_file_selected = 0;

    Fl_Menu_Item *m = const_cast<Fl_Menu_Item*>  (o->menu ());
    std::string file = m[o->value()].label();
    
    Echotron *Efx_Echotron = static_cast<Echotron*>(m_process->Rack_Effects[EFX_ECHOTRON]);
    
    // See if this is a User provided file by checking the vector of user files
    for(unsigned i = 0; i < m_process->Echotron_DLY_Files.size (); i++)
    {
        // String compare by menu name
        if(strcmp(file.c_str(), m_process->Echotron_DLY_Files[i].User_File_Menu_Name.c_str ()) == 0)
        {
            user_file_selected = 1;  // found
            file = m_process->Echotron_DLY_Files[i].User_File_Name;  // full path
            break;
        }
    }

    if(user_file_selected)
    {
        // Copy the file name to the EFX
        strcpy(Efx_Echotron->Filename, file.c_str());
        
        // Tell the EFX that this is a user supplied file
        m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_User_File, 1);

        // Try to load the user file
        if(!Efx_Echotron->setfile(USERFILE))
        {
            // The error handling is done by the EFX
            //m_process->Handle_Message(14, file);
            
            // The user file did not work, un-set the user file
            m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_User_File, 0);
        }
        else
        {
            // On file loading, the taps are set to max length
            echotron_length->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Taps));

            // We don't know what the max file length is until after the file is loaded
            echotron_length->maximum(Efx_Echotron->get_file_length());
            
            // User file was loaded so set the gui user check box
            echotron_user->color (global_leds_color);
            echotron_user->redraw ();
        }
    }
    else
    {
        // They selected a program provided file, so un-set the User file
        m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_User_File, 0);

        // Load the program provided file
        m_process->Rack_Effects[EFX_ECHOTRON]->changepar(Echotron_Set_File,(int)o->value());

        // On file loading, the taps are set to max length
        echotron_length->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Taps));

        // We don't know what the max file length is until after the file is loaded
        echotron_length->maximum(Efx_Echotron->get_file_length());

        // Not a user file so un-check the gui user check box
        echotron_user->color (global_fore_color);
        echotron_user->redraw ();
    };
}
void EchotronGui::cb_echotron_fnum(RKR_Choice* o, void* v) {
  ((EchotronGui*)(o->parent()))->cb_echotron_fnum_i(o,v);
}

Fl_Menu_Item EchotronGui::menu_echotron_fnum[] = {
 {"SwingPong", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Short Delays", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Flange + Echo", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Comb", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"EchoFlange", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Filtered Echo", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Notch-Wah", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Multi-Chorus", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"PingPong", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"90-Shifter", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Basic LR Delay", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};
EchotronGui::EchotronGui(int X, int Y, int W, int H, const char *L)
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
{ RKR_Light_Button* o = echotron_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  echotron_activar->box(FL_UP_BOX);
  echotron_activar->shortcut(0x35);
  echotron_activar->color((Fl_Color)62);
  echotron_activar->selection_color((Fl_Color)1);
  echotron_activar->labeltype(FL_NORMAL_LABEL);
  echotron_activar->labelfont(0);
  echotron_activar->labelsize(10);
  echotron_activar->labelcolor(FL_FOREGROUND_COLOR);
  echotron_activar->callback((Fl_Callback*)cb_echotron_activar);
  echotron_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  echotron_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* echotron_activar
{ RKR_Choice* o = echotron_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  echotron_preset->box(FL_FLAT_BOX);
  echotron_preset->down_box(FL_BORDER_BOX);
  echotron_preset->color(FL_BACKGROUND_COLOR);
  echotron_preset->selection_color(FL_FOREGROUND_COLOR);
  echotron_preset->labeltype(FL_NORMAL_LABEL);
  echotron_preset->labelfont(0);
  echotron_preset->labelsize(10);
  echotron_preset->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_preset->textsize(10);
  echotron_preset->textcolor(FL_BACKGROUND2_COLOR);
  echotron_preset->callback((Fl_Callback*)cb_echotron_preset, (void*)(UD_PRESET_ECHOTRON));
  echotron_preset->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_preset->when(FL_WHEN_RELEASE_ALWAYS);
  echotron_preset->menu(menu_echotron_preset);
  preset_choice = o;
} // RKR_Choice* echotron_preset
{ echotron_WD = new RKR_Slider(56, 25, 100, 10, "Dry/Wet");
  echotron_WD->type(5);
  echotron_WD->box(FL_FLAT_BOX);
  echotron_WD->color((Fl_Color)178);
  echotron_WD->selection_color((Fl_Color)62);
  echotron_WD->labeltype(FL_NORMAL_LABEL);
  echotron_WD->labelfont(0);
  echotron_WD->labelsize(10);
  echotron_WD->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_WD->maximum(127);
  echotron_WD->step(1);
  echotron_WD->textcolor(FL_BACKGROUND2_COLOR);
  echotron_WD->callback((Fl_Callback*)cb_echotron_WD);
  echotron_WD->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* echotron_WD
{ echotron_pan = new RKR_Slider(56, 37, 100, 10, "Pan");
  echotron_pan->type(5);
  echotron_pan->box(FL_FLAT_BOX);
  echotron_pan->color((Fl_Color)178);
  echotron_pan->selection_color((Fl_Color)62);
  echotron_pan->labeltype(FL_NORMAL_LABEL);
  echotron_pan->labelfont(0);
  echotron_pan->labelsize(10);
  echotron_pan->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_pan->minimum(-64);
  echotron_pan->maximum(63);
  echotron_pan->step(1);
  echotron_pan->textcolor(FL_BACKGROUND2_COLOR);
  echotron_pan->callback((Fl_Callback*)cb_echotron_pan);
  echotron_pan->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_pan->when(FL_WHEN_CHANGED);
} // RKR_Slider* echotron_pan
{ echotron_tempo = new RKR_Slider(56, 49, 100, 10, "Tempo");
  echotron_tempo->type(5);
  echotron_tempo->box(FL_FLAT_BOX);
  echotron_tempo->color((Fl_Color)178);
  echotron_tempo->selection_color((Fl_Color)62);
  echotron_tempo->labeltype(FL_NORMAL_LABEL);
  echotron_tempo->labelfont(0);
  echotron_tempo->labelsize(10);
  echotron_tempo->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_tempo->minimum(1);
  echotron_tempo->maximum(600);
  echotron_tempo->step(1);
  echotron_tempo->value(60);
  echotron_tempo->textcolor(FL_BACKGROUND2_COLOR);
  echotron_tempo->callback((Fl_Callback*)cb_echotron_tempo);
  echotron_tempo->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_tempo->when(FL_WHEN_RELEASE);
} // RKR_Slider* echotron_tempo
{ echotron_damp = new RKR_Slider(56, 61, 100, 10, "Damp");
  echotron_damp->type(5);
  echotron_damp->box(FL_FLAT_BOX);
  echotron_damp->color((Fl_Color)178);
  echotron_damp->selection_color((Fl_Color)62);
  echotron_damp->labeltype(FL_NORMAL_LABEL);
  echotron_damp->labelfont(0);
  echotron_damp->labelsize(10);
  echotron_damp->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_damp->maximum(127);
  echotron_damp->step(1);
  echotron_damp->textcolor(FL_BACKGROUND2_COLOR);
  echotron_damp->callback((Fl_Callback*)cb_echotron_damp);
  echotron_damp->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_damp->when(FL_WHEN_CHANGED);
} // RKR_Slider* echotron_damp
{ echotron_fb = new RKR_Slider(56, 73, 100, 10, "Feedback");
  echotron_fb->type(5);
  echotron_fb->box(FL_FLAT_BOX);
  echotron_fb->color((Fl_Color)178);
  echotron_fb->selection_color((Fl_Color)62);
  echotron_fb->labeltype(FL_NORMAL_LABEL);
  echotron_fb->labelfont(0);
  echotron_fb->labelsize(10);
  echotron_fb->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_fb->minimum(-64);
  echotron_fb->maximum(64);
  echotron_fb->step(1);
  echotron_fb->textcolor(FL_BACKGROUND2_COLOR);
  echotron_fb->callback((Fl_Callback*)cb_echotron_fb);
  echotron_fb->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_fb->when(FL_WHEN_CHANGED);
} // RKR_Slider* echotron_fb
{ echotron_lrcross = new RKR_Slider(56, 85, 100, 10, "L/R Cross");
  echotron_lrcross->type(5);
  echotron_lrcross->box(FL_FLAT_BOX);
  echotron_lrcross->color((Fl_Color)178);
  echotron_lrcross->selection_color((Fl_Color)62);
  echotron_lrcross->labeltype(FL_NORMAL_LABEL);
  echotron_lrcross->labelfont(0);
  echotron_lrcross->labelsize(10);
  echotron_lrcross->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_lrcross->minimum(-64);
  echotron_lrcross->maximum(64);
  echotron_lrcross->step(1);
  echotron_lrcross->textcolor(FL_BACKGROUND2_COLOR);
  echotron_lrcross->callback((Fl_Callback*)cb_echotron_lrcross);
  echotron_lrcross->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_lrcross->when(FL_WHEN_CHANGED);
} // RKR_Slider* echotron_lrcross
{ echotron_width = new RKR_Slider(56, 97, 100, 10, "Width");
  echotron_width->type(5);
  echotron_width->box(FL_FLAT_BOX);
  echotron_width->color((Fl_Color)178);
  echotron_width->selection_color((Fl_Color)62);
  echotron_width->labeltype(FL_NORMAL_LABEL);
  echotron_width->labelfont(0);
  echotron_width->labelsize(10);
  echotron_width->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_width->maximum(127);
  echotron_width->step(1);
  echotron_width->textcolor(FL_BACKGROUND2_COLOR);
  echotron_width->callback((Fl_Callback*)cb_echotron_width);
  echotron_width->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_width->when(FL_WHEN_RELEASE);
} // RKR_Slider* echotron_width
{ echotron_deep = new RKR_Slider(56, 109, 100, 10, "Depth");
  echotron_deep->type(5);
  echotron_deep->box(FL_FLAT_BOX);
  echotron_deep->color((Fl_Color)178);
  echotron_deep->selection_color((Fl_Color)62);
  echotron_deep->labeltype(FL_NORMAL_LABEL);
  echotron_deep->labelfont(0);
  echotron_deep->labelsize(10);
  echotron_deep->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_deep->minimum(-64);
  echotron_deep->maximum(64);
  echotron_deep->step(1);
  echotron_deep->textcolor(FL_BACKGROUND2_COLOR);
  echotron_deep->callback((Fl_Callback*)cb_echotron_deep);
  echotron_deep->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_deep->when(FL_WHEN_RELEASE);
} // RKR_Slider* echotron_deep
{ echotron_stdf = new RKR_Slider(56, 121, 100, 10, "Stereo Df");
  echotron_stdf->type(5);
  echotron_stdf->box(FL_FLAT_BOX);
  echotron_stdf->color((Fl_Color)178);
  echotron_stdf->selection_color((Fl_Color)62);
  echotron_stdf->labeltype(FL_NORMAL_LABEL);
  echotron_stdf->labelfont(0);
  echotron_stdf->labelsize(10);
  echotron_stdf->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_stdf->maximum(127);
  echotron_stdf->step(1);
  echotron_stdf->textcolor(FL_BACKGROUND2_COLOR);
  echotron_stdf->callback((Fl_Callback*)cb_echotron_stdf);
  echotron_stdf->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_stdf->when(FL_WHEN_CHANGED);
} // RKR_Slider* echotron_stdf
{ echotron_af = new RKR_Check_Button(2, 136, 32, 15, "AF");
  echotron_af->box(FL_NO_BOX);
  echotron_af->down_box(FL_BORDER_BOX);
  echotron_af->color(FL_BACKGROUND_COLOR);
  echotron_af->selection_color(FL_FOREGROUND_COLOR);
  echotron_af->labeltype(FL_NORMAL_LABEL);
  echotron_af->labelfont(0);
  echotron_af->labelsize(10);
  echotron_af->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_af->callback((Fl_Callback*)cb_echotron_af);
  echotron_af->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_af->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_af
{ RKR_Choice* o = echotron_lfotype = new RKR_Choice(88, 135, 64, 16, "LFO Type");
  echotron_lfotype->box(FL_FLAT_BOX);
  echotron_lfotype->down_box(FL_BORDER_BOX);
  echotron_lfotype->color(FL_BACKGROUND_COLOR);
  echotron_lfotype->selection_color(FL_FOREGROUND_COLOR);
  echotron_lfotype->labeltype(FL_NORMAL_LABEL);
  echotron_lfotype->labelfont(0);
  echotron_lfotype->labelsize(10);
  echotron_lfotype->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_lfotype->textsize(10);
  echotron_lfotype->textcolor(FL_BACKGROUND2_COLOR);
  echotron_lfotype->callback((Fl_Callback*)cb_echotron_lfotype);
  echotron_lfotype->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_lfotype->when(FL_WHEN_RELEASE);
  o->menu(m_lfo_menu->get_lfo_type());
} // RKR_Choice* echotron_lfotype
{ echotron_mf = new RKR_Check_Button(2, 151, 33, 15, "MF");
  echotron_mf->box(FL_NO_BOX);
  echotron_mf->down_box(FL_BORDER_BOX);
  echotron_mf->color(FL_BACKGROUND_COLOR);
  echotron_mf->selection_color(FL_FOREGROUND_COLOR);
  echotron_mf->labeltype(FL_NORMAL_LABEL);
  echotron_mf->labelfont(0);
  echotron_mf->labelsize(10);
  echotron_mf->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_mf->callback((Fl_Callback*)cb_echotron_mf);
  echotron_mf->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_mf->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_mf
{ echotron_md = new RKR_Check_Button(33, 151, 34, 15, "MD");
  echotron_md->box(FL_NO_BOX);
  echotron_md->down_box(FL_BORDER_BOX);
  echotron_md->color(FL_BACKGROUND_COLOR);
  echotron_md->selection_color(FL_FOREGROUND_COLOR);
  echotron_md->labeltype(FL_NORMAL_LABEL);
  echotron_md->labelfont(0);
  echotron_md->labelsize(10);
  echotron_md->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_md->callback((Fl_Callback*)cb_echotron_md);
  echotron_md->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  echotron_md->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* echotron_md
{ RKR_Box* o = echotron_user = new RKR_Box(67, 154, 12, 12, "User");
  echotron_user->box(FL_DOWN_BOX);
  echotron_user->color(FL_BACKGROUND_COLOR);
  echotron_user->selection_color(FL_BACKGROUND_COLOR);
  echotron_user->labeltype(FL_NORMAL_LABEL);
  echotron_user->labelfont(0);
  echotron_user->labelsize(10);
  echotron_user->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_user->align(Fl_Align(FL_ALIGN_RIGHT));
  echotron_user->when(FL_WHEN_RELEASE);
  o->set_box_type(BOX_LIGHT);
  o->set_label_offset(1);
} // RKR_Box* echotron_user
{ B_scan = new RKR_Button(106, 156, 46, 10, "Scan");
  B_scan->tooltip("Scan the User Directory for .dly files added after program start.");
  B_scan->box(FL_UP_BOX);
  B_scan->color(FL_BACKGROUND_COLOR);
  B_scan->selection_color(FL_BACKGROUND_COLOR);
  B_scan->labeltype(FL_NORMAL_LABEL);
  B_scan->labelfont(0);
  B_scan->labelsize(10);
  B_scan->labelcolor(FL_FOREGROUND_COLOR);
  B_scan->callback((Fl_Callback*)cb_B_scan);
  B_scan->align(Fl_Align(FL_ALIGN_CENTER));
  B_scan->when(FL_WHEN_RELEASE);
} // RKR_Button* B_scan
{ RKR_Counter* o = echotron_length = new RKR_Counter(16, 167, 48, 12, "#");
  echotron_length->type(1);
  echotron_length->box(FL_UP_BOX);
  echotron_length->color(FL_BACKGROUND_COLOR);
  echotron_length->selection_color(FL_INACTIVE_COLOR);
  echotron_length->labeltype(FL_NORMAL_LABEL);
  echotron_length->labelfont(0);
  echotron_length->labelsize(10);
  echotron_length->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_length->minimum(1);
  echotron_length->maximum(127);
  echotron_length->step(1);
  echotron_length->value(1);
  echotron_length->textsize(9);
  echotron_length->callback((Fl_Callback*)cb_echotron_length);
  echotron_length->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_length->when(FL_WHEN_RELEASE);
  o->set_text_offset(-1);
} // RKR_Counter* echotron_length
{ echotron_fnum = new RKR_Choice(88, 168, 64, 14, "File");
  echotron_fnum->tooltip("Right mouse button for Delay File Editor.\nSelect the .dly file to be used.\n\
Files preceded by a \'*\' are user supplied files in the User Directory.");
  echotron_fnum->box(FL_FLAT_BOX);
  echotron_fnum->down_box(FL_BORDER_BOX);
  echotron_fnum->color(FL_BACKGROUND_COLOR);
  echotron_fnum->selection_color(FL_FOREGROUND_COLOR);
  echotron_fnum->labeltype(FL_NORMAL_LABEL);
  echotron_fnum->labelfont(0);
  echotron_fnum->labelsize(10);
  echotron_fnum->labelcolor(FL_BACKGROUND2_COLOR);
  echotron_fnum->textsize(10);
  echotron_fnum->textcolor(FL_BACKGROUND2_COLOR);
  echotron_fnum->callback((Fl_Callback*)cb_echotron_fnum);
  echotron_fnum->align(Fl_Align(FL_ALIGN_LEFT));
  echotron_fnum->when(FL_WHEN_RELEASE);
  echotron_fnum->menu(menu_echotron_fnum);
} // RKR_Choice* echotron_fnum
position(X, Y);
end();
}

void EchotronGui::parameter_refresh(int index) {
  switch (index)
      {
      case Echotron_DryWet:
          echotron_WD->value(Dry_Wet(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_DryWet)));
          break;
      case Echotron_Depth:
          echotron_deep->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Depth)-64);
          break;
      case Echotron_LFO_Width:
          echotron_width->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_LFO_Width));
          break;
      case Echotron_Taps:
          echotron_length->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Taps));
          break;
      case Echotron_User_File:
      {
          if(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_User_File))
          {
              echotron_user->color (global_leds_color);
              echotron_user->redraw ();
          }
          else
          {
              echotron_user->color (global_fore_color);
              echotron_user->redraw ();
          }
      }
          break;
      case Echotron_Tempo:
          echotron_tempo->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Tempo));
          break;
      case Echotron_Damp:
          echotron_damp->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Damp));
          break;
      case Echotron_LR_Cross:
          echotron_lrcross->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_LR_Cross)-64);
          break;
      case Echotron_Set_File:
          echotron_fnum->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Set_File));
          break;
      case Echotron_LFO_Stereo:
          echotron_stdf->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_LFO_Stereo));
          break;
      case Echotron_Feedback:
          echotron_fb->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Feedback));
          break;
      case Echotron_Pan:
          echotron_pan->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Pan)-64);
          break;
      case Echotron_Mod_Delay:
          echotron_md->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Mod_Delay));
          break;
      case Echotron_Mod_Filter:
          echotron_mf->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Mod_Filter));
          break;
      case Echotron_LFO_Type:
          echotron_lfotype->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_LFO_Type));
          break;
      case Echotron_Filters:
          echotron_af->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Filters));
          break;
      }
}

void EchotronGui::tap_tempo_update() {
  echotron_tempo->value(m_process->Rack_Effects[EFX_ECHOTRON]->getpar(Echotron_Tempo));
}

void EchotronGui::add_echotron_file(std::string name) {
  echotron_fnum->add(name.c_str ());
    
        Fl_Menu_Item *m = const_cast<Fl_Menu_Item*>  (echotron_fnum->menu ());
        Fl_Menu_Item *p;
        
        int font_size = C_DEFAULT_FONT_SIZE;
    
        for (int i = 0; i < m->size(); i++)
        {
            p = m->next(i);
            
            if (i == 0)
            {
                font_size = p->labelsize();
            }
            
            p->labelsize(font_size);
            p->labelfont (global_font_type);
        }
}

void EchotronGui::add_user_files() {
  for(unsigned i = 0; i < m_process->Echotron_DLY_Files.size(); i++)
    {
        add_echotron_file(m_process->Echotron_DLY_Files[i].User_File_Menu_Name );
    }
}

void EchotronGui::scan_for_new_dly_files() {
  // This is just to get the current font size so the scan does not change the size
        // when the menu is reloaded
        Fl_Menu_Item *m = const_cast<Fl_Menu_Item*>  (echotron_fnum->menu ());
        int font_size = m->next(0)->labelsize();
    
        // Clear the whole menu and re-add everything
        echotron_fnum->clear();
    
        // Add the default
        echotron_fnum->menu(menu_echotron_fnum);
    
        // Set the font size for the first item, others will follow
        m = const_cast<Fl_Menu_Item*>  (echotron_fnum->menu ());
        m->next(0)->labelsize(font_size);
    
        // Re scan the User Directory and reload user vector
        m_process->load_echotron_vector();
    
        // Add user files from vector to menu
        add_user_files();
}
