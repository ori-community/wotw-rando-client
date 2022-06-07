#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_UnityEngine_Color32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, app::Color32, Invoke, (app::Func_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::Func_1_UnityEngine_Color32_ * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::Color32, EndInvoke, (app::Func_1_UnityEngine_Color32_ * this_ptr, app::IAsyncResult * result))
}
