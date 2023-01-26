#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1E4C0, void, OnEnter, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1E500, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1E5A0, void, OnExit, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009F7FA0, void, StartTimeline, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x00F1E5D0, void, StopCurrentTimeline, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1E600, void, SetState, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F1E640, void, EnterState, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F1E830, void, UpdateState, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F1E8C0, void, ExitState, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F1E960, void, EnterBeamState, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1EB00, void, OnShootCycleEnd, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1ED00, void, ShootProjectile, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1F100, void, EnterAnticState, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1F290, void, OnAnticTimelineEnds, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1F2C0, void, UpdateRotation, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1F800, void, ctor, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1F890, void, _EnterState_b__19_0, (app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour * this_ptr))
} // namespace app::classes::LaserShooterProjectileAttackWithCycleRepetitionBehaviour
