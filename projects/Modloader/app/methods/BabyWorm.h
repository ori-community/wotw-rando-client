#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabyWorm.h>
#include <Modloader/app/structs/BabyWorm_BabySandwormState__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BabyWorm {
    IL2CPP_REGISTER_METHOD(0x00F78F20, void, SerializeComponents, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, get_BashPriority, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F79010, app::Vector2, get_UpDirection, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F79130, void, set_UpDirection, app::BabyWorm* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00F79270, app::Vector2, get_WorldSpeed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F792A0, void, set_WorldSpeed, app::BabyWorm* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0068A5E0, bool, get_IsSuspended, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F792D0, void, set_IsSuspended, app::BabyWorm* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F79440, app::BabyWorm_BabySandwormState__Enum, get_CurrentState, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F79450, app::Vector2, get_TargetPosition, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F79690, app::Vector2, get_DashDirection, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F79790, app::SuspendableMask__Enum, get_Mask, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F797A0, void, set_Mask, app::BabyWorm* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00F797B0, bool, get_CanExplodeOnContact, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F797D0, void, OnEnable, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F799C0, void, OnDisable, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F79BB0, void, Awake, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7A290, void, OnDestroy, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7A2B0, void, FixedUpdate, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7A770, void, UpdateSound, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7A9B0, void, ApplyGravity, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7AB40, void, ChangeState, app::BabyWorm* this_ptr, app::BabyWorm_BabySandwormState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x00F7AD80, void, OnRestingEnter, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7ADD0, void, OnSpawnEnter, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7ADF0, void, OnSpawnUpdate, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7B170, void, OnPatrolEnter, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7B1D0, void, OnPatrolUpdate, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7B170, void, OnChaseEnter, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7B560, void, OnChaseUpdate, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7BC30, void, OnDashEnter, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7BD20, void, OnDashUpdate, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7BFE0, void, OnOutOfDigZoneEnter, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7C040, void, OnOutOfDigZoneUpdate, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7C080, void, OnCollisionEnter, app::BabyWorm* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00F7C0E0, void, CollisionCheck, app::BabyWorm* this_ptr, app::MoonControllerColliderHit hit_info)
    IL2CPP_REGISTER_METHOD(0x00F7C130, void, ProcessCollisionWithObject, app::BabyWorm* this_ptr, app::GameObject* collided_object)
    IL2CPP_REGISTER_METHOD(0x00F7C1D0, void, Explode, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7C590, void, SetRotation, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00F7C7C0,
        void,
        MoveOnDirection,
        app::BabyWorm* this_ptr,
        app::Vector2 desired_direction,
        float speed,
        float turn_speed,
        bool insta_speed
    )
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_TurnSpeedModifier, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7CD50, app::Vector2, GetAvoidanceForces, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7D020, void, DampVelocity, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7D1D0, void, CheckForDigZoneEnd, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7C040, void, CheckForDigZoneStart, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7D210, void, JumpOut, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7D8E0, void, JumpIn, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7DEA0, void, OnSuspended, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7E010, void, OnEnterBash, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7E120, bool, CanBeBashed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSlashed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7E130, void, OnRecieveDamage, app::BabyWorm* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRecieveBashDamage, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7E3F0, void, OnDamageDealt, app::BabyWorm* this_ptr, app::DamageDealer* damage_dealer, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00F7E510, void, AreaDamage, app::BabyWorm* this_ptr, app::GameObject* collided_object)
    IL2CPP_REGISTER_METHOD(0x00F7EA50, void, RefreshClosestTarget, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7F270, void, OnProcessRootMotion, app::BabyWorm* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00F7F360, void, OnDrawGizmos, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7F3E0, void, OnRestoreCheckpoint, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7F4F0, void, InstantSpawnInitiation, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00813FA0, app::IDamageReciever__Array*, get_AffectedReceivers, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7F6C0, void, OnPoolSpawned, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::BabyWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F7F6D0, void, ctor, app::BabyWorm* this_ptr)
} // namespace app::classes::BabyWorm
