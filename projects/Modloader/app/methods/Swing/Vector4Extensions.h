#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Swing::Vector4Extensions {
    IL2CPP_REGISTER_METHOD(0x01832A70, app::Vector4, mult_1, (app::Vector4 _this, app::Vector4 _v))
    IL2CPP_REGISTER_METHOD(0x01832AD0, app::Vector4, mult_2, (app::Vector4 _this, float _x, float _y, float _z, float _w))
    IL2CPP_REGISTER_METHOD(0x01832B10, app::Vector4, div_1, (app::Vector4 _this, app::Vector4 _v))
    IL2CPP_REGISTER_METHOD(0x01832B70, app::Vector4, div_2, (app::Vector4 _this, float _x, float _y, float _z, float _w))
    IL2CPP_REGISTER_METHOD(0x01832BB0, app::Vector4, oneOver, (app::Vector4 _this))
    IL2CPP_REGISTER_METHOD(0x01832BF0, bool, approx, (app::Vector4 _a, app::Vector4 _b, float _epsilon))
    IL2CPP_REGISTER_METHOD(0x01832DC0, app::Vector4, abs, (app::Vector4 _this))
    IL2CPP_REGISTER_METHOD(0x01832EF0, bool, isValid, (app::Vector4 _this))
    IL2CPP_REGISTER_METHOD(0x01832FC0, bool, isZero, (app::Vector4 _this, float _epsilon))
    IL2CPP_REGISTER_METHOD(0x01833040, bool, isNormalized, (app::Vector4 _this))
    IL2CPP_REGISTER_METHOD(0x01833070, app::Vector4, normalized, (app::Vector4 _this, float* _magnitude))
} // namespace app::classes::Swing::Vector4Extensions
