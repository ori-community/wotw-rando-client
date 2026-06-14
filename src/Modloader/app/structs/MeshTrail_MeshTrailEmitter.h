#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_DEFINED
struct MeshTrail_MeshTrailEmitter {
    struct Vector3 Position;
    struct Vector3 LastEmittedParticlePosition;
    int32_t SkinningMatrixIndex;
    struct Vector2 Uv;
    struct Vector3 WorldPosition;
    float DistanceTraveled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailEmitter_FWDDECL)
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
