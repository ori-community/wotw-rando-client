#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Object_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_UnityEngine_Quaternion_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA0640, app::Quaternion, Invoke, (app::Func_2_Object_UnityEngine_Quaternion_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_UnityEngine_Quaternion_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Quaternion, EndInvoke, (app::Func_2_Object_UnityEngine_Quaternion_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_UnityEngine_Quaternion_
