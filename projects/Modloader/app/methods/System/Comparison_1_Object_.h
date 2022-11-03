#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04725178, Comparison_1_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C7EDC0, int32_t, Invoke, (app::Comparison_1_Object_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Object_ * this_ptr, app::Object* x, app::Object* y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Object_
