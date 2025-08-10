#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DigZone.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/LegacyBabySandWormNew.h>
#include <Modloader/app/structs/LegacyBabySandWormNew_BabySandwormState__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LegacyBabySandWormNew {
    IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, get_BashPriority, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2480, app::Vector2, get_UpDirection, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D25A0, void, set_UpDirection, app::LegacyBabySandWormNew* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x015D26E0, app::Vector2, get_WorldSpeed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2710, void, set_WorldSpeed, app::LegacyBabySandWormNew* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00A5BA30, bool, get_IsSuspended, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2740, void, set_IsSuspended, app::LegacyBabySandWormNew* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x015D28B0, app::Vector2, get_TargetPosition, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0074F800, app::SuspendableMask__Enum, get_Mask, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2AF0, void, set_Mask, app::LegacyBabySandWormNew* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x015D2B00, bool, get_CanExplodeOnContact, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2B20, void, OnEnable, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2BE0, void, OnDisable, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D2CA0, void, Awake, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D34E0, void, FixedUpdate, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D3A60, void, ApplyGravity, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D3BF0, void, ChangeState, app::LegacyBabySandWormNew* this_ptr, app::LegacyBabySandWormNew_BabySandwormState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x015D3D70, void, OnRestingEnter, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D3DC0, void, OnSpawnEnter, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D3DD0, void, OnSpawnUpdate, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D3FC0, void, OnPatrolEnter, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4010, void, OnPatrolUpdate, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D3FC0, void, OnChaseEnter, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4300, void, OnChaseUpdate, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D45F0, void, OnDashEnter, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4630, void, OnDashUpdate, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4720, void, OnOutOfSandEnter, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4780, void, OnOutOfSandUpdate, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D47B0, void, OnCollisionEnter, app::LegacyBabySandWormNew* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x015D4810, void, Explode, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4B00, void, SetRotation, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015D4D40,
        void,
        MoveOnDirection,
        app::LegacyBabySandWormNew* this_ptr,
        app::Vector2 desired_direction,
        float speed,
        float turn_speed,
        bool insta_speed
    )
    IL2CPP_REGISTER_METHOD(0x015D5010, app::Vector2, GetAvoidanceForces, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D52E0, void, DampVelocity, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D54B0, void, SpawnTrailEffect, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D5720, void, RefreshTrailEffectPosition, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D59E0, void, StopTrailEffect, app::LegacyBabySandWormNew* this_ptr, int32_t frame_delay)
    IL2CPP_REGISTER_METHOD(0x015D5AD0, void, CheckForDigZoneEnd, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D4780, void, CheckForDigZoneStart, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D5B00, bool, DigEdgeZoneEdgeAhead, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D5C40, app::DigZone*, GetDigZoneIntersectingPoint, app::LegacyBabySandWormNew* this_ptr, app::Vector3 center)
    IL2CPP_REGISTER_METHOD(0x015D5E40, void, JumpOut, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D6460, void, JumpIn, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D69B0, void, OnSuspended, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D6B20, void, OnEnterBash, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D6C30, bool, CanBeBashed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritSlashed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByBow, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D6C40, void, OnRecieveDamage, app::LegacyBabySandWormNew* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(
        0x015D6E20,
        void,
        OnDamageDealt,
        app::LegacyBabySandWormNew* this_ptr,
        app::DamageDealer* damage_dealer,
        app::DamageResult damage_result
    )
    IL2CPP_REGISTER_METHOD(0x015D6E30, void, AreaDamage, app::LegacyBabySandWormNew* this_ptr, app::GameObject* collided_object)
    IL2CPP_REGISTER_METHOD(0x015D7370, void, RefreshClosestTarget, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D7A00, void, OnProcessRootMotion, app::LegacyBabySandWormNew* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x015D7AF0, void, OnDrawGizmos, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00720040, app::IDamageReciever__Array*, get_AffectedReceivers, app::LegacyBabySandWormNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015D7B70, void, ctor, app::LegacyBabySandWormNew* this_ptr)
} // namespace app::classes::LegacyBabySandWormNew
