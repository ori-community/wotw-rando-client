#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Int32Enum_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Int32Enum_UnityEngine_Rect_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02F9F670, app::Rect, Invoke, (app::Func_2_Int32Enum_UnityEngine_Rect_ * this_ptr, app::Int32Enum__Enum arg))
    IL2CPP_REGISTER_METHOD(0x02F9FA50, app::IAsyncResult *, BeginInvoke, (app::Func_2_Int32Enum_UnityEngine_Rect_ * this_ptr, app::Int32Enum__Enum arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Rect, EndInvoke, (app::Func_2_Int32Enum_UnityEngine_Rect_ * this_ptr, app::IAsyncResult * result))
}
