#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ChangeDetectorApproxFloat {
    IL2CPP_REGISTER_METHOD(0x006D39E0, void, ctor, (app::ChangeDetectorApproxFloat * this_ptr, float epsilon, float last_value))
    IL2CPP_REGISTER_METHOD(0x010457B0, bool, CheckValueChanged, (app::ChangeDetectorApproxFloat * this_ptr, float t))
} // namespace app::classes::ChangeDetectorApproxFloat
