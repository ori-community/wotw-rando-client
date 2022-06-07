#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::RefractionProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3F100, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::RefractionProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F110, app::RenderScope__Enum *, GetScope, (app::RefractionProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RefractionProfilingSetting * this_ptr))
}
