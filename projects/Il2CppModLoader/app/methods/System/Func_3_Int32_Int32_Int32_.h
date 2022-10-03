#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_3_Int32_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Int32_Int32_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C7E620, int32_t, Invoke, (app::Func_3_Int32_Int32_Int32_ * this_ptr, int32_t arg1, int32_t arg2))
    IL2CPP_REGISTER_METHOD(0x02FA5C00, app::IAsyncResult*, BeginInvoke, (app::Func_3_Int32_Int32_Int32_ * this_ptr, int32_t arg1, int32_t arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_3_Int32_Int32_Int32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_3_Int32_Int32_Int32_
