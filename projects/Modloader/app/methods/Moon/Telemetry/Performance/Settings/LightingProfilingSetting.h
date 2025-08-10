#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightingProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::LightingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3D980, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::LightingProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3D990, bool, GetState, app::LightingProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3DA60, void, SetState, app::LightingProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LightingProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::LightingProfilingSetting
