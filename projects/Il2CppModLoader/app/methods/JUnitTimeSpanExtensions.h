#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::JUnitTimeSpanExtensions {
    IL2CPP_REGISTER_METHOD(0x0064C560, double, ToJUnitTimeString, (app::TimeSpan span))
}
