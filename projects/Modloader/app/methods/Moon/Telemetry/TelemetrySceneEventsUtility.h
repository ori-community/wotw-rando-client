#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Telemetry::TelemetrySceneEventsUtility {
    IL2CPP_REGISTER_METHOD(0x010AA6C0, app::Color, GetColor, (app::MoonTelemetrySceneEvent_EventSceneState__Enum state))
    IL2CPP_REGISTER_METHOD(0x010AA750, app::String*, GetInfo, (app::MoonTelemetrySceneEvent_EventSceneState__Enum state))
} // namespace app::classes::Moon::Telemetry::TelemetrySceneEventsUtility
