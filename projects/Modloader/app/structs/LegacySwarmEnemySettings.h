#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySwarmEnemySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySwarmEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings_DEFINED)
#include <Modloader/app/structs/LegacySwarmEnemySettings__Fields.h>
#if defined(IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySwarmEnemySettings_DEFINED
struct LegacySwarmEnemySettings__Class;
struct LegacySwarmEnemySettings {
    struct LegacySwarmEnemySettings__Class* klass;
    MonitorData* monitor;
    struct LegacySwarmEnemySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings_FWDDECL)
#define IL2CPP_STRUCT_LegacySwarmEnemySettings_FWDDECL
#include <Modloader/app/structs/LegacySwarmEnemySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacySwarmEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings_DEFINED) && !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings_FWDDECL)
#include <Modloader/app/structs/LegacySwarmEnemySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySwarmEnemySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
