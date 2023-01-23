#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/EnableFrameGraphProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::EnableFrameGraphProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00C8F220, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::EnableFrameGraphProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C2E0, bool, GetState, (app::EnableFrameGraphProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C440, void, SetState, (app::EnableFrameGraphProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnableFrameGraphProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::EnableFrameGraphProfilingSetting
