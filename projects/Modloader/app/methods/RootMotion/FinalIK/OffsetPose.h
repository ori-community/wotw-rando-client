#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OffsetPose.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::RootMotion::FinalIK::OffsetPose {
    IL2CPP_REGISTER_METHOD(0x02A19190, void, Apply_1, (app::OffsetPose * this_ptr, app::IKSolverFullBodyBiped* solver, float weight))
    IL2CPP_REGISTER_METHOD(0x02A192F0, void, Apply_2, (app::OffsetPose * this_ptr, app::IKSolverFullBodyBiped* solver, float weight, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x02A193D0, void, ctor, (app::OffsetPose * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::OffsetPose
