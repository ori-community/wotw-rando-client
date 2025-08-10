#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityAction_4_System_Object_System_Object_System_Object_System_Object_.h>

namespace app::classes::UnityEngine::Events::UnityAction_4_System_Object_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityAction_4_System_Object_System_Object_System_Object_System_Object_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC84C0,
        void,
        Invoke,
        app::UnityAction_4_System_Object_System_Object_System_Object_System_Object_* this_ptr,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3
    )
    IL2CPP_REGISTER_METHOD(
        0x01BD1540,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityAction_4_System_Object_System_Object_System_Object_System_Object_* this_ptr,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2,
        app::Object* arg3,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::UnityAction_4_System_Object_System_Object_System_Object_System_Object_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::UnityEngine::Events::UnityAction_4_System_Object_System_Object_System_Object_System_Object_
