#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_4_Object_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_4_Object_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C17EA0, void, Invoke, (app::Action_4_Object_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::Object* arg1, app::Vector3 arg2, app::Vector3 arg3, app::Vector3 arg4))
    IL2CPP_REGISTER_METHOD(0x02C18DE0, app::IAsyncResult*, BeginInvoke, (app::Action_4_Object_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::Object* arg1, app::Vector3 arg2, app::Vector3 arg3, app::Vector3 arg4, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_4_Object_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_4_Object_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_
