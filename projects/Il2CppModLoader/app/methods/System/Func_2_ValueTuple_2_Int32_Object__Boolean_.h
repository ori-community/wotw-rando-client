#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_ValueTuple_2_Int32_Object__Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * this_ptr, app::ValueTuple_2_Int32_Object_ arg))
    IL2CPP_REGISTER_METHOD(0x02FA23A0, app::IAsyncResult*, BeginInvoke, (app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * this_ptr, app::ValueTuple_2_Int32_Object_ arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_ValueTuple_2_Int32_Object_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_ValueTuple_2_Int32_Object__Boolean_
