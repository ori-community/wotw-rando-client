#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Camera_GateFitParameters {
    IL2CPP_REGISTER_METHOD(0x001EBC90, app::Camera_GateFitMode__Enum, get_mode, (app::Camera_GateFitParameters__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_aspect, (app::Camera_GateFitParameters__Boxed * this_ptr))
}
