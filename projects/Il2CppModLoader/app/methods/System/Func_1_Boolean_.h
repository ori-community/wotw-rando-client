#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_1_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x008A18F0, bool, Invoke, (app::Func_1_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729360, Func_1_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0473CF60, Func_1_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Func_1_Boolean_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_1_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_1_Boolean_
