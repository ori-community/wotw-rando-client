#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Vector2 {
    IL2CPP_REGISTER_METHOD(0x00125480, void, ctor, (app::Vector2__Boxed * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x00229340, float, get_Item, (app::Vector2__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00229350, void, set_Item, (app::Vector2__Boxed * this_ptr, int32_t index, float value))
    IL2CPP_REGISTER_METHOD(0x00125480, void, Set, (app::Vector2__Boxed * this_ptr, float new_x, float new_y))
    IL2CPP_REGISTER_METHOD(0x02C72900, app::Vector2, Lerp, (app::Vector2 a, app::Vector2 b, float t))
    IL2CPP_REGISTER_METHOD(0x02C72A00, app::Vector2, MoveTowards, (app::Vector2 current, app::Vector2 target, float max_distance_delta))
    IL2CPP_REGISTER_METHOD(0x018308E0, app::Vector2, Scale, (app::Vector2 a, app::Vector2 b))
    IL2CPP_REGISTER_METHOD(0x00229360, void, Normalize, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229370, app::Vector2, get_normalized, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002293A0, app::String*, ToString_1, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002293B0, app::String*, ToString_2, (app::Vector2__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x002293C0, int32_t, GetHashCode, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229400, bool, Equals_1, (app::Vector2__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00229410, bool, Equals_2, (app::Vector2__Boxed * this_ptr, app::Vector2 other))
    IL2CPP_REGISTER_METHOD(0x02C73170, app::Vector2, Reflect, (app::Vector2 in_direction, app::Vector2 in_normal))
    IL2CPP_REGISTER_METHOD(0x02C73250, app::Vector2, Perpendicular, (app::Vector2 in_direction))
    IL2CPP_REGISTER_METHOD(0x02C73280, float, Dot, (app::Vector2 lhs, app::Vector2 rhs))
    IL2CPP_REGISTER_METHOD(0x00229420, float, get_magnitude, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229430, float, get_sqrMagnitude, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C73390, float, Angle, (app::Vector2 from, app::Vector2 to))
    IL2CPP_REGISTER_METHOD(0x02C73550, float, SignedAngle, (app::Vector2 from, app::Vector2 to))
    IL2CPP_REGISTER_METHOD(0x02C73690, float, Distance, (app::Vector2 a, app::Vector2 b))
    IL2CPP_REGISTER_METHOD(0x02C73750, app::Vector2, ClampMagnitude, (app::Vector2 vector, float max_length))
    IL2CPP_REGISTER_METHOD(0x02C73880, float, SqrMagnitude_1, (app::Vector2 a))
    IL2CPP_REGISTER_METHOD(0x00229430, float, SqrMagnitude_2, (app::Vector2__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C738A0, app::Vector2, Max, (app::Vector2 lhs, app::Vector2 rhs))
    IL2CPP_REGISTER_METHOD(0x02C73960, app::Vector2, SmoothDamp_1, (app::Vector2 current, app::Vector2 target, app::Vector2* current_velocity, float smooth_time))
    IL2CPP_REGISTER_METHOD(0x02C73AB0, app::Vector2, SmoothDamp_2, (app::Vector2 current, app::Vector2 target, app::Vector2* current_velocity, float smooth_time, float max_speed, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00EB0C50, app::Vector2, op_Addition, (app::Vector2 a, app::Vector2 b))
    IL2CPP_REGISTER_METHOD(0x02C73DE0, app::Vector2, op_Subtraction, (app::Vector2 a, app::Vector2 b))
    IL2CPP_REGISTER_METHOD(0x018308E0, app::Vector2, op_Multiply_1, (app::Vector2 a, app::Vector2 b))
    IL2CPP_REGISTER_METHOD(0x01830950, app::Vector2, op_Division_1, (app::Vector2 a, app::Vector2 b))
    IL2CPP_REGISTER_METHOD(0x02C73E20, app::Vector2, op_UnaryNegation, (app::Vector2 a))
    IL2CPP_REGISTER_METHOD(0x0182ACE0, app::Vector2, op_Multiply_2, (app::Vector2 a, float d))
    IL2CPP_REGISTER_METHOD(0x02C73E50, app::Vector2, op_Multiply_3, (float d, app::Vector2 a))
    IL2CPP_REGISTER_METHOD(0x0182AD10, app::Vector2, op_Division_2, (app::Vector2 a, float d))
    IL2CPP_REGISTER_METHOD(0x02C73E80, bool, op_Equality, (app::Vector2 lhs, app::Vector2 rhs))
    IL2CPP_REGISTER_METHOD(0x02C73F50, bool, op_Inequality, (app::Vector2 lhs, app::Vector2 rhs))
    IL2CPP_REGISTER_METHOD(0x0296D4D0, app::Vector2, op_Implicit_1, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x02C74010, app::Vector3, op_Implicit_2, (app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x02C74050, app::Vector2, get_zero, ())
    IL2CPP_REGISTER_METHOD(0x02C74100, app::Vector2, get_one, ())
    IL2CPP_REGISTER_METHOD(0x02C741B0, app::Vector2, get_up, ())
    IL2CPP_REGISTER_METHOD(0x02C74260, app::Vector2, get_down, ())
    IL2CPP_REGISTER_METHOD(0x02C74310, app::Vector2, get_left, ())
    IL2CPP_REGISTER_METHOD(0x02C743C0, app::Vector2, get_right, ())
    IL2CPP_REGISTER_METHOD(0x02C74470, void, cctor, ())
    inline app::Vector2 operator+(app::Vector2 a, app::Vector2 b) {
        return op_Addition(a, b);
    }
    inline app::Vector2 operator-(app::Vector2 a, app::Vector2 b) {
        return op_Subtraction(a, b);
    }
    inline app::Vector2 operator*(app::Vector2 a, app::Vector2 b) {
        return op_Multiply_1(a, b);
    }
    inline app::Vector2 operator/(app::Vector2 a, app::Vector2 b) {
        return op_Division_1(a, b);
    }
    inline app::Vector2 operator-(app::Vector2 a) {
        return op_UnaryNegation(a);
    }
    inline app::Vector2 operator*(app::Vector2 a, float d) {
        return op_Multiply_2(a, d);
    }
    inline app::Vector2 operator*(float d, app::Vector2 a) {
        return op_Multiply_3(d, a);
    }
    inline app::Vector2 operator/(app::Vector2 a, float d) {
        return op_Division_2(a, d);
    }
    inline bool operator==(app::Vector2 lhs, app::Vector2 rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Vector2 lhs, app::Vector2 rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Vector2
