#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour.h>
#include <Modloader/app/structs/MantisHorizontalJumpAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MantisHorizontalJumpAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x009FE820, void, Awake, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009FE8A0, void, CacheSerializedComponents, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009FE920,
        bool,
        IsBlockingInterruption,
        app::MantisHorizontalJumpAttackBehaviour* this_ptr,
        app::EntityDamageEvent* damage_event,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(0x009FE990, void, StartTimeline, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x009FECD0, void, ResetTimeline, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009FEF30, void, ForceStopTimeline, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009FF170, void, MoveToNextState, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009FF1C0, void, OnEntityInitialized, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009FF580,
        void,
        OnCollisionWithWall,
        app::MantisHorizontalJumpAttackBehaviour* this_ptr,
        app::Vector3 local_normal,
        app::Collider* other
    )
    IL2CPP_REGISTER_METHOD(0x009FF5F0, void, OnEnter, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009FFB90, void, SetupJump, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A00730, void, CalculateJumpParameters, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A01B50, void, Flip, app::MantisHorizontalJumpAttackBehaviour* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(
        0x00A01B90,
        void,
        ChangeState,
        app::MantisHorizontalJumpAttackBehaviour* this_ptr,
        app::MantisHorizontalJumpAttackBehaviour_State__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x00A021E0, app::BehaviourStatus__Enum, OnExecute, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00A02DF0, void, SetOnPathEndParameters, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A02E50, void, OnExit, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00A03240,
        app::Vector3,
        GetPositionOnSpline,
        app::MantisHorizontalJumpAttackBehaviour* this_ptr,
        app::Vector3 p0,
        app::Vector3 p1,
        app::Vector3 p2,
        app::Vector3 p3,
        float t
    )
    IL2CPP_REGISTER_METHOD(
        0x00A03470,
        app::Vector3,
        GetNextPositionOnPath,
        app::MantisHorizontalJumpAttackBehaviour* this_ptr,
        app::Vector3 current_position,
        float x_velocity,
        float delta_time,
        bool* finnished_path
    )
    IL2CPP_REGISTER_METHOD(0x00A038A0, bool, SolidsInRange, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::Vector3 position, float radius)
    IL2CPP_REGISTER_METHOD(
        0x00A039A0,
        bool,
        SolidsInRay,
        app::MantisHorizontalJumpAttackBehaviour* this_ptr,
        app::Vector3 ray_start,
        app::Vector3 direction,
        float distance
    )
    IL2CPP_REGISTER_METHOD(0x00A03B20, bool, WillHitSolids, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::Vector3 check_distance)
    IL2CPP_REGISTER_METHOD(0x00A03BD0, app::Vector3, ProcessRootMotion, app::MantisHorizontalJumpAttackBehaviour* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00A03D10, void, OnDrawGizmos, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A03FD0, void, DrawDebugJumpGizmos, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A04950, void, ctor, app::MantisHorizontalJumpAttackBehaviour* this_ptr)
} // namespace app::classes::MantisHorizontalJumpAttackBehaviour
