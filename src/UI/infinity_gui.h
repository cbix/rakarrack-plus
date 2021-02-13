// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef infinity_gui_h
#define infinity_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Check_Button.h"
#include "RKR_Counter.h"
#include "RKR_Choice.h"
#include "RKR_GUI_Effect.h"
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"
#include "RKR_Value_Input.h"

class InfinityGui : public RKR_Gui_Effect {
public:
  InfinityGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *infinity_activar;
private:
  inline void cb_infinity_activar_i(RKR_Light_Button*, void*);
  static void cb_infinity_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *infinity_preset;
private:
  inline void cb_infinity_preset_i(RKR_Choice*, void*);
  static void cb_infinity_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_infinity_preset[];
public:
  RKR_Slider *infinity_WD;
private:
  inline void cb_infinity_WD_i(RKR_Slider*, void*);
  static void cb_infinity_WD(RKR_Slider*, void*);
public:
  RKR_Slider *infinity_Q;
private:
  inline void cb_infinity_Q_i(RKR_Slider*, void*);
  static void cb_infinity_Q(RKR_Slider*, void*);
public:
  RKR_Value_Input *infinity_1;
private:
  inline void cb_infinity_1_i(RKR_Value_Input*, void*);
  static void cb_infinity_1(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_2;
private:
  inline void cb_infinity_2_i(RKR_Value_Input*, void*);
  static void cb_infinity_2(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_3;
private:
  inline void cb_infinity_3_i(RKR_Value_Input*, void*);
  static void cb_infinity_3(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_4;
private:
  inline void cb_infinity_4_i(RKR_Value_Input*, void*);
  static void cb_infinity_4(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_5;
private:
  inline void cb_infinity_5_i(RKR_Value_Input*, void*);
  static void cb_infinity_5(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_6;
private:
  inline void cb_infinity_6_i(RKR_Value_Input*, void*);
  static void cb_infinity_6(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_7;
private:
  inline void cb_infinity_7_i(RKR_Value_Input*, void*);
  static void cb_infinity_7(RKR_Value_Input*, void*);
public:
  RKR_Value_Input *infinity_8;
private:
  inline void cb_infinity_8_i(RKR_Value_Input*, void*);
  static void cb_infinity_8(RKR_Value_Input*, void*);
public:
  RKR_Check_Button *infinity_rev;
private:
  inline void cb_infinity_rev_i(RKR_Check_Button*, void*);
  static void cb_infinity_rev(RKR_Check_Button*, void*);
public:
  RKR_Counter *infinity_stages;
private:
  inline void cb_infinity_stages_i(RKR_Counter*, void*);
  static void cb_infinity_stages(RKR_Counter*, void*);
public:
  RKR_Slider *infinity_pan;
private:
  inline void cb_infinity_pan_i(RKR_Slider*, void*);
  static void cb_infinity_pan(RKR_Slider*, void*);
public:
  RKR_Slider *infinity_stdf;
private:
  inline void cb_infinity_stdf_i(RKR_Slider*, void*);
  static void cb_infinity_stdf(RKR_Slider*, void*);
public:
  RKR_Slider *infinity_start;
private:
  inline void cb_infinity_start_i(RKR_Slider*, void*);
  static void cb_infinity_start(RKR_Slider*, void*);
public:
  RKR_Slider *infinity_end;
private:
  inline void cb_infinity_end_i(RKR_Slider*, void*);
  static void cb_infinity_end(RKR_Slider*, void*);
public:
  RKR_Slider *infinity_rate;
private:
  inline void cb_infinity_rate_i(RKR_Slider*, void*);
  static void cb_infinity_rate(RKR_Slider*, void*);
public:
  RKR_Slider *infinity_subdiv;
private:
  inline void cb_infinity_subdiv_i(RKR_Slider*, void*);
  static void cb_infinity_subdiv(RKR_Slider*, void*);
};
#endif
