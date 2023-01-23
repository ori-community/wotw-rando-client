#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/FXAAProfilingSetting.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::FXAAProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00D51450, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::FXAAProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CC80, app::RenderScope__Enum*, GetScope, (app::FXAAProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FXAAProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::FXAAProfilingSetting
