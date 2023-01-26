#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeUtility.h>

namespace app::classes::TimeUtility {
    IL2CPP_REGISTER_METHOD(0x010F2550, float, get_maximumDeltaTime, ())
    IL2CPP_REGISTER_METHOD(0x010F25A0, void, set_maximumDeltaTime, (float value))
    IL2CPP_REGISTER_METHOD(0x010F2600, float, get_fixedDeltaTime, ())
    IL2CPP_REGISTER_METHOD(0x010F2650, void, set_fixedDeltaTime, (float value))
    IL2CPP_REGISTER_METHOD(0x010F26B0, float, get_deltaTime, ())
    IL2CPP_REGISTER_METHOD(0x00482A00, int32_t, get_targetFrameRate, ())
    IL2CPP_REGISTER_METHOD(0x010F2700, void, set_targetFrameRate, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x010F28D0, bool, get_TargetFrameRateNonDefault, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimeUtility * this_ptr))
} // namespace app::classes::TimeUtility
