#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SteamTelemetry_StringData {
    IL2CPP_REGISTER_METHOD(0x015F7540, void, ctor, (app::SteamTelemetry_StringData * this_ptr, app::String * string_value))
    IL2CPP_REGISTER_METHOD(0x015F7570, app::String *, ToString, (app::SteamTelemetry_StringData * this_ptr))
}
