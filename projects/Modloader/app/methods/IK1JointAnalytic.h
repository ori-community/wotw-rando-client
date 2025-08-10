#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IK1JointAnalytic.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::IK1JointAnalytic {
    IL2CPP_REGISTER_METHOD(0x00B70340, void, Solve, app::IK1JointAnalytic* this_ptr, app::Transform__Array* bones, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(
        0x00B712C0,
        app::Vector3,
        findKnee,
        app::IK1JointAnalytic* this_ptr,
        app::Vector3 p_hip,
        app::Vector3 p_ankle,
        float f_thigh,
        float f_shin,
        app::Vector3 v_knee_dir
    )
    IL2CPP_REGISTER_METHOD(0x00624490, void, ctor, app::IK1JointAnalytic* this_ptr)
} // namespace app::classes::IK1JointAnalytic
