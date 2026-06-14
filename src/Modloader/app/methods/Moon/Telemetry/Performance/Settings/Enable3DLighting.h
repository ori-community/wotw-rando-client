#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enable3DLighting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::Enable3DLighting {
    IL2CPP_REGISTER_METHOD(0x00E3C140, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::Enable3DLighting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3C150, bool, GetState, app::Enable3DLighting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3C210, void, SetState, app::Enable3DLighting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Enable3DLighting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::Enable3DLighting
