#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySettings_DEFINED)
#include <Modloader/app/structs/FishEnemySettings__Fields.h>
#if defined(IL2CPP_STRUCT_FishEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemySettings_DEFINED
struct FishEnemySettings__Class;
struct FishEnemySettings {
    struct FishEnemySettings__Class* klass;
    MonitorData* monitor;
    struct FishEnemySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishEnemySettings_FWDDECL)
#define IL2CPP_STRUCT_FishEnemySettings_FWDDECL
#include <Modloader/app/structs/FishEnemySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_FishEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySettings_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemySettings_FWDDECL)
#include <Modloader/app/structs/FishEnemySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
