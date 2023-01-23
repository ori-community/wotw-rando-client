#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/EnemySpawningProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::EnemySpawningProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E16AE0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::EnemySpawningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C800, bool, GetState, (app::EnemySpawningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C8A0, void, SetState, (app::EnemySpawningProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnemySpawningProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::EnemySpawningProfilingSetting
