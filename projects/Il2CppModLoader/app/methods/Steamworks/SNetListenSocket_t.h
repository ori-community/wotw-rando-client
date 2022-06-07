#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::SNetListenSocket_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::SNetListenSocket_t__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::SNetListenSocket_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020AF50, bool, Equals_1, (app::SNetListenSocket_t__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::SNetListenSocket_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::SNetListenSocket_t x, app::SNetListenSocket_t y))
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, (app::SNetListenSocket_t x, app::SNetListenSocket_t y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::SNetListenSocket_t, op_Explicit_1, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, (app::SNetListenSocket_t that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::SNetListenSocket_t__Boxed * this_ptr, app::SNetListenSocket_t other))
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::SNetListenSocket_t__Boxed * this_ptr, app::SNetListenSocket_t other))
    inline bool operator == (app::SNetListenSocket_t x, app::SNetListenSocket_t y) {
        return op_Equality(x, y);
    }
    inline bool operator != (app::SNetListenSocket_t x, app::SNetListenSocket_t y) {
        return op_Inequality(x, y);
    }
}
