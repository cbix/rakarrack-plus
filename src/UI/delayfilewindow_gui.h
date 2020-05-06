// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef delayfilewindow_gui_h
#define delayfilewindow_gui_h
#include <FL/Fl.H>
#include <unistd.h>
#include "RKR_Group.h"
#include "RKR_Scroll.h"
#include "RKR_Value_Input.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Scroll.H>

class DelayFileWindowGui : public Fl_Double_Window {
  void _DelayFileWindowGui();
public:
  DelayFileWindowGui(int X, int Y, int W, int H, const char *L = 0);
  DelayFileWindowGui(int W, int H, const char *L = 0);
  DelayFileWindowGui();
  RKR_Group *Delay_Group;
  RKR_Value_Input *dly_filter;
  RKR_Value_Input *dly_delay;
  RKR_Value_Input *dly_LFO_rate;
  RKR_Group *dly_group;
  Fl_Scroll *dly_scroll;
  void make_delay_window();
};
#include <FL/Fl_Group.H>

class dlyFileGroup : public Fl_Group {
public:
  dlyFileGroup(int X, int Y, int W, int H, const char *L = 0);
  RKR_Value_Input *dly_pan;
  RKR_Value_Input *dly_time;
  RKR_Value_Input *dly_level;
  RKR_Value_Input *dly_LP;
  RKR_Value_Input *dly_BP;
  RKR_Value_Input *dly_HP;
  RKR_Value_Input *dly_freq;
  RKR_Value_Input *dly_Q;
  RKR_Value_Input *dly_stages;
};
#endif
