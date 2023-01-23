#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenOpenEvent.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>

namespace app::classes::MoonTelemetryPlayerSuspendScreenOpenEvent {
    IL2CPP_REGISTER_METHOD(0x01470B90, void, SynchronousInitialize, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01470BA0, void, AsynchronousInitialize, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_Name, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01470C60, void, SerializeToObject, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x01470D60, void, ctor, (app::MoonTelemetryPlayerSuspendScreenOpenEvent * this_ptr))
} // namespace app::classes::MoonTelemetryPlayerSuspendScreenOpenEvent
