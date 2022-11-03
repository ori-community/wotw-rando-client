#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::EarlyZProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::EarlyZProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BDB0, app::RenderScope__Enum*, GetScope, (app::EarlyZProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EarlyZProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::EarlyZProfilingSetting
