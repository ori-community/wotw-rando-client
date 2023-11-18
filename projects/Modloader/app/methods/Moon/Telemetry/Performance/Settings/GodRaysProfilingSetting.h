#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/GodRaysProfilingSetting.h>
#include <Modloader/app/structs/RenderScope__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::GodRaysProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x007E3F10, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::GodRaysProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D410, app::RenderScope__Enum*, GetScope, (app::GodRaysProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GodRaysProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::GodRaysProfilingSetting
