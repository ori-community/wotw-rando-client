#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4__Boxed.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Vector4 {
    IL2CPP_REGISTER_METHOD(0x00121740, void, ctor_1, (app::Vector4__Boxed * this_ptr, float x, float y, float z, float w))
    IL2CPP_REGISTER_METHOD(0x00229850, void, ctor_2, (app::Vector4__Boxed * this_ptr, float x, float y, float z))
    IL2CPP_REGISTER_METHOD(0x00229870, void, ctor_3, (app::Vector4__Boxed * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x00229890, float, get_Item, (app::Vector4__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04711ED0, Vector4_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002298A0, void, set_Item, (app::Vector4__Boxed * this_ptr, int32_t index, float value))
    IL2CPP_REGISTER_METHODINFO(0x047398A0, Vector4_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00121740, void, Set, (app::Vector4__Boxed * this_ptr, float new_x, float new_y, float new_z, float new_w))
    IL2CPP_REGISTER_METHOD(0x02C78650, app::Vector4, Lerp, (app::Vector4 a, app::Vector4 b, float t))
    IL2CPP_REGISTER_METHOD(0x02427DF0, app::Vector4, Scale, (app::Vector4 a, app::Vector4 b))
    IL2CPP_REGISTER_METHOD(0x00217710, int32_t, GetHashCode, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002298B0, bool, Equals_1, (app::Vector4__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001EBCF0, bool, Equals_2, (app::Vector4__Boxed * this_ptr, app::Vector4 other))
    IL2CPP_REGISTER_METHOD(0x02C78870, app::Vector4, Normalize_1, (app::Vector4 a))
    IL2CPP_REGISTER_METHOD(0x002298C0, void, Normalize_2, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229A20, app::Vector4, get_normalized, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0296BA50, float, Dot, (app::Vector4 a, app::Vector4 b))
    IL2CPP_REGISTER_METHOD(0x02C78BD0, float, Distance, (app::Vector4 a, app::Vector4 b))
    IL2CPP_REGISTER_METHOD(0x02C78CE0, float, Magnitude, (app::Vector4 a))
    IL2CPP_REGISTER_METHOD(0x00229A50, float, get_magnitude, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00229A60, float, get_sqrMagnitude, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C78FE0, app::Vector4, get_zero, ())
    IL2CPP_REGISTER_METHOD(0x02C79090, app::Vector4, get_one, ())
    IL2CPP_REGISTER_METHOD(0x02427D30, app::Vector4, op_Addition, (app::Vector4 a, app::Vector4 b))
    IL2CPP_REGISTER_METHOD(0x02427D90, app::Vector4, op_Subtraction, (app::Vector4 a, app::Vector4 b))
    IL2CPP_REGISTER_METHOD(0x02427E50, app::Vector4, op_Multiply_1, (app::Vector4 a, float d))
    IL2CPP_REGISTER_METHOD(0x02427EA0, app::Vector4, op_Multiply_2, (float d, app::Vector4 a))
    IL2CPP_REGISTER_METHOD(0x02427EF0, app::Vector4, op_Division, (app::Vector4 a, float d))
    IL2CPP_REGISTER_METHOD(0x02C79140, bool, op_Equality, (app::Vector4 lhs, app::Vector4 rhs))
    IL2CPP_REGISTER_METHOD(0x02C79300, bool, op_Inequality, (app::Vector4 lhs, app::Vector4 rhs))
    IL2CPP_REGISTER_METHOD(0x02C793D0, app::Vector4, op_Implicit_1, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x02C79410, app::Vector3, op_Implicit_2, (app::Vector4 v))
    IL2CPP_REGISTER_METHOD(0x02C79440, app::Vector4, op_Implicit_3, (app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x0296D4D0, app::Vector2, op_Implicit_4, (app::Vector4 v))
    IL2CPP_REGISTER_METHOD(0x00229A70, app::String*, ToString, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C796F0, float, SqrMagnitude_1, (app::Vector4 a))
    IL2CPP_REGISTER_METHOD(0x00229A80, float, SqrMagnitude_2, (app::Vector4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C797D0, void, cctor, ())
    inline app::Vector4 operator+(app::Vector4 a, app::Vector4 b) {
        return op_Addition(a, b);
    }
    inline app::Vector4 operator-(app::Vector4 a, app::Vector4 b) {
        return op_Subtraction(a, b);
    }
    inline app::Vector4 operator*(app::Vector4 a, float d) {
        return op_Multiply_1(a, d);
    }
    inline app::Vector4 operator*(float d, app::Vector4 a) {
        return op_Multiply_2(d, a);
    }
    inline app::Vector4 operator/(app::Vector4 a, float d) {
        return op_Division(a, d);
    }
    inline bool operator==(app::Vector4 lhs, app::Vector4 rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Vector4 lhs, app::Vector4 rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Vector4
