// Stub fluidsynth function implementations for Android builds
// These satisfy the linker when fluidsynth library is not available
// The vinyl module will be non-functional without fluidsynth, but other modules work
#include "calf/fluidsynth_stub.h"

#ifndef HAVE_FLUIDSYNTH

fluid_synth_t* new_fluid_synth(fluid_settings_t* settings) { (void)settings; return nullptr; }
void delete_fluid_synth(fluid_synth_t* synth) { (void)synth; }
void fluid_synth_set_gain(fluid_synth_t* synth, float gain) { (void)synth; (void)gain; }
int fluid_synth_sfload(fluid_synth_t* synth, const char* filename, int reset_presets) { (void)synth; (void)filename; (void)reset_presets; return -1; }
void fluid_synth_program_select(fluid_synth_t* synth, int chan, int sfont_id, int bank_num, int preset_num) { (void)synth; (void)chan; (void)sfont_id; (void)bank_num; (void)preset_num; }
void fluid_synth_pitch_wheel_sens(fluid_synth_t* synth, int chan, int val) { (void)synth; (void)chan; (void)val; }
void fluid_synth_pitch_bend(fluid_synth_t* synth, int chan, int val) { (void)synth; (void)chan; (void)val; }
void fluid_synth_noteon(fluid_synth_t* synth, int chan, int key, int vel) { (void)synth; (void)chan; (void)key; (void)vel; }
void fluid_synth_noteoff(fluid_synth_t* synth, int chan, int key) { (void)synth; (void)chan; (void)key; }
void fluid_synth_set_gen(fluid_synth_t* synth, int chan, int param, float value) { (void)synth; (void)chan; (void)param; (void)value; }
void fluid_synth_write_float(fluid_synth_t* synth, int len, float* lout, int loff, int lincr, float* rout, int roff, int rincr) { (void)synth; (void)len; (void)lout; (void)loff; (void)lincr; (void)rout; (void)roff; (void)rincr; }

fluid_settings_t* new_fluid_settings() { return nullptr; }
void delete_fluid_settings(fluid_settings_t* settings) { (void)settings; }
void fluid_settings_setnum(fluid_settings_t* settings, const char* name, double val) { (void)settings; (void)name; (void)val; }
void fluid_settings_setint(fluid_settings_t* settings, const char* name, int val) { (void)settings; (void)name; (void)val; }

#endif
