#pragma once

#include "common/common_types.h"

namespace jak3 {
void jak3_overlord_init_globals_srpc();
u32 Thread_Player();
u32 Thread_Loader();
struct ISO_VAGCommand;
void SetVagStreamName(ISO_VAGCommand* cmd, int len);

}  // namespace jak3