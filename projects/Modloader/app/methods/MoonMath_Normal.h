#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2.h>

namespace app::classes::MoonMath_Normal {
    IL2CPP_REGISTER_METHOD(0x025770A0, bool, WithinDegrees, app::Vector2 normal1, app::Vector2 normal2, float degrees)
}
