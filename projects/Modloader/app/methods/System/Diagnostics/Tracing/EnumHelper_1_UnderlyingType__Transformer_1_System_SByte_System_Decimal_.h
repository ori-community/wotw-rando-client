#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_SByte_System_Decimal_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_SByte_System_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_SByte_System_Decimal_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, int8_t, Invoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_SByte_System_Decimal_ * this_ptr, app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x02F43A00, app::IAsyncResult*, BeginInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_SByte_System_Decimal_ * this_ptr, app::Decimal value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, int8_t, EndInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_SByte_System_Decimal_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_SByte_System_Decimal_
