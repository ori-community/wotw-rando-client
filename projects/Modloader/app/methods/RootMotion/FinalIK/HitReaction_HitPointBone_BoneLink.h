#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitReaction_HitPointBone_BoneLink.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::RootMotion::FinalIK::HitReaction_HitPointBone_BoneLink {
    IL2CPP_REGISTER_METHOD(0x02076C90, void, Apply, (app::HitReaction_HitPointBone_BoneLink * this_ptr, app::IKSolverFullBodyBiped* solver, app::Quaternion offset, float cross_fader))
    IL2CPP_REGISTER_METHOD(0x02077140, void, CrossFadeStart, (app::HitReaction_HitPointBone_BoneLink * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02077150, void, ctor, (app::HitReaction_HitPointBone_BoneLink * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HitReaction_HitPointBone_BoneLink
