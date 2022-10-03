#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EntityWeightUtils {
    IL2CPP_REGISTER_METHOD(0x00CA6690, app::Vector2, ClampInitialDrownSpeed, (app::Vector2 platform_local_speed, app::EntityWeightData_EntityWeightSettings settings))
}
