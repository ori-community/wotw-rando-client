#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitReaction_HitPointBone.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>

namespace app::classes::RootMotion::FinalIK::HitReaction_HitPointBone {
    IL2CPP_REGISTER_METHOD(0x02076790, float, GetLength, (app::HitReaction_HitPointBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02076910, void, CrossFadeStart, (app::HitReaction_HitPointBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02076970, void, OnApply, (app::HitReaction_HitPointBone * this_ptr, app::IKSolverFullBodyBiped* solver, float weight))
    IL2CPP_REGISTER_METHOD(0x02076780, void, ctor, (app::HitReaction_HitPointBone * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HitReaction_HitPointBone
