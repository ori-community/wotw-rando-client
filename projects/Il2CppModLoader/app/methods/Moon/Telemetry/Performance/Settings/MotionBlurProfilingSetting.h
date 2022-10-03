#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::MotionBlurProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E350, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::MotionBlurProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E360, app::RenderScope__Enum*, GetScope, (app::MotionBlurProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MotionBlurProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::MotionBlurProfilingSetting
