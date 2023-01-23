#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::DownsamplingThresholdProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3BD30, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DownsamplingThresholdProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BD40, app::RenderScope__Enum*, GetScope, (app::DownsamplingThresholdProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DownsamplingThresholdProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::DownsamplingThresholdProfilingSetting
