#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Double_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt32_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Double_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B31F80, uint32_t, Invoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Double_ * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x02F466B0, app::IAsyncResult*, BeginInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Double_ * this_ptr, double value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt32_System_Double_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt32_System_Double_
