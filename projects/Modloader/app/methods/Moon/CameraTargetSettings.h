#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraTargetSettings__Boxed.h>
#include <Modloader/app/structs/ICameraTarget.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::CameraTargetSettings {
    IL2CPP_REGISTER_METHOD(0x0011D920, void, ctor, (app::CameraTargetSettings__Boxed * this_ptr, app::Vector3 target, app::Vector2 target_padding, float weight, app::ICameraTarget* camera_target))
}
