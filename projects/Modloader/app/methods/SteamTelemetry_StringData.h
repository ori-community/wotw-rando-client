#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteamTelemetry_StringData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SteamTelemetry_StringData {
    IL2CPP_REGISTER_METHOD(0x015F7540, void, ctor, (app::SteamTelemetry_StringData * this_ptr, app::String* string_value))
    IL2CPP_REGISTER_METHOD(0x015F7570, app::String*, ToString, (app::SteamTelemetry_StringData * this_ptr))
} // namespace app::classes::SteamTelemetry_StringData
