#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEnabledProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEnabledProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEnabledProfilingSetting_DEFINED)
#include <Modloader/app/structs/WwiseEnabledProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseEnabledProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseEnabledProfilingSetting_DEFINED
struct WwiseEnabledProfilingSetting__Class;
struct WwiseEnabledProfilingSetting {
    struct WwiseEnabledProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct WwiseEnabledProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseEnabledProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_WwiseEnabledProfilingSetting_FWDDECL
#include <Modloader/app/structs/WwiseEnabledProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseEnabledProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEnabledProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEnabledProfilingSetting_FWDDECL)
#include <Modloader/app/structs/WwiseEnabledProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEnabledProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
