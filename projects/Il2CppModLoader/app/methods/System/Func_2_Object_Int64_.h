#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_Object_Int64_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_Int64_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, int64_t, Invoke, (app::Func_2_Object_Int64_ * this_ptr, app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Func_2_Object_Int64_ * this_ptr, app::Object * arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, int64_t, EndInvoke, (app::Func_2_Object_Int64_ * this_ptr, app::IAsyncResult * result))
}
