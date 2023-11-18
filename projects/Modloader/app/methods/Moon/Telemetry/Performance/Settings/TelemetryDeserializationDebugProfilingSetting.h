#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/TelemetryDeserializationDebugProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::TelemetryDeserializationDebugProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E40150, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::TelemetryDeserializationDebugProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40160, bool, GetState, (app::TelemetryDeserializationDebugProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E40200, void, SetState, (app::TelemetryDeserializationDebugProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TelemetryDeserializationDebugProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::TelemetryDeserializationDebugProfilingSetting
