#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::PathDataPoint {
    IL2CPP_REGISTER_METHOD(0x00E338A0, void, ctor, (app::PathDataPoint * this_ptr, app::String* player_key, app::String* session_key, app::String* time, app::String* level, app::DataPointType__Enum type, app::Vector3 position, float health, float light))
    IL2CPP_REGISTER_METHOD(0x00E32550, app::String*, ToString, (app::PathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, GetFloatValue, (app::PathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724040, float, GetSecondaryFloatValue, (app::PathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, GetStringValue, (app::PathDataPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, GetSecondaryStringValue, (app::PathDataPoint * this_ptr))
} // namespace app::classes::Moon::Telemetry::PathDataPoint
