#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnProjectileAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnProjectileAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnProjectileAction_DEFINED)
#include <Modloader/app/structs/SpawnProjectileAction__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnProjectileAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnProjectileAction_DEFINED
struct SpawnProjectileAction__Class;
struct SpawnProjectileAction {
    struct SpawnProjectileAction__Class* klass;
    MonitorData* monitor;
    struct SpawnProjectileAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnProjectileAction_FWDDECL)
#define IL2CPP_STRUCT_SpawnProjectileAction_FWDDECL
#include <Modloader/app/structs/SpawnProjectileAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnProjectileAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnProjectileAction_DEFINED) && !defined(IL2CPP_STRUCT_SpawnProjectileAction_FWDDECL)
#include <Modloader/app/structs/SpawnProjectileAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnProjectileAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
