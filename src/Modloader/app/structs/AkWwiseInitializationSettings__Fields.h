#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_DEFINED)
#include <Modloader/app/structs/AkCommonPlatformSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonPlatformSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_DEFINED
struct List_1_System_String_;
struct List_1_AkWwiseInitializationSettings_PlatformSettings_;
struct AkCommonUserSettings;
struct AkCommonAdvancedSettings;
struct AkCommonCommSettings;
struct MoonIntegrationSettings;
struct AkWwiseInitializationSettings__Fields {
    struct AkCommonPlatformSettings__Fields _;
    struct List_1_System_String_* PlatformSettingsNameList;
    struct List_1_AkWwiseInitializationSettings_PlatformSettings_* PlatformSettingsList;
    struct List_1_System_String_* InvalidReferencePlatforms;
    struct AkCommonUserSettings* UserSettings;
    struct AkCommonAdvancedSettings* AdvancedSettings;
    struct AkCommonCommSettings* CommsSettings;
    struct MoonIntegrationSettings* MoonSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_FWDDECL
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#include <Modloader/app/structs/AkCommonCommSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/List_1_AkWwiseInitializationSettings_PlatformSettings_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/MoonIntegrationSettings.h>
#endif
#undef IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkWwiseInitializationSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWwiseInitializationSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
