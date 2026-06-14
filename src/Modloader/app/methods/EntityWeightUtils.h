#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::EntityWeightUtils {
    IL2CPP_REGISTER_METHOD(
        0x00CA6690,
        app::Vector2,
        ClampInitialDrownSpeed,
        app::Vector2 platform_local_speed,
        app::EntityWeightData_EntityWeightSettings settings
    )
}
