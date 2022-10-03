#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonTelemetryCharacterHeartbeatEvent {
    IL2CPP_REGISTER_METHOD(0x0146A050, void, SynchronousInitialize, (app::MoonTelemetryCharacterHeartbeatEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146A170, void, AsynchronousInitialize, (app::MoonTelemetryCharacterHeartbeatEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146AA60, void, AddCleanupEvent, (app::TelemetryCleanupEvents__Enum event))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetAvailableMemory, (app::MoonTelemetryCharacterHeartbeatEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00756A30, app::String*, get_Name, (app::MoonTelemetryCharacterHeartbeatEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146AD10, void, SerializeToObject, (app::MoonTelemetryCharacterHeartbeatEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x0146BF10, void, ctor, (app::MoonTelemetryCharacterHeartbeatEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146C100, void, cctor, ())
} // namespace app::classes::MoonTelemetryCharacterHeartbeatEvent
