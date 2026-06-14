#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarm_DEFINED)
#include <Modloader/app/structs/UberSwarm__Fields.h>
#if defined(IL2CPP_STRUCT_UberSwarm__Fields_DEFINED)
#define IL2CPP_STRUCT_UberSwarm_DEFINED
struct UberSwarm__Class;
struct UberSwarm {
    struct UberSwarm__Class* klass;
    MonitorData* monitor;
    struct UberSwarm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarm_FWDDECL)
#define IL2CPP_STRUCT_UberSwarm_FWDDECL
#include <Modloader/app/structs/UberSwarm__Class.h>
#endif
#undef IL2CPP_STRUCT_UberSwarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarm_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarm_FWDDECL)
#include <Modloader/app/structs/UberSwarm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
