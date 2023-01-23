#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array__Array.h>
#include <Modloader/app/structs/ProfilingSettings_BulkSettings.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>
#include <Modloader/app/structs/ProfilingSettings_SettingAction__Enum.h>
#include <Modloader/app/structs/ProfilingSettings.h>

namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings {
    IL2CPP_REGISTER_METHOD(0x00E33C00, void, CacheDefaults, ())
    IL2CPP_REGISTER_METHOD(0x00E33DF0, void, CreateSettings, ())
    IL2CPP_REGISTER_METHOD(0x00E346B0, app::IProfilingSetting*, GetSettingForType, (app::ProfilingSettings_SettingType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00E347E0, void, InitializeSettings, ())
    IL2CPP_REGISTER_METHOD(0x00E37BB0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyConfigFile, (app::String * file))
    IL2CPP_REGISTER_METHOD(0x00E37CB0, void, ApplyCommandline, ())
    IL2CPP_REGISTER_METHOD(0x00E38210, void, ApplyConfig, (app::GameController_ProfilingConfiguration__Enum configuration, bool apply_default))
    IL2CPP_REGISTER_METHOD(0x00E38490, app::String*, ParseArgument, (app::String * flag))
    IL2CPP_REGISTER_METHOD(0x00E388B0, void, RestoreSettingsBulk, (app::ProfilingSettings_SettingType__Enum__Array__Array * settings))
    IL2CPP_REGISTER_METHOD(0x00E389A0, app::ProfilingSettings_BulkSettings*, SetStateBulk_1, (app::ProfilingSettings_BulkSettings * settings))
    IL2CPP_REGISTER_METHOD(0x00E38A60, app::ProfilingSettings_BulkSettings*, SetStateBulk_2, (app::ProfilingSettings_SettingType__Enum__Array * settings_to_disable, app::ProfilingSettings_SettingType__Enum__Array* settings_to_enable, app::ProfilingSettings_SettingType__Enum__Array* settings_to_restore))
    IL2CPP_REGISTER_METHOD(0x00E39040, void, SetState, (app::ProfilingSettings_SettingType__Enum setting, app::ProfilingSettings_SettingAction__Enum state))
    IL2CPP_REGISTER_METHOD(0x00E390F0, bool, GetState, (app::ProfilingSettings_SettingType__Enum setting))
    IL2CPP_REGISTER_METHOD(0x00E39270, void, ApplyState, (app::ProfilingSettings_SettingType__Enum type, app::ProfilingSettings_SettingAction__Enum setting))
    IL2CPP_REGISTER_METHOD(0x00E393F0, void, ApplyImmediate, (app::GameController_ProfilingConfiguration__Enum config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ProfilingSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39590, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::Performance::ProfilingSettings
