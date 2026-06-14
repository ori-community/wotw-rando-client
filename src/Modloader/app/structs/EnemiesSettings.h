#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemiesSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemiesSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemiesSettings_DEFINED)
#include <Modloader/app/structs/EnemiesSettings__Fields.h>
#if defined(IL2CPP_STRUCT_EnemiesSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemiesSettings_DEFINED
struct EnemiesSettings__Class;
struct EnemiesSettings {
    struct EnemiesSettings__Class* klass;
    MonitorData* monitor;
    struct EnemiesSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemiesSettings_FWDDECL)
#define IL2CPP_STRUCT_EnemiesSettings_FWDDECL
#include <Modloader/app/structs/EnemiesSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_EnemiesSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemiesSettings_DEFINED) && !defined(IL2CPP_STRUCT_EnemiesSettings_FWDDECL)
#include <Modloader/app/structs/EnemiesSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemiesSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
