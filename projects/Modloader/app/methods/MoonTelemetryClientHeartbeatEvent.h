#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonTelemetryClientHeartbeatEvent {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_Name, (app::MoonTelemetryClientHeartbeatEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146D630, void, SerializeToObject, (app::MoonTelemetryClientHeartbeatEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x0146D860, void, ctor, (app::MoonTelemetryClientHeartbeatEvent * this_ptr))
} // namespace app::classes::MoonTelemetryClientHeartbeatEvent
