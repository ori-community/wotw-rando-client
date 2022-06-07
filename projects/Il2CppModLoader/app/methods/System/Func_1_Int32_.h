#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_1_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_Int32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x047996D0, Func_1_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0167F180, int32_t, Invoke, (app::Func_1_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743EE0, Func_1_Int32__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::Func_1_Int32_ * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_1_Int32_ * this_ptr, app::IAsyncResult * result))
}
