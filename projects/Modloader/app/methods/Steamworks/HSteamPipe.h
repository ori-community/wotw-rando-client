#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::HSteamPipe {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::HSteamPipe__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String*, ToString, (app::HSteamPipe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00131300, bool, Equals_1, (app::HSteamPipe__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HSteamPipe__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::HSteamPipe x, app::HSteamPipe y))
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, (app::HSteamPipe x, app::HSteamPipe y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::HSteamPipe, op_Explicit_1, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit_2, (app::HSteamPipe that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HSteamPipe__Boxed * this_ptr, app::HSteamPipe other))
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (app::HSteamPipe__Boxed * this_ptr, app::HSteamPipe other))
    inline bool operator==(app::HSteamPipe x, app::HSteamPipe y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::HSteamPipe x, app::HSteamPipe y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::HSteamPipe
