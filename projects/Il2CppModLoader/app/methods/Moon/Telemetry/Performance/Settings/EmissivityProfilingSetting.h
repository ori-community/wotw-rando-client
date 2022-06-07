#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::EmissivityProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x004FA040, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::EmissivityProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BF70, app::RenderScope__Enum *, GetScope, (app::EmissivityProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmissivityProfilingSetting * this_ptr))
}
