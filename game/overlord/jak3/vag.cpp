#include "vag.h"
namespace jak3 {

bool g_bExtPause = false;
bool g_bExtResume = false;
ISO_VAGCommand g_aVagCmds[6];
int g_anMasterVolume[32];

void jak3_overlord_init_globals_vag() {
  g_bExtPause = false;
  g_bExtResume = false;
  for (auto& c : g_aVagCmds) {
    c = {};
  }
  for (auto& x : g_anMasterVolume) {
    x = 0x400;
  }
}
}