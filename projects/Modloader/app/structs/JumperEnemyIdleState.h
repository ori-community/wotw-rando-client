#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemyIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemyIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyIdleState_DEFINED)
#include <Modloader/app/structs/JumperEnemyIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_JumperEnemyIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemyIdleState_DEFINED
struct JumperEnemyIdleState__Class;
struct JumperEnemyIdleState {
    struct JumperEnemyIdleState__Class* klass;
    MonitorData* monitor;
    struct JumperEnemyIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemyIdleState_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemyIdleState_FWDDECL
#include <Modloader/app/structs/JumperEnemyIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemyIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyIdleState_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemyIdleState_FWDDECL)
#include <Modloader/app/structs/JumperEnemyIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemyIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
