#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_UnityEngine_Rect_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UnityEngine_Rect_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0475BE60, Func_2_UnityEngine_Rect_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0288F670, bool, Invoke, (app::Func_2_UnityEngine_Rect_Boolean_ * this_ptr, app::Rect arg))
    IL2CPP_REGISTER_METHOD(0x02FA26E0, app::IAsyncResult *, BeginInvoke, (app::Func_2_UnityEngine_Rect_Boolean_ * this_ptr, app::Rect arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_UnityEngine_Rect_Boolean_ * this_ptr, app::IAsyncResult * result))
}
