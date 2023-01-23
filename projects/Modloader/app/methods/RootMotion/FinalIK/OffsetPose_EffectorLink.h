#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OffsetPose_EffectorLink.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::RootMotion::FinalIK::OffsetPose_EffectorLink {
    IL2CPP_REGISTER_METHOD(0x02A19460, void, Apply, (app::OffsetPose_EffectorLink * this_ptr, app::IKSolverFullBodyBiped* solver, float weight, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OffsetPose_EffectorLink * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::OffsetPose_EffectorLink
