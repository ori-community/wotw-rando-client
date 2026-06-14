#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMeshHit__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMeshHit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshHit__Boxed_DEFINED)
#include <Modloader/app/structs/NavMeshHit.h>
#if defined(IL2CPP_STRUCT_NavMeshHit_DEFINED)
#define IL2CPP_STRUCT_NavMeshHit__Boxed_DEFINED
struct NavMeshHit__Class;
struct NavMeshHit__Boxed {
    struct NavMeshHit__Class* klass;
    MonitorData* monitor;
    struct NavMeshHit fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavMeshHit__Boxed_FWDDECL)
#define IL2CPP_STRUCT_NavMeshHit__Boxed_FWDDECL
#include <Modloader/app/structs/NavMeshHit__Class.h>
#endif
#undef IL2CPP_STRUCT_NavMeshHit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshHit__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_NavMeshHit__Boxed_FWDDECL)
#include <Modloader/app/structs/NavMeshHit__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMeshHit__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
