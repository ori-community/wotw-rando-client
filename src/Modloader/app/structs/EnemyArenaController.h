#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaController_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController_DEFINED)
#include <Modloader/app/structs/EnemyArenaController__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyArenaController__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyArenaController_DEFINED
struct EnemyArenaController__Class;
struct EnemyArenaController {
    struct EnemyArenaController__Class* klass;
    MonitorData* monitor;
    struct EnemyArenaController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaController_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaController_FWDDECL
#include <Modloader/app/structs/EnemyArenaController__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyArenaController_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaController_FWDDECL)
#include <Modloader/app/structs/EnemyArenaController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
