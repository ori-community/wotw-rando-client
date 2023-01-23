#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllSpawningProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllSpawningProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllSpawningProfilingSetting_DEFINED)
#include <Modloader/app/structs/AllSpawningProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_AllSpawningProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_AllSpawningProfilingSetting_DEFINED
struct AllSpawningProfilingSetting__Class;
struct AllSpawningProfilingSetting {
    struct AllSpawningProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct AllSpawningProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AllSpawningProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_AllSpawningProfilingSetting_FWDDECL
#include <Modloader/app/structs/AllSpawningProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_AllSpawningProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllSpawningProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_AllSpawningProfilingSetting_FWDDECL)
#include <Modloader/app/structs/AllSpawningProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllSpawningProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
