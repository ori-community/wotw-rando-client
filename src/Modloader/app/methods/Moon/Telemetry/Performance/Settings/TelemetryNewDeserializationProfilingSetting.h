#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/TelemetryNewDeserializationProfilingSetting.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::TelemetryNewDeserializationProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E402B0, app::ProfilingSettings_SettingType__Enum, get_SettingType, app::TelemetryNewDeserializationProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E402C0, bool, GetState, app::TelemetryNewDeserializationProfilingSetting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E40360, void, SetState, app::TelemetryNewDeserializationProfilingSetting* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TelemetryNewDeserializationProfilingSetting* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::Settings::TelemetryNewDeserializationProfilingSetting
