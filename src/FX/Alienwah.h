/*
  ZynAddSubFX - a software synthesizer

  Alienwah.h - "AlienWah" effect
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

#ifndef ALIENWAH_H
#define ALIENWAH_H

#include "Effect.h"
#include "../EFX_common/EffectLFO.h"

#define ALIENLV2_URI "https://github.com/Stazed/rakarrack-plus#awha"

const int C_ALIENWAH_PARAMETERS = 11;

enum AlienWah_Index
{
    Alien_DryWet = 0,
    Alien_Pan,
    Alien_LFO_Tempo,
    Alien_LFO_Random,
    Alien_LFO_Type,
    Alien_LFO_Stereo,
    Alien_Depth,
    Alien_Feedback,
    Alien_Delay,
    Alien_LR_Cross,
    Alien_Phase
};

struct COMPLEXTYPE
{
    float a, b;
    
    COMPLEXTYPE():
        a(),
        b() {}
};

class Alienwah : public Effect
{
public:
    Alienwah (double sample_rate, uint32_t intermediate_bufsize);
    ~Alienwah ();
    void out (float * efxoutl, float * efxoutr);

    void setpreset (int npreset);
    void changepar (int npar, int value);
    int getpar (int npar);
    void cleanup ();
    int get_number_efx_parameters () {return C_ALIENWAH_PARAMETERS;};
    void set_random_parameters();
    
#ifdef LV2_SUPPORT
    void lv2_update_params(uint32_t period);
#endif // LV2
    virtual void LV2_parameters(std::string &s_buf);
    virtual std::string get_URI() { return ALIENLV2_URI; };

private:
    
    float fPERIOD;
    uint32_t PERIOD;
    
    //Parametrii Alienwah
    int Pvolume;
    int Ppanning;
    int Pdepth;		//the depth of the Alienwah
    int Pfb;		//feedback
    int Plrcross;	//feedback
    int Pdelay;
    int Pphase;

    int oldk;
    int oldpdelay;

    //Control Parametrii
    void setvolume (int _Pvolume);
    void setpanning (int _Ppanning);
    void setdepth (int _Pdepth);
    void setfb (int _Pfb);
    void setlrcross (int _Plrcross);
    void setdelay (int _Pdelay);
    void setphase (int _Pphase);
    
    EffectLFO *lfo;		//lfo-ul Alienwah
    
    //Valorile interne
    float panning, fb, depth, lrcross, phase;
    struct COMPLEXTYPE oldl[MAX_ALIENWAH_DELAY], oldr[MAX_ALIENWAH_DELAY];
    COMPLEXTYPE oldclfol, oldclfor;

};

#endif
