#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnOnKill_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOnKill_DEFINED)
#include <Modloader/app/structs/SpawnOnKill__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnOnKill__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnOnKill_DEFINED
struct SpawnOnKill__Class;
struct SpawnOnKill {
    struct SpawnOnKill__Class* klass;
    MonitorData* monitor;
    struct SpawnOnKill__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnOnKill_FWDDECL)
#define IL2CPP_STRUCT_SpawnOnKill_FWDDECL
#include <Modloader/app/structs/SpawnOnKill__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOnKill_DEFINED) && !defined(IL2CPP_STRUCT_SpawnOnKill_FWDDECL)
#include <Modloader/app/structs/SpawnOnKill.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnOnKill.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
