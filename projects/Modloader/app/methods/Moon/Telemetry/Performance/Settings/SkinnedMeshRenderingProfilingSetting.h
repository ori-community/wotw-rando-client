#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/SkinnedMeshRenderingProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::SkinnedMeshRenderingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3FDE0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::SkinnedMeshRenderingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, GetState, (app::SkinnedMeshRenderingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FDF0, void, SetState, (app::SkinnedMeshRenderingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x0049C100, void, ctor, (app::SkinnedMeshRenderingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::SkinnedMeshRenderingProfilingSetting
