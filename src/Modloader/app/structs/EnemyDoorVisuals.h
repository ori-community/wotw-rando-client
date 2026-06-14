#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyDoorVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyDoorVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorVisuals_DEFINED)
#include <Modloader/app/structs/EnemyDoorVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyDoorVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyDoorVisuals_DEFINED
struct EnemyDoorVisuals__Class;
struct EnemyDoorVisuals {
    struct EnemyDoorVisuals__Class* klass;
    MonitorData* monitor;
    struct EnemyDoorVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyDoorVisuals_FWDDECL)
#define IL2CPP_STRUCT_EnemyDoorVisuals_FWDDECL
#include <Modloader/app/structs/EnemyDoorVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyDoorVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorVisuals_DEFINED) && !defined(IL2CPP_STRUCT_EnemyDoorVisuals_FWDDECL)
#include <Modloader/app/structs/EnemyDoorVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyDoorVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
