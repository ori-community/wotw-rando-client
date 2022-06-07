#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt16_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt16_System_TimeSpan_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C5C810, uint16_t, Invoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt16_System_TimeSpan_ * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02F45CA0, app::IAsyncResult *, BeginInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt16_System_TimeSpan_ * this_ptr, app::TimeSpan value, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x024CEF10, uint16_t, EndInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt16_System_TimeSpan_ * this_ptr, app::IAsyncResult * result))
}
