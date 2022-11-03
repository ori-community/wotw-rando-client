#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Events::UnityAction_3_System_Object_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0186BDE0, void, Invoke, (app::UnityAction_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* arg0, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x00DC7DB0, app::IAsyncResult*, BeginInvoke, (app::UnityAction_3_System_Object_System_Object_System_Object_ * this_ptr, app::Object* arg0, app::Object* arg1, app::Object* arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_3_System_Object_System_Object_System_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Events::UnityAction_3_System_Object_System_Object_System_Object_
