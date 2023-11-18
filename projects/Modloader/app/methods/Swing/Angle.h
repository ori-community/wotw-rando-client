#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Angle__Boxed.h>
#include <Modloader/app/structs/Angle.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Swing::Angle {
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, get_rad, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_rad, (app::Angle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0014A2A0, float, get_deg, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A2B0, void, set_deg, (app::Angle__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, ctor_1, (app::Angle__Boxed * this_ptr, float _radians))
    IL2CPP_REGISTER_METHOD(0x0014A2C0, void, ctor_2, (app::Angle__Boxed * this_ptr, float _degrees_or_radians, bool _degrees))
    IL2CPP_REGISTER_METHOD(0x0014A2E0, void, ctor_3, (app::Angle__Boxed * this_ptr, app::Vector2 _normalized_dir))
    IL2CPP_REGISTER_METHOD(0x01829BE0, app::Angle, fromRadians, (float _radians))
    IL2CPP_REGISTER_METHOD(0x01829BF0, app::Angle, fromDegrees, (float _degrees))
    IL2CPP_REGISTER_METHOD(0x01829C00, app::Angle, fromDirection, (app::Vector2 _normalized_dir))
    IL2CPP_REGISTER_METHOD(0x01829CB0, app::Angle, fromVector, (app::Vector2 _vector))
    IL2CPP_REGISTER_METHOD(0x01829D60, app::Angle, betweenDirections, (app::Vector2 _from_normalized, app::Vector2 _to_normalized))
    IL2CPP_REGISTER_METHOD(0x01829E90, app::Angle, betweenVectors, (app::Vector2 _from, app::Vector2 _to))
    IL2CPP_REGISTER_METHOD(0x0182A090, app::Angle, op_Addition, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A0B0, app::Angle, op_Subtraction, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A0D0, app::Angle, op_Multiply_1, (app::Angle _a, float _b))
    IL2CPP_REGISTER_METHOD(0x0182A0E0, app::Angle, op_Multiply_2, (float _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A0F0, app::Angle, op_Division_1, (app::Angle _a, float _b))
    IL2CPP_REGISTER_METHOD(0x0182A100, app::Angle, op_Division_2, (float _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A110, app::Angle, op_Modulus, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A130, float, op_Division_3, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A140, app::Angle, op_UnaryNegation, (app::Angle _a))
    IL2CPP_REGISTER_METHOD(0x0182A150, bool, op_GreaterThan, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A160, bool, op_LessThan, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A170, bool, op_GreaterThanOrEqual, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A180, bool, op_LessThanOrEqual, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A190, bool, op_Equality, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0182A1B0, bool, op_Inequality, (app::Angle _a, app::Angle _b))
    IL2CPP_REGISTER_METHOD(0x0014A390, bool, Equals_1, (app::Angle__Boxed * this_ptr, app::Angle _other))
    IL2CPP_REGISTER_METHOD(0x0014A3E0, bool, Equals_2, (app::Angle__Boxed * this_ptr, app::Object* _obj))
    IL2CPP_REGISTER_METHOD(0x0014A500, int32_t, GetHashCode, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A520, bool, approx, (app::Angle__Boxed * this_ptr, app::Angle _other, float _epsilon_rad))
    IL2CPP_REGISTER_METHOD(0x0182A1D0, app::Angle, getShortestDelta, (app::Angle _from, app::Angle _to))
    IL2CPP_REGISTER_METHOD(0x0182A320, app::Angle, lerp, (app::Angle _from, app::Angle _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182A400, float, inverseLerp, (app::Angle _from, app::Angle _to, app::Angle _value))
    IL2CPP_REGISTER_METHOD(0x0014A540, void, wrap, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A550, void, wrap2Pi, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A600, app::Angle, get_wrapped, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A6B0, app::Angle, get_wrapped2Pi, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A760, bool, get_isWrapped, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A780, bool, get_isWrapped2Pi, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A7A0, app::Vector2, toDirection_1, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A870, app::Vector3, toDirection_2, (app::Angle__Boxed * this_ptr, app::Vector3 _axis))
    IL2CPP_REGISTER_METHOD(0x0014A8C0, app::Quaternion, toQuaternion_1, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014A9A0, app::Quaternion, toQuaternion_2, (app::Angle__Boxed * this_ptr, app::Vector3 _axis))
    IL2CPP_REGISTER_METHOD(0x0014AA90, app::String*, ToString_1, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014AAD0, app::String*, ToString_2, (app::Angle__Boxed * this_ptr, app::String* _format, app::IFormatProvider* _format_provider))
    IL2CPP_REGISTER_METHOD(0x0014AB10, float, arcLength, (app::Angle__Boxed * this_ptr, float _radius))
    IL2CPP_REGISTER_METHOD(0x0182A870, app::Angle, fromArcLength, (float _arc_length, float _radius))
    IL2CPP_REGISTER_METHOD(0x0014AB20, float, get_cos, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014ABD0, float, get_sin, (app::Angle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014AC80, void, clamp, (app::Angle__Boxed * this_ptr, app::Angle _min, app::Angle _max))
    IL2CPP_REGISTER_METHOD(0x0182A880, void, cctor, ())
    inline app::Angle operator+(app::Angle _a, app::Angle _b) {
        return op_Addition(_a, _b);
    }
    inline app::Angle operator-(app::Angle _a, app::Angle _b) {
        return op_Subtraction(_a, _b);
    }
    inline app::Angle operator*(app::Angle _a, float _b) {
        return op_Multiply_1(_a, _b);
    }
    inline app::Angle operator*(float _a, app::Angle _b) {
        return op_Multiply_2(_a, _b);
    }
    inline app::Angle operator/(app::Angle _a, float _b) {
        return op_Division_1(_a, _b);
    }
    inline app::Angle operator/(float _a, app::Angle _b) {
        return op_Division_2(_a, _b);
    }
    inline app::Angle operator%(app::Angle _a, app::Angle _b) {
        return op_Modulus(_a, _b);
    }
    inline float operator/(app::Angle _a, app::Angle _b) {
        return op_Division_3(_a, _b);
    }
    inline app::Angle operator-(app::Angle _a) {
        return op_UnaryNegation(_a);
    }
    inline bool operator>(app::Angle _a, app::Angle _b) {
        return op_GreaterThan(_a, _b);
    }
    inline bool operator<(app::Angle _a, app::Angle _b) {
        return op_LessThan(_a, _b);
    }
    inline bool operator>=(app::Angle _a, app::Angle _b) {
        return op_GreaterThanOrEqual(_a, _b);
    }
    inline bool operator<=(app::Angle _a, app::Angle _b) {
        return op_LessThanOrEqual(_a, _b);
    }
    inline bool operator==(app::Angle _a, app::Angle _b) {
        return op_Equality(_a, _b);
    }
    inline bool operator!=(app::Angle _a, app::Angle _b) {
        return op_Inequality(_a, _b);
    }
} // namespace app::classes::Swing::Angle
