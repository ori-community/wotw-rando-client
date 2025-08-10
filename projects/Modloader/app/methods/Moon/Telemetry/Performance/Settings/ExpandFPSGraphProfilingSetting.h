#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpandFPSGraphProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ExpandFPSGraphProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3CA20, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::ExpandFPSGraphProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3CA30, bool, GetState, app::ExpandFPSGraphProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3CB50, void, SetState, app::ExpandFPSGraphProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExpandFPSGraphProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ExpandFPSGraphProfilingSetting
