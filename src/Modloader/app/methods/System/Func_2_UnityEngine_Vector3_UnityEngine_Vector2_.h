#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02FA3430, app::Vector2, Invoke, app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_* this_ptr, app::Vector3 arg)
    IL2CPP_REGISTER_METHOD(
        0x02FA38D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_* this_ptr,
        app::Vector3 arg,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F52480, app::Vector2, EndInvoke, app::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_2_UnityEngine_Vector3_UnityEngine_Vector2_
