#include <Il2CppModLoader/app/types/BrowserCursor.h>
#include <Il2CppModLoader/app/types/BrowserCursor_CursorInfo.h>
#include <Il2CppModLoader/app/types/BrowserCursor_c.h>
#include <Il2CppModLoader/app/types/BrowserNative_ChangeFunc.h>
#include <Il2CppModLoader/app/types/BrowserNative_ChangeType__Enum.h>
#include <Il2CppModLoader/app/types/BrowserNative_ConsoleFunc.h>
#include <Il2CppModLoader/app/types/BrowserNative_CursorType__Enum.h>
#include <Il2CppModLoader/app/types/BrowserNative_DialogType__Enum.h>
#include <Il2CppModLoader/app/types/BrowserNative_DownloadAction__Enum.h>
#include <Il2CppModLoader/app/types/BrowserNative_ForwardJSCallFunc.h>
#include <Il2CppModLoader/app/types/BrowserNative_FrameCommand__Enum.h>
#include <Il2CppModLoader/app/types/BrowserNative_MessageFunc.h>
#include <Il2CppModLoader/app/types/BrowserNative_NewRequestFunc.h>
#include <Il2CppModLoader/app/types/BrowserNative_NewWindowFunc.h>
#include <Il2CppModLoader/app/types/Browser_JSCallback.h>
#include <Il2CppModLoader/app/types/Browser_c.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass105_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass105_1.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass108_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass108_1.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass121_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass122_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass123_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass124_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass140_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass143_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass148_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass149_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass150_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass153_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass160_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass171_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass172_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass173_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass174_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass175_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass176_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass177_0.h>
#include <Il2CppModLoader/app/types/Browser_c_DisplayClass178_0.h>
#include <Il2CppModLoader/app/types/CVRApplications.h>
#include <Il2CppModLoader/app/types/CVRChaperone.h>
#include <Il2CppModLoader/app/types/CVRChaperoneSetup.h>
#include <Il2CppModLoader/app/types/CVRCompositor.h>
#include <Il2CppModLoader/app/types/CVRExtendedDisplay.h>
#include <Il2CppModLoader/app/types/CVROverlay.h>
#include <Il2CppModLoader/app/types/CVROverlay_PollNextOverlayEventPacked.h>
#include <Il2CppModLoader/app/types/CVRRenderModels.h>
#include <Il2CppModLoader/app/types/CVRRenderModels_GetComponentStatePacked.h>
#include <Il2CppModLoader/app/types/CVRScreenshots.h>
#include <Il2CppModLoader/app/types/CVRSettings.h>
#include <Il2CppModLoader/app/types/CVRSystem.h>
#include <Il2CppModLoader/app/types/CVRSystem_GetControllerStatePacked.h>
#include <Il2CppModLoader/app/types/CVRSystem_GetControllerStateWithPosePacked.h>
#include <Il2CppModLoader/app/types/CVRSystem_PollNextEventPacked.h>
#include <Il2CppModLoader/app/types/CVRTrackedCamera.h>
#include <Il2CppModLoader/app/types/EVRScreenshotError__Enum.h>
#include <Il2CppModLoader/app/types/EVRScreenshotPropertyFilenames__Enum.h>
#include <Il2CppModLoader/app/types/EVRScreenshotType__Enum.h>
#include <Il2CppModLoader/app/types/EVRSettingsError__Enum.h>
#include <Il2CppModLoader/app/types/FileLocations_CEFDirs.h>
#include <Il2CppModLoader/app/types/IVRApplications.h>
#include <Il2CppModLoader/app/types/IVRChaperone.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup.h>
#include <Il2CppModLoader/app/types/IVRCompositor.h>
#include <Il2CppModLoader/app/types/IVRDriverManager.h>
#include <Il2CppModLoader/app/types/IVRDriverManager_GetDriverCount.h>
#include <Il2CppModLoader/app/types/IVRDriverManager_GetDriverName.h>
#include <Il2CppModLoader/app/types/IVRExtendedDisplay.h>
#include <Il2CppModLoader/app/types/IVRNotifications.h>
#include <Il2CppModLoader/app/types/IVROverlay.h>
#include <Il2CppModLoader/app/types/IVRRenderModels.h>
#include <Il2CppModLoader/app/types/IVRResources.h>
#include <Il2CppModLoader/app/types/IVRResources_GetResourceFullPath.h>
#include <Il2CppModLoader/app/types/IVRResources_LoadSharedResource.h>
#include <Il2CppModLoader/app/types/IVRScreenshots.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_GetScreenshotPropertyFilename.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_GetScreenshotPropertyType.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_HookScreenshot.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_RequestScreenshot.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_SubmitScreenshot.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_TakeStereoScreenshot.h>
#include <Il2CppModLoader/app/types/IVRScreenshots_UpdateScreenshotProgress.h>
#include <Il2CppModLoader/app/types/IVRSettings.h>
#include <Il2CppModLoader/app/types/IVRSettings_GetBool.h>
#include <Il2CppModLoader/app/types/IVRSettings_GetFloat.h>
#include <Il2CppModLoader/app/types/IVRSettings_GetInt32.h>
#include <Il2CppModLoader/app/types/IVRSettings_GetString.h>
#include <Il2CppModLoader/app/types/IVRSettings_RemoveKeyInSection.h>
#include <Il2CppModLoader/app/types/IVRSettings_RemoveSection.h>
#include <Il2CppModLoader/app/types/IVRSettings_SetBool.h>
#include <Il2CppModLoader/app/types/IVRSettings_SetFloat.h>
#include <Il2CppModLoader/app/types/IVRSettings_SetInt32.h>
#include <Il2CppModLoader/app/types/IVRSettings_SetString.h>
#include <Il2CppModLoader/app/types/IVRSettings_Sync.h>
#include <Il2CppModLoader/app/types/IVRSystem.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera.h>
#include <Il2CppModLoader/app/types/OpenVR.h>
#include <Il2CppModLoader/app/types/OpenVR_COpenVRContext.h>
#include <Il2CppModLoader/app/types/VRControllerState_t_Packed.h>
#include <Il2CppModLoader/app/types/VREvent_t_Packed.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRSettingsError__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRSettingsError__Enum__Class** type_info = (::app::EVRSettingsError__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753EA8));
    }
    namespace IVRSettings_Sync {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_Sync__Class** type_info = (::app::IVRSettings_Sync__Class**)(modloader::win::memory::resolve_rva(0x04727088));
    }
    namespace IVRSettings_SetBool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_SetBool__Class** type_info = (::app::IVRSettings_SetBool__Class**)(modloader::win::memory::resolve_rva(0x04782858));
    }
    namespace IVRSettings_SetInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_SetInt32__Class** type_info = (::app::IVRSettings_SetInt32__Class**)(modloader::win::memory::resolve_rva(0x04780420));
    }
    namespace IVRSettings_SetFloat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_SetFloat__Class** type_info = (::app::IVRSettings_SetFloat__Class**)(modloader::win::memory::resolve_rva(0x047716C0));
    }
    namespace IVRSettings_SetString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_SetString__Class** type_info = (::app::IVRSettings_SetString__Class**)(modloader::win::memory::resolve_rva(0x047885F8));
    }
    namespace IVRSettings_GetBool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_GetBool__Class** type_info = (::app::IVRSettings_GetBool__Class**)(modloader::win::memory::resolve_rva(0x04762200));
    }
    namespace IVRSettings_GetInt32 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_GetInt32__Class** type_info = (::app::IVRSettings_GetInt32__Class**)(modloader::win::memory::resolve_rva(0x04768310));
    }
    namespace IVRSettings_GetFloat {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_GetFloat__Class** type_info = (::app::IVRSettings_GetFloat__Class**)(modloader::win::memory::resolve_rva(0x047871C0));
    }
    namespace IVRSettings_GetString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_GetString__Class** type_info = (::app::IVRSettings_GetString__Class**)(modloader::win::memory::resolve_rva(0x04765D98));
    }
    namespace IVRSettings_RemoveSection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_RemoveSection__Class** type_info = (::app::IVRSettings_RemoveSection__Class**)(modloader::win::memory::resolve_rva(0x047036F8));
    }
    namespace IVRSettings_RemoveKeyInSection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings_RemoveKeyInSection__Class** type_info = (::app::IVRSettings_RemoveKeyInSection__Class**)(modloader::win::memory::resolve_rva(0x0475F9A0));
    }
    namespace IVRScreenshots_RequestScreenshot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_RequestScreenshot__Class** type_info = (::app::IVRScreenshots_RequestScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047971E8));
    }
    namespace EVRScreenshotError__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRScreenshotError__Enum__Class** type_info = (::app::EVRScreenshotError__Enum__Class**)(modloader::win::memory::resolve_rva(0x04795390));
    }
    namespace EVRScreenshotType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRScreenshotType__Enum__Class** type_info = (::app::EVRScreenshotType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04733570));
    }
    namespace IVRScreenshots_HookScreenshot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_HookScreenshot__Class** type_info = (::app::IVRScreenshots_HookScreenshot__Class**)(modloader::win::memory::resolve_rva(0x04753D90));
    }
    namespace IVRScreenshots_GetScreenshotPropertyType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_GetScreenshotPropertyType__Class** type_info = (::app::IVRScreenshots_GetScreenshotPropertyType__Class**)(modloader::win::memory::resolve_rva(0x04765538));
    }
    namespace IVRScreenshots_GetScreenshotPropertyFilename {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_GetScreenshotPropertyFilename__Class** type_info = (::app::IVRScreenshots_GetScreenshotPropertyFilename__Class**)(modloader::win::memory::resolve_rva(0x0477A588));
    }
    namespace EVRScreenshotPropertyFilenames__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRScreenshotPropertyFilenames__Enum__Class** type_info = (::app::EVRScreenshotPropertyFilenames__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C0A8));
    }
    namespace IVRScreenshots_UpdateScreenshotProgress {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_UpdateScreenshotProgress__Class** type_info = (::app::IVRScreenshots_UpdateScreenshotProgress__Class**)(modloader::win::memory::resolve_rva(0x0470F7C8));
    }
    namespace IVRScreenshots_TakeStereoScreenshot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_TakeStereoScreenshot__Class** type_info = (::app::IVRScreenshots_TakeStereoScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047961D8));
    }
    namespace IVRScreenshots_SubmitScreenshot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots_SubmitScreenshot__Class** type_info = (::app::IVRScreenshots_SubmitScreenshot__Class**)(modloader::win::memory::resolve_rva(0x0477CB58));
    }
    namespace IVRResources_LoadSharedResource {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRResources_LoadSharedResource__Class** type_info = (::app::IVRResources_LoadSharedResource__Class**)(modloader::win::memory::resolve_rva(0x0470F940));
    }
    namespace IVRResources_GetResourceFullPath {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRResources_GetResourceFullPath__Class** type_info = (::app::IVRResources_GetResourceFullPath__Class**)(modloader::win::memory::resolve_rva(0x04792AA8));
    }
    namespace IVRDriverManager_GetDriverCount {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRDriverManager_GetDriverCount__Class** type_info = (::app::IVRDriverManager_GetDriverCount__Class**)(modloader::win::memory::resolve_rva(0x0473BE98));
    }
    namespace IVRDriverManager_GetDriverName {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRDriverManager_GetDriverName__Class** type_info = (::app::IVRDriverManager_GetDriverName__Class**)(modloader::win::memory::resolve_rva(0x04713CC8));
    }
    namespace IVRSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem__Class** type_info = (::app::IVRSystem__Class**)(modloader::win::memory::resolve_rva(0x04739C28));
    }
    namespace CVRSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRSystem__Class** type_info = (::app::CVRSystem__Class**)(modloader::win::memory::resolve_rva(0x0476C350));
    }
    namespace CVRSystem_PollNextEventPacked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRSystem_PollNextEventPacked__Class** type_info = (::app::CVRSystem_PollNextEventPacked__Class**)(modloader::win::memory::resolve_rva(0x04743A20));
    }
    namespace VREvent_t_Packed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VREvent_t_Packed__Class** type_info = (::app::VREvent_t_Packed__Class**)(modloader::win::memory::resolve_rva(0x0477C0B0));
    }
    namespace CVRSystem_GetControllerStatePacked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRSystem_GetControllerStatePacked__Class** type_info = (::app::CVRSystem_GetControllerStatePacked__Class**)(modloader::win::memory::resolve_rva(0x0478B868));
    }
    namespace VRControllerState_t_Packed {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VRControllerState_t_Packed__Class** type_info = (::app::VRControllerState_t_Packed__Class**)(modloader::win::memory::resolve_rva(0x04775DD8));
    }
    namespace CVRSystem_GetControllerStateWithPosePacked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRSystem_GetControllerStateWithPosePacked__Class** type_info = (::app::CVRSystem_GetControllerStateWithPosePacked__Class**)(modloader::win::memory::resolve_rva(0x047932F8));
    }
    namespace IVRExtendedDisplay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRExtendedDisplay__Class** type_info = (::app::IVRExtendedDisplay__Class**)(modloader::win::memory::resolve_rva(0x0477A700));
    }
    namespace CVRExtendedDisplay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRExtendedDisplay__Class** type_info = (::app::CVRExtendedDisplay__Class**)(modloader::win::memory::resolve_rva(0x04770C78));
    }
    namespace IVRTrackedCamera {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera__Class** type_info = (::app::IVRTrackedCamera__Class**)(modloader::win::memory::resolve_rva(0x04753558));
    }
    namespace CVRTrackedCamera {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRTrackedCamera__Class** type_info = (::app::CVRTrackedCamera__Class**)(modloader::win::memory::resolve_rva(0x04711DC8));
    }
    namespace IVRApplications {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications__Class** type_info = (::app::IVRApplications__Class**)(modloader::win::memory::resolve_rva(0x047878D8));
    }
    namespace CVRApplications {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRApplications__Class** type_info = (::app::CVRApplications__Class**)(modloader::win::memory::resolve_rva(0x04714AB0));
    }
    namespace IVRChaperone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperone__Class** type_info = (::app::IVRChaperone__Class**)(modloader::win::memory::resolve_rva(0x04754828));
    }
    namespace CVRChaperone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRChaperone__Class** type_info = (::app::CVRChaperone__Class**)(modloader::win::memory::resolve_rva(0x047265B8));
    }
    namespace IVRChaperoneSetup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup__Class** type_info = (::app::IVRChaperoneSetup__Class**)(modloader::win::memory::resolve_rva(0x0471AFA0));
    }
    namespace CVRChaperoneSetup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRChaperoneSetup__Class** type_info = (::app::CVRChaperoneSetup__Class**)(modloader::win::memory::resolve_rva(0x04792898));
    }
    namespace IVRCompositor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor__Class** type_info = (::app::IVRCompositor__Class**)(modloader::win::memory::resolve_rva(0x0475CA60));
    }
    namespace CVRCompositor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRCompositor__Class** type_info = (::app::CVRCompositor__Class**)(modloader::win::memory::resolve_rva(0x0474B9F8));
    }
    namespace IVROverlay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay__Class** type_info = (::app::IVROverlay__Class**)(modloader::win::memory::resolve_rva(0x047460D0));
    }
    namespace CVROverlay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVROverlay__Class** type_info = (::app::CVROverlay__Class**)(modloader::win::memory::resolve_rva(0x0475A408));
    }
    namespace CVROverlay_PollNextOverlayEventPacked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVROverlay_PollNextOverlayEventPacked__Class** type_info = (::app::CVROverlay_PollNextOverlayEventPacked__Class**)(modloader::win::memory::resolve_rva(0x0474D478));
    }
    namespace IVRRenderModels {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRRenderModels__Class** type_info = (::app::IVRRenderModels__Class**)(modloader::win::memory::resolve_rva(0x0472D768));
    }
    namespace CVRRenderModels {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRRenderModels__Class** type_info = (::app::CVRRenderModels__Class**)(modloader::win::memory::resolve_rva(0x04734F80));
    }
    namespace CVRRenderModels_GetComponentStatePacked {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRRenderModels_GetComponentStatePacked__Class** type_info = (::app::CVRRenderModels_GetComponentStatePacked__Class**)(modloader::win::memory::resolve_rva(0x04737590));
    }
    namespace IVRNotifications {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRNotifications__Class** type_info = (::app::IVRNotifications__Class**)(modloader::win::memory::resolve_rva(0x047330A0));
    }
    namespace IVRSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSettings__Class** type_info = (::app::IVRSettings__Class**)(modloader::win::memory::resolve_rva(0x04744670));
    }
    namespace CVRSettings {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRSettings__Class** type_info = (::app::CVRSettings__Class**)(modloader::win::memory::resolve_rva(0x04727340));
    }
    namespace IVRScreenshots {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRScreenshots__Class** type_info = (::app::IVRScreenshots__Class**)(modloader::win::memory::resolve_rva(0x04766368));
    }
    namespace CVRScreenshots {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CVRScreenshots__Class** type_info = (::app::CVRScreenshots__Class**)(modloader::win::memory::resolve_rva(0x0472CB50));
    }
    namespace IVRResources {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRResources__Class** type_info = (::app::IVRResources__Class**)(modloader::win::memory::resolve_rva(0x04703998));
    }
    namespace IVRDriverManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRDriverManager__Class** type_info = (::app::IVRDriverManager__Class**)(modloader::win::memory::resolve_rva(0x04701A08));
    }
    namespace OpenVR_COpenVRContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenVR_COpenVRContext__Class** type_info = (::app::OpenVR_COpenVRContext__Class**)(modloader::win::memory::resolve_rva(0x0478EE18));
    }
    namespace OpenVR {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenVR__Class** type_info = (::app::OpenVR__Class**)(modloader::win::memory::resolve_rva(0x0473A648));
    }
    namespace BrowserNative_ChangeType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_ChangeType__Enum__Class** type_info = (::app::BrowserNative_ChangeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763218));
    }
    namespace BrowserNative_FrameCommand__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_FrameCommand__Enum__Class** type_info = (::app::BrowserNative_FrameCommand__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725368));
    }
    namespace Browser_JSCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_JSCallback__Class** type_info = (::app::Browser_JSCallback__Class**)(modloader::win::memory::resolve_rva(0x0478E2D8));
    }
    namespace BrowserNative_DownloadAction__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_DownloadAction__Enum__Class** type_info = (::app::BrowserNative_DownloadAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x04758A68));
    }
    namespace BrowserNative_DialogType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_DialogType__Enum__Class** type_info = (::app::BrowserNative_DialogType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04798180));
    }
    namespace Browser_c_DisplayClass105_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass105_0__Class** type_info = (::app::Browser_c_DisplayClass105_0__Class**)(modloader::win::memory::resolve_rva(0x0474F900));
    }
    namespace Browser_c_DisplayClass105_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass105_1__Class** type_info = (::app::Browser_c_DisplayClass105_1__Class**)(modloader::win::memory::resolve_rva(0x047632F0));
    }
    namespace Browser_c_DisplayClass108_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass108_0__Class** type_info = (::app::Browser_c_DisplayClass108_0__Class**)(modloader::win::memory::resolve_rva(0x0475DE60));
    }
    namespace Browser_c_DisplayClass108_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass108_1__Class** type_info = (::app::Browser_c_DisplayClass108_1__Class**)(modloader::win::memory::resolve_rva(0x04750F50));
    }
    namespace Browser_c_DisplayClass121_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass121_0__Class** type_info = (::app::Browser_c_DisplayClass121_0__Class**)(modloader::win::memory::resolve_rva(0x0470D278));
    }
    namespace Browser_c_DisplayClass122_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass122_0__Class** type_info = (::app::Browser_c_DisplayClass122_0__Class**)(modloader::win::memory::resolve_rva(0x04790CA8));
    }
    namespace Browser_c_DisplayClass123_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass123_0__Class** type_info = (::app::Browser_c_DisplayClass123_0__Class**)(modloader::win::memory::resolve_rva(0x047012F8));
    }
    namespace Browser_c_DisplayClass124_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass124_0__Class** type_info = (::app::Browser_c_DisplayClass124_0__Class**)(modloader::win::memory::resolve_rva(0x0476ED38));
    }
    namespace Browser_c_DisplayClass140_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass140_0__Class** type_info = (::app::Browser_c_DisplayClass140_0__Class**)(modloader::win::memory::resolve_rva(0x047034A0));
    }
    namespace Browser_c_DisplayClass143_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass143_0__Class** type_info = (::app::Browser_c_DisplayClass143_0__Class**)(modloader::win::memory::resolve_rva(0x0472DCA0));
    }
    namespace Browser_c_DisplayClass148_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass148_0__Class** type_info = (::app::Browser_c_DisplayClass148_0__Class**)(modloader::win::memory::resolve_rva(0x0470CB88));
    }
    namespace Browser_c_DisplayClass149_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass149_0__Class** type_info = (::app::Browser_c_DisplayClass149_0__Class**)(modloader::win::memory::resolve_rva(0x04771678));
    }
    namespace Browser_c_DisplayClass150_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass150_0__Class** type_info = (::app::Browser_c_DisplayClass150_0__Class**)(modloader::win::memory::resolve_rva(0x0475FAE8));
    }
    namespace Browser_c_DisplayClass153_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass153_0__Class** type_info = (::app::Browser_c_DisplayClass153_0__Class**)(modloader::win::memory::resolve_rva(0x04705118));
    }
    namespace Browser_c_DisplayClass160_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass160_0__Class** type_info = (::app::Browser_c_DisplayClass160_0__Class**)(modloader::win::memory::resolve_rva(0x047857B0));
    }
    namespace Browser_c_DisplayClass171_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass171_0__Class** type_info = (::app::Browser_c_DisplayClass171_0__Class**)(modloader::win::memory::resolve_rva(0x047802E0));
    }
    namespace Browser_c_DisplayClass172_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass172_0__Class** type_info = (::app::Browser_c_DisplayClass172_0__Class**)(modloader::win::memory::resolve_rva(0x04736178));
    }
    namespace Browser_c_DisplayClass173_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass173_0__Class** type_info = (::app::Browser_c_DisplayClass173_0__Class**)(modloader::win::memory::resolve_rva(0x04778668));
    }
    namespace Browser_c_DisplayClass174_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass174_0__Class** type_info = (::app::Browser_c_DisplayClass174_0__Class**)(modloader::win::memory::resolve_rva(0x04732268));
    }
    namespace Browser_c_DisplayClass175_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass175_0__Class** type_info = (::app::Browser_c_DisplayClass175_0__Class**)(modloader::win::memory::resolve_rva(0x04771218));
    }
    namespace Browser_c_DisplayClass176_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass176_0__Class** type_info = (::app::Browser_c_DisplayClass176_0__Class**)(modloader::win::memory::resolve_rva(0x0478EB10));
    }
    namespace Browser_c_DisplayClass177_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass177_0__Class** type_info = (::app::Browser_c_DisplayClass177_0__Class**)(modloader::win::memory::resolve_rva(0x0474A8F0));
    }
    namespace Browser_c_DisplayClass178_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c_DisplayClass178_0__Class** type_info = (::app::Browser_c_DisplayClass178_0__Class**)(modloader::win::memory::resolve_rva(0x0478FF38));
    }
    namespace Browser_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Browser_c__Class** type_info = (::app::Browser_c__Class**)(modloader::win::memory::resolve_rva(0x047116C8));
    }
    namespace BrowserCursor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserCursor__Class** type_info = (::app::BrowserCursor__Class**)(modloader::win::memory::resolve_rva(0x047328A8));
    }
    namespace BrowserNative_CursorType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_CursorType__Enum__Class** type_info = (::app::BrowserNative_CursorType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04705488));
    }
    namespace BrowserCursor_CursorInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserCursor_CursorInfo__Class** type_info = (::app::BrowserCursor_CursorInfo__Class**)(modloader::win::memory::resolve_rva(0x04789DE8));
    }
    namespace BrowserCursor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserCursor_c__Class** type_info = (::app::BrowserCursor_c__Class**)(modloader::win::memory::resolve_rva(0x047627A0));
    }
    namespace FileLocations_CEFDirs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileLocations_CEFDirs__Class** type_info = (::app::FileLocations_CEFDirs__Class**)(modloader::win::memory::resolve_rva(0x0470AE50));
    }
    namespace BrowserNative_MessageFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_MessageFunc__Class** type_info = (::app::BrowserNative_MessageFunc__Class**)(modloader::win::memory::resolve_rva(0x0477F1B8));
    }
    namespace BrowserNative_NewRequestFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_NewRequestFunc__Class** type_info = (::app::BrowserNative_NewRequestFunc__Class**)(modloader::win::memory::resolve_rva(0x0476F940));
    }
    namespace BrowserNative_ConsoleFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_ConsoleFunc__Class** type_info = (::app::BrowserNative_ConsoleFunc__Class**)(modloader::win::memory::resolve_rva(0x04786BC8));
    }
    namespace BrowserNative_ForwardJSCallFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_ForwardJSCallFunc__Class** type_info = (::app::BrowserNative_ForwardJSCallFunc__Class**)(modloader::win::memory::resolve_rva(0x04768FD8));
    }
    namespace BrowserNative_NewWindowFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_NewWindowFunc__Class** type_info = (::app::BrowserNative_NewWindowFunc__Class**)(modloader::win::memory::resolve_rva(0x04707600));
    }
    namespace BrowserNative_ChangeFunc {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BrowserNative_ChangeFunc__Class** type_info = (::app::BrowserNative_ChangeFunc__Class**)(modloader::win::memory::resolve_rva(0x04778548));
    }
} // namespace app::classes::types
