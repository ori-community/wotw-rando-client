#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonTelemetryCharacterHeartbeatEvent_Cleanup {
    IL2CPP_REGISTER_METHOD(0x0012B560, void, ctor, (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed * this_ptr, app::TelemetryCleanupEvents__Enum event, app::Vector2 position, app::String* scene_name))
}
