#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::DepthOfFieldProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DepthOfFieldProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3B9E0, app::RenderScope__Enum*, GetScope, (app::DepthOfFieldProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DepthOfFieldProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::DepthOfFieldProfilingSetting
