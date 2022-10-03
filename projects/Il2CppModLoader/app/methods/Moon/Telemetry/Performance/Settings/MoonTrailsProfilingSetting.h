#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::MoonTrailsProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E310, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::MoonTrailsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E320, app::RenderScope__Enum*, GetScope, (app::MoonTrailsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonTrailsProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::MoonTrailsProfilingSetting
