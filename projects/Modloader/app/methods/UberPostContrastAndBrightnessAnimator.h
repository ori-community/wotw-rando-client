#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberPostContrastAndBrightnessAnimator {
    IL2CPP_REGISTER_METHOD(0x00FF08B0, void, CacheOriginals, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF09D0, void, Awake, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF0B70, void, OnDestroy, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF0D10, void, OnGameReset, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748070, UberPostContrastAndBrightnessAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FF0DE0, void, SampleValue, (app::UberPostContrastAndBrightnessAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00FF0FB0, void, RestoreToOriginalState, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF1140, float, get_Duration, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF1220, bool, get_IsLooping, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF13D0, void, ctor, (app::UberPostContrastAndBrightnessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FF17B0, void, cctor, ())
} // namespace app::classes::UberPostContrastAndBrightnessAnimator
