#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyPostprocessAnimationPlayer.h>

namespace app::classes::LegacyPostprocessAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x00A319F0, float, get_Duration, app::LegacyPostprocessAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A31A20, bool, get_IsLooping, app::LegacyPostprocessAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A31B00, void, Awake, app::LegacyPostprocessAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, app::LegacyPostprocessAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, app::LegacyPostprocessAnimationPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A31BB0, void, SampleValue, app::LegacyPostprocessAnimationPlayer* this_ptr, float value, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x00A31EC0, void, ctor, app::LegacyPostprocessAnimationPlayer* this_ptr)
} // namespace app::classes::LegacyPostprocessAnimationPlayer
