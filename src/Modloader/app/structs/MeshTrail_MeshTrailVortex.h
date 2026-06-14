#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_DEFINED
struct MeshTrail_MeshTrailVortex {
    struct Vector3 Position;
    struct Vector3 Velocity;
    float Speed;
    float Weight;
    float Lifetime;
    float TimeAlive;
    float Size;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailVortex_FWDDECL)
#include <Modloader/app/structs/MeshTrail_MeshTrailVortex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail_MeshTrailVortex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
