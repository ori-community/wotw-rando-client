#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Matrix4x4_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_Object_UnityEngine_Matrix4x4_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_2_Object_UnityEngine_Matrix4x4_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02FA0C60, app::Matrix4x4, Invoke, app::Func_2_Object_UnityEngine_Matrix4x4_* this_ptr, app::Object* arg)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_Object_UnityEngine_Matrix4x4_* this_ptr,
        app::Object* arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x02881D00, app::Matrix4x4, EndInvoke, app::Func_2_Object_UnityEngine_Matrix4x4_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_2_Object_UnityEngine_Matrix4x4_
