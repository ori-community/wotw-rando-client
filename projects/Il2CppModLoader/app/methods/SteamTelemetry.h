#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SteamTelemetry {
    IL2CPP_REGISTER_METHOD(0x009BFC70, void, Awake, (app::SteamTelemetry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BFF70, void, Update, (app::SteamTelemetry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C0080, void, Send, (app::SteamTelemetry * this_ptr, app::TelemetryEvent__Enum event_id, app::String * body))
    IL2CPP_REGISTER_METHOD(0x009C0230, app::IEnumerator *, SendRoutine, (app::SteamTelemetry * this_ptr, app::Byte__Array * data))
    IL2CPP_REGISTER_METHOD(0x009C0380, app::String *, GetJson, (app::SteamTelemetry * this_ptr, int32_t event_id, app::String * body))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SteamTelemetry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C0880, void, cctor, ())
}
