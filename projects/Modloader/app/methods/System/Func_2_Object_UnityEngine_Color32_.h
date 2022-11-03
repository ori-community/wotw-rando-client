#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Object_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_UnityEngine_Color32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x020105B0, app::Color32, Invoke, (app::Func_2_Object_UnityEngine_Color32_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_UnityEngine_Color32_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::Color32, EndInvoke, (app::Func_2_Object_UnityEngine_Color32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_UnityEngine_Color32_
