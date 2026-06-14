#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyPlatformMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyPlatformMovement_DEFINED)
#include <Modloader/app/structs/EnemyPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyPlatformMovement_DEFINED
struct EnemyPlatformMovement__Class;
struct EnemyPlatformMovement {
    struct EnemyPlatformMovement__Class* klass;
    MonitorData* monitor;
    struct EnemyPlatformMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyPlatformMovement_FWDDECL)
#define IL2CPP_STRUCT_EnemyPlatformMovement_FWDDECL
#include <Modloader/app/structs/EnemyPlatformMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyPlatformMovement_DEFINED) && !defined(IL2CPP_STRUCT_EnemyPlatformMovement_FWDDECL)
#include <Modloader/app/structs/EnemyPlatformMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyPlatformMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
