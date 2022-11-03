#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::HitReaction_HitPointEffector_EffectorLink {
    IL2CPP_REGISTER_METHOD(0x02077950, void, Apply, (app::HitReaction_HitPointEffector_EffectorLink * this_ptr, app::IKSolverFullBodyBiped* solver, app::Vector3 offset, float cross_fader))
    IL2CPP_REGISTER_METHOD(0x02077BE0, void, CrossFadeStart, (app::HitReaction_HitPointEffector_EffectorLink * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HitReaction_HitPointEffector_EffectorLink * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HitReaction_HitPointEffector_EffectorLink
