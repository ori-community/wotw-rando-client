#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_Object_Int16_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_Int16_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C5E060, int16_t, Invoke, (app::Func_2_Object_Int16_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_Int16_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x024CEF10, int16_t, EndInvoke, (app::Func_2_Object_Int16_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_Int16_
