#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_4_Byte___Int32_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_Byte_Int32_Int32_Int32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04710470, Func_4_Byte_Int32_Int32_Int32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FA7D80, app::IAsyncResult*, BeginInvoke, (app::Func_4_Byte_Int32_Int32_Int32_ * this_ptr, app::Byte__Array* arg1, int32_t arg2, int32_t arg3, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHODINFO(0x047830A0, Func_4_Byte_Int32_Int32_Int32__BeginInvoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Func_4_Byte_Int32_Int32_Int32_ * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHODINFO(0x04703428, Func_4_Byte_Int32_Int32_Int32__EndInvoke__MethodInfo)
} // namespace app::classes::System::Func_4_Byte___Int32_Int32_Int32_
