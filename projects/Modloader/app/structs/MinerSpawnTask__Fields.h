#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerSpawnTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnTask__Fields_DEFINED)
#include <Modloader/app/structs/EntitySpawnTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerSpawnTask__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct ParticleSystem;
struct MinerSpawnTask__Fields {
    struct EntitySpawnTask__Fields _;
    struct MoonTimeline* SpawnWallBurstTimeline;
    struct EventTriggerAnimator* WallBurstTrigger;
    struct EventTriggerAnimator* StartParticleTrigger;
    struct ParticleSystem* SmokeParticle;
    struct MoonTimeline* ForegroundSpawnTimeline;
    struct MoonTimeline* m_currentTimeline;
    bool m_hasSmokeParticle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerSpawnTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerSpawnTask__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_MinerSpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerSpawnTask__Fields_FWDDECL)
#include <Modloader/app/structs/MinerSpawnTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerSpawnTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
