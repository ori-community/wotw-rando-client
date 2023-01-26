#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraController.h>

namespace app::classes::RootMotion::CameraController {
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_x, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623250, void, set_x, (app::CameraController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_y, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_y, (app::CameraController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_distanceTarget, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F58E0, void, set_distanceTarget, (app::CameraController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x022065F0, void, Awake, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022068F0, void, Update, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02206960, void, FixedUpdate, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022069D0, void, LateUpdate, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02206A40, void, UpdateInput, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02206E90, void, UpdateTransform_1, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02206EF0, void, UpdateTransform_2, (app::CameraController * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x022078E0, float, get_zoomAdd, (app::CameraController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022079D0, float, ClampAngle, (app::CameraController * this_ptr, float angle, float min, float max))
    IL2CPP_REGISTER_METHOD(0x02207AC0, void, ctor, (app::CameraController * this_ptr))
} // namespace app::classes::RootMotion::CameraController
