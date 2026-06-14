#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPlatformInitSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPlatformInitSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlatformInitSettings_DEFINED)
#include <Modloader/app/structs/AkPlatformInitSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkPlatformInitSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPlatformInitSettings_DEFINED
struct AkPlatformInitSettings__Class;
struct AkPlatformInitSettings {
    struct AkPlatformInitSettings__Class* klass;
    MonitorData* monitor;
    struct AkPlatformInitSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPlatformInitSettings_FWDDECL)
#define IL2CPP_STRUCT_AkPlatformInitSettings_FWDDECL
#include <Modloader/app/structs/AkPlatformInitSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPlatformInitSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPlatformInitSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkPlatformInitSettings_FWDDECL)
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
