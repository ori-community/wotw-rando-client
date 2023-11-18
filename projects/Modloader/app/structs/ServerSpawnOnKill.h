#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSpawnOnKill_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSpawnOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSpawnOnKill_DEFINED)
#include <Modloader/app/structs/ServerSpawnOnKill__Fields.h>
#if defined(IL2CPP_STRUCT_ServerSpawnOnKill__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerSpawnOnKill_DEFINED
struct ServerSpawnOnKill__Class;
struct ServerSpawnOnKill {
    struct ServerSpawnOnKill__Class* klass;
    MonitorData* monitor;
    struct ServerSpawnOnKill__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerSpawnOnKill_FWDDECL)
#define IL2CPP_STRUCT_ServerSpawnOnKill_FWDDECL
#include <Modloader/app/structs/ServerSpawnOnKill__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerSpawnOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSpawnOnKill_DEFINED) && !defined(IL2CPP_STRUCT_ServerSpawnOnKill_FWDDECL)
#include <Modloader/app/structs/ServerSpawnOnKill.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSpawnOnKill.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
