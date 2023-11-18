#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode_1_TentacleEntity___Fields.h>
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_TentacleEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED)
#define IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_DEFINED
struct ProjectileSpawner;
struct GameObject;
struct MoonTimeline;
struct EventTriggerAnimator;
struct FloatAnimator;
struct TentacleSpitBehaviour__Fields {
    struct EntityBehaviourNode_1_TentacleEntity___Fields _;
    struct ProjectileSpawner* ProjectileSpawner;
    struct GameObject* NormalProjectilePrefab;
    struct GameObject* UnderwaterProjectilePrefab;
    struct MoonTimeline* SpitTimeline;
    struct EventTriggerAnimator* SpitTrigger;
    struct FloatAnimator* PositionAlignmentCurve;
    struct FloatAnimator* HeadRotationAlignmentCurve;
    float targetLerp;
    float headRotationAlignmentToTarget;
    float maxSpeed;
    struct GameObject* NormalCreepPrefab;
    struct GameObject* UnderwaterCreepPrefab;
    int32_t ProjectileCount;
    int32_t CreepPrewarmCount;
    float ProjectileSpawnInterval;
    float ShotSpreadAngle;
    int32_t NumberOfProjectilesPerShot;
    float ProjectileDamage;
    float ProjectileSpeed;
    float ProjectileSpeedUnderWater;
    DamageWeight__Enum ProjectileDamageWeight;

    struct TentacleAnimatedSettings m_originalSettings;
    int32_t m_projectileSpawnedCounter;
    float m_timeToNextProjectileSpawn;
    bool m_shooting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#endif
#undef IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
