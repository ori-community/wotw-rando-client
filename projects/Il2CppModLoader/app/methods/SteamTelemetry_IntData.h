#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SteamTelemetry_IntData {
    IL2CPP_REGISTER_METHOD(0x015F7410, void, ctor, (app::SteamTelemetry_IntData * this_ptr, int32_t int_value))
    IL2CPP_REGISTER_METHOD(0x015F7440, app::String *, ToString, (app::SteamTelemetry_IntData * this_ptr))
}
