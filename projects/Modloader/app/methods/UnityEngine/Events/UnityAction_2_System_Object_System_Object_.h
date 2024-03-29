#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnityAction_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Events::UnityAction_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_2_System_Object_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::UnityAction_2_System_Object_System_Object_ * this_ptr, app::Object* arg0, app::Object* arg1))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::UnityAction_2_System_Object_System_Object_ * this_ptr, app::Object* arg0, app::Object* arg1, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_2_System_Object_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Events::UnityAction_2_System_Object_System_Object_
