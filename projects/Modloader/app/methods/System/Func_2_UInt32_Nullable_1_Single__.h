#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_2_UInt32_Nullable_1_Single__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_UInt32_Nullable_1_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, app::Nullable_1_Single_, Invoke, (app::Func_2_UInt32_Nullable_1_Single_ * this_ptr, uint32_t arg))
    IL2CPP_REGISTER_METHOD(0x02FA22E0, app::IAsyncResult*, BeginInvoke, (app::Func_2_UInt32_Nullable_1_Single_ * this_ptr, uint32_t arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::Nullable_1_Single_, EndInvoke, (app::Func_2_UInt32_Nullable_1_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_UInt32_Nullable_1_Single__
