#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_1_Int16_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_Int16_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x028812A0, int16_t, Invoke, (app::Func_1_Int16_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Func_1_Int16_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x024CEF10, int16_t, EndInvoke, (app::Func_1_Int16_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_1_Int16_
