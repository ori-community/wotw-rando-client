#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_DEFINED)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_DEFINED
struct MeshTrail_MeshTrailTurbulence {
    float Weight;
    float VortexSize;
    float VortexSpeed;
    float VortexLifetime;
    float VorticesPerSecond;
    float MinimalSpawnerSpeed;
    float SpawnerVelocityInheritance;
    float TimeToSpawn;
};
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailTurbulence_FWDDECL)
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
