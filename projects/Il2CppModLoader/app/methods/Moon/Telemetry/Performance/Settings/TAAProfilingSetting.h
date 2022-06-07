#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::TAAProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3FFC0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TAAProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FFD0, app::RenderScope__Enum *, GetScope, (app::TAAProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TAAProfilingSetting * this_ptr))
}
