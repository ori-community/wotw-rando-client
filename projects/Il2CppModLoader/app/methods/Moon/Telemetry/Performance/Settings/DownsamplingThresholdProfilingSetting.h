#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::DownsamplingThresholdProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3BD30, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DownsamplingThresholdProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BD40, app::RenderScope__Enum *, GetScope, (app::DownsamplingThresholdProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DownsamplingThresholdProfilingSetting * this_ptr))
}
