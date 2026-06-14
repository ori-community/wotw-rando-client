#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshGenerationResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshGenerationResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshGenerationResult_DEFINED)
#include <Modloader/app/structs/MeshGenerationStatus__Enum.h>
#include <Modloader/app/structs/MeshVertexAttributes__Enum.h>
#include <Modloader/app/structs/TrackableId.h>
#if defined(IL2CPP_STRUCT_TrackableId_DEFINED) && defined(IL2CPP_STRUCT_MeshGenerationStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_MeshVertexAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MeshGenerationResult_DEFINED
struct Mesh;
struct MeshCollider;
struct MeshGenerationResult {
    struct TrackableId _MeshId_k__BackingField;
    struct Mesh* _Mesh_k__BackingField;
    struct MeshCollider* _MeshCollider_k__BackingField;
    MeshGenerationStatus__Enum _Status_k__BackingField;

    MeshVertexAttributes__Enum _Attributes_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshGenerationResult_FWDDECL)
#define IL2CPP_STRUCT_MeshGenerationResult_FWDDECL
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshCollider.h>
#endif
#undef IL2CPP_STRUCT_MeshGenerationResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshGenerationResult_DEFINED) && !defined(IL2CPP_STRUCT_MeshGenerationResult_FWDDECL)
#include <Modloader/app/structs/MeshGenerationResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshGenerationResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
