#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnityAction_1_System_Object_.h>

namespace app::classes::UnityEngine::Events::UnityAction_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::UnityAction_1_System_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::UnityAction_1_System_Object_* this_ptr, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityAction_1_System_Object_* this_ptr,
        app::Object* arg0,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::UnityAction_1_System_Object_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Events::UnityAction_1_System_Object_
