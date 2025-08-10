#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AimPoser_Pose.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::AimPoser_Pose {
    IL2CPP_REGISTER_METHOD(0x0204DED0, bool, IsInDirection, app::AimPoser_Pose* this_ptr, app::Vector3 d)
    IL2CPP_REGISTER_METHOD(0x00447350, void, SetAngleBuffer, app::AimPoser_Pose* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0204E270, void, ctor, app::AimPoser_Pose* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::AimPoser_Pose
