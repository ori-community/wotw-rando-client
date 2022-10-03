#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_Byte_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Byte_Byte_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A50670, uint8_t, Invoke, (app::Func_2_Byte_Byte_ * this_ptr, uint8_t arg))
    IL2CPP_REGISTER_METHOD(0x02F9DB80, app::IAsyncResult*, BeginInvoke, (app::Func_2_Byte_Byte_ * this_ptr, uint8_t arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, uint8_t, EndInvoke, (app::Func_2_Byte_Byte_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Byte_Byte_
