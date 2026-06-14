#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMeshPath_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMeshPath_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshPath_DEFINED)
#include <Modloader/app/structs/NavMeshPath__Fields.h>
#if defined(IL2CPP_STRUCT_NavMeshPath__Fields_DEFINED)
#define IL2CPP_STRUCT_NavMeshPath_DEFINED
struct NavMeshPath__Class;
struct NavMeshPath {
    struct NavMeshPath__Class* klass;
    MonitorData* monitor;
    struct NavMeshPath__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavMeshPath_FWDDECL)
#define IL2CPP_STRUCT_NavMeshPath_FWDDECL
#include <Modloader/app/structs/NavMeshPath__Class.h>
#endif
#undef IL2CPP_STRUCT_NavMeshPath_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshPath_DEFINED) && !defined(IL2CPP_STRUCT_NavMeshPath_FWDDECL)
#include <Modloader/app/structs/NavMeshPath.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMeshPath.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
