#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerSpawnSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerSpawnSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnSetup__Fields_DEFINED)
#include <Modloader/app/structs/EntitySpawnSetup__Fields.h>
#if defined(IL2CPP_STRUCT_EntitySpawnSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerSpawnSetup__Fields_DEFINED
struct EntitySpawnSetup_AfterSpawnStateSetupHolder;
struct MinerSpawnSetup__Fields {
    struct EntitySpawnSetup__Fields _;
    struct EntitySpawnSetup_AfterSpawnStateSetupHolder* StateChange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerSpawnSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerSpawnSetup__Fields_FWDDECL
#include <Modloader/app/structs/EntitySpawnSetup_AfterSpawnStateSetupHolder.h>
#endif
#undef IL2CPP_STRUCT_MinerSpawnSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerSpawnSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerSpawnSetup__Fields_FWDDECL)
#include <Modloader/app/structs/MinerSpawnSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerSpawnSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
