#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailsProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailsProfilingSetting_DEFINED)
#include <Modloader/app/structs/MoonTrailsProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTrailsProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTrailsProfilingSetting_DEFINED
struct MoonTrailsProfilingSetting__Class;
struct MoonTrailsProfilingSetting {
    struct MoonTrailsProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct MoonTrailsProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailsProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailsProfilingSetting_FWDDECL
#include <Modloader/app/structs/MoonTrailsProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailsProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailsProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailsProfilingSetting_FWDDECL)
#include <Modloader/app/structs/MoonTrailsProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailsProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
