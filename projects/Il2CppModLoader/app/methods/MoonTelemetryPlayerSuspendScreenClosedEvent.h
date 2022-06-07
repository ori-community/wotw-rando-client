#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetryPlayerSuspendScreenClosedEvent {
    IL2CPP_REGISTER_METHOD(0x014707A0, void, SynchronousInitialize, (app::MoonTelemetryPlayerSuspendScreenClosedEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014708B0, void, AsynchronousInitialize, (app::MoonTelemetryPlayerSuspendScreenClosedEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String *, get_Name, (app::MoonTelemetryPlayerSuspendScreenClosedEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01470970, void, SerializeToObject, (app::MoonTelemetryPlayerSuspendScreenClosedEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x01470AB0, void, ctor, (app::MoonTelemetryPlayerSuspendScreenClosedEvent * this_ptr))
}
