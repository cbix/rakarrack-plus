// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef echotron_gui_h
#define echotron_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Check_Button.h"
#include "RKR_Counter.h"
#include "RKR_Choice.h"
#include "RKR_GUI_Effect.h"
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"

class EchotronGui : public RKR_Gui_Effect {
public:
  EchotronGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *echotron_activar;
private:
  inline void cb_echotron_activar_i(RKR_Light_Button*, void*);
  static void cb_echotron_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *echotron_preset;
private:
  inline void cb_echotron_preset_i(RKR_Choice*, void*);
  static void cb_echotron_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_echotron_preset[];
public:
  RKR_Slider *echotron_WD;
private:
  inline void cb_echotron_WD_i(RKR_Slider*, void*);
  static void cb_echotron_WD(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_pan;
private:
  inline void cb_echotron_pan_i(RKR_Slider*, void*);
  static void cb_echotron_pan(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_tempo;
private:
  inline void cb_echotron_tempo_i(RKR_Slider*, void*);
  static void cb_echotron_tempo(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_damp;
private:
  inline void cb_echotron_damp_i(RKR_Slider*, void*);
  static void cb_echotron_damp(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_fb;
private:
  inline void cb_echotron_fb_i(RKR_Slider*, void*);
  static void cb_echotron_fb(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_lrcross;
private:
  inline void cb_echotron_lrcross_i(RKR_Slider*, void*);
  static void cb_echotron_lrcross(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_width;
private:
  inline void cb_echotron_width_i(RKR_Slider*, void*);
  static void cb_echotron_width(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_deep;
private:
  inline void cb_echotron_deep_i(RKR_Slider*, void*);
  static void cb_echotron_deep(RKR_Slider*, void*);
public:
  RKR_Slider *echotron_stdf;
private:
  inline void cb_echotron_stdf_i(RKR_Slider*, void*);
  static void cb_echotron_stdf(RKR_Slider*, void*);
public:
  RKR_Check_Button *echotron_af;
private:
  inline void cb_echotron_af_i(RKR_Check_Button*, void*);
  static void cb_echotron_af(RKR_Check_Button*, void*);
public:
  RKR_Choice *echotron_lfotype;
private:
  inline void cb_echotron_lfotype_i(RKR_Choice*, void*);
  static void cb_echotron_lfotype(RKR_Choice*, void*);
public:
  RKR_Check_Button *echotron_mf;
private:
  inline void cb_echotron_mf_i(RKR_Check_Button*, void*);
  static void cb_echotron_mf(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *echotron_md;
private:
  inline void cb_echotron_md_i(RKR_Check_Button*, void*);
  static void cb_echotron_md(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *echotron_user;
private:
  inline void cb_echotron_user_i(RKR_Check_Button*, void*);
  static void cb_echotron_user(RKR_Check_Button*, void*);
public:
  RKR_Button *B_ech;
private:
  inline void cb_B_ech_i(RKR_Button*, void*);
  static void cb_B_ech(RKR_Button*, void*);
public:
  RKR_Counter *echotron_length;
private:
  inline void cb_echotron_length_i(RKR_Counter*, void*);
  static void cb_echotron_length(RKR_Counter*, void*);
public:
  RKR_Choice *echotron_fnum;
private:
  inline void cb_echotron_fnum_i(RKR_Choice*, void*);
  static void cb_echotron_fnum(RKR_Choice*, void*);
  static Fl_Menu_Item menu_echotron_fnum[];
  CommonGuiMenu *m_lfo_menu; 
};
#endif
