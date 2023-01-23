#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPostDesaturationAnimator.h>

namespace app::classes::UberPostDesaturationAnimator {
    IL2CPP_REGISTER_METHOD(0x00FF1900, void, Awake, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF1AA0, void, OnDestroy, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF1C40, void, OnGameReset, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726A28, UberPostDesaturationAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FF1D10, void, CacheOriginals, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF1DE0, void, SampleValue, (app::UberPostDesaturationAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00FF1EE0, void, RestoreToOriginalState, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::UberPostDesaturationAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF1F40, void, ctor, (app::UberPostDesaturationAnimator * this_ptr))
} // namespace app::classes::UberPostDesaturationAnimator
