#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Angle.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Swing::Vector2Extensions {
    IL2CPP_REGISTER_METHOD(0x01830790, app::Vector2, perpendicular, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x018307C0, app::Vector2, inversePerpendicular, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x018307F0, app::Vector2, swapXY, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x01830810, app::Vector2, negateX, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x01830840, app::Vector2, negateY, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x01830870, app::Vector2, x, app::Vector2 _this, float _x)
    IL2CPP_REGISTER_METHOD(0x01830890, app::Vector2, y, app::Vector2 _this, float _y)
    IL2CPP_REGISTER_METHOD(0x018308B0, app::Vector3, z, app::Vector2 _this, float _z)
    IL2CPP_REGISTER_METHOD(0x018308E0, app::Vector2, mult_1, app::Vector2 _this, app::Vector2 _v)
    IL2CPP_REGISTER_METHOD(0x01830920, app::Vector2, mult_2, app::Vector2 _this, float _x, float _y)
    IL2CPP_REGISTER_METHOD(0x01830950, app::Vector2, div_1, app::Vector2 _this, app::Vector2 _v)
    IL2CPP_REGISTER_METHOD(0x01830990, app::Vector2, div_2, app::Vector2 _this, float _x, float _y)
    IL2CPP_REGISTER_METHOD(0x018309C0, app::Vector2, oneOver, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x018309F0, bool, approx, app::Vector2 _a, app::Vector2 _b, float _epsilon)
    IL2CPP_REGISTER_METHOD(0x01830B00, app::Vector2, abs, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x01830BC0, bool, isValid, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x01830C30, bool, isZero, app::Vector2 _this, float _epsilon)
    IL2CPP_REGISTER_METHOD(0x01830C80, bool, isNormalized, app::Vector2 _this, float _epsilon)
    IL2CPP_REGISTER_METHOD(0x01830CB0, app::Vector2, normalized, app::Vector2 _this, float* _magnitude)
    IL2CPP_REGISTER_METHOD(0x01830D80, app::Vector2, rotate_1, app::Vector2 _this, app::Angle _a)
    IL2CPP_REGISTER_METHOD(0x01830E80, app::Vector2, rotate_2, app::Vector2 _this, float _a)
    IL2CPP_REGISTER_METHOD(0x01830F70, app::Vector2, rotate_3, app::Vector2 _this, float _cos, float _sin)
    IL2CPP_REGISTER_METHOD(0x01830FC0, app::Vector2, rotate_4, float _x, float _y, float _cos, float _sin)
    IL2CPP_REGISTER_METHOD(0x01830FF0, app::Vector2, rotateAround_1, app::Vector2 _this, app::Vector2 _pivot, app::Angle _a)
    IL2CPP_REGISTER_METHOD(0x018310F0, app::Vector2, rotateAround_2, app::Vector2 _this, app::Vector2 _pivot, float _a)
    IL2CPP_REGISTER_METHOD(0x018311F0, app::Vector2, rotateAround_3, app::Vector2 _this, app::Vector2 _pivot, float _cos, float _sin)
    IL2CPP_REGISTER_METHOD(0x018312F0, float, dot, app::Vector2 _this, app::Vector2 _other)
    IL2CPP_REGISTER_METHOD(0x018313A0, float, cross, app::Vector2 _this, app::Vector2 _other)
    IL2CPP_REGISTER_METHOD(0x01830090, app::Vector2, project, app::Vector2 _this, app::Vector2 _on_normal)
    IL2CPP_REGISTER_METHOD(0x01830230, app::Vector2, projectPerpendicular, app::Vector2 _this, app::Vector2 _on_normal)
    IL2CPP_REGISTER_METHOD(0x018313D0, bool, lesser, app::Vector2 _this, app::Vector2 _other)
    IL2CPP_REGISTER_METHOD(0x01831410, bool, greater, app::Vector2 _this, app::Vector2 _other)
    IL2CPP_REGISTER_METHOD(0x0182E070, app::Vector4, concat, app::Vector2 _xy, app::Vector2 _zw)
    IL2CPP_REGISTER_METHOD(0x01831450, app::Angle, toAngle, app::Vector2 _this)
    IL2CPP_REGISTER_METHOD(0x01831500, app::Angle, toAngleFast, app::Vector2 _this)
} // namespace app::classes::Swing::Vector2Extensions
