#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Swing::FloatExtensions {
    IL2CPP_REGISTER_METHOD(0x0182AA00, bool, isValid, (float _this))
    IL2CPP_REGISTER_METHOD(0x0182AA30, bool, approx, (float _this, float _value, float _epsilon))
    IL2CPP_REGISTER_METHOD(0x0182AB00, float, sqr, (float _this))
    IL2CPP_REGISTER_METHOD(0x0182AB10, float, cubed, (float _this))
}
