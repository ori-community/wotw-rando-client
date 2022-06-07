#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::InputDigitalActionHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::InputDigitalActionHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::InputDigitalActionHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00132A90, bool, Equals_1, (app::InputDigitalActionHandle_t__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::InputDigitalActionHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::InputDigitalActionHandle_t x, app::InputDigitalActionHandle_t y))
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, (app::InputDigitalActionHandle_t x, app::InputDigitalActionHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::InputDigitalActionHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::InputDigitalActionHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::InputDigitalActionHandle_t__Boxed * this_ptr, app::InputDigitalActionHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::InputDigitalActionHandle_t__Boxed * this_ptr, app::InputDigitalActionHandle_t other))
    inline bool operator == (app::InputDigitalActionHandle_t x, app::InputDigitalActionHandle_t y) {
        return op_Equality(x, y);
    }
    inline bool operator != (app::InputDigitalActionHandle_t x, app::InputDigitalActionHandle_t y) {
        return op_Inequality(x, y);
    }
}
