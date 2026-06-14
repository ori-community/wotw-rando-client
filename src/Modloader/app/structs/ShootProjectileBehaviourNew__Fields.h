#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Locomotion;
struct PrefabSpawner;
struct BlockDamageInterruptionHandler;
struct ShootProjectileBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    float Range;
    struct MoonTimeline* ShootGroundSequence;
    struct MoonTimeline* ShootCeilingSequence;
    struct Vector3 ShotOriginOffset;
    float ProjectileSpeed;
    float ProjectileGravity;
    float ProjectileDamage;
    DamageWeight__Enum ProjectileDamageWeight;

    float ProjectileArcHeight;
    struct EventTriggerAnimator* ShootTrigger;
    struct Locomotion* m_groundLocomotion;
    struct PrefabSpawner* m_projectileSpawner;
    struct MoonTimeline* m_currentShootSequence;
    bool m_isShooting;
    struct BlockDamageInterruptionHandler* m_blockingHandlerGround;
    struct BlockDamageInterruptionHandler* m_blockingHandlerCeiling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#undef IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootProjectileBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/ShootProjectileBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootProjectileBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
