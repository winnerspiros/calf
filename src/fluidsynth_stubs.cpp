// Stub fluidsynth functions for Android builds
// These are weak symbols that satisfy the linker when fluidsynth is not available
// The vinyl module will be non-functional without fluidsynth, but other modules work
#include <cstddef>

extern "C" {

struct _fluid_synth_t {};
struct _fluid_settings_t {};

_fluid_synth_t* new_fluid_synth(_fluid_settings_t* settings) { return nullptr; }
void delete_fluid_synth(_fluid_synth_t* synth) {}
void fluid_synth_set_gain(_fluid_synth_t* synth, float gain) {}
int fluid_synth_sfload(_fluid_synth_t* synth, const char* filename, int reset_presets) { return -1; }
void fluid_synth_program_select(_fluid_synth_t* synth, int chan, int sfont_id, int bank_num, int preset_num) {}
void fluid_synth_pitch_wheel_sens(_fluid_synth_t* synth, int chan, int val) {}
void fluid_synth_pitch_bend(_fluid_synth_t* synth, int chan, int val) {}
void fluid_synth_noteon(_fluid_synth_t* synth, int chan, int key, int vel) {}
void fluid_synth_noteoff(_fluid_synth_t* synth, int chan, int key) {}
void fluid_synth_set_gen(_fluid_synth_t* synth, int chan, int param, float value) {}
void fluid_synth_write_float(_fluid_synth_t* synth, int len, float* lout, int loff, int lincr, float* rout, int roff, int rincr) {}
void fluid_synth_set_sample_rate(_fluid_synth_t* synth, float sample_rate) {}

_fluid_settings_t* new_fluid_settings() { return nullptr; }
void delete_fluid_settings(_fluid_settings_t* settings) {}
void fluid_settings_setnum(_fluid_settings_t* settings, const char* name, double val) {}
void fluid_settings_setint(_fluid_settings_t* settings, const char* name, int val) {}

} // extern "C"
