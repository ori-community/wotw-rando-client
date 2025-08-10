#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AimPoser.h>
#include <Modloader/app/structs/AimPoser_Pose.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::AimPoser {
    IL2CPP_REGISTER_METHOD(0x0204DC50, app::AimPoser_Pose*, GetPose, app::AimPoser* this_ptr, app::Vector3 local_direction)
    IL2CPP_REGISTER_METHOD(0x0204DDA0, void, SetPoseActive, app::AimPoser* this_ptr, app::AimPoser_Pose* pose)
    IL2CPP_REGISTER_METHOD(0x0204DE30, void, ctor, app::AimPoser* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::AimPoser
