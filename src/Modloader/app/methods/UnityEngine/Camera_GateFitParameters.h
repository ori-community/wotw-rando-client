#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera_GateFitMode__Enum.h>
#include <Modloader/app/structs/Camera_GateFitParameters__Boxed.h>

namespace app::classes::UnityEngine::Camera_GateFitParameters {
    IL2CPP_REGISTER_METHOD(0x001EBC90, app::Camera_GateFitMode__Enum, get_mode, app::Camera_GateFitParameters__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_aspect, app::Camera_GateFitParameters__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::Camera_GateFitParameters
