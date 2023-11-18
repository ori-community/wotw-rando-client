#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PerformanceRunHelper {
    IL2CPP_REGISTER_METHOD(0x004980F0, bool, get_CanStart, ())
    IL2CPP_REGISTER_METHOD(0x004981C0, void, Start, ())
} // namespace app::classes::PerformanceRunHelper
