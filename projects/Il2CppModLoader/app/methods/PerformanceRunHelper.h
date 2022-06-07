#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PerformanceRunHelper {
    IL2CPP_REGISTER_METHOD(0x004980F0, bool, get_CanStart, ())
    IL2CPP_REGISTER_METHOD(0x004981C0, void, Start, ())
}
