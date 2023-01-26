#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BipedLimbOrientations_LimbOrientation.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::BipedLimbOrientations_LimbOrientation {
    IL2CPP_REGISTER_METHOD(0x021FCD00, void, ctor, (app::BipedLimbOrientations_LimbOrientation * this_ptr, app::Vector3 upper_bone_forward_axis, app::Vector3 lower_bone_forward_axis, app::Vector3 last_bone_left_axis))
}
