#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::ForceMaxDRSProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x007E3F30, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ForceMaxDRSProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CCB0, bool, GetState, (app::ForceMaxDRSProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CD80, void, SetState, (app::ForceMaxDRSProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ForceMaxDRSProfilingSetting * this_ptr))
}
