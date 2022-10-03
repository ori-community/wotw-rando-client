#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_SByte_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_SByte_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C7C550, int32_t, Invoke, (app::Comparison_1_SByte_ * this_ptr, int8_t x, int8_t y))
    IL2CPP_REGISTER_METHOD(0x02C7F2D0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_SByte_ * this_ptr, int8_t x, int8_t y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_SByte_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_SByte_
