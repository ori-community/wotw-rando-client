#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMesh_DEFINED)
#define IL2CPP_STRUCT_NavMesh_DEFINED
struct NavMesh__Class;
struct NavMesh {
    struct NavMesh__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NavMesh_FWDDECL)
#define IL2CPP_STRUCT_NavMesh_FWDDECL
#include <Modloader/app/structs/NavMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_NavMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMesh_DEFINED) && !defined(IL2CPP_STRUCT_NavMesh_FWDDECL)
#include <Modloader/app/structs/NavMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
