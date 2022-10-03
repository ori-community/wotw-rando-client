#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::AllSpawningProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3AD20, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::AllSpawningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3AD30, bool, GetState, (app::AllSpawningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3ADD0, void, SetState, (app::AllSpawningProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AllSpawningProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::AllSpawningProfilingSetting
