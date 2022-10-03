#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyCinematicCharacterAnimator {
    IL2CPP_REGISTER_METHOD(0x00B1C9B0, void, Awake, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DE110, float, get_Duration, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DE230, bool, get_IsLooping, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DE350, void, OnStartPlay, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DEB00, void, OnStopPlay, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DF0B0, void, SampleValue, (app::LegacyCinematicCharacterAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x015DF220, void, UpdateCachedAnimation, (app::LegacyCinematicCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::LegacyCinematicCharacterAnimator * this_ptr))
} // namespace app::classes::LegacyCinematicCharacterAnimator
