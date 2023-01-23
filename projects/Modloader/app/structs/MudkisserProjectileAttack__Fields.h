#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VolumeMovementTimelineBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_DEFINED
struct EventTriggerAnimator;
struct PrefabSpawner;
struct Transform;
struct List_1_UnityEngine_Collider_;
struct Projectile;
struct DamageDealer;
struct MudkisserProjectileAttack__Fields {
    struct VolumeMovementTimelineBehaviourNew__Fields _;
    struct EventTriggerAnimator* ThrowTrigger;
    struct EventTriggerAnimator* AimTrigger;
    struct EventTriggerAnimator* PullOutTrigger;
    struct PrefabSpawner* ProjectileSpawner;
    float ProjectileSpeed;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    DamageWeight__Enum ProjectileDamageWeight;

    float MinimumDistanceToArcProjectile;
    float ProjectileRangeWhenNoTarget;
    bool ShootHighAngle;
    struct Transform* ShootPoint;
    struct List_1_UnityEngine_Collider_* IgnoredColliders;
    struct Transform* ThrowingHand;
    struct Vector3 shootTargetPos;
    struct Projectile* m_projectile;
    struct DamageDealer* m_projectileDamageDealer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MudkisserProjectileAttack__Fields_FWDDECL)
#include <Modloader/app/structs/MudkisserProjectileAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MudkisserProjectileAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
