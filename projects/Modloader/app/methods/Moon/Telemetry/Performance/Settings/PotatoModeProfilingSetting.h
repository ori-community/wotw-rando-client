#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/PotatoModeProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::PotatoModeProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3EE80, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::PotatoModeProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3EE90, bool, GetState, (app::PotatoModeProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3EEA0, void, SetState, (app::PotatoModeProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PotatoModeProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::PotatoModeProfilingSetting
