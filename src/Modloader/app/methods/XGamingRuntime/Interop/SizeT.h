#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SizeT__Boxed.h>

namespace app::classes::XGamingRuntime::Interop::SizeT {
    IL2CPP_REGISTER_METHOD(0x00244810, void, ctor, app::SizeT__Boxed* this_ptr, int32_t length)
    IL2CPP_REGISTER_METHOD(0x00244820, uint32_t, ToUInt32, app::SizeT__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00244830, int32_t, ToInt32, app::SizeT__Boxed* this_ptr)
} // namespace app::classes::XGamingRuntime::Interop::SizeT
