#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bloom_Settings.h>
#include <Modloader/app/structs/Bloom_Settings__Boxed.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::Bloom_Settings {
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_thresholdGamma, app::Bloom_Settings__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001F0710, float, get_thresholdGamma, app::Bloom_Settings__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F0720, void, set_thresholdLinear, app::Bloom_Settings__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001F0810, float, get_thresholdLinear, app::Bloom_Settings__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02500B30, app::Bloom_Settings, get_defaultSettings, )
    IL2CPP_REGISTER_METHOD(0x02500B80, app::Bloom_Settings, Clone, app::Bloom_Settings from)
} // namespace app::classes::UnityStandardAssets::CinematicEffects::Bloom_Settings
