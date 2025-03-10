// generated by Fast Light User Interface Designer (fluid) version 1.0308

#include "bankwindow_gui.h"
/**
 Bank Window - From BankWindowGui::menu_MenuB[].
 All the sub menu paths for resizing.
 These need to be adjusted if the file menu is changed.
*/
const std::vector<std::string> bank_submenu_paths
{
    "&File/&Load Bank",
    "&File/&Save Bank",
    "&File/Convert &Old Bank",
    "&File/&Close",
    "&Help/Help &Contents",
    "&Help/&About..."
}; 

void BankWindowGui::cb_Load_Bank_i(Fl_Menu_*, void*) {
  m_parent->set_bank_file();
}
void BankWindowGui::cb_Load_Bank(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Load_Bank_i(o,v);
}

void BankWindowGui::cb_Save_Bank_i(Fl_Menu_*, void*) {
  m_parent->set_save_file();
}
void BankWindowGui::cb_Save_Bank(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Save_Bank_i(o,v);
}

void BankWindowGui::cb_Convert_Old_Bank_i(Fl_Menu_*, void*) {
  char *filename;

    filename=fl_file_chooser("Convert Old Bank File:","(*.rkrb)",NULL,0);

    if (filename==NULL)
        return;

    filename=fl_filename_setext(filename,".rkrb");

    if(m_process->CheckOldBank(filename))
    {
        m_process->ConvertOldFile(filename);
        m_process->Handle_Message(35);
    }
    else
    {
        m_process->Handle_Message(36);
    };
}
void BankWindowGui::cb_Convert_Old_Bank(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Convert_Old_Bank_i(o,v);
}

void BankWindowGui::cb_salirB_i(Fl_Menu_*, void*) {
  do_callback();
}
void BankWindowGui::cb_salirB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_salirB_i(o,v);
}

void BankWindowGui::cb_ContenidoB_i(Fl_Menu_*, void*) {
  m_parent->show_help();
}
void BankWindowGui::cb_ContenidoB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_ContenidoB_i(o,v);
}

void BankWindowGui::cb_Acerca_deB_i(Fl_Menu_*, void*) {
  int x,y;

x = this->x()+((w()-420)/2);
y = this->y()+((h()-230)/2);

m_parent->AboutWin->position(x,y);
m_parent->AboutWin->show();
m_parent->put_icon(m_parent->AboutWin);
}
void BankWindowGui::cb_Acerca_deB(Fl_Menu_* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_Acerca_deB_i(o,v);
}

Fl_Menu_Item BankWindowGui::menu_MenuB[] = {
 {"&File", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"&Load Bank", 0,  (Fl_Callback*)BankWindowGui::cb_Load_Bank, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Save Bank", 0,  (Fl_Callback*)BankWindowGui::cb_Save_Bank, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"Convert &Old Bank", 0,  (Fl_Callback*)BankWindowGui::cb_Convert_Old_Bank, 0, 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Close", 0,  (Fl_Callback*)BankWindowGui::cb_salirB, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {0,0,0,0,0,0,0,0,0},
 {"&Help", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"Help &Contents", 0xffbe,  (Fl_Callback*)BankWindowGui::cb_ContenidoB, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {"&About...", 0,  (Fl_Callback*)BankWindowGui::cb_Acerca_deB, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 7},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};
Fl_Menu_Item* BankWindowGui::ArchivoB = BankWindowGui::menu_MenuB + 0;
Fl_Menu_Item* BankWindowGui::Load_Bank = BankWindowGui::menu_MenuB + 1;
Fl_Menu_Item* BankWindowGui::Save_Bank = BankWindowGui::menu_MenuB + 2;
Fl_Menu_Item* BankWindowGui::Convert_Old_Bank = BankWindowGui::menu_MenuB + 3;
Fl_Menu_Item* BankWindowGui::salirB = BankWindowGui::menu_MenuB + 4;
Fl_Menu_Item* BankWindowGui::AyudaB = BankWindowGui::menu_MenuB + 6;
Fl_Menu_Item* BankWindowGui::ContenidoB = BankWindowGui::menu_MenuB + 7;
Fl_Menu_Item* BankWindowGui::Acerca_deB = BankWindowGui::menu_MenuB + 8;

void BankWindowGui::cb_B_Save_i(RKR_Button*, void*) {
  m_process->Gui_Refresh = GUI_Refresh_CTRL_S;
}
void BankWindowGui::cb_B_Save(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_Save_i(o,v);
}

void BankWindowGui::cb_B_New_i(RKR_Button*, void*) {
  m_parent->is_bank_modified ();
    m_process->new_bank(m_process->Bank);
    m_parent->Put_Loaded_Bank();
    redraw();
}
void BankWindowGui::cb_B_New(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_New_i(o,v);
}

void BankWindowGui::cb_B_B1_i(RKR_Button*, void*) {
  m_parent->L_B1->do_callback();
}
void BankWindowGui::cb_B_B1(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B1_i(o,v);
}

void BankWindowGui::cb_B_B2_i(RKR_Button*, void*) {
  m_parent->L_B2->do_callback();
}
void BankWindowGui::cb_B_B2(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B2_i(o,v);
}

void BankWindowGui::cb_B_B3_i(RKR_Button*, void*) {
  m_parent->L_B3->do_callback();
}
void BankWindowGui::cb_B_B3(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B3_i(o,v);
}

void BankWindowGui::cb_B_B4_i(RKR_Button*, void*) {
  m_parent->L_B4->do_callback();
}
void BankWindowGui::cb_B_B4(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_B4_i(o,v);
}

void BankWindowGui::cb_B_Reload_i(RKR_Button*, void*) {
  // Save the current bank filename
    std::string bank_filename = m_process->Bank_Vector[m_process->active_bank].Bank_File_Name.c_str();

    // Re-scan the user directory and reload all user banks
    m_parent->Scan_Bank_Dir(1);
    
    // Re-load the currently active bank for any changes
    if(m_process->load_bank_from_vector (bank_filename))
    {
        // Update the Bank Window
        m_parent->BankWin_Label(bank_filename);
        m_parent->Put_Loaded_Bank();
        unlight_preset(m_process->Selected_Preset);
    };
}
void BankWindowGui::cb_B_Reload(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_Reload_i(o,v);
}

void BankWindowGui::cb_B_S_i(RKR_Button*, void*) {
  sort_bank(m_process->active_bank);
}
void BankWindowGui::cb_B_S(RKR_Button* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_B_S_i(o,v);
}

void BankWindowGui::cb_CH_UB_i(RKR_Choice*, void* v) {
  // Need to save the file name in case is_bank_modified() results in a save
    // which rescans and deletes the menu with the void *v pointer 
    std::string bank_filename = (char *)v;

    m_parent->is_bank_modified ();

    if(m_process->load_bank_from_vector (bank_filename))
    {
        // Update the Bank Window
        m_parent->BankWin_Label(bank_filename);
        m_parent->Put_Loaded_Bank();
        unlight_preset(m_process->Selected_Preset);
    };
}
void BankWindowGui::cb_CH_UB(RKR_Choice* o, void* v) {
  ((BankWindowGui*)(o->parent()))->cb_CH_UB_i(o,v);
}
BankWindowGui::BankWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _BankWindowGui();
}

BankWindowGui::BankWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _BankWindowGui();
}

BankWindowGui::BankWindowGui()
  : Fl_Double_Window(0, 0, 800, 600, 0) {
  clear_flag(16);
  _BankWindowGui();
}

void BankWindowGui::_BankWindowGui() {
this->box(FL_FLAT_BOX);
this->color((Fl_Color)4);
this->selection_color(FL_BACKGROUND2_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fondo3 = new Fl_Box(1, 1, 800, 600);
} // Fl_Box* Fondo3
{ RKR_Menu_Bar* o = MenuB = new RKR_Menu_Bar(0, 0, 253, 20);
  MenuB->box(FL_NO_BOX);
  MenuB->color((Fl_Color)55);
  MenuB->selection_color(FL_BACKGROUND2_COLOR);
  MenuB->labeltype(FL_NORMAL_LABEL);
  MenuB->labelfont(0);
  MenuB->labelsize(14);
  MenuB->labelcolor(FL_BACKGROUND2_COLOR);
  MenuB->textcolor(FL_BACKGROUND2_COLOR);
  MenuB->align(Fl_Align(96|FL_ALIGN_INSIDE));
  MenuB->when(FL_WHEN_RELEASE_ALWAYS);
  MenuB->menu(menu_MenuB);
  o->set_label_offset(6);
  o->set_submenu_paths(bank_submenu_paths);
} // RKR_Menu_Bar* MenuB
{ RKR_Button* o = B_Save = new RKR_Button(115, 14, 80, 24, "Save Bank");
  B_Save->tooltip("Save the current active bank - Shortcut \'Ctrl-S\'");
  B_Save->box(FL_UP_BOX);
  B_Save->shortcut(0x40073);
  B_Save->color((Fl_Color)2);
  B_Save->selection_color(FL_BACKGROUND_COLOR);
  B_Save->labeltype(FL_NORMAL_LABEL);
  B_Save->labelfont(0);
  B_Save->labelsize(14);
  B_Save->labelcolor(FL_FOREGROUND_COLOR);
  B_Save->callback((Fl_Callback*)cb_B_Save);
  B_Save->align(Fl_Align(FL_ALIGN_CENTER));
  B_Save->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_Save
{ RKR_Button* o = B_New = new RKR_Button(204, 14, 80, 24, "New Bank");
  B_New->tooltip("Clear the bank window - Shortcut \'N\'");
  B_New->box(FL_UP_BOX);
  B_New->shortcut(0x6e);
  B_New->color((Fl_Color)2);
  B_New->selection_color(FL_BACKGROUND_COLOR);
  B_New->labeltype(FL_NORMAL_LABEL);
  B_New->labelfont(0);
  B_New->labelsize(14);
  B_New->labelcolor(FL_FOREGROUND_COLOR);
  B_New->callback((Fl_Callback*)cb_B_New);
  B_New->align(Fl_Align(FL_ALIGN_CENTER));
  B_New->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_New
{ RKR_Button* o = B_B1 = new RKR_Button(310, 14, 32, 24, "1");
  B_B1->tooltip("Set the active bank to Default - Shortcut \'1\'");
  B_B1->box(FL_UP_BOX);
  B_B1->shortcut(0x31);
  B_B1->color((Fl_Color)62);
  B_B1->selection_color(FL_BACKGROUND_COLOR);
  B_B1->labeltype(FL_NORMAL_LABEL);
  B_B1->labelfont(0);
  B_B1->labelsize(10);
  B_B1->labelcolor(FL_FOREGROUND_COLOR);
  B_B1->callback((Fl_Callback*)cb_B_B1);
  B_B1->align(Fl_Align(FL_ALIGN_CENTER));
  B_B1->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_B1
{ RKR_Button* o = B_B2 = new RKR_Button(350, 14, 32, 24, "2");
  B_B2->tooltip("Set the active bank to Extra - Shortcut \'2\'");
  B_B2->box(FL_UP_BOX);
  B_B2->shortcut(0x32);
  B_B2->color((Fl_Color)62);
  B_B2->selection_color(FL_BACKGROUND_COLOR);
  B_B2->labeltype(FL_NORMAL_LABEL);
  B_B2->labelfont(0);
  B_B2->labelsize(10);
  B_B2->labelcolor(FL_FOREGROUND_COLOR);
  B_B2->callback((Fl_Callback*)cb_B_B2);
  B_B2->align(Fl_Align(FL_ALIGN_CENTER));
  B_B2->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_B2
{ RKR_Button* o = B_B3 = new RKR_Button(390, 14, 32, 24, "3");
  B_B3->tooltip("Set the active bank to Extra1 - Shortcut \'3\'");
  B_B3->box(FL_UP_BOX);
  B_B3->shortcut(0x33);
  B_B3->color((Fl_Color)62);
  B_B3->selection_color(FL_BACKGROUND_COLOR);
  B_B3->labeltype(FL_NORMAL_LABEL);
  B_B3->labelfont(0);
  B_B3->labelsize(10);
  B_B3->labelcolor(FL_FOREGROUND_COLOR);
  B_B3->callback((Fl_Callback*)cb_B_B3);
  B_B3->align(Fl_Align(FL_ALIGN_CENTER));
  B_B3->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_B3
{ RKR_Button* o = B_B4 = new RKR_Button(430, 14, 32, 24, "U");
  B_B4->tooltip("Set the active bank to User bank default - Shortcut \'U\'");
  B_B4->box(FL_UP_BOX);
  B_B4->shortcut(0x75);
  B_B4->color((Fl_Color)62);
  B_B4->selection_color(FL_BACKGROUND_COLOR);
  B_B4->labeltype(FL_NORMAL_LABEL);
  B_B4->labelfont(0);
  B_B4->labelsize(10);
  B_B4->labelcolor(FL_FOREGROUND_COLOR);
  B_B4->callback((Fl_Callback*)cb_B_B4);
  B_B4->align(Fl_Align(FL_ALIGN_CENTER));
  B_B4->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_B4
{ RKR_Button* o = B_Reload = new RKR_Button(470, 14, 32, 24, "R");
  B_Reload->tooltip("Refresh User Banks. \nWARNING: This will re-load the currently active bank.\n\
 All modifications to the current active bank will be lost!");
  B_Reload->box(FL_UP_BOX);
  B_Reload->color(FL_RED);
  B_Reload->selection_color(FL_BACKGROUND_COLOR);
  B_Reload->labeltype(FL_NORMAL_LABEL);
  B_Reload->labelfont(0);
  B_Reload->labelsize(10);
  B_Reload->labelcolor(FL_FOREGROUND_COLOR);
  B_Reload->callback((Fl_Callback*)cb_B_Reload, (void*)(UD_Disable_Highlight));
  B_Reload->align(Fl_Align(FL_ALIGN_CENTER));
  B_Reload->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
  o->set_button_type(BUTTON_BANK_RESET);
} // RKR_Button* B_Reload
{ RKR_Button* o = B_S = new RKR_Button(510, 14, 32, 24, "S");
  B_S->tooltip("Sort the current bank by name");
  B_S->box(FL_UP_BOX);
  B_S->color((Fl_Color)62);
  B_S->selection_color(FL_BACKGROUND_COLOR);
  B_S->labeltype(FL_NORMAL_LABEL);
  B_S->labelfont(0);
  B_S->labelsize(10);
  B_S->labelcolor(FL_FOREGROUND_COLOR);
  B_S->callback((Fl_Callback*)cb_B_S);
  B_S->align(Fl_Align(FL_ALIGN_CENTER));
  B_S->when(FL_WHEN_RELEASE);
  o->set_label_offset(2);
} // RKR_Button* B_S
{ RKR_Choice* o = CH_UB = new RKR_Choice(635, 14, 117, 24, "User Banks");
  CH_UB->box(FL_FLAT_BOX);
  CH_UB->down_box(FL_BORDER_BOX);
  CH_UB->color(FL_BACKGROUND_COLOR);
  CH_UB->selection_color(FL_BACKGROUND2_COLOR);
  CH_UB->labeltype(FL_NORMAL_LABEL);
  CH_UB->labelfont(0);
  CH_UB->labelsize(14);
  CH_UB->labelcolor(FL_BACKGROUND2_COLOR);
  CH_UB->textcolor(FL_BACKGROUND2_COLOR);
  CH_UB->callback((Fl_Callback*)cb_CH_UB);
  CH_UB->align(Fl_Align(FL_ALIGN_LEFT));
  CH_UB->when(FL_WHEN_RELEASE_ALWAYS);
  o->set_label_offset(4);
  o->set_text_offset(4);
} // RKR_Choice* CH_UB
{ RKR_Box* o = Alert_Message = new RKR_Box(40, 44, 710, 17);
  Alert_Message->box(FL_NO_BOX);
  Alert_Message->color(FL_BACKGROUND_COLOR);
  Alert_Message->selection_color(FL_BACKGROUND_COLOR);
  Alert_Message->labeltype(FL_NORMAL_LABEL);
  Alert_Message->labelfont(0);
  Alert_Message->labelsize(14);
  Alert_Message->labelcolor(FL_BACKGROUND2_COLOR);
  Alert_Message->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  Alert_Message->when(FL_WHEN_RELEASE);
  o->set_box_type(BOX_LEDS);
} // RKR_Box* Alert_Message
{ ob = new Fl_Group(0, 60, 800, 540);
  ob->labelsize(18);
  ob->end();
} // Fl_Group* ob
this->m_process = NULL;
this->m_parent = NULL;
end();
resizable(this);
}

void BankWindowGui::initialize(RKR *_rkr,RKRGUI *_rgui ) {
  m_process = _rkr;
  m_parent= _rgui;
}

void BankWindowGui::set_bank_CH_UB(char* nombre, char* nombank) {
  m_bank_menu.push_back(nombank);
  CH_UB->add((const char *)nombre, 0, (Fl_Callback *)cb_CH_UB, (void *)&m_bank_menu.back()[0], 0);
  CH_UB->font_resize(CH_UB->get_width(), CH_UB->get_height());
}

void BankWindowGui::make_window_banks() {
  int button_w = 176;
      int button_h = 32;
      float w_ratio = (float) w()/800;
      float h_ratio = (float) h()/600;
      
      float elw = (float) button_w * w_ratio;
      float elh = (float) button_h * h_ratio;
      
      ob->begin();
      
      float x = (float) 40 * w_ratio;
      float y = (float) 40 * h_ratio ;
      intptr_t num=1;
      
      // Program change number before the preset name
      std::string add_pg_change = "";
      
      for (int i = 1; i < 16; i++)
      {
          y += elh + (2.0f * h_ratio);
  
          for (int j=1; j<5; j++)
          {
              // Add the Program Change value
              add_pg_change = "[";
              add_pg_change += NTS(num);
              add_pg_change += "] ";
              add_pg_change += m_process->Bank[num].Preset_Name;
  
              RKR_Button* butX = new RKR_Button(x + 1, y+1, elw, elh, 0);
              butX->type(0);
              butX->color(global_fore_color);
              butX->box(FL_UP_BOX);
              butX->selection_color(global_leds_color);
              butX->labelcolor(global_label_color);
              butX->labelsize(15);
              butX->align(68|FL_ALIGN_INSIDE);
              butX->user_data((void*) (num));
              butX->value(0);
              butX->when(FL_WHEN_CHANGED |FL_WHEN_RELEASE_ALWAYS);
              butX->callback((Fl_Callback *)m_parent->preset_click);
              butX->set_button_type(BUTTON_BANK_HIGHLIGHT);
              butX->set_label_offset(5);
              butX->set_start_width(button_w);
              butX->set_start_height(button_h);
  
              // The label with the Program Change value
              butX->copy_label(add_pg_change.c_str ());
  
              ob->add(butX);
  
              x += elw + (4.0f * w_ratio) ;
              num++;
  
              butX->font_resize(butX->get_width(), butX->get_height());
          }
          x = (float) 40 * w_ratio;
      }
      
      
      ob->end();
      m_parent->set_bank_made(1);
      
      B_B1->color(global_fore_color);
      B_B2->color(global_fore_color);
      B_B3->color(global_fore_color);
      B_B4->color(global_fore_color);
      CH_UB->color(global_fore_color);
      
      light_preset(m_process->Selected_Preset);
}

void BankWindowGui::light_preset(int npreset) {
  if((m_parent == NULL) ||(!m_parent->get_bank_made()))
         return;
  
      for (int t=0; t<ob->children();t++)
      {
          Fl_Widget *w = ob->child(t);
          long long temp = (long long) w->user_data();
  
          if (temp == npreset)
          {
              RKR_Button *preset_selected = static_cast<RKR_Button*>(w);
              preset_selected->set_highlight_preset (1);  // true
              break;
          }
      }
}

void BankWindowGui::unlight_preset(int npreset) {
  if((m_parent == NULL) ||(!m_parent->get_bank_made()))
          return;
  
      for (int t=0; t<ob->children();t++)
      {
          Fl_Widget *w = ob->child(t);
          long long temp = (long long) w->user_data();
  
          if (temp == npreset)
          {
              RKR_Button *preset_unselected = static_cast<RKR_Button*>(w);
              preset_unselected->set_highlight_preset (0);    // false
              break;
          }
      }
}

void BankWindowGui::clear_menu() {
  m_bank_menu.clear();
}

void BankWindowGui::sort_bank(int a_bank) {
  PresetBankStruct current_bank[62];
      m_process->copy_bank(current_bank, m_process->Bank_Vector[a_bank].Bank);
      unsigned j = 0;
      bool swap = true;
      PresetBankStruct temp_preset;
      while (swap)
      {
          swap = false;
          j++;
          // We start at 1 because the first item is used by the compare button
          // and should not be sorted
          for (unsigned i = 1; i < 61 - j; i++)
          {
              std::string first_name = current_bank[i].Preset_Name;
              std::string second_name = current_bank[i + 1].Preset_Name;
              if (first_name > second_name)
              {
                  temp_preset = current_bank[i];
                  current_bank[i] = current_bank[i + 1];
                  current_bank[i + 1] = temp_preset;
                  swap = true;
              }
          }
      }
  
      m_process->copy_bank(m_process->Bank, current_bank);
  
      m_parent->Put_Loaded_Bank();
      unlight_preset(m_process->Selected_Preset);
      redraw();
  
      m_process->bank_modified = 1;
}
