#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Vector3Int {
    IL2CPP_REGISTER_METHOD(0x0013D2C0, void, ctor, (app::Vector3Int__Boxed * this_ptr, int32_t x, int32_t y, int32_t z))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_x, (app::Vector3Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_x, (app::Vector3Int__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00218130, int32_t, get_y, (app::Vector3Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_y, (app::Vector3Int__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_z, (app::Vector3Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_z, (app::Vector3Int__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02C77F50, app::Vector3Int, op_Subtraction, (app::Vector3Int a, app::Vector3Int b))
    IL2CPP_REGISTER_METHOD(0x02C77F90, bool, op_Equality, (app::Vector3Int lhs, app::Vector3Int rhs))
    IL2CPP_REGISTER_METHOD(0x002296F0, bool, Equals_1, (app::Vector3Int__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x002297E0, bool, Equals_2, (app::Vector3Int__Boxed * this_ptr, app::Vector3Int other))
    IL2CPP_REGISTER_METHOD(0x00229810, int32_t, GetHashCode, (app::Vector3Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229840, app::String *, ToString, (app::Vector3Int__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C782B0, void, cctor, ())
    inline app::Vector3Int operator - (app::Vector3Int a, app::Vector3Int b) {
        return op_Subtraction(a, b);
    }
    inline bool operator == (app::Vector3Int lhs, app::Vector3Int rhs) {
        return op_Equality(lhs, rhs);
    }
}
