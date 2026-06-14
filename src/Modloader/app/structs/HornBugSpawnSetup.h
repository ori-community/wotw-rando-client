#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugSpawnSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnSetup_DEFINED)
#include <Modloader/app/structs/HornBugSpawnSetup__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugSpawnSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugSpawnSetup_DEFINED
struct HornBugSpawnSetup__Class;
struct HornBugSpawnSetup {
    struct HornBugSpawnSetup__Class* klass;
    MonitorData* monitor;
    struct HornBugSpawnSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugSpawnSetup_FWDDECL)
#define IL2CPP_STRUCT_HornBugSpawnSetup_FWDDECL
#include <Modloader/app/structs/HornBugSpawnSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugSpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugSpawnSetup_DEFINED) && !defined(IL2CPP_STRUCT_HornBugSpawnSetup_FWDDECL)
#include <Modloader/app/structs/HornBugSpawnSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugSpawnSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
