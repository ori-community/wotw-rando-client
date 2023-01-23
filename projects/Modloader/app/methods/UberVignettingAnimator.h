#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberVignettingAnimator.h>

namespace app::classes::UberVignettingAnimator {
    IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292740, void, Awake, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012928E0, void, OnDestroy, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292A80, void, CacheOriginals, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292B50, void, OnGameReset, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712AE8, UberVignettingAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01292C20, void, SampleValue, (app::UberVignettingAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01292D20, void, RestoreToOriginalState, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::UberVignettingAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292D80, void, ctor, (app::UberVignettingAnimator * this_ptr))
} // namespace app::classes::UberVignettingAnimator
