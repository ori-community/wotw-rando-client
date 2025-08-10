#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Rect_Single_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::System::Func_2_UnityEngine_Rect_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_2_UnityEngine_Rect_Single_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02FA27B0, float, Invoke, app::Func_2_UnityEngine_Rect_Single_* this_ptr, app::Rect arg)
    IL2CPP_REGISTER_METHOD(
        0x02FA2BC0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_UnityEngine_Rect_Single_* this_ptr,
        app::Rect arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, app::Func_2_UnityEngine_Rect_Single_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_2_UnityEngine_Rect_Single_
