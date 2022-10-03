#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_3_Int32_Object_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Int32_Object_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, int32_t, Invoke, (app::Func_3_Int32_Object_Int32_ * this_ptr, int32_t arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x02FA5DA0, app::IAsyncResult*, BeginInvoke, (app::Func_3_Int32_Object_Int32_ * this_ptr, int32_t arg1, app::Object* arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_3_Int32_Object_Int32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_3_Int32_Object_Int32_
