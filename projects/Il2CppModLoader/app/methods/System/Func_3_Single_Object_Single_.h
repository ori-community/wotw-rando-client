#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_3_Single_Object_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Single_Object_Single_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02FA7220, float, Invoke, (app::Func_3_Single_Object_Single_ * this_ptr, float arg1, app::Object * arg2))
    IL2CPP_REGISTER_METHOD(0x02FA75A0, app::IAsyncResult *, BeginInvoke, (app::Func_3_Single_Object_Single_ * this_ptr, float arg1, app::Object * arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::Func_3_Single_Object_Single_ * this_ptr, app::IAsyncResult * result))
}
