#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Color_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_Object_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_2_Object_UnityEngine_Color_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02FA0640, app::Color, Invoke, app::Func_2_Object_UnityEngine_Color_* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_Object_UnityEngine_Color_* this_ptr,
        app::Object* arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Color, EndInvoke, app::Func_2_Object_UnityEngine_Color_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_2_Object_UnityEngine_Color_
