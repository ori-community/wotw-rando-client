#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B8AD60, int32_t, Invoke, (app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ * this_ptr, app::DynamicDataResolver_SerializedDynamicDataLinkItem x, app::DynamicDataResolver_SerializedDynamicDataLinkItem y))
    IL2CPP_REGISTER_METHOD(0x02B8B4F0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ * this_ptr, app::DynamicDataResolver_SerializedDynamicDataLinkItem x, app::DynamicDataResolver_SerializedDynamicDataLinkItem y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Moon_DynamicDataResolver_SerializedDynamicDataLinkItem_
