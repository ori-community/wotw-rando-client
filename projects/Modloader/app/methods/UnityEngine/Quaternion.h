#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Quaternion__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Quaternion {
    IL2CPP_REGISTER_METHOD(0x00121740, void, ctor, (app::Quaternion__Boxed * this_ptr, float x, float y, float z, float w))
    IL2CPP_REGISTER_METHOD(0x0296A820, app::Quaternion, FromToRotation, (app::Vector3 from_direction, app::Vector3 to_direction))
    IL2CPP_REGISTER_METHOD(0x0296A930, app::Quaternion, Inverse, (app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x0296AA30, app::Quaternion, Slerp, (app::Quaternion a, app::Quaternion b, float t))
    IL2CPP_REGISTER_METHOD(0x0296AB50, app::Quaternion, SlerpUnclamped, (app::Quaternion a, app::Quaternion b, float t))
    IL2CPP_REGISTER_METHOD(0x0296AC70, app::Quaternion, Lerp, (app::Quaternion a, app::Quaternion b, float t))
    IL2CPP_REGISTER_METHOD(0x0296AD90, app::Quaternion, Internal_FromEulerRad, (app::Vector3 euler))
    IL2CPP_REGISTER_METHOD(0x0296AE90, app::Vector3, Internal_ToEulerRad, (app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x0296AFA0, void, Internal_ToAxisAngleRad, (app::Quaternion q, app::Vector3* axis, float* angle))
    IL2CPP_REGISTER_METHOD(0x0296B090, app::Quaternion, AngleAxis, (float angle, app::Vector3 axis))
    IL2CPP_REGISTER_METHOD(0x0296B1A0, app::Quaternion, LookRotation_1, (app::Vector3 forward, app::Vector3 upwards))
    IL2CPP_REGISTER_METHOD(0x0296B2B0, app::Quaternion, LookRotation_2, (app::Vector3 forward))
    IL2CPP_REGISTER_METHOD(0x0296B4B0, app::Quaternion, get_identity, ())
    IL2CPP_REGISTER_METHOD(0x0296B560, app::Quaternion, op_Multiply_1, (app::Quaternion lhs, app::Quaternion rhs))
    IL2CPP_REGISTER_METHOD(0x0296B6C0, app::Vector3, op_Multiply_2, (app::Quaternion rotation, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0296B870, bool, IsEqualUsingDot, (float dot))
    IL2CPP_REGISTER_METHOD(0x0296B880, bool, op_Equality, (app::Quaternion lhs, app::Quaternion rhs))
    IL2CPP_REGISTER_METHOD(0x0296B980, bool, op_Inequality, (app::Quaternion lhs, app::Quaternion rhs))
    IL2CPP_REGISTER_METHOD(0x0296BA50, float, Dot, (app::Quaternion a, app::Quaternion b))
    IL2CPP_REGISTER_METHOD(0x0296BA90, float, Angle, (app::Quaternion a, app::Quaternion b))
    IL2CPP_REGISTER_METHOD(0x0296BBF0, app::Vector3, Internal_MakePositive, (app::Vector3 euler))
    IL2CPP_REGISTER_METHOD(0x00217500, app::Vector3, get_eulerAngles, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296BE30, app::Quaternion, Euler_1, (float x, float y, float z))
    IL2CPP_REGISTER_METHOD(0x0296BF70, app::Quaternion, Euler_2, (app::Vector3 euler))
    IL2CPP_REGISTER_METHOD(0x00217530, void, ToAngleAxis, (app::Quaternion__Boxed * this_ptr, float* angle, app::Vector3* axis))
    IL2CPP_REGISTER_METHOD(0x00217540, void, SetFromToRotation, (app::Quaternion__Boxed * this_ptr, app::Vector3 from_direction, app::Vector3 to_direction))
    IL2CPP_REGISTER_METHOD(0x0296C420, app::Quaternion, RotateTowards, (app::Quaternion from, app::Quaternion to, float max_degrees_delta))
    IL2CPP_REGISTER_METHOD(0x0296C670, app::Quaternion, Normalize_1, (app::Quaternion q))
    IL2CPP_REGISTER_METHOD(0x00217580, void, Normalize_2, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217640, app::Quaternion, get_normalized, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217710, int32_t, GetHashCode, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217720, bool, Equals_1, (app::Quaternion__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001EBCF0, bool, Equals_2, (app::Quaternion__Boxed * this_ptr, app::Quaternion other))
    IL2CPP_REGISTER_METHOD(0x00217730, app::String*, ToString, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217740, app::Vector3, ToEuler, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217820, app::Vector3, ToEulerAngles, (app::Quaternion__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296CC10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0296CCA0, void, FromToRotation_Injected, (app::Vector3 * from_direction, app::Vector3* to_direction, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296CD10, void, Inverse_Injected, (app::Quaternion * rotation, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296CD70, void, Slerp_Injected, (app::Quaternion * a, app::Quaternion* b, float t, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296CDF0, void, SlerpUnclamped_Injected, (app::Quaternion * a, app::Quaternion* b, float t, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296CE70, void, Lerp_Injected, (app::Quaternion * a, app::Quaternion* b, float t, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296CEF0, void, Internal_FromEulerRad_Injected, (app::Vector3 * euler, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296CF50, void, Internal_ToEulerRad_Injected, (app::Quaternion * rotation, app::Vector3* ret))
    IL2CPP_REGISTER_METHOD(0x0296CFB0, void, Internal_ToAxisAngleRad_Injected, (app::Quaternion * q, app::Vector3* axis, float* angle))
    IL2CPP_REGISTER_METHOD(0x0296D020, void, AngleAxis_Injected, (float angle, app::Vector3* axis, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x0296D090, void, LookRotation_Injected, (app::Vector3 * forward, app::Vector3* upwards, app::Quaternion* ret))
    inline app::Quaternion operator*(app::Quaternion lhs, app::Quaternion rhs) {
        return op_Multiply_1(lhs, rhs);
    }
    inline app::Vector3 operator*(app::Quaternion rotation, app::Vector3 point) {
        return op_Multiply_2(rotation, point);
    }
    inline bool operator==(app::Quaternion lhs, app::Quaternion rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Quaternion lhs, app::Quaternion rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Quaternion
