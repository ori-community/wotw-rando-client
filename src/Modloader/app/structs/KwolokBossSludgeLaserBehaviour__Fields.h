#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_DEFINED
struct ProjectileSpawner;
struct Transform;
struct MoonTimeline;
struct EventTriggerAnimator;
struct KwolokBossEntity_OverrideTicket_1_System_Single_;
struct KwolokBossSludgeLaserBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct ProjectileSpawner* ProjectileSpawner;
    struct Transform* LaserTarget;
    struct MoonTimeline* Timeline;
    struct EventTriggerAnimator* ShootingWindow;
    int32_t NumberOfProjectiles;
    float TimeBetweenProjectileSpawn;
    float AimingPrecision;
    float m_timer;
    int32_t m_projectilesSpawned;
    bool m_leftAttack;
    float LookAngleChangeSpeedMultiplier;
    struct KwolokBossEntity_OverrideTicket_1_System_Single_* m_lookAngleChangeSpeedOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/KwolokBossEntity_OverrideTicket_1_System_Single_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossSludgeLaserBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossSludgeLaserBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossSludgeLaserBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
