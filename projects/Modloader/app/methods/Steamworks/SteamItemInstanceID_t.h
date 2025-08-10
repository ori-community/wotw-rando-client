#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SteamItemInstanceID_t.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamItemInstanceID_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, app::SteamItemInstanceID_t__Boxed* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, app::SteamItemInstanceID_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FFE80, bool, Equals_1, app::SteamItemInstanceID_t__Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, app::SteamItemInstanceID_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, app::SteamItemInstanceID_t x, app::SteamItemInstanceID_t y)
    IL2CPP_REGISTER_METHOD(0x02786730, bool, op_Inequality, app::SteamItemInstanceID_t x, app::SteamItemInstanceID_t y)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::SteamItemInstanceID_t, op_Explicit_1, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, app::SteamItemInstanceID_t that)
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, app::SteamItemInstanceID_t__Boxed* this_ptr, app::SteamItemInstanceID_t other)
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, app::SteamItemInstanceID_t__Boxed* this_ptr, app::SteamItemInstanceID_t other)
    IL2CPP_REGISTER_METHOD(0x027867E0, void, cctor, )
    inline bool operator==(app::SteamItemInstanceID_t x, app::SteamItemInstanceID_t y) { return op_Equality(x, y); }
    inline bool operator!=(app::SteamItemInstanceID_t x, app::SteamItemInstanceID_t y) { return op_Inequality(x, y); }
} // namespace app::classes::Steamworks::SteamItemInstanceID_t
