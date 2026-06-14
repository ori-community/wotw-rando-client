#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct MoonReference_1_WaterCurrentZone_;
struct MoonReference_1_VelocityBezierSplineComponent_;
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_;
struct Transform;
struct ProjectileSpawner;
struct List_1_Moon_MoonReference_1__1;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct List_1_UnityEngine_Transform_;
struct List_1_Projectile_;
struct WaterCurrentZone;
struct VelocityBezierSplineComponent;
struct KwolokBossLocomotion_MoveRequest;
struct Enum__Array;
struct KwolokBossUnderwaterPullBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* PullStart;
    struct MoonTimeline* PullLoop;
    struct MoonTimeline* PullEnd;
    struct MoonTimeline* ChompLoop;
    struct MoonTimeline* Spit;
    struct EventTriggerAnimator* SpitEvent;
    struct EventTriggerAnimator* DamageEvent;
    struct MoonReference_1_WaterCurrentZone_* WaterCurrentZone;
    struct MoonReference_1_VelocityBezierSplineComponent_* PullPath;
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_* PullWallLeft;
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_* PullWallRight;
    struct Transform* KwolokTongueRootTransform;
    float ChompDamage;
    float MaxSeinOffsetFromPath;
    float SwallowDistance;
    float SpitForce;
    float CurrentStrength;
    float PullLoopTime;
    float m_pullLoopTimer;
    bool m_hasOri;
    int32_t m_repositionCount;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float MaxMovementSpeed;
    int32_t MaxRepositions;
    float BitingAngleChangeSpeedMult;
    bool ProjectilesAllowed;
    struct ProjectileSpawner* Spawner;
    struct List_1_Moon_MoonReference_1__1* SpawnPoints;
    struct List_1_Moon_MoonReference_1__1* SpawnPointsMirrored;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* SpawnEvents;
    int32_t MaxProjectiles;
    float ProjectileSpeed;
    struct List_1_UnityEngine_Transform_* m_spawnPointsCached;
    struct List_1_UnityEngine_Transform_* m_spawnPointsMirroredCached;
    struct List_1_UnityEngine_Transform_* m_usedSpawnPoints;
    struct List_1_Projectile_* m_spawnedProjectiles;
    int32_t m_numSpawnedProjectiles;
    KwolokBossUnderwaterPullBehaviour_State__Enum m_currentState;

    struct WaterCurrentZone* m_waterCurrentZoneCached;
    struct VelocityBezierSplineComponent* m_pullPathCached;
    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    bool m_isMirrored;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__1.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_Projectile_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Setups_ChangeStateOnCondition_.h>
#include <Modloader/app/structs/MoonReference_1_VelocityBezierSplineComponent_.h>
#include <Modloader/app/structs/MoonReference_1_WaterCurrentZone_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#include <Modloader/app/structs/WaterCurrentZone.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossUnderwaterPullBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossUnderwaterPullBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
