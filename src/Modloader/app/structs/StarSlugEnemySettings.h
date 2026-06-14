#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemySettings_DEFINED)
#include <Modloader/app/structs/StarSlugEnemySettings__Fields.h>
#if defined(IL2CPP_STRUCT_StarSlugEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemySettings_DEFINED
struct StarSlugEnemySettings__Class;
struct StarSlugEnemySettings {
    struct StarSlugEnemySettings__Class* klass;
    MonitorData* monitor;
    struct StarSlugEnemySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemySettings_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemySettings_FWDDECL
#include <Modloader/app/structs/StarSlugEnemySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemySettings_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemySettings_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
