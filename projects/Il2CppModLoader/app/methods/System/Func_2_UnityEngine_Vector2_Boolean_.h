#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_UnityEngine_Vector2_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UnityEngine_Vector2_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288C630, bool, Invoke, (app::Func_2_UnityEngine_Vector2_Boolean_ * this_ptr, app::Vector2 arg))
    IL2CPP_REGISTER_METHOD(0x02FA32A0, app::IAsyncResult*, BeginInvoke, (app::Func_2_UnityEngine_Vector2_Boolean_ * this_ptr, app::Vector2 arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_UnityEngine_Vector2_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_UnityEngine_Vector2_Boolean_
