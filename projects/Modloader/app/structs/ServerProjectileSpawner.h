#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerProjectileSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerProjectileSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectileSpawner_DEFINED)
#include <Modloader/app/structs/ServerProjectileSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_ServerProjectileSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerProjectileSpawner_DEFINED
struct ServerProjectileSpawner__Class;
struct ServerProjectileSpawner {
    struct ServerProjectileSpawner__Class* klass;
    MonitorData* monitor;
    struct ServerProjectileSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerProjectileSpawner_FWDDECL)
#define IL2CPP_STRUCT_ServerProjectileSpawner_FWDDECL
#include <Modloader/app/structs/ServerProjectileSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerProjectileSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerProjectileSpawner_DEFINED) && !defined(IL2CPP_STRUCT_ServerProjectileSpawner_FWDDECL)
#include <Modloader/app/structs/ServerProjectileSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerProjectileSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
