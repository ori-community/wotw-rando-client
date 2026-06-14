#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeGPtrArrayHandle.h>
#include <Modloader/app/structs/RuntimeGPtrArrayHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArray.h>

namespace app::classes::Mono::RuntimeGPtrArrayHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::RuntimeGPtrArrayHandle__Boxed* this_ptr, void* ptr)
    IL2CPP_REGISTER_METHOD(0x001EA580, int32_t, get_Length, app::RuntimeGPtrArrayHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EA5A0, void*, get_Item, app::RuntimeGPtrArrayHandle__Boxed* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x001EA5A0, void*, Lookup, app::RuntimeGPtrArrayHandle__Boxed* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x023CE860, void, GPtrArrayFree, app::RuntimeStructs_GPtrArray* value)
    IL2CPP_REGISTER_METHOD(0x023CE8A0, void, DestroyAndFree, app::RuntimeGPtrArrayHandle* h)
} // namespace app::classes::Mono::RuntimeGPtrArrayHandle
