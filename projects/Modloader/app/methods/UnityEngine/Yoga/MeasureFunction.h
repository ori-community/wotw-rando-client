#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/MeasureFunction.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/YogaMeasureMode__Enum.h>
#include <Modloader/app/structs/YogaNode.h>
#include <Modloader/app/structs/YogaSize.h>

namespace app::classes::UnityEngine::Yoga::MeasureFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::MeasureFunction* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x031BDBB0,
        app::YogaSize,
        Invoke,
        app::MeasureFunction* this_ptr,
        app::YogaNode* node,
        float width,
        app::YogaMeasureMode__Enum width_mode,
        float height,
        app::YogaMeasureMode__Enum height_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x031BE2D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::MeasureFunction* this_ptr,
        app::YogaNode* node,
        float width,
        app::YogaMeasureMode__Enum width_mode,
        float height,
        app::YogaMeasureMode__Enum height_mode,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F52480, app::YogaSize, EndInvoke, app::MeasureFunction* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Yoga::MeasureFunction
