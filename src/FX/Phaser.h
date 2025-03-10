/*
  ZynAddSubFX - a software synthesizer

  Phaser.h - Phaser effect
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

#ifndef PHASER_H
#define PHASER_H

#include "Effect.h"
#include "../EFX_common/EffectLFO.h"

#define PHASELV2_URI "https://github.com/Stazed/rakarrack-plus#phas"

const int C_PHASER_PARAMETERS = 12;

enum Phaser_Index
{
    Phaser_DryWet = 0,
    Phaser_Pan,
    Phaser_LFO_Tempo,
    Phaser_LFO_Random,
    Phaser_LFO_Type,
    Phaser_LFO_Stereo,
    Phaser_Depth,
    Phaser_Feedback,
    Phaser_Stages,
    Phaser_LR_Cross,
    Phaser_Subtract,
    Phaser_Phase
};

class Phaser : public Effect
{
public:
    Phaser (double sample_rate, uint32_t intermediate_bufsize);
    ~Phaser ();
    void out (float * efxoutl, float * efxoutr);
    void setpreset (int npreset);
    void changepar (int npar, int value);
    int getpar (int npar);
    void cleanup ();
    int get_number_efx_parameters () {return C_PHASER_PARAMETERS;};
    void set_random_parameters();

#ifdef LV2_SUPPORT
    void lv2_update_params(uint32_t period);
#endif // LV2
    virtual void LV2_parameters(std::string &s_buf);
    virtual std::string get_URI() { return PHASELV2_URI; };

private:
    void setvolume (int _Pvolume);
    void setpanning (int _Ppanning);
    void setdepth (int _Pdepth);
    void setfb (int _Pfb);
    void setlrcross (int _Plrcross);
    void setstages (int _Pstages);
    void setphase (int _Pphase);


    //Parametrii Phaser
    uint32_t PERIOD;
    float fPERIOD;
    int Pvolume;
    int Ppanning;
    int Pdepth;		//the depth of the Phaser
    int Pfb;		//feedback
    int Plrcross;	//feedback
    int Pstages;
    int Poutsub;	//if I wish to substract the output instead of the adding it
    int Pphase;

    //Control Parametrii

    //Valorile interne
    float panning, fb, depth, lrcross, fbl, fbr, phase;
    float *oldl, *oldr;
    float oldlgain, oldrgain;
    
    EffectLFO *lfo;     //Phaser modulator

};

#endif
