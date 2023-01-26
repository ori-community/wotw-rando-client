#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InputLockAnimator.h>

namespace app::classes::InputLockAnimator {
    IL2CPP_REGISTER_METHOD(0x00628CF0, void, OnStartPlay, (app::InputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00628DB0, void, OnStopPlay, (app::InputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::InputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::InputLockAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::InputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_Duration, (app::InputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsLooping, (app::InputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00628E80, void, ctor, (app::InputLockAnimator * this_ptr))
} // namespace app::classes::InputLockAnimator
