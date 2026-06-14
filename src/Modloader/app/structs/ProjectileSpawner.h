#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProjectileSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProjectileSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileSpawner_DEFINED)
#include <Modloader/app/structs/ProjectileSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_ProjectileSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_ProjectileSpawner_DEFINED
struct ProjectileSpawner__Class;
struct ProjectileSpawner {
    struct ProjectileSpawner__Class* klass;
    MonitorData* monitor;
    struct ProjectileSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProjectileSpawner_FWDDECL)
#define IL2CPP_STRUCT_ProjectileSpawner_FWDDECL
#include <Modloader/app/structs/ProjectileSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_ProjectileSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProjectileSpawner_DEFINED) && !defined(IL2CPP_STRUCT_ProjectileSpawner_FWDDECL)
#include <Modloader/app/structs/ProjectileSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProjectileSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
