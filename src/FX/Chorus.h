/*
  ZynAddSubFX - a software synthesizer

  Chorus.h - Chorus and Flange effects
  Copyright (C) 2002-2005 Nasca Octavian Paul
  Author: Nasca Octavian Paul

  Modified for rakarrack by Josep Andreu

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

#ifndef CHORUS_H
#define CHORUS_H
#include "../EFX_common/EffectLFO.h"
#include "../EFX_common/delayline.h"
#include "Effect.h"

#define CHORUSLV2_URI "https://github.com/Stazed/rakarrack-plus#chor"

const int C_CHORUS_PARAMETERS = 13;

enum Chorus_Index
{
    Chorus_DryWet = 0,
    Chorus_Pan,
    Chorus_LFO_Tempo,
    Chorus_LFO_Random,
    Chorus_LFO_Type,
    Chorus_LFO_Stereo,
    Chorus_Depth,
    Chorus_Delay,
    Chorus_Feedback,
    Chorus_LR_Cross,
    Chorus_SKIP_Flange_10,
    Chorus_Subtract,
    Chorus_Intense
};

class Chorus :public Effect
{

public:
    Chorus (double sample_rate, uint32_t intermediate_bufsize);
    virtual ~Chorus ();
    void out (float * efxoutl, float * efxoutr);
    virtual void setpreset (int npreset);
    void changepar (int npar, int value);
    int getpar (int npar);
    void cleanup ();
    int get_number_efx_parameters () {return C_CHORUS_PARAMETERS;};
    void set_random_parameters();
    
#ifdef LV2_SUPPORT
    void lv2_update_params(uint32_t period);
#endif // LV2
    virtual void LV2_parameters(std::string &s_buf);
    virtual std::string get_URI() { return CHORUSLV2_URI; };

    float fSAMPLE_RATE;
    uint32_t PERIOD;
    float fPERIOD;
    
    //Parametrii Chorus
    EffectLFO* lfo;		//lfo-ul chorus
    int Pvolume;
    int Ppanning;
    int Pdepth;		//the depth of the Chorus(ms)
    int Pdelay;		//the delay (ms)
    int Pfb;		//feedback
    int Plrcross;	//feedback
    int Pflangemode;	//how the LFO is scaled, to result chorus or flange
    int Poutsub;	//if I wish to substract the output instead of the adding it


    //Control Parametrii
    void setvolume (int _Pvolume);
    void setpanning (int _Ppanning);
    void setdepth (int _Pdepth);
    void setdelay (int _Pdelay);
    void setfb (int _Pfb);
    void setlrcross (int _Plrcross);

    //Valorile interne
    int maxdelay;
    int dlk, drk, dlhi, dlhi2;
    int awesome_mode;

    float depth, delay, fb, lrcross, panning, oldr, oldl;
    float dl1, dl2, dr1, dr2, lfol, lfor;
    float *delayl, *delayr;
    float getdelay (float xlfo);
    float dllo, mdel;

    class delayline *ldelay, *rdelay;

};

#endif
