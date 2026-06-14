#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRApplications_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRApplications_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRApplications_DEFINED)
#define IL2CPP_STRUCT_IVRApplications_DEFINED
struct IVRApplications_AddApplicationManifest;
struct IVRApplications_RemoveApplicationManifest;
struct IVRApplications_IsApplicationInstalled;
struct IVRApplications_GetApplicationCount;
struct IVRApplications_GetApplicationKeyByIndex;
struct IVRApplications_GetApplicationKeyByProcessId;
struct IVRApplications_LaunchApplication;
struct IVRApplications_LaunchTemplateApplication;
struct IVRApplications_LaunchApplicationFromMimeType;
struct IVRApplications_LaunchDashboardOverlay;
struct IVRApplications_CancelApplicationLaunch;
struct IVRApplications_IdentifyApplication;
struct IVRApplications_GetApplicationProcessId;
struct IVRApplications_GetApplicationsErrorNameFromEnum;
struct IVRApplications_GetApplicationPropertyString;
struct IVRApplications_GetApplicationPropertyBool;
struct IVRApplications_GetApplicationPropertyUint64;
struct IVRApplications_SetApplicationAutoLaunch;
struct IVRApplications_GetApplicationAutoLaunch;
struct IVRApplications_SetDefaultApplicationForMimeType;
struct IVRApplications_GetDefaultApplicationForMimeType;
struct IVRApplications_GetApplicationSupportedMimeTypes;
struct IVRApplications_GetApplicationsThatSupportMimeType;
struct IVRApplications_GetApplicationLaunchArguments;
struct IVRApplications_GetStartingApplication;
struct IVRApplications_GetTransitionState;
struct IVRApplications_PerformApplicationPrelaunchCheck;
struct IVRApplications_GetApplicationsTransitionStateNameFromEnum;
struct IVRApplications_IsQuitUserPromptRequested;
struct IVRApplications_LaunchInternalProcess;
struct IVRApplications_GetCurrentSceneProcessId;
struct IVRApplications {
    struct IVRApplications_AddApplicationManifest* AddApplicationManifest;
    struct IVRApplications_RemoveApplicationManifest* RemoveApplicationManifest;
    struct IVRApplications_IsApplicationInstalled* IsApplicationInstalled;
    struct IVRApplications_GetApplicationCount* GetApplicationCount;
    struct IVRApplications_GetApplicationKeyByIndex* GetApplicationKeyByIndex;
    struct IVRApplications_GetApplicationKeyByProcessId* GetApplicationKeyByProcessId;
    struct IVRApplications_LaunchApplication* LaunchApplication;
    struct IVRApplications_LaunchTemplateApplication* LaunchTemplateApplication;
    struct IVRApplications_LaunchApplicationFromMimeType* LaunchApplicationFromMimeType;
    struct IVRApplications_LaunchDashboardOverlay* LaunchDashboardOverlay;
    struct IVRApplications_CancelApplicationLaunch* CancelApplicationLaunch;
    struct IVRApplications_IdentifyApplication* IdentifyApplication;
    struct IVRApplications_GetApplicationProcessId* GetApplicationProcessId;
    struct IVRApplications_GetApplicationsErrorNameFromEnum* GetApplicationsErrorNameFromEnum;
    struct IVRApplications_GetApplicationPropertyString* GetApplicationPropertyString;
    struct IVRApplications_GetApplicationPropertyBool* GetApplicationPropertyBool;
    struct IVRApplications_GetApplicationPropertyUint64* GetApplicationPropertyUint64;
    struct IVRApplications_SetApplicationAutoLaunch* SetApplicationAutoLaunch;
    struct IVRApplications_GetApplicationAutoLaunch* GetApplicationAutoLaunch;
    struct IVRApplications_SetDefaultApplicationForMimeType* SetDefaultApplicationForMimeType;
    struct IVRApplications_GetDefaultApplicationForMimeType* GetDefaultApplicationForMimeType;
    struct IVRApplications_GetApplicationSupportedMimeTypes* GetApplicationSupportedMimeTypes;
    struct IVRApplications_GetApplicationsThatSupportMimeType* GetApplicationsThatSupportMimeType;
    struct IVRApplications_GetApplicationLaunchArguments* GetApplicationLaunchArguments;
    struct IVRApplications_GetStartingApplication* GetStartingApplication;
    struct IVRApplications_GetTransitionState* GetTransitionState;
    struct IVRApplications_PerformApplicationPrelaunchCheck* PerformApplicationPrelaunchCheck;
    struct IVRApplications_GetApplicationsTransitionStateNameFromEnum* GetApplicationsTransitionStateNameFromEnum;
    struct IVRApplications_IsQuitUserPromptRequested* IsQuitUserPromptRequested;
    struct IVRApplications_LaunchInternalProcess* LaunchInternalProcess;
    struct IVRApplications_GetCurrentSceneProcessId* GetCurrentSceneProcessId;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRApplications_FWDDECL)
#define IL2CPP_STRUCT_IVRApplications_FWDDECL
#include <Modloader/app/structs/IVRApplications_AddApplicationManifest.h>
#include <Modloader/app/structs/IVRApplications_CancelApplicationLaunch.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationAutoLaunch.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationCount.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByIndex.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByProcessId.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationLaunchArguments.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationProcessId.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyBool.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyString.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyUint64.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationSupportedMimeTypes.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationsErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationsThatSupportMimeType.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationsTransitionStateNameFromEnum.h>
#include <Modloader/app/structs/IVRApplications_GetCurrentSceneProcessId.h>
#include <Modloader/app/structs/IVRApplications_GetDefaultApplicationForMimeType.h>
#include <Modloader/app/structs/IVRApplications_GetStartingApplication.h>
#include <Modloader/app/structs/IVRApplications_GetTransitionState.h>
#include <Modloader/app/structs/IVRApplications_IdentifyApplication.h>
#include <Modloader/app/structs/IVRApplications_IsApplicationInstalled.h>
#include <Modloader/app/structs/IVRApplications_IsQuitUserPromptRequested.h>
#include <Modloader/app/structs/IVRApplications_LaunchApplication.h>
#include <Modloader/app/structs/IVRApplications_LaunchApplicationFromMimeType.h>
#include <Modloader/app/structs/IVRApplications_LaunchDashboardOverlay.h>
#include <Modloader/app/structs/IVRApplications_LaunchInternalProcess.h>
#include <Modloader/app/structs/IVRApplications_LaunchTemplateApplication.h>
#include <Modloader/app/structs/IVRApplications_PerformApplicationPrelaunchCheck.h>
#include <Modloader/app/structs/IVRApplications_RemoveApplicationManifest.h>
#include <Modloader/app/structs/IVRApplications_SetApplicationAutoLaunch.h>
#include <Modloader/app/structs/IVRApplications_SetDefaultApplicationForMimeType.h>
#endif
#undef IL2CPP_STRUCT_IVRApplications_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRApplications_DEFINED) && !defined(IL2CPP_STRUCT_IVRApplications_FWDDECL)
#include <Modloader/app/structs/IVRApplications.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRApplications.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
