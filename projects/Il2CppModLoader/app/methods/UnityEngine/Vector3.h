#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Vector3 {
    IL2CPP_REGISTER_METHOD(0x00229570, void, ctor_1, (app::Vector3__Boxed * this_ptr, float x, float y, float z))
    IL2CPP_REGISTER_METHOD(0x00229580, void, ctor_2, (app::Vector3__Boxed * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x02C74870, app::Vector3, Slerp, (app::Vector3 a, app::Vector3 b, float t))
    IL2CPP_REGISTER_METHOD(0x02C74990, void, OrthoNormalize2, (app::Vector3 * a, app::Vector3* b))
    IL2CPP_REGISTER_METHOD(0x02C749F0, void, OrthoNormalize, (app::Vector3 * normal, app::Vector3* tangent))
    IL2CPP_REGISTER_METHOD(0x02C74AE0, app::Vector3, RotateTowards, (app::Vector3 current, app::Vector3 target, float max_radians_delta, float max_magnitude_delta))
    IL2CPP_REGISTER_METHOD(0x02C74C10, app::Vector3, Lerp, (app::Vector3 a, app::Vector3 b, float t))
    IL2CPP_REGISTER_METHODINFO(0x047270E0, Vector3_Lerp__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C74D30, app::Vector3, LerpUnclamped, (app::Vector3 a, app::Vector3 b, float t))
    IL2CPP_REGISTER_METHOD(0x02C74D90, app::Vector3, MoveTowards, (app::Vector3 current, app::Vector3 target, float max_distance_delta))
    IL2CPP_REGISTER_METHOD(0x02C74F70, app::Vector3, SmoothDamp_1, (app::Vector3 current, app::Vector3 target, app::Vector3* current_velocity, float smooth_time, float max_speed))
    IL2CPP_REGISTER_METHOD(0x02C75100, app::Vector3, SmoothDamp_2, (app::Vector3 current, app::Vector3 target, app::Vector3* current_velocity, float smooth_time))
    IL2CPP_REGISTER_METHOD(0x02C75290, app::Vector3, SmoothDamp_3, (app::Vector3 current, app::Vector3 target, app::Vector3* current_velocity, float smooth_time, float max_speed, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002295A0, float, get_Item, (app::Vector3__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04797088, Vector3_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002295B0, void, set_Item, (app::Vector3__Boxed * this_ptr, int32_t index, float value))
    IL2CPP_REGISTER_METHODINFO(0x04792500, Vector3_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00229570, void, Set, (app::Vector3__Boxed * this_ptr, float new_x, float new_y, float new_z))
    IL2CPP_REGISTER_METHOD(0x02C75910, app::Vector3, Scale_1, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x002295C0, void, Scale_2, (app::Vector3__Boxed * this_ptr, app::Vector3 scale))
    IL2CPP_REGISTER_METHOD(0x02C75990, app::Vector3, Cross, (app::Vector3 lhs, app::Vector3 rhs))
    IL2CPP_REGISTER_METHOD(0x00229600, int32_t, GetHashCode, (app::Vector3__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229610, bool, Equals_1, (app::Vector3__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00229620, bool, Equals_2, (app::Vector3__Boxed * this_ptr, app::Vector3 other))
    IL2CPP_REGISTER_METHOD(0x02C75C40, app::Vector3, Reflect, (app::Vector3 in_direction, app::Vector3 in_normal))
    IL2CPP_REGISTER_METHOD(0x02C75DA0, app::Vector3, Normalize_1, (app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00229650, void, Normalize_2, (app::Vector3__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229660, app::Vector3, get_normalized, (app::Vector3__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C76180, float, Dot, (app::Vector3 lhs, app::Vector3 rhs))
    IL2CPP_REGISTER_METHOD(0x02C761B0, app::Vector3, Project, (app::Vector3 vector, app::Vector3 on_normal))
    IL2CPP_REGISTER_METHOD(0x02C763D0, float, Angle, (app::Vector3 from, app::Vector3 to))
    IL2CPP_REGISTER_METHOD(0x02C765C0, float, SignedAngle, (app::Vector3 from, app::Vector3 to, app::Vector3 axis))
    IL2CPP_REGISTER_METHOD(0x02C767B0, float, Distance, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x02C768B0, app::Vector3, ClampMagnitude, (app::Vector3 vector, float max_length))
    IL2CPP_REGISTER_METHOD(0x02C769F0, float, Magnitude, (app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x00229690, float, get_magnitude, (app::Vector3__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C76BB0, float, SqrMagnitude, (app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x002296A0, float, get_sqrMagnitude, (app::Vector3__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C76BE0, app::Vector3, Min, (app::Vector3 lhs, app::Vector3 rhs))
    IL2CPP_REGISTER_METHOD(0x02C76CD0, app::Vector3, Max, (app::Vector3 lhs, app::Vector3 rhs))
    IL2CPP_REGISTER_METHOD(0x02C76DC0, app::Vector3, get_zero, ())
    IL2CPP_REGISTER_METHOD(0x02C76E80, app::Vector3, get_one, ())
    IL2CPP_REGISTER_METHOD(0x02C76F40, app::Vector3, get_forward, ())
    IL2CPP_REGISTER_METHOD(0x02C77000, app::Vector3, get_back, ())
    IL2CPP_REGISTER_METHOD(0x02C770C0, app::Vector3, get_up, ())
    IL2CPP_REGISTER_METHOD(0x02C77180, app::Vector3, get_down, ())
    IL2CPP_REGISTER_METHOD(0x02C77240, app::Vector3, get_left, ())
    IL2CPP_REGISTER_METHOD(0x02C77300, app::Vector3, get_right, ())
    IL2CPP_REGISTER_METHOD(0x02C773C0, app::Vector3, get_positiveInfinity, ())
    IL2CPP_REGISTER_METHOD(0x02C77480, app::Vector3, op_Addition, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x02C774D0, app::Vector3, op_Subtraction, (app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x02C77520, app::Vector3, op_UnaryNegation, (app::Vector3 a))
    IL2CPP_REGISTER_METHOD(0x02C77570, app::Vector3, op_Multiply_1, (app::Vector3 a, float d))
    IL2CPP_REGISTER_METHOD(0x02C775B0, app::Vector3, op_Multiply_2, (float d, app::Vector3 a))
    IL2CPP_REGISTER_METHOD(0x02C775F0, app::Vector3, op_Division, (app::Vector3 a, float d))
    IL2CPP_REGISTER_METHOD(0x02C77630, bool, op_Equality, (app::Vector3 lhs, app::Vector3 rhs))
    IL2CPP_REGISTER_METHOD(0x02C77740, bool, op_Inequality, (app::Vector3 lhs, app::Vector3 rhs))
    IL2CPP_REGISTER_METHOD(0x002296D0, app::String*, ToString_1, (app::Vector3__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002296E0, app::String*, ToString_2, (app::Vector3__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x02C77C30, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02C77E40, void, Slerp_Injected, (app::Vector3 * a, app::Vector3* b, float t, app::Vector3* ret))
    IL2CPP_REGISTER_METHOD(0x02C77EC0, void, RotateTowards_Injected, (app::Vector3 * current, app::Vector3* target, float max_radians_delta, float max_magnitude_delta, app::Vector3* ret))
    inline app::Vector3 operator+(app::Vector3 a, app::Vector3 b) {
        return op_Addition(a, b);
    }
    inline app::Vector3 operator-(app::Vector3 a, app::Vector3 b) {
        return op_Subtraction(a, b);
    }
    inline app::Vector3 operator-(app::Vector3 a) {
        return op_UnaryNegation(a);
    }
    inline app::Vector3 operator*(app::Vector3 a, float d) {
        return op_Multiply_1(a, d);
    }
    inline app::Vector3 operator*(float d, app::Vector3 a) {
        return op_Multiply_2(d, a);
    }
    inline app::Vector3 operator/(app::Vector3 a, float d) {
        return op_Division(a, d);
    }
    inline bool operator==(app::Vector3 lhs, app::Vector3 rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Vector3 lhs, app::Vector3 rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Vector3
