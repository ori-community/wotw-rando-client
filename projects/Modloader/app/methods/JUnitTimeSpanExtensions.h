#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::JUnitTimeSpanExtensions {
    IL2CPP_REGISTER_METHOD(0x0064C560, double, ToJUnitTimeString, (app::TimeSpan span))
}
