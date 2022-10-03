#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::HSteamUser {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::HSteamUser__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String*, ToString, (app::HSteamUser__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001313D0, bool, Equals_1, (app::HSteamUser__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HSteamUser__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::HSteamUser x, app::HSteamUser y))
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, (app::HSteamUser x, app::HSteamUser y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::HSteamUser, op_Explicit_1, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit_2, (app::HSteamUser that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HSteamUser__Boxed * this_ptr, app::HSteamUser other))
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (app::HSteamUser__Boxed * this_ptr, app::HSteamUser other))
    inline bool operator==(app::HSteamUser x, app::HSteamUser y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::HSteamUser x, app::HSteamUser y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::HSteamUser
