#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataPoint.h>
#include <Modloader/app/structs/DataPointType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Telemetry::DataPoint {
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Level, app::DataPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, app::DataPointType__Enum, get_Type, app::DataPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DC0720, app::Vector3, get_Position, app::DataPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E32560, app::Texture2D*, get_Icon, app::DataPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E326B0,
        void,
        ctor,
        app::DataPoint* this_ptr,
        app::String* player_key,
        app::String* session_key,
        app::String* time,
        app::String* level,
        app::DataPointType__Enum type,
        app::Vector3 position
    )
    IL2CPP_REGISTER_METHOD(0x00E326F0, app::String*, ToString, app::DataPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E32980, int32_t, GetHashCode, app::DataPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E32A20, bool, Equals_1, app::DataPoint* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x00E32B30, bool, Equals_2, app::DataPoint* this_ptr, app::DataPoint* point)
} // namespace app::classes::Moon::Telemetry::DataPoint
