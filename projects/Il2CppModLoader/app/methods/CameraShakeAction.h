#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraShakeAction {
    IL2CPP_REGISTER_METHOD(0x00B1D490, void, Perform, (app::CameraShakeAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CameraShakeAction * this_ptr))
} // namespace app::classes::CameraShakeAction
