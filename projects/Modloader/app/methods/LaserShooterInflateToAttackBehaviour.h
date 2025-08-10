#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LaserShooterInflateToAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F155B0, bool, get_WasHitDuringAttack, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F155C0, void, set_WasHitDuringAttack, app::LaserShooterInflateToAttackBehaviour* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F155D0, void, OnEntityInitialized, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F15670, void, OnEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00F15790, void, OnExit, app::LaserShooterInflateToAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00F157A0, app::BehaviourStatus__Enum, OnExecute, app::LaserShooterInflateToAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x00F15860,
        void,
        ChangeState,
        app::LaserShooterInflateToAttackBehaviour* this_ptr,
        app::LaserShooterInflateToAttackBehaviour_State__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnAnticUpdate, app::LaserShooterInflateToAttackBehaviour* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x00F15B30, app::BehaviourStatus__Enum, OnShootingUpdate, app::LaserShooterInflateToAttackBehaviour* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x00F161C0, app::BehaviourStatus__Enum, OnResolveUpdate, app::LaserShooterInflateToAttackBehaviour* this_ptr, float d_time)
    IL2CPP_REGISTER_METHOD(0x00F163E0, void, OnAnticEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F16590, void, OnShootingEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F16880, void, OnResolveEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F16A30, void, StartLoopingShootTimeline, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F16BE0,
        void,
        StartTimeline,
        app::LaserShooterInflateToAttackBehaviour* this_ptr,
        app::MoonTimeline* timeline,
        app::Action* on_stop
    )
    IL2CPP_REGISTER_METHOD(0x00F16C50, void, StopCurrentTimeline, app::LaserShooterInflateToAttackBehaviour* this_ptr, bool call_on_stop_action)
    IL2CPP_REGISTER_METHOD(0x00F16D80, float, GetT, app::LaserShooterInflateToAttackBehaviour* this_ptr, float time, float duration, app::AnimationCurve* curve)
    IL2CPP_REGISTER_METHOD(0x00F16DF0, void, OnDamageResultReceived, app::LaserShooterInflateToAttackBehaviour* this_ptr, app::DamageResult obj)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnShoot, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackInflateEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr, int32_t iteration)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackInflate, app::LaserShooterInflateToAttackBehaviour* this_ptr, float d_time, float normalized_phase_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackDeflateEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackDeflate, app::LaserShooterInflateToAttackBehaviour* this_ptr, float d_time, float normalized_phase_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackResolveEnter, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAttackResolve, app::LaserShooterInflateToAttackBehaviour* this_ptr, float d_time, float normalized_phase_time)
    IL2CPP_REGISTER_METHOD(0x00F16E00, void, ctor, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F16F70, void, _OnAnticEnter_b__27_0, app::LaserShooterInflateToAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnResolveEnter_b__29_0, app::LaserShooterInflateToAttackBehaviour* this_ptr)
} // namespace app::classes::LaserShooterInflateToAttackBehaviour
