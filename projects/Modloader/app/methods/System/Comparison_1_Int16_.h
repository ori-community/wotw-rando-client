#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_Int16_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_Int16_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Int16_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C7CEC0, int32_t, Invoke, (app::Comparison_1_Int16_ * this_ptr, int16_t x, int16_t y))
    IL2CPP_REGISTER_METHOD(0x02C7E540, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Int16_ * this_ptr, int16_t x, int16_t y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Int16_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Int16_
