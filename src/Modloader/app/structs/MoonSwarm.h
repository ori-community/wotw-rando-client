#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonSwarm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonSwarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarm_DEFINED)
#include <Modloader/app/structs/MoonSwarm__Fields.h>
#if defined(IL2CPP_STRUCT_MoonSwarm__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonSwarm_DEFINED
struct MoonSwarm__Class;
struct MoonSwarm {
    struct MoonSwarm__Class* klass;
    MonitorData* monitor;
    struct MoonSwarm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonSwarm_FWDDECL)
#define IL2CPP_STRUCT_MoonSwarm_FWDDECL
#include <Modloader/app/structs/MoonSwarm__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonSwarm_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonSwarm_DEFINED) && !defined(IL2CPP_STRUCT_MoonSwarm_FWDDECL)
#include <Modloader/app/structs/MoonSwarm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonSwarm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
