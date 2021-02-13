// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef wahwah_gui_h
#define wahwah_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Check_Button.h"
#include "RKR_Choice.h"
#include "RKR_GUI_Effect.h"
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"

class WahwahGui : public RKR_Gui_Effect {
public:
  WahwahGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *WahWah_activar;
private:
  inline void cb_WahWah_activar_i(RKR_Light_Button*, void*);
  static void cb_WahWah_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *WahWah_preset;
private:
  inline void cb_WahWah_preset_i(RKR_Choice*, void*);
  static void cb_WahWah_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_WahWah_preset[];
public:
  RKR_Slider *WahWah_WD;
private:
  inline void cb_WahWah_WD_i(RKR_Slider*, void*);
  static void cb_WahWah_WD(RKR_Slider*, void*);
public:
  RKR_Slider *WahWah_pan;
private:
  inline void cb_WahWah_pan_i(RKR_Slider*, void*);
  static void cb_WahWah_pan(RKR_Slider*, void*);
public:
  RKR_Slider *WahWah_freq;
private:
  inline void cb_WahWah_freq_i(RKR_Slider*, void*);
  static void cb_WahWah_freq(RKR_Slider*, void*);
public:
  RKR_Slider *WahWah_rnd;
private:
  inline void cb_WahWah_rnd_i(RKR_Slider*, void*);
  static void cb_WahWah_rnd(RKR_Slider*, void*);
public:
  RKR_Choice *WahWah_lfotype;
private:
  inline void cb_WahWah_lfotype_i(RKR_Choice*, void*);
  static void cb_WahWah_lfotype(RKR_Choice*, void*);
public:
  RKR_Slider *WahWah_stdf;
private:
  inline void cb_WahWah_stdf_i(RKR_Slider*, void*);
  static void cb_WahWah_stdf(RKR_Slider*, void*);
public:
  RKR_Slider *WahWah_dpth;
private:
  inline void cb_WahWah_dpth_i(RKR_Slider*, void*);
  static void cb_WahWah_dpth(RKR_Slider*, void*);
public:
  RKR_Slider *WahWah_ampsns;
private:
  inline void cb_WahWah_ampsns_i(RKR_Slider*, void*);
  static void cb_WahWah_ampsns(RKR_Slider*, void*);
public:
  RKR_Check_Button *WahWah_ampsnsinv;
private:
  inline void cb_WahWah_ampsnsinv_i(RKR_Check_Button*, void*);
  static void cb_WahWah_ampsnsinv(RKR_Check_Button*, void*);
public:
  RKR_Choice *WahWah_ftype;
private:
  inline void cb_WahWah_ftype_i(RKR_Choice*, void*);
  static void cb_WahWah_ftype(RKR_Choice*, void*);
  static Fl_Menu_Item menu_WahWah_ftype[];
public:
  RKR_Slider *WahWah_smooth;
private:
  inline void cb_WahWah_smooth_i(RKR_Slider*, void*);
  static void cb_WahWah_smooth(RKR_Slider*, void*);
  CommonGuiMenu *m_lfo_menu; 
};
#endif
