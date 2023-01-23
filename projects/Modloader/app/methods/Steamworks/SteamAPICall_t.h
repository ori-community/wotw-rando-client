#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteamAPICall_t__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SteamAPICall_t.h>

namespace app::classes::Steamworks::SteamAPICall_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::SteamAPICall_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::SteamAPICall_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020B2E0, bool, Equals_1, (app::SteamAPICall_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::SteamAPICall_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::SteamAPICall_t x, app::SteamAPICall_t y))
    IL2CPP_REGISTER_METHOD(0x027E1FA0, bool, op_Inequality, (app::SteamAPICall_t x, app::SteamAPICall_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::SteamAPICall_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::SteamAPICall_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::SteamAPICall_t__Boxed * this_ptr, app::SteamAPICall_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::SteamAPICall_t__Boxed * this_ptr, app::SteamAPICall_t other))
    IL2CPP_REGISTER_METHOD(0x027E2050, void, cctor, ())
    inline bool operator==(app::SteamAPICall_t x, app::SteamAPICall_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::SteamAPICall_t x, app::SteamAPICall_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::SteamAPICall_t
