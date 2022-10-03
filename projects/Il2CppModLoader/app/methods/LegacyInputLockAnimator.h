#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyInputLockAnimator {
    IL2CPP_REGISTER_METHOD(0x00A28990, void, OnStartPlay, (app::LegacyInputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28A50, void, OnStopPlay, (app::LegacyInputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::LegacyInputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::LegacyInputLockAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::LegacyInputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_Duration, (app::LegacyInputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsLooping, (app::LegacyInputLockAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00628E80, void, ctor, (app::LegacyInputLockAnimator * this_ptr))
} // namespace app::classes::LegacyInputLockAnimator
