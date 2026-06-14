#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmissivityProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmissivityProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissivityProfilingSetting_DEFINED)
#include <Modloader/app/structs/EmissivityProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_EmissivityProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_EmissivityProfilingSetting_DEFINED
struct EmissivityProfilingSetting__Class;
struct EmissivityProfilingSetting {
    struct EmissivityProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct EmissivityProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmissivityProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_EmissivityProfilingSetting_FWDDECL
#include <Modloader/app/structs/EmissivityProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_EmissivityProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissivityProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_EmissivityProfilingSetting_FWDDECL)
#include <Modloader/app/structs/EmissivityProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmissivityProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
