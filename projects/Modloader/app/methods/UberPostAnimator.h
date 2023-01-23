#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPostAnimator.h>

namespace app::classes::UberPostAnimator {
    IL2CPP_REGISTER_METHOD(0x00FEDD20, void, Awake, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEDEC0, void, OnDestroy, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEE060, void, OnGameReset, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047706D8, UberPostAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FEE130, void, CacheOriginals, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEE700, void, SampleValue, (app::UberPostAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00FEE9B0, void, RestoreToOriginalState, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::UberPostAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEEA00, void, ctor, (app::UberPostAnimator * this_ptr))
} // namespace app::classes::UberPostAnimator
