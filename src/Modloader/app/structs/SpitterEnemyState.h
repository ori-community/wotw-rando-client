#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemyState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyState_DEFINED)
#include <Modloader/app/structs/SpitterEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_SpitterEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemyState_DEFINED
struct SpitterEnemyState__Class;
struct SpitterEnemyState {
    struct SpitterEnemyState__Class* klass;
    MonitorData* monitor;
    struct SpitterEnemyState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemyState_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemyState_FWDDECL
#include <Modloader/app/structs/SpitterEnemyState__Class.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemyState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyState_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemyState_FWDDECL)
#include <Modloader/app/structs/SpitterEnemyState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemyState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
