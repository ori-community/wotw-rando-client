#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberPoolPerfTestRunHelper {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanStart, ())
    IL2CPP_REGISTER_METHOD(0x00FED0E0, void, Start, ())
} // namespace app::classes::UberPoolPerfTestRunHelper
