#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAgent_States_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAgent_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAgent_States_DEFINED)
#include <Modloader/app/structs/SwarmAgent_States__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmAgent_States__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmAgent_States_DEFINED
struct SwarmAgent_States__Class;
struct SwarmAgent_States {
    struct SwarmAgent_States__Class* klass;
    MonitorData* monitor;
    struct SwarmAgent_States__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAgent_States_FWDDECL)
#define IL2CPP_STRUCT_SwarmAgent_States_FWDDECL
#include <Modloader/app/structs/SwarmAgent_States__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmAgent_States_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAgent_States_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAgent_States_FWDDECL)
#include <Modloader/app/structs/SwarmAgent_States.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAgent_States.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
