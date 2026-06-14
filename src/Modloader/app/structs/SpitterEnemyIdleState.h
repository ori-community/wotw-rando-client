#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemyIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemyIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyIdleState_DEFINED)
#include <Modloader/app/structs/SpitterEnemyIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_SpitterEnemyIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemyIdleState_DEFINED
struct SpitterEnemyIdleState__Class;
struct SpitterEnemyIdleState {
    struct SpitterEnemyIdleState__Class* klass;
    MonitorData* monitor;
    struct SpitterEnemyIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemyIdleState_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemyIdleState_FWDDECL
#include <Modloader/app/structs/SpitterEnemyIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemyIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyIdleState_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemyIdleState_FWDDECL)
#include <Modloader/app/structs/SpitterEnemyIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemyIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
