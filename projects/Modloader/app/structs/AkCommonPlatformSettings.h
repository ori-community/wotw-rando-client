#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonPlatformSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonPlatformSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonPlatformSettings_DEFINED)
#include <Modloader/app/structs/AkCommonPlatformSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonPlatformSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonPlatformSettings_DEFINED
struct AkCommonPlatformSettings__Class;
struct AkCommonPlatformSettings {
    struct AkCommonPlatformSettings__Class* klass;
    MonitorData* monitor;
    struct AkCommonPlatformSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommonPlatformSettings_FWDDECL)
#define IL2CPP_STRUCT_AkCommonPlatformSettings_FWDDECL
#include <Modloader/app/structs/AkCommonPlatformSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCommonPlatformSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonPlatformSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonPlatformSettings_FWDDECL)
#include <Modloader/app/structs/AkCommonPlatformSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonPlatformSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
