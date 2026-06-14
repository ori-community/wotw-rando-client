#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/KwolokBossCannonBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossCannonBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_DEFINED
struct EventTriggerAnimator;
struct MoonTimeline;
struct AnimationCurve;
struct Transform;
struct MoonInt;
struct ProjectileSpawner;
struct GameObject;
struct List_1_UnityEngine_Vector3_;
struct List_1_Projectile_;
struct KwolokBossLocomotion_MoveRequest;
struct Enum__Array;
struct KwolokBossCannonBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct EventTriggerAnimator* ShootTrigger;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* ShootTimeline;
    struct MoonTimeline* EndTimeline;
    struct AnimationCurve* AccelerationMultiplierCurve;
    bool UseAccelerationMultiplierCurve;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float MaxMovementSpeed;
    int32_t MaxRepositions;
    struct Transform* ShootPoint;
    struct MoonInt* NumShots;
    struct ProjectileSpawner* Spawner;
    float ProjectileMinFlightTime;
    float ProjectileMaxFlightTime;
    float ProjectileMaxDistance;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    bool ShouldSpawnCreep;
    float MinDistanceBetweenCreep;
    float CreepTime;
    float CreepDamage;
    struct GameObject* CreepPrefab;
    struct List_1_UnityEngine_Vector3_* m_creepPositions;
    struct MoonTimeline* m_currentTimeline;
    bool m_canFinish;
    KwolokBossCannonBehaviour_State__Enum m_state;

    struct List_1_Projectile_* m_shotsFired;
    bool m_shouldCancel;
    struct Vector3 m_cachedVelocity;
    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    int32_t m_repositionCount;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/List_1_Projectile_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonInt.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossCannonBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossCannonBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossCannonBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
