#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/GfxJobQueueProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::GfxJobQueueProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3D360, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::GfxJobQueueProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D370, bool, GetState, (app::GfxJobQueueProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D3C0, void, SetState, (app::GfxJobQueueProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GfxJobQueueProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::GfxJobQueueProfilingSetting
