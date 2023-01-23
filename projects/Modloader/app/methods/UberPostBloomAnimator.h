#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPostBloomAnimator.h>

namespace app::classes::UberPostBloomAnimator {
    IL2CPP_REGISTER_METHOD(0x00FEED20, void, Awake, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEEF00, void, OnDestroy, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF0D0, void, CacheOriginals, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF1A0, void, OnGameReset, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758740, UberPostBloomAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FEF270, void, SampleValue, (app::UberPostBloomAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00FEF410, void, RestoreToOriginalState, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF570, float, get_Duration, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933870, bool, get_IsLooping, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF650, void, ctor, (app::UberPostBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEFA30, void, cctor, ())
} // namespace app::classes::UberPostBloomAnimator
