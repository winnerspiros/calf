// Stub fluidsynth header for Android builds without fluidsynth
// Provides opaque type definitions and stub function declarations
#ifndef FLUIDSYNTH_STUB_H
#define FLUIDSYNTH_STUB_H

#ifdef HAVE_FLUIDSYNTH
#include <fluidsynth.h>
#else
// Opaque type forward declarations
typedef struct _fluid_synth_t fluid_synth_t;
typedef struct _fluid_settings_t fluid_settings_t;

// Stub function declarations (defined in fluidsynth_stubs.cpp)
fluid_synth_t* new_fluid_synth(fluid_settings_t* settings);
void delete_fluid_synth(fluid_synth_t* synth);
void fluid_synth_set_gain(fluid_synth_t* synth, float gain);
int fluid_synth_sfload(fluid_synth_t* synth, const char* filename, int reset_presets);
void fluid_synth_program_select(fluid_synth_t* synth, int chan, int sfont_id, int bank_num, int preset_num);
void fluid_synth_pitch_wheel_sens(fluid_synth_t* synth, int chan, int val);
void fluid_synth_pitch_bend(fluid_synth_t* synth, int chan, int val);
void fluid_synth_noteon(fluid_synth_t* synth, int chan, int key, int vel);
void fluid_synth_noteoff(fluid_synth_t* synth, int chan, int key);
void fluid_synth_set_gen(fluid_synth_t* synth, int chan, int param, float value);
void fluid_synth_write_float(fluid_synth_t* synth, int len, float* lout, int loff, int lincr, float* rout, int roff, int rincr);

fluid_settings_t* new_fluid_settings();
void delete_fluid_settings(fluid_settings_t* settings);
void fluid_settings_setnum(fluid_settings_t* settings, const char* name, double val);
void fluid_settings_setint(fluid_settings_t* settings, const char* name, int val);

// Stub for GEN_ATTENUATION constant
#ifndef GEN_ATTENUATION
#define GEN_ATTENUATION 13
#endif

#endif // !HAVE_FLUIDSYNTH

#endif // FLUIDSYNTH_STUB_H
