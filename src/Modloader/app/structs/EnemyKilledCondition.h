#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyKilledCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyKilledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyKilledCondition_DEFINED)
#include <Modloader/app/structs/EnemyKilledCondition__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyKilledCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyKilledCondition_DEFINED
struct EnemyKilledCondition__Class;
struct EnemyKilledCondition {
    struct EnemyKilledCondition__Class* klass;
    MonitorData* monitor;
    struct EnemyKilledCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyKilledCondition_FWDDECL)
#define IL2CPP_STRUCT_EnemyKilledCondition_FWDDECL
#include <Modloader/app/structs/EnemyKilledCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyKilledCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyKilledCondition_DEFINED) && !defined(IL2CPP_STRUCT_EnemyKilledCondition_FWDDECL)
#include <Modloader/app/structs/EnemyKilledCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyKilledCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
