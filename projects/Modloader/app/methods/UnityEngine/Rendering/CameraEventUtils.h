#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraEvent__Enum.h>

namespace app::classes::UnityEngine::Rendering::CameraEventUtils {
    IL2CPP_REGISTER_METHOD(0x02973C80, bool, IsValid, (app::CameraEvent__Enum value))
}
