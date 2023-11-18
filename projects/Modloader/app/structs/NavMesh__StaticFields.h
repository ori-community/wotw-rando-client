#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMesh__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMesh__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMesh__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NavMesh__StaticFields_DEFINED
struct NavMesh_OnNavMeshPreUpdate;
struct NavMesh__StaticFields {
    struct NavMesh_OnNavMeshPreUpdate* onPreUpdate;
};
#endif
#if !defined(IL2CPP_STRUCT_NavMesh__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NavMesh__StaticFields_FWDDECL
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate.h>
#endif
#undef IL2CPP_STRUCT_NavMesh__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMesh__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NavMesh__StaticFields_FWDDECL)
#include <Modloader/app/structs/NavMesh__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMesh__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
