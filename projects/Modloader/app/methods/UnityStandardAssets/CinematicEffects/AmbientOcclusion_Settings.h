#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmbientOcclusion_Settings.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::AmbientOcclusion_Settings {
    IL2CPP_REGISTER_METHOD(0x024FF7C0, app::AmbientOcclusion_Settings*, get_defaultSettings, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AmbientOcclusion_Settings* this_ptr)
} // namespace app::classes::UnityStandardAssets::CinematicEffects::AmbientOcclusion_Settings
