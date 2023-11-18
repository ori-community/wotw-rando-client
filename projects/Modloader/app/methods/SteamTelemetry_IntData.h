#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SteamTelemetry_IntData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SteamTelemetry_IntData {
    IL2CPP_REGISTER_METHOD(0x015F7410, void, ctor, (app::SteamTelemetry_IntData * this_ptr, int32_t int_value))
    IL2CPP_REGISTER_METHOD(0x015F7440, app::String*, ToString, (app::SteamTelemetry_IntData * this_ptr))
} // namespace app::classes::SteamTelemetry_IntData
