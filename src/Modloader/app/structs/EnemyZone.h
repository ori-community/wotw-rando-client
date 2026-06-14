#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyZone_DEFINED)
#include <Modloader/app/structs/EnemyZone__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyZone__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyZone_DEFINED
struct EnemyZone__Class;
struct EnemyZone {
    struct EnemyZone__Class* klass;
    MonitorData* monitor;
    struct EnemyZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyZone_FWDDECL)
#define IL2CPP_STRUCT_EnemyZone_FWDDECL
#include <Modloader/app/structs/EnemyZone__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemyZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyZone_DEFINED) && !defined(IL2CPP_STRUCT_EnemyZone_FWDDECL)
#include <Modloader/app/structs/EnemyZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
