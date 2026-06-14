#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TelemetryCleanupEvents__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::MoonTelemetryCharacterHeartbeatEvent_Cleanup {
    IL2CPP_REGISTER_METHOD(
        0x0012B560,
        void,
        ctor,
        app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed* this_ptr,
        app::TelemetryCleanupEvents__Enum event,
        app::Vector2 position,
        app::String* scene_name
    )
}
