#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/SpiderBossSpitBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossSpitBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_DEFINED
struct PrefabSpawner;
struct Transform;
struct List_1_UnityEngine_Vector3_;
struct GameObject;
struct EventTriggerAnimator;
struct MoonTimeline;
struct SpiderBossSpitBehaviour__Fields {
    struct SpiderBossBaseBehaviour__Fields _;
    struct PrefabSpawner* ProjectileSpawner;
    float ProjectileSpeed;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    struct Transform* ShootPoint;
    int32_t NumShotsArena1;
    int32_t NumShotsArena2;
    int32_t NumberOfProjectiles;
    float ProjectileOffset;
    float ShootSpeedMultiplierArena1;
    float ShootSpeedMultiplierArena2;
    struct List_1_UnityEngine_Vector3_* m_creepPositions;
    float MinDistanceBetweenCreep;
    bool ShouldSpawnCreep;
    float CreepTime;
    float CreepDamage;
    struct GameObject* CreepPrefab;
    struct EventTriggerAnimator* ShootTrigger;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* ShootTimeline;
    struct MoonTimeline* EndTimeline;
    struct MoonTimeline* m_currentTimeline;
    bool m_canFinish;
    SpiderBossSpitBehaviour_State__Enum m_state;

    uint32_t m_shotsFired;
    bool m_shouldCancel;
    struct Vector3 m_cachedVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
