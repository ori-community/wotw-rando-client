#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ScarlettPerformanceMode.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::ScarlettPerformanceMode {
    IL2CPP_REGISTER_METHOD(0x00E3F3E0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ScarlettPerformanceMode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F3F0, bool, GetState, (app::ScarlettPerformanceMode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F490, void, SetState, (app::ScarlettPerformanceMode * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScarlettPerformanceMode * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::ScarlettPerformanceMode
