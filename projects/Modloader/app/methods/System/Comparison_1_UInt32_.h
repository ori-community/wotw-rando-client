#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_UInt32_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Comparison_1_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UInt32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C7F9A0, int32_t, Invoke, (app::Comparison_1_UInt32_ * this_ptr, uint32_t x, uint32_t y))
    IL2CPP_REGISTER_METHOD(0x02C7FD10, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UInt32_ * this_ptr, uint32_t x, uint32_t y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UInt32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UInt32_
