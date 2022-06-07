#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Swing::QuaternionExtensions {
    IL2CPP_REGISTER_METHOD(0x0182D170, bool, approx, (app::Quaternion _a, app::Quaternion _b, float _epsilon))
}
