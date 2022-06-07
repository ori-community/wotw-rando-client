#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_3_Object_Object_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Object_Object_Int32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C7EDC0, int32_t, Invoke, (app::Func_3_Object_Object_Int32_ * this_ptr, app::Object * arg1, app::Object * arg2))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::Func_3_Object_Object_Int32_ * this_ptr, app::Object * arg1, app::Object * arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_3_Object_Object_Int32_ * this_ptr, app::IAsyncResult * result))
}
