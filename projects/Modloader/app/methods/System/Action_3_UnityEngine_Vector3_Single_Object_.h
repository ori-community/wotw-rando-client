#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_UnityEngine_Vector3_Single_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::System::Action_3_UnityEngine_Vector3_Single_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_3_UnityEngine_Vector3_Single_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02C16FF0,
        void,
        Invoke,
        app::Action_3_UnityEngine_Vector3_Single_Object_* this_ptr,
        app::Vector3 arg1,
        float arg2,
        app::Object* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x02C17510,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_3_UnityEngine_Vector3_Single_Object_* this_ptr,
        app::Vector3 arg1,
        float arg2,
        app::Object* arg3,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_3_UnityEngine_Vector3_Single_Object_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_3_UnityEngine_Vector3_Single_Object_
