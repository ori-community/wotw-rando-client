#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::DoStressTestsProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::DoStressTestsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BBD0, bool, GetState, (app::DoStressTestsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BC70, void, SetState, (app::DoStressTestsProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DoStressTestsProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::DoStressTestsProfilingSetting
