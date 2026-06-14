#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemySettings_DEFINED)
#include <Modloader/app/structs/RammingEnemySettings__Fields.h>
#if defined(IL2CPP_STRUCT_RammingEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemySettings_DEFINED
struct RammingEnemySettings__Class;
struct RammingEnemySettings {
    struct RammingEnemySettings__Class* klass;
    MonitorData* monitor;
    struct RammingEnemySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemySettings_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemySettings_FWDDECL
#include <Modloader/app/structs/RammingEnemySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemySettings_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemySettings_FWDDECL)
#include <Modloader/app/structs/RammingEnemySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
