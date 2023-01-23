#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_Int32_System_DateTime_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Int32_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int32_System_DateTime_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B34960, int32_t, Invoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int32_System_DateTime_ * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x02C5EDE0, app::IAsyncResult*, BeginInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int32_System_DateTime_ * this_ptr, app::DateTime value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_Int32_System_DateTime_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_Int32_System_DateTime_
