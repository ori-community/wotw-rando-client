#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_4_Object_Int32_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_Object_Int32_Int32_Int32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D2E1F0, int32_t, Invoke, (app::Func_4_Object_Int32_Int32_Int32_ * this_ptr, app::Object * arg1, int32_t arg2, int32_t arg3))
    IL2CPP_REGISTER_METHOD(0x02FA7D80, app::IAsyncResult *, BeginInvoke, (app::Func_4_Object_Int32_Int32_Int32_ * this_ptr, app::Object * arg1, int32_t arg2, int32_t arg3, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_4_Object_Int32_Int32_Int32_ * this_ptr, app::IAsyncResult * result))
}
