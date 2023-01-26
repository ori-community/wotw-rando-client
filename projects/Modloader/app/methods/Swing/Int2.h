#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int2__Boxed.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Swing::Int2 {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::Int2__Boxed * this_ptr, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x00115520, void, Set, (app::Int2__Boxed * this_ptr, int32_t new_x, int32_t new_y))
    IL2CPP_REGISTER_METHOD(0x0182AFF0, bool, op_Equality, (app::Int2 lhs, app::Int2 rhs))
    IL2CPP_REGISTER_METHOD(0x0182B010, bool, op_Inequality, (app::Int2 lhs, app::Int2 rhs))
    IL2CPP_REGISTER_METHOD(0x0014B310, bool, Equals_1, (app::Int2__Boxed * this_ptr, app::Int2 other))
    IL2CPP_REGISTER_METHOD(0x0014B330, bool, Equals_2, (app::Int2__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0014B340, int32_t, GetHashCode, (app::Int2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182B110, app::Int2, op_Addition, (app::Int2 a, app::Int2 b))
    IL2CPP_REGISTER_METHOD(0x0182B130, app::Int2, op_Subtraction, (app::Int2 a, app::Int2 b))
    IL2CPP_REGISTER_METHOD(0x0182B150, app::Int2, op_UnaryNegation, (app::Int2 a))
    IL2CPP_REGISTER_METHOD(0x0182B170, app::Int2, op_Multiply_1, (app::Int2 a, int32_t d))
    IL2CPP_REGISTER_METHOD(0x0182B190, app::Int2, op_Multiply_2, (int32_t d, app::Int2 a))
    IL2CPP_REGISTER_METHOD(0x0182B1B0, app::Int2, op_Multiply_3, (app::Int2 a, app::Int2 b))
    IL2CPP_REGISTER_METHOD(0x0182B1D0, app::Vector2, op_Multiply_4, (app::Int2 a, float d))
    IL2CPP_REGISTER_METHOD(0x0182B200, app::Vector2, op_Multiply_5, (float d, app::Int2 a))
    IL2CPP_REGISTER_METHOD(0x0182B230, app::Vector2, op_Division_1, (app::Int2 a, float d))
    IL2CPP_REGISTER_METHOD(0x0182B260, app::Vector2, op_Division_2, (float f, app::Int2 d))
    IL2CPP_REGISTER_METHOD(0x0182B290, app::Vector2, op_Division_3, (app::Int2 a, app::Int2 b))
    IL2CPP_REGISTER_METHOD(0x0182B2D0, app::Int2, Round, (app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x0182B390, app::Int2, op_Implicit_1, (app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x0182B3B0, app::Vector2, op_Implicit_2, (app::Int2 v))
    IL2CPP_REGISTER_METHOD(0x0182B3D0, app::Int2, op_Implicit_3, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x0182B400, app::Vector3, op_Implicit_4, (app::Int2 v))
    IL2CPP_REGISTER_METHOD(0x0014B350, int32_t, get_Item, (app::Int2__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0014B420, void, set_Item, (app::Int2__Boxed * this_ptr, int32_t index, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0014B500, float, get_magnitude, (app::Int2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014B5C0, int32_t, get_sqrMagnitude, (app::Int2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014B5D0, app::String*, ToString_1, (app::Int2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014B6E0, app::String*, ToString_2, (app::Int2__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x0182B430, app::Int2, get_zero, ())
    IL2CPP_REGISTER_METHOD(0x0182B440, app::Int2, get_one, ())
    IL2CPP_REGISTER_METHOD(0x0182B460, app::Int2, get_up, ())
    IL2CPP_REGISTER_METHOD(0x0182B480, app::Int2, get_down, ())
    IL2CPP_REGISTER_METHOD(0x0182B4A0, app::Int2, get_left, ())
    IL2CPP_REGISTER_METHOD(0x0182B4C0, app::Int2, get_right, ())
    IL2CPP_REGISTER_METHOD(0x0182B4D0, app::Int2, get_maxValue, ())
    IL2CPP_REGISTER_METHOD(0x0182B4F0, app::Int2, get_minValue, ())
    inline bool operator==(app::Int2 lhs, app::Int2 rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Int2 lhs, app::Int2 rhs) {
        return op_Inequality(lhs, rhs);
    }
    inline app::Int2 operator+(app::Int2 a, app::Int2 b) {
        return op_Addition(a, b);
    }
    inline app::Int2 operator-(app::Int2 a, app::Int2 b) {
        return op_Subtraction(a, b);
    }
    inline app::Int2 operator-(app::Int2 a) {
        return op_UnaryNegation(a);
    }
    inline app::Int2 operator*(app::Int2 a, int32_t d) {
        return op_Multiply_1(a, d);
    }
    inline app::Int2 operator*(int32_t d, app::Int2 a) {
        return op_Multiply_2(d, a);
    }
    inline app::Int2 operator*(app::Int2 a, app::Int2 b) {
        return op_Multiply_3(a, b);
    }
    inline app::Vector2 operator*(app::Int2 a, float d) {
        return op_Multiply_4(a, d);
    }
    inline app::Vector2 operator*(float d, app::Int2 a) {
        return op_Multiply_5(d, a);
    }
    inline app::Vector2 operator/(app::Int2 a, float d) {
        return op_Division_1(a, d);
    }
    inline app::Vector2 operator/(float f, app::Int2 d) {
        return op_Division_2(f, d);
    }
    inline app::Vector2 operator/(app::Int2 a, app::Int2 b) {
        return op_Division_3(a, b);
    }
} // namespace app::classes::Swing::Int2
