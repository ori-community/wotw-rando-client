#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::RTime32 {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::RTime32__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String*, ToString, (app::RTime32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00207250, bool, Equals_1, (app::RTime32__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RTime32__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::RTime32 x, app::RTime32 y))
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, (app::RTime32 x, app::RTime32 y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::RTime32, op_Explicit_1, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, (app::RTime32 that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::RTime32__Boxed * this_ptr, app::RTime32 other))
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::RTime32__Boxed * this_ptr, app::RTime32 other))
    inline bool operator==(app::RTime32 x, app::RTime32 y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::RTime32 x, app::RTime32 y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::RTime32
