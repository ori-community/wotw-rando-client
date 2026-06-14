#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWindowsSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWindowsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWindowsSettings__Fields_DEFINED)
#include <Modloader/app/structs/AkWwiseInitializationSettings_PlatformSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkWwiseInitializationSettings_PlatformSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkWindowsSettings__Fields_DEFINED
struct AkCommonUserSettings;
struct AkWindowsSettings_PlatformAdvancedSettings;
struct AkCommonCommSettings;
struct MoonIntegrationSettings;
struct AkWindowsSettings__Fields {
    struct AkWwiseInitializationSettings_PlatformSettings__Fields _;
    struct AkCommonUserSettings* UserSettings;
    struct AkWindowsSettings_PlatformAdvancedSettings* AdvancedSettings;
    struct AkCommonCommSettings* CommsSettings;
    struct MoonIntegrationSettings* MoonSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkWindowsSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkWindowsSettings__Fields_FWDDECL
#include <Modloader/app/structs/AkCommonCommSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings.h>
#include <Modloader/app/structs/MoonIntegrationSettings.h>
#endif
#undef IL2CPP_STRUCT_AkWindowsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWindowsSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkWindowsSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkWindowsSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWindowsSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
