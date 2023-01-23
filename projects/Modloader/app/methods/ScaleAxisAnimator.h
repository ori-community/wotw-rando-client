#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScaleAxisAnimator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ScaleAxisAnimator {
    IL2CPP_REGISTER_METHOD(0x009332D0, void, CacheOriginals, (app::ScaleAxisAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933420, void, SampleValue, (app::ScaleAxisAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00933600, void, OnPoolSpawned, (app::ScaleAxisAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933710, void, RestoreToOriginalState, (app::ScaleAxisAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933790, float, get_Duration, (app::ScaleAxisAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00868870, app::Vector3, get_OriginalScale, (app::ScaleAxisAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933870, bool, get_IsLooping, (app::ScaleAxisAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933A20, void, ctor, (app::ScaleAxisAnimator * this_ptr))
} // namespace app::classes::ScaleAxisAnimator
