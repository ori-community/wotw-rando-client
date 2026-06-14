#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemyState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyState_DEFINED)
#include <Modloader/app/structs/RammingEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemyState_DEFINED
struct RammingEnemyState__Class;
struct RammingEnemyState {
    struct RammingEnemyState__Class* klass;
    MonitorData* monitor;
    struct RammingEnemyState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemyState_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemyState_FWDDECL
#include <Modloader/app/structs/RammingEnemyState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemyState_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemyState_FWDDECL)
#include <Modloader/app/structs/RammingEnemyState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemyState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
