#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMeshAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMeshAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshAgent_DEFINED)
#include <Modloader/app/structs/NavMeshAgent__Fields.h>
#if defined(IL2CPP_STRUCT_NavMeshAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_NavMeshAgent_DEFINED
struct NavMeshAgent__Class;
struct NavMeshAgent {
    struct NavMeshAgent__Class* klass;
    MonitorData* monitor;
    struct NavMeshAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavMeshAgent_FWDDECL)
#define IL2CPP_STRUCT_NavMeshAgent_FWDDECL
#include <Modloader/app/structs/NavMeshAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_NavMeshAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshAgent_DEFINED) && !defined(IL2CPP_STRUCT_NavMeshAgent_FWDDECL)
#include <Modloader/app/structs/NavMeshAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMeshAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
