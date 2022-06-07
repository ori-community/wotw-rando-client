#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberPoolPerfTestRunHelper {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanStart, ())
    IL2CPP_REGISTER_METHOD(0x00FED0E0, void, Start, ())
}
