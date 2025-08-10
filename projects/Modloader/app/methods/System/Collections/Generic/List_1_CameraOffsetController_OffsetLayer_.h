#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/Comparison_1_CameraOffsetController_OffsetLayer_.h>
#include <Modloader/app/structs/List_1_CameraOffsetController_OffsetLayer_.h>

namespace app::classes::System::Collections::Generic::List_1_CameraOffsetController_OffsetLayer_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_CameraOffsetController_OffsetLayer_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_CameraOffsetController_OffsetLayer_* this_ptr,
        app::Comparison_1_CameraOffsetController_OffsetLayer_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::CameraOffsetController_OffsetLayer*,
        get_Item,
        app::List_1_CameraOffsetController_OffsetLayer_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_CameraOffsetController_OffsetLayer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_CameraOffsetController_OffsetLayer_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::List_1_CameraOffsetController_OffsetLayer_
