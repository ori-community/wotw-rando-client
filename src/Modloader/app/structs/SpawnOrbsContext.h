#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnOrbsContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnOrbsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOrbsContext_DEFINED)
#include <Modloader/app/structs/SpawnOrbsContext__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnOrbsContext__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnOrbsContext_DEFINED
struct SpawnOrbsContext__Class;
struct SpawnOrbsContext {
    struct SpawnOrbsContext__Class* klass;
    MonitorData* monitor;
    struct SpawnOrbsContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnOrbsContext_FWDDECL)
#define IL2CPP_STRUCT_SpawnOrbsContext_FWDDECL
#include <Modloader/app/structs/SpawnOrbsContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnOrbsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOrbsContext_DEFINED) && !defined(IL2CPP_STRUCT_SpawnOrbsContext_FWDDECL)
#include <Modloader/app/structs/SpawnOrbsContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnOrbsContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
