/// Removing these defines from here to put them in mp3_stream_decoder.cpp because
/// static members are not used by SoLoud but I need them in mp3_stream_decoder.cpp
/// The stand-alone build (contrib/) has no mp3_stream_decoder.cpp, so it defines
/// SOLOUD_DR_MP3_IMPLEMENTATION to get the implementation here instead.
#ifdef SOLOUD_DR_MP3_IMPLEMENTATION
#define DR_MP3_IMPLEMENTATION
#define DR_MP3_NO_STDIO
#define DR_MP3_FLOAT_OUTPUT
#endif
#include "dr_mp3.h"

#define DR_WAV_IMPLEMENTATION
#define DR_WAV_NO_STDIO
#include "dr_wav.h"

#define DR_FLAC_IMPLEMENTATION
#define DR_FLAC_NO_STDIO
#define DR_FLAC_NO_CRC
#include "dr_flac.h"
