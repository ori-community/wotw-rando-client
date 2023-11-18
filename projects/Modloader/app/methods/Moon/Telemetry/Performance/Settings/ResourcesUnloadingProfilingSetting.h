#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ResourcesUnloadingProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ResourcesUnloadingProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3F140, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ResourcesUnloadingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F150, bool, GetState, (app::ResourcesUnloadingProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F1F0, void, SetState, (app::ResourcesUnloadingProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ResourcesUnloadingProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ResourcesUnloadingProfilingSetting
