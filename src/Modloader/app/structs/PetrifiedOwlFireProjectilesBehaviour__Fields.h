#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_DEFINED
struct PetrifiedOwlStats;
struct GameObject;
struct PlayerStayInsideZoneTrigger;
struct BaseAnimator;
struct ProjectileSpawner;
struct TimelineEventTrigger;
struct Transform;
struct IDamageReciever;
struct PetrifiedOwlFireProjectilesBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float InsideTriggerScore;
    float SpawnInterval;
    float BrokenHornSpawnInterval;
    struct PetrifiedOwlStats* Stats;
    struct GameObject* OwlEntity;
    struct PlayerStayInsideZoneTrigger* ShootingZoneTrigger;
    struct BaseAnimator* FireProjectilesAnimator;
    struct ProjectileSpawner* SpawnerL;
    struct ProjectileSpawner* SpawnerR;
    struct TimelineEventTrigger* ShootingEvent;
    float m_timer;
    bool m_canShoot;
    struct Transform* m_target;
    struct IDamageReciever* m_targetReceiver;
    bool m_spawnerLFlipped;
    bool m_spawnerRFlipped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlFireProjectilesBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlFireProjectilesBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
