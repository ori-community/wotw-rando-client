#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::EnableSimpleFPSProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x004AB2B0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::EnableSimpleFPSProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C570, bool, GetState, (app::EnableSimpleFPSProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3C6D0, void, SetState, (app::EnableSimpleFPSProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnableSimpleFPSProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::EnableSimpleFPSProfilingSetting
