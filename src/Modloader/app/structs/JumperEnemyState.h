#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemyState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyState_DEFINED)
#include <Modloader/app/structs/JumperEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_JumperEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemyState_DEFINED
struct JumperEnemyState__Class;
struct JumperEnemyState {
    struct JumperEnemyState__Class* klass;
    MonitorData* monitor;
    struct JumperEnemyState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemyState_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemyState_FWDDECL
#include <Modloader/app/structs/JumperEnemyState__Class.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyState_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemyState_FWDDECL)
#include <Modloader/app/structs/JumperEnemyState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemyState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
