#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ResourcesUnloadingV2ProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ResourcesUnloadingV2ProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3F290, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::ResourcesUnloadingV2ProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3F2A0, bool, GetState, app::ResourcesUnloadingV2ProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E3F340, void, SetState, app::ResourcesUnloadingV2ProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ResourcesUnloadingV2ProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ResourcesUnloadingV2ProfilingSetting
