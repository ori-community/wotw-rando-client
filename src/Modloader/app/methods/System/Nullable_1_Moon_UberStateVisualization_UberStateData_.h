#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateData.h>

namespace app::classes::System::Nullable_1_Moon_UberStateVisualization_UberStateData_ {
    IL2CPP_REGISTER_METHOD(0x001F7170, void, ctor, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr, app::UberStateData value)
    IL2CPP_REGISTER_METHOD(0x001F71A0, bool, get_HasValue, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F71B0, app::UberStateData, get_Value, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F72B0, bool, Equals_1, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(
        0x001F7360,
        bool,
        Equals_2,
        app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr,
        app::Nullable_1_Moon_UberStateVisualization_UberStateData_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F7470, int32_t, GetHashCode, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F7580, app::UberStateData, GetValueOrDefault_1, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F75B0,
        app::UberStateData,
        GetValueOrDefault_2,
        app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr,
        app::UberStateData default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F7610, app::String*, ToString, app::Nullable_1_Moon_UberStateVisualization_UberStateData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025505D0, app::Object*, Box, app::Nullable_1_Moon_UberStateVisualization_UberStateData_ o)
    IL2CPP_REGISTER_METHOD(0x025506B0, app::Nullable_1_Moon_UberStateVisualization_UberStateData_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Moon_UberStateVisualization_UberStateData_
