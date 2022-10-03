#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::WaterReflectionProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x005D6E50, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::WaterReflectionProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40D20, app::RenderScope__Enum*, GetScope, (app::WaterReflectionProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WaterReflectionProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::WaterReflectionProfilingSetting
