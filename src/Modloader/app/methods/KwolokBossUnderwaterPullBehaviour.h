#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour.h>
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour_State__Enum.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>

namespace app::classes::KwolokBossUnderwaterPullBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F3680, void, OnEnter, app::KwolokBossUnderwaterPullBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012F3ED0, app::BehaviourStatus__Enum, OnExecute, app::KwolokBossUnderwaterPullBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012F4020, void, OnExit, app::KwolokBossUnderwaterPullBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012F47E0, float, ComputeUtility, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012EF950, void, InitializeHitReactionController, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F4990, void, CacheSpawnPoints, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F4D20, void, SubscribeToSpawnEvents, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F4FB0, void, UnsubscribeFromSpawnEvents, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F5240, void, OnSpawnEvent, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F57C0, void, SubscribeToTimelineEvents, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F5B00, void, OnPullStartEnded, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F5C00, void, OnSpitEvent, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F5C20, void, OnDamageEvent, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012F5F80,
        void,
        ChangeState,
        app::KwolokBossUnderwaterPullBehaviour* this_ptr,
        app::KwolokBossUnderwaterPullBehaviour_State__Enum new_state
    )
    IL2CPP_REGISTER_METHOD(0x012F6360, void, UpdateState, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6430, void, EnterStatePositioning, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6800, void, EnterStatePulling, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6830, void, EnterStateFailedPull, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6860, void, EnterStateSwallowing, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F68A0, void, EnterStateSpitting, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F68D0, void, EnterStateBiting, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6A20, void, ExitStatePulling, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6B30, void, ExitStateBiting, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6B70, void, ExitStateSpitting, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6BB0, void, UpdateStatePositioning, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6DE0, void, UpdateStateFailedPull, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F6E20, void, UpdateStatePulling, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F7460, void, UpdateStateSwallowing, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F74A0, void, UpdateStateBiting, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F7710, void, UpdateStateSpitting, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F7750, void, UpdateWaterCurrentForce, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F7DB0, bool, RepositionIfNeeded, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F8020, void, SwallowOri, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F83C0, void, SpitOri, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F8900, void, ModifyAcceleration, app::KwolokBossUnderwaterPullBehaviour* this_ptr, float* acceleration, float* deceleration)
    IL2CPP_REGISTER_METHOD(0x012F8930, void, ModifyMaxSpeed, app::KwolokBossUnderwaterPullBehaviour* this_ptr, float* speed)
    IL2CPP_REGISTER_METHOD(0x012F8950, void, ModifyDesiredLookAngle, app::KwolokBossUnderwaterPullBehaviour* this_ptr, float* angle)
    IL2CPP_REGISTER_METHOD(0x012F8AF0, void, ModifyLookAngleChangeSpeed, app::KwolokBossUnderwaterPullBehaviour* this_ptr, float* speed)
    IL2CPP_REGISTER_METHOD(0x012F8B10, void, ModifyLegsIK, app::KwolokBossUnderwaterPullBehaviour* this_ptr, float* fl, float* fr, float* bl, float* br)
    IL2CPP_REGISTER_METHOD(
        0x012F8B40,
        void,
        ModifyCameraTargets,
        app::KwolokBossUnderwaterPullBehaviour* this_ptr,
        app::List_1_Moon_CameraTargetSettings_* targets
    )
    IL2CPP_REGISTER_METHOD(0x012F8D20, void, ClearMoveRequest, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F8D80, app::Enum__Array*, GetEntries, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F8E20, app::Enum, Evaluate, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012F8EE0, void, ctor, app::KwolokBossUnderwaterPullBehaviour* this_ptr)
} // namespace app::classes::KwolokBossUnderwaterPullBehaviour
