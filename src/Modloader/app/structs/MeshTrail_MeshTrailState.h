#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrail_MeshTrailState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailState_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailState_DEFINED
struct MeshTrail_MeshTrailState {
    struct Vector3 BoundsMin;
    struct Vector3 BoundsMax;
    uint32_t NextVortexIndex;
    uint32_t CurrentParticleIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailState_FWDDECL)
#define IL2CPP_STRUCT_MeshTrail_MeshTrailState_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeshTrail_MeshTrailState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailState_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrail_MeshTrailState_FWDDECL)
#include <Modloader/app/structs/MeshTrail_MeshTrailState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrail_MeshTrailState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
