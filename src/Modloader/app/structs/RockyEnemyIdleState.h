#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemyIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemyIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyIdleState_DEFINED)
#include <Modloader/app/structs/RockyEnemyIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemyIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemyIdleState_DEFINED
struct RockyEnemyIdleState__Class;
struct RockyEnemyIdleState {
    struct RockyEnemyIdleState__Class* klass;
    MonitorData* monitor;
    struct RockyEnemyIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemyIdleState_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemyIdleState_FWDDECL
#include <Modloader/app/structs/RockyEnemyIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemyIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyIdleState_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemyIdleState_FWDDECL)
#include <Modloader/app/structs/RockyEnemyIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemyIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
