#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerSpawnSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnSetup_DEFINED)
#include <Modloader/app/structs/MinerSpawnSetup__Fields.h>
#if defined(IL2CPP_STRUCT_MinerSpawnSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerSpawnSetup_DEFINED
struct MinerSpawnSetup__Class;
struct MinerSpawnSetup {
    struct MinerSpawnSetup__Class* klass;
    MonitorData* monitor;
    struct MinerSpawnSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerSpawnSetup_FWDDECL)
#define IL2CPP_STRUCT_MinerSpawnSetup_FWDDECL
#include <Modloader/app/structs/MinerSpawnSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnSetup_DEFINED) && !defined(IL2CPP_STRUCT_MinerSpawnSetup_FWDDECL)
#include <Modloader/app/structs/MinerSpawnSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerSpawnSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
