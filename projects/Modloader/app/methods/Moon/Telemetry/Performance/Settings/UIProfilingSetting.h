#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::UIProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E408E0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::UIProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E408F0, app::RenderScope__Enum*, GetScope, (app::UIProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UIProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::UIProfilingSetting
