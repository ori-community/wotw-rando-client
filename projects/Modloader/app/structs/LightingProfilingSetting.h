#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightingProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightingProfilingSetting_DEFINED)
#include <Modloader/app/structs/LightingProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_LightingProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_LightingProfilingSetting_DEFINED
struct LightingProfilingSetting__Class;
struct LightingProfilingSetting {
    struct LightingProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct LightingProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightingProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_LightingProfilingSetting_FWDDECL
#include <Modloader/app/structs/LightingProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_LightingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightingProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_LightingProfilingSetting_FWDDECL)
#include <Modloader/app/structs/LightingProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightingProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
