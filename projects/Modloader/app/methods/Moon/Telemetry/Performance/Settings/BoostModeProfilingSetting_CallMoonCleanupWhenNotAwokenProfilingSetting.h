#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting {
    IL2CPP_REGISTER_METHOD(
        0x0088EB80,
        app::ProfilingSettings_SettingType__Enum,
        get_SettingType,
        app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00E3B490, bool, GetState, app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3B4E0, void, SetState, app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting_CallMoonCleanupWhenNotAwokenProfilingSetting
