#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAgent_DEFINED)
#include <Modloader/app/structs/SwarmAgent__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmAgent_DEFINED
struct SwarmAgent__Class;
struct SwarmAgent {
    struct SwarmAgent__Class* klass;
    MonitorData* monitor;
    struct SwarmAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAgent_FWDDECL)
#define IL2CPP_STRUCT_SwarmAgent_FWDDECL
#include <Modloader/app/structs/SwarmAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAgent_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAgent_FWDDECL)
#include <Modloader/app/structs/SwarmAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
