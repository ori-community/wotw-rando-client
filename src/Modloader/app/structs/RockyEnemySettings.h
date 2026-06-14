#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemySettings_DEFINED)
#include <Modloader/app/structs/RockyEnemySettings__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemySettings_DEFINED
struct RockyEnemySettings__Class;
struct RockyEnemySettings {
    struct RockyEnemySettings__Class* klass;
    MonitorData* monitor;
    struct RockyEnemySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemySettings_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemySettings_FWDDECL
#include <Modloader/app/structs/RockyEnemySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemySettings_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemySettings_FWDDECL)
#include <Modloader/app/structs/RockyEnemySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
