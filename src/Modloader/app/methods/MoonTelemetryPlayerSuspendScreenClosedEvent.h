#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenClosedEvent.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryPlayerSuspendScreenClosedEvent {
    IL2CPP_REGISTER_METHOD(0x014707A0, void, SynchronousInitialize, app::MoonTelemetryPlayerSuspendScreenClosedEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014708B0, void, AsynchronousInitialize, app::MoonTelemetryPlayerSuspendScreenClosedEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_Name, app::MoonTelemetryPlayerSuspendScreenClosedEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01470970, void, SerializeToObject, app::MoonTelemetryPlayerSuspendScreenClosedEvent* this_ptr, app::JsonBuilder_Object obj)
    IL2CPP_REGISTER_METHOD(0x01470AB0, void, ctor, app::MoonTelemetryPlayerSuspendScreenClosedEvent* this_ptr)
} // namespace app::classes::MoonTelemetryPlayerSuspendScreenClosedEvent
