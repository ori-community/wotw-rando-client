#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntitySpawnSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntitySpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpawnSetup_DEFINED)
#include <Modloader/app/structs/EntitySpawnSetup__Fields.h>
#if defined(IL2CPP_STRUCT_EntitySpawnSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_EntitySpawnSetup_DEFINED
struct EntitySpawnSetup__Class;
struct EntitySpawnSetup {
    struct EntitySpawnSetup__Class* klass;
    MonitorData* monitor;
    struct EntitySpawnSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntitySpawnSetup_FWDDECL)
#define IL2CPP_STRUCT_EntitySpawnSetup_FWDDECL
#include <Modloader/app/structs/EntitySpawnSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_EntitySpawnSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpawnSetup_DEFINED) && !defined(IL2CPP_STRUCT_EntitySpawnSetup_FWDDECL)
#include <Modloader/app/structs/EntitySpawnSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntitySpawnSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
