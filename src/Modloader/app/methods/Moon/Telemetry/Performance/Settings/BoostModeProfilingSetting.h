#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoostModeProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00417920, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::BoostModeProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3B1B0, bool, GetState, app::BoostModeProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3B280, void, SetState, app::BoostModeProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BoostModeProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::BoostModeProfilingSetting
