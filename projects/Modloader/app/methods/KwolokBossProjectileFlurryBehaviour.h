#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StayAtRangeSettings.h>
#include <Modloader/app/structs/KwolokBossProjectileFlurryBehaviour.h>

namespace app::classes::KwolokBossProjectileFlurryBehaviour {
    IL2CPP_REGISTER_METHOD(0x012E8730, bool, get_IsAttackOver, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E8740, bool, CanCancel, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E8790, void, InitializeCancellableController, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E87E0, void, Start, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E8990, void, OnEnter, app::KwolokBossProjectileFlurryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012E8C30, void, ModifyLookAngleChangeSpeed, app::KwolokBossProjectileFlurryBehaviour* this_ptr, float* speed)
    IL2CPP_REGISTER_METHOD(0x012E8C50, app::BehaviourStatus__Enum, OnExecute, app::KwolokBossProjectileFlurryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012E8CE0, void, OnExit, app::KwolokBossProjectileFlurryBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012E8FB0, float, ComputeUtility, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E9180, void, InitializeHitReactionController, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E91D0, void, StartShooting, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012E92F0, void, FireProjectile, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012E9900,
        void,
        ModifyStayAtRangeSettings,
        app::KwolokBossProjectileFlurryBehaviour* this_ptr,
        app::KwolokBossLocomotion_StayAtRangeSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x012E9950, void, ctor, app::KwolokBossProjectileFlurryBehaviour* this_ptr)
} // namespace app::classes::KwolokBossProjectileFlurryBehaviour
