#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonMath_Normal {
    IL2CPP_REGISTER_METHOD(0x025770A0, bool, WithinDegrees, (app::Vector2 normal1, app::Vector2 normal2, float degrees))
}
