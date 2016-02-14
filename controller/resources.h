// Copyright 2009 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef CONTROLLER_RESOURCES_H_
#define CONTROLLER_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"

namespace ambika {

typedef uint16_t ResourceId;

extern const prog_char* const string_table[];

extern const prog_uint16_t* const lookup_table_table[];

extern const prog_uint8_t* const character_table[];

extern const prog_uint8_t* const waveform_table[];

extern const prog_uint16_t lut_res_lfo_increments[] PROGMEM;
extern const prog_uint16_t lut_res_scale_just[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pythagorean[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_eb[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_e[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1_4_ea[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gunakri[] PROGMEM;
extern const prog_uint16_t lut_res_scale_marwa[] PROGMEM;
extern const prog_uint16_t lut_res_scale_shree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_purvi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bilawal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_yaman[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bhimpalasree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_darbari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rageshree[] PROGMEM;
extern const prog_uint16_t lut_res_scale_khamaj[] PROGMEM;
extern const prog_uint16_t lut_res_scale_mimal[] PROGMEM;
extern const prog_uint16_t lut_res_scale_parameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_rangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_gangeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kameshwari[] PROGMEM;
extern const prog_uint16_t lut_res_scale_pa__kafi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_natbhairav[] PROGMEM;
extern const prog_uint16_t lut_res_scale_m_kauns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_bairagi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_b_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_chandradeep[] PROGMEM;
extern const prog_uint16_t lut_res_scale_kaushik_todi[] PROGMEM;
extern const prog_uint16_t lut_res_scale_jogeshwari[] PROGMEM;
extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint8_t chr_res_special_characters[] PROGMEM;
extern const prog_uint8_t wav_res_lfo_waveforms[] PROGMEM;
#define STR_RES_WAVEFORM 0  // waveform
#define STR_RES_PARAMETER 1  // parameter
#define STR_RES_RANGE 2  // range
#define STR_RES_TUNE 3  // tune
#define STR_RES_OSC_MIX 4  // osc mix
#define STR_RES_SUB_OSC_ 5  // sub osc.
#define STR_RES_CROSSMOD_ 6  // crossmod.
#define STR_RES_OPERATOR 7  // operator
#define STR_RES_AMOUNT 8  // amount
#define STR_RES_RESONANCE 9  // resonance
#define STR_RES_MODE 10  // mode
#define STR_RES_ENV2TVCF 11  // env2~vcf
#define STR_RES_LFO2TVCF 12  // lfo2~vcf
#define STR_RES_ATTACK 13  // attack
#define STR_RES_DECAY 14  // decay
#define STR_RES_SUSTAIN 15  // sustain
#define STR_RES_RELEASE 16  // release
#define STR_RES_TRIGGER 17  // trigger
#define STR_RES_RATE 18  // rate
#define STR_RES_LFO_EG 19  // lfo/eg
#define STR_RES_VOICE_LFO 20  // voice lfo
#define STR_RES_SOURCE 21  // source
#define STR_RES_DESTINATION 22  // destination
#define STR_RES_IN1 23  // in1
#define STR_RES_IN2 24  // in2
#define STR_RES_MODULATION 25  // modulation
#define STR_RES_MODUL_ 26  // modul.
#define STR_RES__MODULATION 27  // modulation
#define STR_RES_MODIFIER 28  // modifier
#define STR_RES_MODIF_ 29  // modif.
#define STR_RES_VOLUME 30  // volume
#define STR_RES_OCTAVE 31  // octave
#define STR_RES_SPREAD 32  // spread
#define STR_RES_LEGATO 33  // legato
#define STR_RES_PORTAMENTO 34  // portamento
#define STR_RES_ARP_SEQ 35  // arp/seq
#define STR_RES_RAGA 36  // raga
#define STR_RES_DIRECTION 37  // direction
#define STR_RES_PATTERN 38  // pattern
#define STR_RES_CHANNEL 39  // channel
#define STR_RES_PART 40  // part
#define STR_RES_BPM 41  // bpm
#define STR_RES_LTCH 42  // ltch
#define STR_RES_LATCH 43  // latch
#define STR_RES_LOW 44  // low
#define STR_RES_HIGH 45  // high
#define STR_RES_GRID 46  // grid
#define STR_RES_SEQ1_LEN 47  // seq1 len
#define STR_RES_SEQ2_LEN 48  // seq2 len
#define STR_RES_PATT_LEN 49  // patt len
#define STR_RES_LEN1 50  // len1
#define STR_RES_LEN2 51  // len2
#define STR_RES_LENP 52  // lenp
#define STR_RES_GROOVE 53  // groove
#define STR_RES_MIDI 54  // midi
#define STR_RES_SNAP 55  // snap
#define STR_RES_HELP 56  // help
#define STR_RES_AUTO_BACKUP 57  // auto backup
#define STR_RES_LEDS 58  // leds
#define STR_RES_CARD_LEDS 59  // card leds
#define STR_RES_SWAP_COLORS 60  // swap colors
#define STR_RES_INPT_FILTER 61  // inpt filter
#define STR_RES_OUTP_MODE 62  // outp mode
#define STR_RES_EXT 63  // ext
#define STR_RES_OMNI 64  // omni
#define STR_RES_AMNT 65  // amnt
#define STR_RES_SRCE 66  // srce
#define STR_RES_OCT 67  // oct
#define STR_RES_SPRD 68  // sprd
#define STR_RES_A_SQ 69  // a/sq
#define STR_RES_OCTV 70  // octv
#define STR_RES_OFF 71  // off
#define STR_RES_ON 72  // on
#define STR_RES_NONE 73  // none
#define STR_RES_SAW 74  // saw
#define STR_RES_SQUARE 75  // square
#define STR_RES_TRIANGLE 76  // triangle
#define STR_RES_SINE 77  // sine
#define STR_RES_ZSAW 78  // zsaw
#define STR_RES_LPZSAW 79  // lpzsaw
#define STR_RES_PKZSAW 80  // pkzsaw
#define STR_RES_BPZSAW 81  // bpzsaw
#define STR_RES_HPZSAW 82  // hpzsaw
#define STR_RES_LPZPULSE 83  // lpzpulse
#define STR_RES_PKZPULSE 84  // pkzpulse
#define STR_RES_BPZPULSE 85  // bpzpulse
#define STR_RES_HPZPULSE 86  // hpzpulse
#define STR_RES_ZTRIANGLE 87  // ztriangle
#define STR_RES_PAD 88  // pad
#define STR_RES_FM 89  // fm
#define STR_RES_8BITS 90  // 8bits
#define STR_RES_PWM 91  // pwm
#define STR_RES_NOISE 92  // noise
#define STR_RES_VOWEL 93  // vowel
#define STR_RES_MALE 94  // male
#define STR_RES_FEMALE 95  // female
#define STR_RES_CHOIR 96  // choir
#define STR_RES_TAMPURA 97  // tampura
#define STR_RES_BOWED 98  // bowed
#define STR_RES_CELLO 99  // cello
#define STR_RES_VIBES 100  // vibes
#define STR_RES_SLAP 101  // slap
#define STR_RES_EPIANO 102  // epiano
#define STR_RES_ORGAN 103  // organ
#define STR_RES_WAVES 104  // waves
#define STR_RES_DIGITAL 105  // digital
#define STR_RES_DRONE_1 106  // drone 1
#define STR_RES_DRONE_2 107  // drone 2
#define STR_RES_METALLIC 108  // metallic
#define STR_RES_BELL 109  // bell
#define STR_RES_WAVQUENCE 110  // wavquence
#define STR_RES_OLDSAW 111  // oldsaw
#define STR_RES_QPWM 112  // qpwm
#define STR_RES_FMFB 113  // fmfb
#define STR_RES_CSAW 114  // csaw
#define STR_RES_TRI 115  // tri
#define STR_RES_SQR 116  // sqr
#define STR_RES_S_H 117  // s&h
#define STR_RES_RAMP 118  // ramp
#define STR_RES__SINE 119  // sine
#define STR_RES_HRM2 120  // hrm2
#define STR_RES_HRM3 121  // hrm3
#define STR_RES_HRM5 122  // hrm5
#define STR_RES_GRG1 123  // grg1
#define STR_RES_GRG2 124  // grg2
#define STR_RES_BAT1 125  // bat1
#define STR_RES_BAT2 126  // bat2
#define STR_RES_SPK1 127  // spk1
#define STR_RES_SPK2 128  // spk2
#define STR_RES_LSAW 129  // lsaw
#define STR_RES_LSQR 130  // lsqr
#define STR_RES_RSAW 131  // rsaw
#define STR_RES_RSQR 132  // rsqr
#define STR_RES_STP1 133  // stp1
#define STR_RES_STP2 134  // stp2
#define STR_RES___OFF 135  // off
#define STR_RES_SYNC 136  // sync
#define STR_RES_RINGMOD 137  // ringmod
#define STR_RES_XOR 138  // xor
#define STR_RES_FOLD 139  // fold
#define STR_RES_BITS 140  // bits
#define STR_RES_SQU1 141  // squ1
#define STR_RES_TRI1 142  // tri1
#define STR_RES_PUL1 143  // pul1
#define STR_RES_SQU2 144  // squ2
#define STR_RES_TRI2 145  // tri2
#define STR_RES_PUL2 146  // pul2
#define STR_RES_CLICK 147  // click
#define STR_RES_GLITCH 148  // glitch
#define STR_RES_BLOW 149  // blow
#define STR_RES_METAL 150  // metal
#define STR_RES_POP 151  // pop
#define STR_RES_ENV1 152  // env1
#define STR_RES_ENV2 153  // env2
#define STR_RES_ENV3 154  // env3
#define STR_RES_LFO1 155  // lfo1
#define STR_RES_LFO2 156  // lfo2
#define STR_RES_LFO3 157  // lfo3
#define STR_RES_LFO4 158  // lfo4
#define STR_RES_MOD1 159  // mod1
#define STR_RES_MOD2 160  // mod2
#define STR_RES_MOD3 161  // mod3
#define STR_RES_MOD4 162  // mod4
#define STR_RES_SEQ1 163  // seq1
#define STR_RES_SEQ2 164  // seq2
#define STR_RES_ARP 165  // arp
#define STR_RES_VELO 166  // velo
#define STR_RES_AFTR 167  // aftr
#define STR_RES_BEND 168  // bend
#define STR_RES_MWHL 169  // mwhl
#define STR_RES_WHL2 170  // whl2
#define STR_RES_PDAL 171  // pdal
#define STR_RES_NOTE 172  // note
#define STR_RES_GATE 173  // gate
#define STR_RES_NOIS 174  // nois
#define STR_RES_RAND 175  // rand
#define STR_RES_E256 176  // =256
#define STR_RES_E128 177  // =128
#define STR_RES_E64 178  // =64
#define STR_RES_E32 179  // =32
#define STR_RES_E16 180  // =16
#define STR_RES_E8 181  // =8
#define STR_RES_E4 182  // =4
#define STR_RES_PRM1 183  // prm1
#define STR_RES_PRM2 184  // prm2
#define STR_RES_OSC1 185  // osc1
#define STR_RES_OSC2 186  // osc2
#define STR_RES_31S2 187  // 1+2
#define STR_RES_VIBR 188  // vibr
#define STR_RES_MIX 189  // mix
#define STR_RES_XMOD 190  // xmod
#define STR_RES__NOIS 191  // nois
#define STR_RES_SUB 192  // sub
#define STR_RES_FUZZ 193  // fuzz
#define STR_RES_CRSH 194  // crsh
#define STR_RES_FREQ 195  // freq
#define STR_RES_RESO 196  // reso
#define STR_RES_ATTK 197  // attk
#define STR_RES_DECA 198  // deca
#define STR_RES_RELE 199  // rele
#define STR_RES__LFO4 200  // lfo4
#define STR_RES_VCA 201  // vca
#define STR_RES_ENV_1 202  // env 1
#define STR_RES_ENV_2 203  // env 2
#define STR_RES_ENV_3 204  // env 3
#define STR_RES_LFO_1 205  // lfo 1
#define STR_RES_LFO_2 206  // lfo 2
#define STR_RES_LFO_3 207  // lfo 3
#define STR_RES_LFO_4 208  // lfo 4
#define STR_RES_MOD__1 209  // mod. 1
#define STR_RES_MOD__2 210  // mod. 2
#define STR_RES_MOD__3 211  // mod. 3
#define STR_RES_MOD__4 212  // mod. 4
#define STR_RES_SEQ__1 213  // seq. 1
#define STR_RES_SEQ__2 214  // seq. 2
#define STR_RES__ARP 215  // arp
#define STR_RES__VELO 216  // velo
#define STR_RES_AFTTCH 217  // afttch
#define STR_RES_BENDER 218  // bender
#define STR_RES_MWHEEL 219  // mwheel
#define STR_RES_WHEEL2 220  // wheel2
#define STR_RES_PEDAL 221  // pedal
#define STR_RES__NOTE 222  // note
#define STR_RES__GATE 223  // gate
#define STR_RES__NOISE 224  // noise
#define STR_RES_RANDOM 225  // random
#define STR_RES_E_256 226  // = 256
#define STR_RES_E_32 227  // = 32
#define STR_RES_E_16 228  // = 16
#define STR_RES_E_8 229  // = 8
#define STR_RES_E_4 230  // = 4
#define STR_RES_PARAM_1 231  // param 1
#define STR_RES_PARAM_2 232  // param 2
#define STR_RES_OSC_1 233  // osc 1
#define STR_RES_OSC_2 234  // osc 2
#define STR_RES_OSC_1S2 235  // osc 1+2
#define STR_RES_VIBRATO 236  // vibrato
#define STR_RES__MIX 237  // mix
#define STR_RES__XMOD 238  // xmod
#define STR_RES___NOISE 239  // noise
#define STR_RES_SUBOSC 240  // subosc
#define STR_RES__FUZZ 241  // fuzz
#define STR_RES_CRUSH 242  // crush
#define STR_RES_FREQUENCY 243  // frequency
#define STR_RES__RESO 244  // reso
#define STR_RES__ATTACK 245  // attack
#define STR_RES__DECAY 246  // decay
#define STR_RES__RELEASE 247  // release
#define STR_RES__LFO_4 248  // lfo 4
#define STR_RES__VCA 249  // vca
#define STR_RES_LP 250  // lp
#define STR_RES_BP 251  // bp
#define STR_RES_HP 252  // hp
#define STR_RES_FREE 253  // free
#define STR_RES_ENVTLFO 254  // env~lfo
#define STR_RES_LFOTENV 255  // lfo~env
#define STR_RES_STEP_SEQ 256  // step seq
#define STR_RES_ARPEGGIO 257  // arpeggio
#define STR_RES__PATTERN 258  // pattern
#define STR_RES__OFF 259  // off
#define STR_RES_ADD 260  // add
#define STR_RES_PROD 261  // prod
#define STR_RES_ATTN 262  // attn
#define STR_RES_MAX 263  // max
#define STR_RES_MIN 264  // min
#define STR_RES__XOR 265  // xor
#define STR_RES_GE 266  // >=
#define STR_RES_LE 267  // <=
#define STR_RES_QTZ 268  // qtz
#define STR_RES_LAG 269  // lag
#define STR_RES_MONO 270  // mono
#define STR_RES_POLY 271  // poly
#define STR_RES_2X_UNISON 272  // 2x unison
#define STR_RES_CYCLIC 273  // cyclic
#define STR_RES_CHAIN 274  // chain
#define STR_RES_UP 275  // up
#define STR_RES_DOWN 276  // down
#define STR_RES_UP_DOWN 277  // up&down
#define STR_RES_PLAYED 278  // played
#define STR_RES__RANDOM 279  // random
#define STR_RES_CHORD 280  // chord
#define STR_RES_1_1 281  // 1/1
#define STR_RES_3_4 282  // 3/4
#define STR_RES_2_3 283  // 2/3
#define STR_RES_1_2 284  // 1/2
#define STR_RES_3_8 285  // 3/8
#define STR_RES_1_3 286  // 1/3
#define STR_RES_1_4 287  // 1/4
#define STR_RES_1_6 288  // 1/6
#define STR_RES_1_8 289  // 1/8
#define STR_RES_1_12 290  // 1/12
#define STR_RES_1_16 291  // 1/16
#define STR_RES_1_24 292  // 1/24
#define STR_RES_1_32 293  // 1/32
#define STR_RES_1_48 294  // 1/48
#define STR_RES_1_96 295  // 1/96
#define STR_RES_THRU 296  // thru
#define STR_RES_SEQUENCER 297  // sequencer
#define STR_RES_CONTROLLR 298  // controllr
#define STR_RES__CHAIN 299  // chain
#define STR_RES_FULL 300  // full
#define STR_RES_____ 301  // ....
#define STR_RES____S 302  // ...s
#define STR_RES___P_ 303  // ..p.
#define STR_RES___PS 304  // ..ps
#define STR_RES__N__ 305  // .n..
#define STR_RES__N_S 306  // .n.s
#define STR_RES__NP_ 307  // .np.
#define STR_RES__NPS 308  // .nps
#define STR_RES_C___ 309  // c...
#define STR_RES_C__S 310  // c..s
#define STR_RES_C_P_ 311  // c.p.
#define STR_RES_C_PS 312  // c.ps
#define STR_RES_CN__ 313  // cn..
#define STR_RES_CN_S 314  // cn.s
#define STR_RES_CNP_ 315  // cnp.
#define STR_RES_CNPS 316  // cnps
#define STR_RES_SWING 317  // swing
#define STR_RES_SHUFFLE 318  // shuffle
#define STR_RES_PUSH 319  // push
#define STR_RES__LAG 320  // lag
#define STR_RES_HUMAN 321  // human
#define STR_RES_MONKEY 322  // monkey
#define STR_RES_OSCILLATOR_1 323  // oscillator 1
#define STR_RES_OSCILLATOR_2 324  // oscillator 2
#define STR_RES_MIXER 325  // mixer
#define STR_RES_LFO 326  // lfo
#define STR_RES_FILTER_1 327  // filter 1
#define STR_RES_FILTER_2 328  // filter 2
#define STR_RES_ENVELOPE 329  // envelope
#define STR_RES_ARPEGGIATOR 330  // arpeggiator
#define STR_RES_MULTI 331  // multi
#define STR_RES_CLOCK 332  // clock
#define STR_RES_PERFORMANCE 333  // performance
#define STR_RES_SYSTEM 334  // system
#define STR_RES_PT_X_PATCH 335  // pt X patch
#define STR_RES_PT_X_SEQUENCE 336  // pt X sequence
#define STR_RES_PT_X_PROGRAM 337  // pt X program
#define STR_RES_RANDOMIZE 338  // randomize
#define STR_RES_INIT 339  // init
#define STR_RES_PATCH 340  // PATCH
#define STR_RES_SEQUENCE 341  // SEQUENCE
#define STR_RES_PROGRAM 342  // PROGRAM
#define STR_RES__MULTI 343  // MULTI
#define STR_RES____ 344  // ___
#define STR_RES_EQUAL 345  // equal
#define STR_RES_JUST 346  // just
#define STR_RES_PYTHAGOREAN 347  // pythagorean
#define STR_RES_1_4_EB 348  // 1/4 eb
#define STR_RES_1_4_E 349  // 1/4 e
#define STR_RES_1_4_EA 350  // 1/4 ea
#define STR_RES_BHAIRAV 351  // bhairav
#define STR_RES_GUNAKRI 352  // gunakri
#define STR_RES_MARWA 353  // marwa
#define STR_RES_SHREE 354  // shree
#define STR_RES_PURVI 355  // purvi
#define STR_RES_BILAWAL 356  // bilawal
#define STR_RES_YAMAN 357  // yaman
#define STR_RES_KAFI 358  // kafi
#define STR_RES_BHIMPALASREE 359  // bhimpalasree
#define STR_RES_DARBARI 360  // darbari
#define STR_RES_BAGESHREE 361  // bageshree
#define STR_RES_RAGESHREE 362  // rageshree
#define STR_RES_KHAMAJ 363  // khamaj
#define STR_RES_MIMAL 364  // mi'mal
#define STR_RES_PARAMESHWARI 365  // parameshwari
#define STR_RES_RANGESHWARI 366  // rangeshwari
#define STR_RES_GANGESHWARI 367  // gangeshwari
#define STR_RES_KAMESHWARI 368  // kameshwari
#define STR_RES_PA__KAFI 369  // pa. kafi
#define STR_RES_NATBHAIRAV 370  // natbhairav
#define STR_RES_M_KAUNS 371  // m.kauns
#define STR_RES_BAIRAGI 372  // bairagi
#define STR_RES_B_TODI 373  // b.todi
#define STR_RES_CHANDRADEEP 374  // chandradeep
#define STR_RES_KAUSHIK_TODI 375  // kaushik todi
#define STR_RES_JOGESHWARI 376  // jogeshwari
#define STR_RES_RASIA 377  // rasia
#define LUT_RES_LFO_INCREMENTS 0
#define LUT_RES_LFO_INCREMENTS_SIZE 128
#define LUT_RES_SCALE_JUST 1
#define LUT_RES_SCALE_JUST_SIZE 12
#define LUT_RES_SCALE_PYTHAGOREAN 2
#define LUT_RES_SCALE_PYTHAGOREAN_SIZE 12
#define LUT_RES_SCALE_1_4_EB 3
#define LUT_RES_SCALE_1_4_EB_SIZE 12
#define LUT_RES_SCALE_1_4_E 4
#define LUT_RES_SCALE_1_4_E_SIZE 12
#define LUT_RES_SCALE_1_4_EA 5
#define LUT_RES_SCALE_1_4_EA_SIZE 12
#define LUT_RES_SCALE_BHAIRAV 6
#define LUT_RES_SCALE_BHAIRAV_SIZE 12
#define LUT_RES_SCALE_GUNAKRI 7
#define LUT_RES_SCALE_GUNAKRI_SIZE 12
#define LUT_RES_SCALE_MARWA 8
#define LUT_RES_SCALE_MARWA_SIZE 12
#define LUT_RES_SCALE_SHREE 9
#define LUT_RES_SCALE_SHREE_SIZE 12
#define LUT_RES_SCALE_PURVI 10
#define LUT_RES_SCALE_PURVI_SIZE 12
#define LUT_RES_SCALE_BILAWAL 11
#define LUT_RES_SCALE_BILAWAL_SIZE 12
#define LUT_RES_SCALE_YAMAN 12
#define LUT_RES_SCALE_YAMAN_SIZE 12
#define LUT_RES_SCALE_KAFI 13
#define LUT_RES_SCALE_KAFI_SIZE 12
#define LUT_RES_SCALE_BHIMPALASREE 14
#define LUT_RES_SCALE_BHIMPALASREE_SIZE 12
#define LUT_RES_SCALE_DARBARI 15
#define LUT_RES_SCALE_DARBARI_SIZE 12
#define LUT_RES_SCALE_BAGESHREE 16
#define LUT_RES_SCALE_BAGESHREE_SIZE 12
#define LUT_RES_SCALE_RAGESHREE 17
#define LUT_RES_SCALE_RAGESHREE_SIZE 12
#define LUT_RES_SCALE_KHAMAJ 18
#define LUT_RES_SCALE_KHAMAJ_SIZE 12
#define LUT_RES_SCALE_MIMAL 19
#define LUT_RES_SCALE_MIMAL_SIZE 12
#define LUT_RES_SCALE_PARAMESHWARI 20
#define LUT_RES_SCALE_PARAMESHWARI_SIZE 12
#define LUT_RES_SCALE_RANGESHWARI 21
#define LUT_RES_SCALE_RANGESHWARI_SIZE 12
#define LUT_RES_SCALE_GANGESHWARI 22
#define LUT_RES_SCALE_GANGESHWARI_SIZE 12
#define LUT_RES_SCALE_KAMESHWARI 23
#define LUT_RES_SCALE_KAMESHWARI_SIZE 12
#define LUT_RES_SCALE_PA__KAFI 24
#define LUT_RES_SCALE_PA__KAFI_SIZE 12
#define LUT_RES_SCALE_NATBHAIRAV 25
#define LUT_RES_SCALE_NATBHAIRAV_SIZE 12
#define LUT_RES_SCALE_M_KAUNS 26
#define LUT_RES_SCALE_M_KAUNS_SIZE 12
#define LUT_RES_SCALE_BAIRAGI 27
#define LUT_RES_SCALE_BAIRAGI_SIZE 12
#define LUT_RES_SCALE_B_TODI 28
#define LUT_RES_SCALE_B_TODI_SIZE 12
#define LUT_RES_SCALE_CHANDRADEEP 29
#define LUT_RES_SCALE_CHANDRADEEP_SIZE 12
#define LUT_RES_SCALE_KAUSHIK_TODI 30
#define LUT_RES_SCALE_KAUSHIK_TODI_SIZE 12
#define LUT_RES_SCALE_JOGESHWARI 31
#define LUT_RES_SCALE_JOGESHWARI_SIZE 12
#define LUT_RES_SCALE_RASIA 32
#define LUT_RES_SCALE_RASIA_SIZE 12
#define LUT_RES_ARPEGGIATOR_PATTERNS 33
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 22
#define LUT_RES_GROOVE_SWING 34
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 35
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 36
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 37
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 38
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 39
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define CHR_RES_SPECIAL_CHARACTERS 0
#define CHR_RES_SPECIAL_CHARACTERS_SIZE 56
#define WAV_RES_LFO_WAVEFORMS 0
#define WAV_RES_LFO_WAVEFORMS_SIZE 4112
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace ambika

#endif  // CONTROLLER_RESOURCES_H_
