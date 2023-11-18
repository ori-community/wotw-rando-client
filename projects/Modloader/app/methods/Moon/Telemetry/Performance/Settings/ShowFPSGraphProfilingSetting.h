#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ShowFPSGraphProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ShowFPSGraphProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00A79BB0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ShowFPSGraphProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F530, bool, GetState, (app::ShowFPSGraphProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F690, void, SetState, (app::ShowFPSGraphProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ShowFPSGraphProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ShowFPSGraphProfilingSetting
