#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/TAAProfilingSetting.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::TAAProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3FFC0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TAAProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FFD0, app::RenderScope__Enum*, GetScope, (app::TAAProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TAAProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::TAAProfilingSetting
