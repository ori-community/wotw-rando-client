#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/SteamTelemetry_Data.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SteamTelemetry_Data {
    IL2CPP_REGISTER_METHOD(0x015F53F0, app::Dictionary_2_System_String_System_Object_*, ToDictionary, app::SteamTelemetry_Data* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F63E0, app::String*, ToString, app::SteamTelemetry_Data* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F7230, void, ctor, app::SteamTelemetry_Data* this_ptr)
} // namespace app::classes::SteamTelemetry_Data
