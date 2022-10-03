#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::UseSwitchSlicesProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40BC0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::UseSwitchSlicesProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40BD0, bool, GetState, (app::UseSwitchSlicesProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40C70, void, SetState, (app::UseSwitchSlicesProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UseSwitchSlicesProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::UseSwitchSlicesProfilingSetting
