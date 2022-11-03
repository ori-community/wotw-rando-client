#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::ControllerDigitalActionHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ControllerDigitalActionHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::ControllerDigitalActionHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F790, bool, Equals_1, (app::ControllerDigitalActionHandle_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::ControllerDigitalActionHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::ControllerDigitalActionHandle_t x, app::ControllerDigitalActionHandle_t y))
    IL2CPP_REGISTER_METHOD(0x015F81A0, bool, op_Inequality, (app::ControllerDigitalActionHandle_t x, app::ControllerDigitalActionHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::ControllerDigitalActionHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::ControllerDigitalActionHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::ControllerDigitalActionHandle_t__Boxed * this_ptr, app::ControllerDigitalActionHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::ControllerDigitalActionHandle_t__Boxed * this_ptr, app::ControllerDigitalActionHandle_t other))
    inline bool operator==(app::ControllerDigitalActionHandle_t x, app::ControllerDigitalActionHandle_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::ControllerDigitalActionHandle_t x, app::ControllerDigitalActionHandle_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::ControllerDigitalActionHandle_t
