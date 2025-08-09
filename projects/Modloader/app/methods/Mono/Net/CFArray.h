#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CFArray.h>

namespace app::classes::Mono::Net::CFArray {
    IL2CPP_REGISTER_METHOD(0x02173690, void, ctor, app::CFArray* this_ptr, void* handle, bool own)
    IL2CPP_REGISTER_METHOD(0x021736A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x021737C0, void*, CFArrayGetCount, void* handle)
    IL2CPP_REGISTER_METHOD(0x02173860, int32_t, get_Count, app::CFArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02173980, void*, CFArrayGetValueAtIndex, void* handle, void* index)
    IL2CPP_REGISTER_METHOD(0x02173A30, void*, get_Item, app::CFArray* this_ptr, int32_t index)
} // namespace app::classes::Mono::Net::CFArray
