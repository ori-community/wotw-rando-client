#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02881D70, app::Vector2, Invoke, (app::Func_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766D70, Func_1_UnityEngine_Vector2__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_UnityEngine_Vector2_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::Func_1_UnityEngine_Vector2_ * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::Vector2, EndInvoke, (app::Func_1_UnityEngine_Vector2_ * this_ptr, app::IAsyncResult * result))
}
