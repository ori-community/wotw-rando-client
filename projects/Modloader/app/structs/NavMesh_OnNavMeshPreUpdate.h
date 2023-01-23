#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_DEFINED)
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate__Fields.h>
#if defined(IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate__Fields_DEFINED)
#define IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_DEFINED
struct NavMesh_OnNavMeshPreUpdate__Class;
struct NavMesh_OnNavMeshPreUpdate {
    struct NavMesh_OnNavMeshPreUpdate__Class* klass;
    MonitorData* monitor;
    struct NavMesh_OnNavMeshPreUpdate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_FWDDECL)
#define IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_FWDDECL
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate__Class.h>
#endif
#undef IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_DEFINED) && !defined(IL2CPP_STRUCT_NavMesh_OnNavMeshPreUpdate_FWDDECL)
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMesh_OnNavMeshPreUpdate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
