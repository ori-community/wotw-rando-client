#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_3_UnityEngine_Vector3_Single_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_3_UnityEngine_Vector3_Single_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C16FF0, void, Invoke, (app::Action_3_UnityEngine_Vector3_Single_Object_ * this_ptr, app::Vector3 arg1, float arg2, app::Object * arg3))
    IL2CPP_REGISTER_METHOD(0x02C17510, app::IAsyncResult *, BeginInvoke, (app::Action_3_UnityEngine_Vector3_Single_Object_ * this_ptr, app::Vector3 arg1, float arg2, app::Object * arg3, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_3_UnityEngine_Vector3_Single_Object_ * this_ptr, app::IAsyncResult * result))
}
