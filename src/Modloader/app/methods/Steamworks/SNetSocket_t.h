#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SNetSocket_t.h>
#include <Modloader/app/structs/SNetSocket_t__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SNetSocket_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, app::SNetSocket_t__Boxed* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String*, ToString, app::SNetSocket_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020B020, bool, Equals_1, app::SNetSocket_t__Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, app::SNetSocket_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, app::SNetSocket_t x, app::SNetSocket_t y)
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, app::SNetSocket_t x, app::SNetSocket_t y)
    IL2CPP_REGISTER_METHOD(0x006CE970, app::SNetSocket_t, op_Explicit_1, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, app::SNetSocket_t that)
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, app::SNetSocket_t__Boxed* this_ptr, app::SNetSocket_t other)
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, app::SNetSocket_t__Boxed* this_ptr, app::SNetSocket_t other)
    inline bool operator==(app::SNetSocket_t x, app::SNetSocket_t y) { return op_Equality(x, y); }
    inline bool operator!=(app::SNetSocket_t x, app::SNetSocket_t y) { return op_Inequality(x, y); }
} // namespace app::classes::Steamworks::SNetSocket_t
