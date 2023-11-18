#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballSpawnSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballSpawnSetup_DEFINED)
#include <Modloader/app/structs/GasballSpawnSetup__Fields.h>
#if defined(IL2CPP_STRUCT_GasballSpawnSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballSpawnSetup_DEFINED
struct GasballSpawnSetup__Class;
struct GasballSpawnSetup {
    struct GasballSpawnSetup__Class* klass;
    MonitorData* monitor;
    struct GasballSpawnSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballSpawnSetup_FWDDECL)
#define IL2CPP_STRUCT_GasballSpawnSetup_FWDDECL
#include <Modloader/app/structs/GasballSpawnSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_GasballSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballSpawnSetup_DEFINED) && !defined(IL2CPP_STRUCT_GasballSpawnSetup_FWDDECL)
#include <Modloader/app/structs/GasballSpawnSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballSpawnSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
