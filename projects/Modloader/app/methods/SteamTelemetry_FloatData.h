#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SteamTelemetry_FloatData {
    IL2CPP_REGISTER_METHOD(0x015F72D0, void, ctor, (app::SteamTelemetry_FloatData * this_ptr, float float_value))
    IL2CPP_REGISTER_METHOD(0x015F7300, app::String*, ToString, (app::SteamTelemetry_FloatData * this_ptr))
} // namespace app::classes::SteamTelemetry_FloatData
