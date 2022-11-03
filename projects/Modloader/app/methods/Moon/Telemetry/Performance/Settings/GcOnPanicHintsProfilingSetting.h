#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::GcOnPanicHintsProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x006E4170, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::GcOnPanicHintsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D210, bool, GetState, (app::GcOnPanicHintsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3D2B0, void, SetState, (app::GcOnPanicHintsProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GcOnPanicHintsProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::GcOnPanicHintsProfilingSetting
