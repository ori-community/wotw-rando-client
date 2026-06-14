#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllContainer_1_CameraOffsetController_OffsetLayer_.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/List_1_CameraOffsetController_OffsetLayer_.h>

namespace app::classes::AllContainer_1_CameraOffsetController_OffsetLayer_ {
    IL2CPP_REGISTER_METHOD(
        0x019D79F0,
        bool,
        Contains,
        app::AllContainer_1_CameraOffsetController_OffsetLayer_* this_ptr,
        app::CameraOffsetController_OffsetLayer* item
    )
    IL2CPP_REGISTER_METHOD(
        0x019D7830,
        void,
        Add,
        app::AllContainer_1_CameraOffsetController_OffsetLayer_* this_ptr,
        app::CameraOffsetController_OffsetLayer* item
    )
    IL2CPP_REGISTER_METHOD(
        0x019D7990,
        void,
        Remove,
        app::AllContainer_1_CameraOffsetController_OffsetLayer_* this_ptr,
        app::CameraOffsetController_OffsetLayer* item
    )
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, app::AllContainer_1_CameraOffsetController_OffsetLayer_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019D7A20,
        void,
        GetList,
        app::AllContainer_1_CameraOffsetController_OffsetLayer_* this_ptr,
        app::List_1_CameraOffsetController_OffsetLayer_* list
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::AllContainer_1_CameraOffsetController_OffsetLayer_* this_ptr)
} // namespace app::classes::AllContainer_1_CameraOffsetController_OffsetLayer_
