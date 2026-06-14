#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Angle.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Swing::Vector3Extensions {
    IL2CPP_REGISTER_METHOD(0x018318F0, app::Vector3, perpendicular, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x01831930, app::Vector3, negateX, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x01831970, app::Vector3, negateY, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x018319B0, app::Vector3, negateZ, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x018319F0, app::Vector3, xy, app::Vector3 _this, app::Vector2 _vector2)
    IL2CPP_REGISTER_METHOD(0x01831A30, app::Vector3, x, app::Vector3 _this, float _x)
    IL2CPP_REGISTER_METHOD(0x01831A60, app::Vector3, y, app::Vector3 _this, float _y)
    IL2CPP_REGISTER_METHOD(0x01831A90, app::Vector3, z, app::Vector3 _this, float _z)
    IL2CPP_REGISTER_METHOD(0x01831AC0, app::Vector3, mult_1, app::Vector3 _this, app::Vector3 _v)
    IL2CPP_REGISTER_METHOD(0x01831B20, app::Vector3, mult_2, app::Vector3 _this, float _x, float _y, float _z)
    IL2CPP_REGISTER_METHOD(0x01831B60, app::Vector3, div_1, app::Vector3 _this, app::Vector3 _v)
    IL2CPP_REGISTER_METHOD(0x01831BC0, app::Vector3, div_2, app::Vector3 _this, float _x, float _y, float _z)
    IL2CPP_REGISTER_METHOD(0x01831C00, app::Vector3, oneOver, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x01831C50, bool, approx, app::Vector3 _a, app::Vector3 _b, float _epsilon)
    IL2CPP_REGISTER_METHOD(0x01831E00, app::Vector3, abs, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x01831F30, bool, isValid, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x01831FF0, bool, isZero, app::Vector3 _this, float _epsilon)
    IL2CPP_REGISTER_METHOD(0x01832070, bool, isNormalized, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x018320B0, app::Vector3, normalized, app::Vector3 _this, float* _magnitude)
    IL2CPP_REGISTER_METHOD(0x018321C0, app::Vector3, rotate_1, app::Vector3 _this, app::Angle _a)
    IL2CPP_REGISTER_METHOD(0x018322F0, app::Vector3, rotate_2, app::Vector3 _this, float _a)
    IL2CPP_REGISTER_METHOD(0x01832420, app::Vector3, rotate_3, app::Vector3 _this, float _cos, float _sin)
    IL2CPP_REGISTER_METHOD(0x01832490, app::Vector3, rotate_4, float _x, float _y, float _z, float _cos, float _sin)
    IL2CPP_REGISTER_METHOD(0x018324D0, app::Vector3, rotateAround_1, app::Vector3 _this, app::Vector3 _pivot, app::Angle _a)
    IL2CPP_REGISTER_METHOD(0x01832610, app::Vector3, rotateAround_2, app::Vector3 _this, app::Vector3 _pivot, float _a)
    IL2CPP_REGISTER_METHOD(0x01832750, app::Vector3, rotateAround_3, app::Vector3 _this, app::Vector3 _pivot, float _cos, float _sin)
    IL2CPP_REGISTER_METHOD(0x018328B0, app::Angle, toAngle, app::Vector3 _this)
    IL2CPP_REGISTER_METHOD(0x01832990, app::Angle, toAngleFast, app::Vector3 _this)
} // namespace app::classes::Swing::Vector3Extensions
