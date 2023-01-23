#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::Swing::QuaternionExtensions {
    IL2CPP_REGISTER_METHOD(0x0182D170, bool, approx, (app::Quaternion _a, app::Quaternion _b, float _epsilon))
}
