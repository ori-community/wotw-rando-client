#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Int32Enum_Single_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Int32Enum_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F9F270, float, Invoke, (app::Func_2_Int32Enum_Single_ * this_ptr, app::Int32Enum__Enum arg))
    IL2CPP_REGISTER_METHOD(0x02F9F5B0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Int32Enum_Single_ * this_ptr, app::Int32Enum__Enum arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818E0, float, EndInvoke, (app::Func_2_Int32Enum_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Int32Enum_Single_
