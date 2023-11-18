#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LegacyTimelineSequence;
struct EventTriggerAnimator;
struct TimelineEventTrigger;
struct Locomotion;
struct PrefabSpawner;
struct ShootProjectileBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MoonTimeline* ShootGroundSequenceNew;
    struct MoonTimeline* ShootCeilingSequenceNew;
    float Range;
    struct LegacyTimelineSequence* ShootGroundSequence;
    struct LegacyTimelineSequence* ShootCeilingSequence;
    struct Vector3 ShotOriginOffset;
    float ProjectileSpeed;
    float ProjectileGravity;
    float ProjectileDamage;
    float ProjectileArcHeight;
    struct EventTriggerAnimator* ShootTriggerNew;
    struct TimelineEventTrigger* ShootTrigger;
    struct Locomotion* m_groundLocomotion;
    struct PrefabSpawner* m_projectileSpawner;
    struct LegacyTimelineSequence* m_currentShootSequence;
    struct MoonTimeline* m_currentShootSequenceNew;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#endif
#undef IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ShootProjectileBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootProjectileBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
