#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimePropertyHandle__Boxed.h>

namespace app::classes::Mono::RuntimePropertyHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::RuntimePropertyHandle__Boxed* this_ptr, void* v)
    IL2CPP_REGISTER_METHOD(0x00107C00, void*, get_Value, app::RuntimePropertyHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EA620, bool, Equals, app::RuntimePropertyHandle__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, app::RuntimePropertyHandle__Boxed* this_ptr)
} // namespace app::classes::Mono::RuntimePropertyHandle
