#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_DEFINED)
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkUnityPlatformSpecificSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_DEFINED
struct AkUnityPlatformSpecificSettings__Class;
struct AkUnityPlatformSpecificSettings {
    struct AkUnityPlatformSpecificSettings__Class* klass;
    MonitorData* monitor;
    struct AkUnityPlatformSpecificSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_FWDDECL)
#define IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_FWDDECL
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkUnityPlatformSpecificSettings_FWDDECL)
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
