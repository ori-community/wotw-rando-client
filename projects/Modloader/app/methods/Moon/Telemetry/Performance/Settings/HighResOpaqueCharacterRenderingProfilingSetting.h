#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/HighResOpaqueCharacterRenderingProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::HighResOpaqueCharacterRenderingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3D440, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::HighResOpaqueCharacterRenderingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D450, bool, GetState, (app::HighResOpaqueCharacterRenderingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D510, void, SetState, (app::HighResOpaqueCharacterRenderingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HighResOpaqueCharacterRenderingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::HighResOpaqueCharacterRenderingProfilingSetting
