#pragma once

namespace jak3 {

/*!
 * External entry point for the game to start Overlord. This assumes that the IOP Kernel
 * is at least initialized, then sets up all overlord threads/RPCs. Once this returns,
 * it's safe to call overlord functions.
 */
int start_overlord_wrapper(int argc, const char* const* argv, bool* signal);
void jak3_overlord_init_globals_overlord();

extern int g_nServerThreadID;
extern int g_nPlayerThreadID;
extern int g_nLoaderThreadID;
extern int g_nISOThreadID;


}  // namespace jak3