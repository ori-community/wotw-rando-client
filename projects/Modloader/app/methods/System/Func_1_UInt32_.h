#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_1_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x0167F180, uint32_t, Invoke, (app::Func_1_UInt32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A4D8, Func_1_UInt32__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_UInt32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Func_1_UInt32_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::Func_1_UInt32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_1_UInt32_
