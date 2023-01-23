#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteamTelemetry.h>
#include <Modloader/app/structs/TelemetryEvent__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::SteamTelemetry {
    IL2CPP_REGISTER_METHOD(0x009BFC70, void, Awake, (app::SteamTelemetry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BFF70, void, Update, (app::SteamTelemetry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C0080, void, Send, (app::SteamTelemetry * this_ptr, app::TelemetryEvent__Enum event_id, app::String* body))
    IL2CPP_REGISTER_METHOD(0x009C0230, app::IEnumerator*, SendRoutine, (app::SteamTelemetry * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x009C0380, app::String*, GetJson, (app::SteamTelemetry * this_ptr, int32_t event_id, app::String* body))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SteamTelemetry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C0880, void, cctor, ())
} // namespace app::classes::SteamTelemetry
