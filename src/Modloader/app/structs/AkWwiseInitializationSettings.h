#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWwiseInitializationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings_DEFINED)
#include <Modloader/app/structs/AkWwiseInitializationSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings_DEFINED
struct AkWwiseInitializationSettings__Class;
struct AkWwiseInitializationSettings {
    struct AkWwiseInitializationSettings__Class* klass;
    MonitorData* monitor;
    struct AkWwiseInitializationSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings_FWDDECL)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings_FWDDECL
#include <Modloader/app/structs/AkWwiseInitializationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkWwiseInitializationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings_FWDDECL)
#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
