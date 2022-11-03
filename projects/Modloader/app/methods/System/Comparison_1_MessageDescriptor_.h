#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_MessageDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_MessageDescriptor_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B86EB0, int32_t, Invoke, (app::Comparison_1_MessageDescriptor_ * this_ptr, app::MessageDescriptor x, app::MessageDescriptor y))
    IL2CPP_REGISTER_METHOD(0x02B8A6D0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_MessageDescriptor_ * this_ptr, app::MessageDescriptor x, app::MessageDescriptor y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_MessageDescriptor_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_MessageDescriptor_
