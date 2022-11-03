#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::VerletPhysicsAnimationPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_RequiresOnUpdate, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02129410, void, OnUpdate, (app::VerletPhysicsAnimationPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x021295B0, void, OnAddedToAnimator, (app::VerletPhysicsAnimationPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0212ADD0, void, OnRemovedFromAnimator, (app::VerletPhysicsAnimationPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0212B160, void, OnActivated, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0212B2D0, void, Process, (app::VerletPhysicsAnimationPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0212BEF0, void, CompleteNonJobbed, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0212C500, void, CompleteJobAndCacheRotations, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0212CD30, void, ApplyCalculatedRotations, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0212CF30, void, UpdateChainParallel, (app::VerletPhysicsAnimationPostprocess * this_ptr, float delta_time, int32_t chain_index, app::Vector3 additional_force, float weight, bool transform_determinant_changed))
    IL2CPP_REGISTER_METHOD(0x0212E450, app::Vector3, DetectChainBoneDirectionAxis, (app::VerletPhysicsAnimationPostprocess * this_ptr, app::JointChains_Chain* chain))
    IL2CPP_REGISTER_METHOD(0x0212E7F0, void, ctor, (app::VerletPhysicsAnimationPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0212EB90, void, cctor, ())
} // namespace app::classes::Moon::VerletPhysicsAnimationPostprocess
