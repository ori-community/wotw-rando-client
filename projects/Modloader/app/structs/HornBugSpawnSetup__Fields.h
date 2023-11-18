#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugSpawnSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugSpawnSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnSetup__Fields_DEFINED)
#include <Modloader/app/structs/EntitySpawnSetup__Fields.h>
#include <Modloader/app/structs/HornBugSpawnSetup_Anim__Enum.h>
#if defined(IL2CPP_STRUCT_EntitySpawnSetup__Fields_DEFINED) && defined(IL2CPP_STRUCT_HornBugSpawnSetup_Anim__Enum_DEFINED)
#define IL2CPP_STRUCT_HornBugSpawnSetup__Fields_DEFINED
struct EntitySpawnSetup_AfterSpawnStateSetupHolder;
struct HornBugSpawnSetup__Fields {
    struct EntitySpawnSetup__Fields _;
    HornBugSpawnSetup_Anim__Enum SpawnAnimation;

    struct EntitySpawnSetup_AfterSpawnStateSetupHolder* StateChange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugSpawnSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugSpawnSetup__Fields_FWDDECL
#include <Modloader/app/structs/EntitySpawnSetup_AfterSpawnStateSetupHolder.h>
#endif
#undef IL2CPP_STRUCT_HornBugSpawnSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugSpawnSetup__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugSpawnSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugSpawnSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
