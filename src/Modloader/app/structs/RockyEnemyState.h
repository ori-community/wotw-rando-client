#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemyState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyState_DEFINED)
#include <Modloader/app/structs/RockyEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemyState_DEFINED
struct RockyEnemyState__Class;
struct RockyEnemyState {
    struct RockyEnemyState__Class* klass;
    MonitorData* monitor;
    struct RockyEnemyState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemyState_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemyState_FWDDECL
#include <Modloader/app/structs/RockyEnemyState__Class.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyState_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemyState_FWDDECL)
#include <Modloader/app/structs/RockyEnemyState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemyState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
