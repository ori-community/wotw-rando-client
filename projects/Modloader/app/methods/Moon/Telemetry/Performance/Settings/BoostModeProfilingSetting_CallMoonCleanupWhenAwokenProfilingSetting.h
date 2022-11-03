#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00A5B690, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B3F0, bool, GetState, (app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B440, void, SetState, (app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting_CallMoonCleanupWhenAwokenProfilingSetting
