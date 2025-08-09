#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02FA7670,
        bool,
        Invoke,
        app::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_* this_ptr,
        app::Vector3 arg1,
        app::Vector3 arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x02FA7C90,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_* this_ptr,
        app::Vector3 arg1,
        app::Vector3 arg2,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_3_UnityEngine_Vector3_UnityEngine_Vector3_Boolean_
