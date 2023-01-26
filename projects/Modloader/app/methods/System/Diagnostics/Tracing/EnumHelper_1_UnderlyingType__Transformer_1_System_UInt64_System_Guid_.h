#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumHelper_1_UnderlyingType_Transformer_1_System_UInt64_System_Guid_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt64_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt64_System_Guid_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02887790, uint64_t, Invoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt64_System_Guid_ * this_ptr, app::Guid value))
    IL2CPP_REGISTER_METHOD(0x02F477D0, app::IAsyncResult*, BeginInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt64_System_Guid_ * this_ptr, app::Guid value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (app::EnumHelper_1_UnderlyingType_Transformer_1_System_UInt64_System_Guid_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Diagnostics::Tracing::EnumHelper_1_UnderlyingType__Transformer_1_System_UInt64_System_Guid_
