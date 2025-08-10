#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Projectile {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanGoThroughPortals, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39320, bool, get_Explode, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C74EE0, void, set_Explode, app::Projectile* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C74EF0, int32_t, get_BouncesRemaining, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C74F00, void, set_BouncesRemaining, app::Projectile* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::Projectile_ExplodeCollisionInfo*, get_ExplodeCollision, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::Projectile_ExplodeCollisionInfo*, get_RicochetCollision, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_RicochetCollision, app::Projectile* this_ptr, app::Projectile_ExplodeCollisionInfo* value)
    IL2CPP_REGISTER_METHOD(0x00C74F10, app::Vector3, get_Displacement, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C74F30, void, set_Displacement, app::Projectile* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00C74F50, app::Vector3, get_SpeedVector, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75050, void, set_SpeedVector, app::Projectile* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, ShouldExplodeInWater, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, CanBeBashed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75270, app::Vector3, get_Position, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75300, void, set_Position, app::Projectile* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeStomped, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeChargeFlamed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeGrenaded, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHeavySpiritSlashed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, CanBeTeleportedByBeacon, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75380, void, SetExplodeLater, app::Projectile* this_ptr, bool val)
    IL2CPP_REGISTER_METHOD(0x00C75390, void, SetExplode, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C753A0, void, OnEnterBash, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, get_BashPriority, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_HammerPriority, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HammerEnableAutoTarget, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsPowerOfLightAchievement, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C754C0, void, OnRecieveDamage, app::Projectile* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00C75A10, int32_t, get_HeavySpiritSlashPriority, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75A20, void, set_HeavySpiritSlashPriority, app::Projectile* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashed, app::Projectile* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHeavySpiritSlashHighlight, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHeavySpiritSlashDehighlight, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75A30, void, OnPoolSpawned, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75BC0, void, OnPoolDespawned, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75BE0, app::Vector3, IPortalVisitor_get_Speed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75CE0, void, IPortalVisitor_set_Speed, app::Projectile* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGoThroughPortal, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75DE0, app::Vector3, get_Direction, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75E00, void, set_Direction, app::Projectile* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00C75E20, float, get_Speed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75E30, void, set_Speed, app::Projectile* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0071F210, app::GameObject*, get_LastReflector, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071F220, void, set_LastReflector, app::Projectile* this_ptr, app::GameObject* value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeReflected, app::Projectile* this_ptr, float maximum_reflectable_damage)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGrabbed, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleased, app::Projectile* this_ptr, float speed, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x00C75E40, void, OnReflected, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CountsTowardsSuperJumpAchievement, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75E50, bool, get_IsSuspended, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C75E60, void, set_IsSuspended, app::Projectile* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004B67E0, app::SuspendableMask__Enum, get_Mask, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C760C0, void, set_Mask, app::Projectile* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00C76180, void, OnValidate, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C76240, void, Start, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C76580, void, Awake, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C76CF0, void, OnEnable, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C76EA0, void, OnDisable, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C77010, void, OnDestroy, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C77370, bool, ShouldDealDamage, app::Projectile* this_ptr, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00C77480, void, OnDamageDealt, app::Projectile* this_ptr, app::DamageDealer* damage_dealer, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00C77640, void, FixedUpdate, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeExplodeOnWater, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C77E50,
        void,
        Launch,
        app::Projectile* this_ptr,
        float speed,
        app::Vector3 direction,
        float gravity,
        app::GameObject* owner,
        app::DamageOwner* damage_owner
    )
    IL2CPP_REGISTER_METHOD(
        0x00C78080,
        void,
        SetDamageParameters,
        app::Projectile* this_ptr,
        float damage,
        app::DamageWeight__Enum damage_weight,
        app::DamageLayerMask__Enum damage_layer_mask,
        app::DamageOwner* damage_owner,
        app::AbilityType__Enum ability_type
    )
    IL2CPP_REGISTER_METHOD(0x00C781F0, void, ExplodeProjectile, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C78450, void, Destroy, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C787A0, void, OnDestroyTimelineEnded, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C78A80, bool, RicochetProjectile, app::Projectile* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00C78EA0, void, OnRicochet, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79040, void, OnCollisionEnter, app::Projectile* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00C79320, bool, SpawnCollisionVFX, app::Projectile* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(0x00C795E0, void, UpdateVelocity, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79990, void, UpdateWaterDamping, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79A70, void, UpdateSpeedAndDirection, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79C40, void, HandleGravity, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79DF0, bool, ShouldPierce, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79E30, int32_t, get_BounceCount, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C79F10, bool, HandleMirrorStrike, app::Projectile* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00C7A760, void, ShootInArc, app::Projectile* this_ptr, app::Vector3 start, app::Vector3 end, float gravity, float arc_height)
    IL2CPP_REGISTER_METHOD(0x00C7AB50, void, OnBeforeTeleportation, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C7AB70, void, Teleport, app::Projectile* this_ptr, app::Vector2 new_position)
    IL2CPP_REGISTER_METHOD(0x00C7ACA0, void, OnAfterTeleportation, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C7ACC0, app::Vector2, ITeleportBeaconAttackable_get_Position, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C7ADD0, app::TrackingExclusions, get_TrackingExclusions, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5BA50, app::IDamageReciever__Array*, get_AffectedReceivers, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C7ADE0, void, ctor, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::Projectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::Projectile* this_ptr)
} // namespace app::classes::Projectile
