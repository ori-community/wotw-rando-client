#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_Decimal_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Comparison_1_Decimal_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Decimal_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Decimal_ * this_ptr, app::Decimal x, app::Decimal y))
    IL2CPP_REGISTER_METHOD(0x02C7DE40, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Decimal_ * this_ptr, app::Decimal x, app::Decimal y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Decimal_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Decimal_
