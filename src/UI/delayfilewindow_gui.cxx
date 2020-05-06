// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "delayfilewindow_gui.h"
DelayFileWindowGui::DelayFileWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _DelayFileWindowGui();
}

DelayFileWindowGui::DelayFileWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _DelayFileWindowGui();
}

DelayFileWindowGui::DelayFileWindowGui()
  : Fl_Double_Window(0, 0, 605, 265, "Echotron Delay File") {
  clear_flag(16);
  _DelayFileWindowGui();
}

void DelayFileWindowGui::_DelayFileWindowGui() {
this->box(FL_FLAT_BOX);
this->color(FL_BACKGROUND_COLOR);
this->selection_color(FL_BACKGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Delay_Group = new RKR_Group(0, 0, 605, 265);
  Delay_Group->box(FL_NO_BOX);
  Delay_Group->color(FL_BACKGROUND_COLOR);
  Delay_Group->selection_color(FL_BACKGROUND_COLOR);
  Delay_Group->labeltype(FL_NORMAL_LABEL);
  Delay_Group->labelfont(0);
  Delay_Group->labelsize(14);
  Delay_Group->labelcolor(FL_FOREGROUND_COLOR);
  Delay_Group->align(Fl_Align(FL_ALIGN_TOP));
  Delay_Group->when(FL_WHEN_RELEASE);
  { dly_filter = new RKR_Value_Input(25, 25, 40, 25, "Filter");
    dly_filter->box(FL_DOWN_BOX);
    dly_filter->color(FL_BACKGROUND2_COLOR);
    dly_filter->selection_color(FL_SELECTION_COLOR);
    dly_filter->labeltype(FL_NORMAL_LABEL);
    dly_filter->labelfont(0);
    dly_filter->labelsize(14);
    dly_filter->labelcolor(FL_FOREGROUND_COLOR);
    dly_filter->maximum(100);
    dly_filter->step(0.1);
    dly_filter->align(Fl_Align(FL_ALIGN_TOP));
    dly_filter->when(FL_WHEN_CHANGED);
  } // RKR_Value_Input* dly_filter
  { dly_delay = new RKR_Value_Input(90, 25, 40, 25, "Delay");
    dly_delay->box(FL_DOWN_BOX);
    dly_delay->color(FL_BACKGROUND2_COLOR);
    dly_delay->selection_color(FL_SELECTION_COLOR);
    dly_delay->labeltype(FL_NORMAL_LABEL);
    dly_delay->labelfont(0);
    dly_delay->labelsize(14);
    dly_delay->labelcolor(FL_FOREGROUND_COLOR);
    dly_delay->maximum(100);
    dly_delay->step(0.1);
    dly_delay->align(Fl_Align(FL_ALIGN_TOP));
    dly_delay->when(FL_WHEN_CHANGED);
  } // RKR_Value_Input* dly_delay
  { dly_LFO_rate = new RKR_Value_Input(154, 25, 40, 25, "LFO Rate");
    dly_LFO_rate->tooltip("LFO Tempo Rate Adjustment");
    dly_LFO_rate->box(FL_DOWN_BOX);
    dly_LFO_rate->color(FL_BACKGROUND2_COLOR);
    dly_LFO_rate->selection_color(FL_SELECTION_COLOR);
    dly_LFO_rate->labeltype(FL_NORMAL_LABEL);
    dly_LFO_rate->labelfont(0);
    dly_LFO_rate->labelsize(14);
    dly_LFO_rate->labelcolor(FL_FOREGROUND_COLOR);
    dly_LFO_rate->maximum(100);
    dly_LFO_rate->step(0.1);
    dly_LFO_rate->align(Fl_Align(FL_ALIGN_TOP));
    dly_LFO_rate->when(FL_WHEN_CHANGED);
  } // RKR_Value_Input* dly_LFO_rate
  { dly_group = new RKR_Group(34, 81, 543, 0, "Pan        Time         Level        LP       BP       HP       Freq      Q  \
           Stages");
    dly_group->box(FL_NO_BOX);
    dly_group->color(FL_BACKGROUND_COLOR);
    dly_group->selection_color(FL_BACKGROUND_COLOR);
    dly_group->labeltype(FL_NORMAL_LABEL);
    dly_group->labelfont(0);
    dly_group->labelsize(14);
    dly_group->labelcolor(FL_FOREGROUND_COLOR);
    dly_group->align(Fl_Align(FL_ALIGN_TOP));
    dly_group->when(FL_WHEN_RELEASE);
    dly_group->end();
  } // RKR_Group* dly_group
  { dly_scroll = new Fl_Scroll(25, 88, 560, 165);
    dly_scroll->end();
  } // Fl_Scroll* dly_scroll
  Delay_Group->end();
} // RKR_Group* Delay_Group
end();
resizable(this);
}

void DelayFileWindowGui::make_delay_window() {
  // Fill scroll with max to start...
        dly_scroll->begin();
      
        for (intptr_t y=0; y<128; y++)
        {
  	  dlyFileGroup *DG = new dlyFileGroup(30,y*30,525,30);      
        }
      
        dly_scroll->end();
}
dlyFileGroup::dlyFileGroup(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
{ dly_pan = new RKR_Value_Input(6, 6, 35, 20);
  dly_pan->box(FL_DOWN_BOX);
  dly_pan->color(FL_BACKGROUND2_COLOR);
  dly_pan->selection_color(FL_SELECTION_COLOR);
  dly_pan->labeltype(FL_NO_LABEL);
  dly_pan->labelfont(0);
  dly_pan->labelsize(14);
  dly_pan->labelcolor(FL_FOREGROUND_COLOR);
  dly_pan->minimum(-1);
  dly_pan->step(0.01);
  dly_pan->align(Fl_Align(FL_ALIGN_TOP));
  dly_pan->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_pan
{ dly_time = new RKR_Value_Input(76, 6, 35, 20);
  dly_time->box(FL_DOWN_BOX);
  dly_time->color(FL_BACKGROUND2_COLOR);
  dly_time->selection_color(FL_SELECTION_COLOR);
  dly_time->labeltype(FL_NO_LABEL);
  dly_time->labelfont(0);
  dly_time->labelsize(14);
  dly_time->labelcolor(FL_FOREGROUND_COLOR);
  dly_time->minimum(-1);
  dly_time->step(0.01);
  dly_time->align(Fl_Align(FL_ALIGN_TOP));
  dly_time->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_time
{ dly_level = new RKR_Value_Input(144, 6, 35, 20);
  dly_level->box(FL_DOWN_BOX);
  dly_level->color(FL_BACKGROUND2_COLOR);
  dly_level->selection_color(FL_SELECTION_COLOR);
  dly_level->labeltype(FL_NO_LABEL);
  dly_level->labelfont(0);
  dly_level->labelsize(14);
  dly_level->labelcolor(FL_FOREGROUND_COLOR);
  dly_level->minimum(-1);
  dly_level->step(0.01);
  dly_level->align(Fl_Align(FL_ALIGN_TOP));
  dly_level->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_level
{ dly_LP = new RKR_Value_Input(212, 6, 35, 20);
  dly_LP->box(FL_DOWN_BOX);
  dly_LP->color(FL_BACKGROUND2_COLOR);
  dly_LP->selection_color(FL_SELECTION_COLOR);
  dly_LP->labeltype(FL_NO_LABEL);
  dly_LP->labelfont(0);
  dly_LP->labelsize(14);
  dly_LP->labelcolor(FL_FOREGROUND_COLOR);
  dly_LP->minimum(-1);
  dly_LP->step(0.01);
  dly_LP->align(Fl_Align(FL_ALIGN_TOP));
  dly_LP->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_LP
{ dly_BP = new RKR_Value_Input(268, 6, 35, 20);
  dly_BP->box(FL_DOWN_BOX);
  dly_BP->color(FL_BACKGROUND2_COLOR);
  dly_BP->selection_color(FL_SELECTION_COLOR);
  dly_BP->labeltype(FL_NO_LABEL);
  dly_BP->labelfont(0);
  dly_BP->labelsize(14);
  dly_BP->labelcolor(FL_FOREGROUND_COLOR);
  dly_BP->minimum(-1);
  dly_BP->step(0.01);
  dly_BP->align(Fl_Align(FL_ALIGN_TOP));
  dly_BP->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_BP
{ dly_HP = new RKR_Value_Input(322, 6, 35, 20);
  dly_HP->box(FL_DOWN_BOX);
  dly_HP->color(FL_BACKGROUND2_COLOR);
  dly_HP->selection_color(FL_SELECTION_COLOR);
  dly_HP->labeltype(FL_NO_LABEL);
  dly_HP->labelfont(0);
  dly_HP->labelsize(14);
  dly_HP->labelcolor(FL_FOREGROUND_COLOR);
  dly_HP->minimum(-1);
  dly_HP->step(0.01);
  dly_HP->align(Fl_Align(FL_ALIGN_TOP));
  dly_HP->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_HP
{ dly_freq = new RKR_Value_Input(375, 6, 35, 20);
  dly_freq->box(FL_DOWN_BOX);
  dly_freq->color(FL_BACKGROUND2_COLOR);
  dly_freq->selection_color(FL_SELECTION_COLOR);
  dly_freq->labeltype(FL_NO_LABEL);
  dly_freq->labelfont(0);
  dly_freq->labelsize(14);
  dly_freq->labelcolor(FL_FOREGROUND_COLOR);
  dly_freq->minimum(-1);
  dly_freq->step(0.01);
  dly_freq->align(Fl_Align(FL_ALIGN_TOP));
  dly_freq->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_freq
{ dly_Q = new RKR_Value_Input(425, 6, 35, 20);
  dly_Q->box(FL_DOWN_BOX);
  dly_Q->color(FL_BACKGROUND2_COLOR);
  dly_Q->selection_color(FL_SELECTION_COLOR);
  dly_Q->labeltype(FL_NO_LABEL);
  dly_Q->labelfont(0);
  dly_Q->labelsize(14);
  dly_Q->labelcolor(FL_FOREGROUND_COLOR);
  dly_Q->minimum(-1);
  dly_Q->step(0.01);
  dly_Q->align(Fl_Align(FL_ALIGN_TOP));
  dly_Q->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_Q
{ dly_stages = new RKR_Value_Input(491, 6, 35, 20);
  dly_stages->box(FL_DOWN_BOX);
  dly_stages->color(FL_BACKGROUND2_COLOR);
  dly_stages->selection_color(FL_SELECTION_COLOR);
  dly_stages->labeltype(FL_NO_LABEL);
  dly_stages->labelfont(0);
  dly_stages->labelsize(14);
  dly_stages->labelcolor(FL_FOREGROUND_COLOR);
  dly_stages->minimum(-1);
  dly_stages->step(0.01);
  dly_stages->align(Fl_Align(FL_ALIGN_TOP));
  dly_stages->when(FL_WHEN_CHANGED);
} // RKR_Value_Input* dly_stages
position(X, Y);
end();
}
