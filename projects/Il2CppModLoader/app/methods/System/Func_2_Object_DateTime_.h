#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Object_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_DateTime_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::DateTime, Invoke, (app::Func_2_Object_DateTime_ * this_ptr, app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Func_2_Object_DateTime_ * this_ptr, app::Object * arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::DateTime, EndInvoke, (app::Func_2_Object_DateTime_ * this_ptr, app::IAsyncResult * result))
}
