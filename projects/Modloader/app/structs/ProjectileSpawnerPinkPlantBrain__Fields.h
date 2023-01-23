#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_DEFINED)
#include <Modloader/app/structs/BrainScript__Fields.h>
#if defined(IL2CPP_STRUCT_BrainScript__Fields_DEFINED)
#define IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_DEFINED
struct BaseAnimator;
struct ProjectileSpawner;
struct ProjectileSpawnerPinkPlantBrain__Fields {
    struct BrainScript__Fields _;
    float CooldownTime;
    bool Repeat;
    struct BaseAnimator* ShootSequence;
    struct ProjectileSpawner* ProjectileSpawner;
    float m_time;
    bool m_finishCicle;
    bool m_projectileWasSpawned;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#endif
#undef IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProjectileSpawnerPinkPlantBrain__Fields_FWDDECL)
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
