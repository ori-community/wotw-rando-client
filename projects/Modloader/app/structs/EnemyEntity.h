#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyEntity_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyEntity_DEFINED
struct EnemyEntity__Class;
struct EnemyEntity {
    struct EnemyEntity__Class* klass;
    MonitorData* monitor;
    struct EnemyEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyEntity_FWDDECL)
#define IL2CPP_STRUCT_EnemyEntity_FWDDECL
#include <Modloader/app/structs/EnemyEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyEntity_DEFINED) && !defined(IL2CPP_STRUCT_EnemyEntity_FWDDECL)
#include <Modloader/app/structs/EnemyEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
