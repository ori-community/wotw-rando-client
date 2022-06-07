#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C18EF0, void, Invoke, (app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_ * this_ptr, app::Vector3 arg1, app::Vector3 arg2, app::Vector3 arg3, app::Int32Enum__Enum arg4))
    IL2CPP_REGISTER_METHOD(0x02C19810, app::IAsyncResult *, BeginInvoke, (app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_ * this_ptr, app::Vector3 arg1, app::Vector3 arg2, app::Vector3 arg3, app::Int32Enum__Enum arg4, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_Int32Enum_ * this_ptr, app::IAsyncResult * result))
}
