#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterReflectionProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterReflectionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterReflectionProfilingSetting_DEFINED)
#include <Modloader/app/structs/WaterReflectionProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_WaterReflectionProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterReflectionProfilingSetting_DEFINED
struct WaterReflectionProfilingSetting__Class;
struct WaterReflectionProfilingSetting {
    struct WaterReflectionProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct WaterReflectionProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterReflectionProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_WaterReflectionProfilingSetting_FWDDECL
#include <Modloader/app/structs/WaterReflectionProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterReflectionProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterReflectionProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_WaterReflectionProfilingSetting_FWDDECL)
#include <Modloader/app/structs/WaterReflectionProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterReflectionProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
