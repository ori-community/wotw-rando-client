#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/DarkeningProfilingSetting.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::DarkeningProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DarkeningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B9B0, app::RenderScope__Enum*, GetScope, (app::DarkeningProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DarkeningProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::DarkeningProfilingSetting
