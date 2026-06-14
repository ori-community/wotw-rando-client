#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LauncherPlantEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LauncherPlantEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LauncherPlantEntity_DEFINED)
#include <Modloader/app/structs/LauncherPlantEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LauncherPlantEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LauncherPlantEntity_DEFINED
struct LauncherPlantEntity__Class;
struct LauncherPlantEntity {
    struct LauncherPlantEntity__Class* klass;
    MonitorData* monitor;
    struct LauncherPlantEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LauncherPlantEntity_FWDDECL)
#define IL2CPP_STRUCT_LauncherPlantEntity_FWDDECL
#include <Modloader/app/structs/LauncherPlantEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_LauncherPlantEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_LauncherPlantEntity_DEFINED) && !defined(IL2CPP_STRUCT_LauncherPlantEntity_FWDDECL)
#include <Modloader/app/structs/LauncherPlantEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LauncherPlantEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
