#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_DEFINED
struct MeshTrail_MeshTrailParticle {
    struct Vector3 Position;
    struct Vector3 Bitangent;
    float InitialSpeed;
    float NormalizedTimeAlive;
    float DistanceTraveled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailParticle_FWDDECL)
#include <Modloader/app/structs/MeshTrail_MeshTrailParticle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail_MeshTrailParticle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
