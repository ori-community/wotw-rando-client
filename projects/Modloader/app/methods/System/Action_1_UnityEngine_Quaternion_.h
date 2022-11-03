#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::Action_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion obj))
    IL2CPP_REGISTER_METHODINFO(0x0474F7B0, Action_1_UnityEngine_Quaternion__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Quaternion_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0470C968, Action_1_UnityEngine_Quaternion___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0BCC0, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Quaternion_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_Quaternion_
