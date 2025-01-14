#ifndef SOUND_SB16_H
#define SOUND_SB16_H

typedef u8 note_t;

#define OCTAVE_1 0
#define OCTAVE_2 1
#define OCTAVE_3 2
#define OCTAVE_4 3
#define OCTAVE_5 4
#define OCTAVE_6 5
#define OCTAVE_7 6

#define NOTE_C      0
#define NOTE_CS     1
#define NOTE_DF     NOTE_CS
#define NOTE_D      2
#define NOTE_DS     3
#define NOTE_EF     NOTE_DS
#define NOTE_E      4
#define NOTE_F      5
#define NOTE_FS     6
#define NOTE_GF     NOTE_FS
#define NOTE_G      7
#define NOTE_GS     8
#define NOTE_AF     NOTE_GS
#define NOTE_A      9
#define NOTE_AS     10
#define NOTE_BF     NOTE_AS
#define NOTE_B      11

#define NOTE_NONE   12

#define WAVE_SIN        0
#define WAVE_SQUARE     1
#define WAVE_NOISE      2
#define WAVE_TRIANGLE   3

#define WAVE_MELODY  WAVE_TRIANGLE, 255
#define WAVE_SNARE   WAVE_NOISE, 128
#define WAVE_BASS    WAVE_TRIANGLE, 196
#define WAVE_HARMONY WAVE_TRIANGLE, 196

void sound_wave(u8 index, u8 wave, u8 volume);

#endif
