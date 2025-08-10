#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm_BabyWaterwormState__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterZone.h>

namespace app::classes::LegacyBabyWaterWorm {
    IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, get_BashPriority, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D80D0, app::Vector2, get_UpDirection, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D81F0, void, set_UpDirection, app::LegacyBabyWaterWorm* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x015D8330, app::Vector2, get_WorldSpeed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D8360, void, set_WorldSpeed, app::LegacyBabyWaterWorm* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00689DA0, bool, get_IsSuspended, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D8390, void, set_IsSuspended, app::LegacyBabyWaterWorm* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x015D8500, app::Vector2, get_TargetPosition, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091D5A0, app::SuspendableMask__Enum, get_Mask, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A437A0, void, set_Mask, app::LegacyBabyWaterWorm* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanExplodeOnContact, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D86D0, void, OnEnable, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D8790, void, OnDisable, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D8850, void, Awake, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D8E50, void, FixedUpdate, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D9420, void, ApplyGravity, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D95B0, void, ChangeState, app::LegacyBabyWaterWorm* this_ptr, app::LegacyBabyWaterWorm_BabyWaterwormState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x015D97E0, void, OnRestingEnter, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpawnEnter, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D98E0, void, OnSpawnUpdate, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D9AC0, void, OnPatrolEnter, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D9B00, void, OnPatrolUpdate, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D9AC0, void, OnChaseEnter, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D9DF0, void, OnChaseUpdate, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA0E0, void, OnDashEnter, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA120, void, OnDashUpdate, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA210, void, OnOutOfSandEnter, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA270, void, OnOutOfSandUpdate, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA2A0, void, OnCollisionEnter, app::LegacyBabyWaterWorm* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x015DA2F0, void, Explode, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA5D0, void, SetRotation, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015DA6C0,
        void,
        MoveOnDirection,
        app::LegacyBabyWaterWorm* this_ptr,
        app::Vector2 desired_direction,
        float speed,
        float turn_speed,
        bool insta_speed
    )
    IL2CPP_REGISTER_METHOD(0x015DA990, app::Vector2, GetAvoidanceForces, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DAC60, void, DampVelocity, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SpawnTrailEffect, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DAE30, void, RefreshTrailEffectPosition, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StopTrailEffect, app::LegacyBabyWaterWorm* this_ptr, int32_t frame_delay)
    IL2CPP_REGISTER_METHOD(0x015DAFD0, void, CheckForWaterZoneEnd, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DA270, void, CheckForWaterZoneStart, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DB000, bool, DigEdgeZoneEdgeAhead, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DB0E0, app::WaterZone*, GetWaterZoneIntersectingPoint, app::LegacyBabyWaterWorm* this_ptr, app::Vector3 center)
    IL2CPP_REGISTER_METHOD(0x015DB300, void, JumpOut, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DB8B0, void, JumpIn, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DBDF0, void, OnSuspended, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DBF60, void, OnEnterBash, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DC070, bool, CanBeBashed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSlashed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DC080, void, OnRecieveDamage, app::LegacyBabyWaterWorm* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(
        0x015DC2C0,
        void,
        OnDamageDealt,
        app::LegacyBabyWaterWorm* this_ptr,
        app::DamageDealer* damage_dealer,
        app::DamageResult damage_result
    )
    IL2CPP_REGISTER_METHOD(0x015DC2D0, void, AreaDamage, app::LegacyBabyWaterWorm* this_ptr, app::GameObject* collided_object)
    IL2CPP_REGISTER_METHOD(0x015DC810, void, RefreshClosestTarget, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DCEA0, void, OnProcessRootMotion, app::LegacyBabyWaterWorm* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x015D7AF0, void, OnDrawGizmos, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720150, app::IDamageReciever__Array*, get_AffectedReceivers, app::LegacyBabyWaterWorm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015DCF90, void, ctor, app::LegacyBabyWaterWorm* this_ptr)
} // namespace app::classes::LegacyBabyWaterWorm
