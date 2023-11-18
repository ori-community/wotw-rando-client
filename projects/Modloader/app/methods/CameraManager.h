#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraManager.h>
#include <Modloader/app/structs/CameraController_1.h>

namespace app::classes::CameraManager {
    IL2CPP_REGISTER_METHOD(0x01692FD0, void, OnEnable, (app::CameraManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01692FE0, void, ReRegisterCameraManager, (app::CameraManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016930C0, void, RegisterCamera, (app::CameraManager * this_ptr, app::CameraController_1* camera_controller))
    IL2CPP_REGISTER_METHOD(0x01693250, void, UnregisterCamera, (app::CameraManager * this_ptr, app::CameraController_1* camera_controller))
    IL2CPP_REGISTER_METHOD(0x016932F0, void, ctor, (app::CameraManager * this_ptr))
} // namespace app::classes::CameraManager
