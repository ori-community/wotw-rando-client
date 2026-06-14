#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraPositionTracker_CameraPosition.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_* this_ptr,
        int32_t key,
        app::CameraPositionTracker_CameraPosition* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::CameraPositionTracker_CameraPosition*,
        get_Item,
        app::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_* this_ptr,
        int32_t key,
        app::CameraPositionTracker_CameraPosition** value
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_CameraPositionTracker_CameraPosition_
