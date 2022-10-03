#include <Il2CppModLoader/app/types/CameraVideoStreamFrameHeader_t.h>
#include <Il2CppModLoader/app/types/EHiddenAreaMeshType__Enum.h>
#include <Il2CppModLoader/app/types/ETextureType__Enum.h>
#include <Il2CppModLoader/app/types/ETrackedControllerRole__Enum.h>
#include <Il2CppModLoader/app/types/ETrackedDeviceClass__Enum.h>
#include <Il2CppModLoader/app/types/ETrackedDeviceProperty__Enum.h>
#include <Il2CppModLoader/app/types/ETrackedPropertyError__Enum.h>
#include <Il2CppModLoader/app/types/ETrackingUniverseOrigin__Enum.h>
#include <Il2CppModLoader/app/types/EVRApplicationError__Enum.h>
#include <Il2CppModLoader/app/types/EVRApplicationProperty__Enum.h>
#include <Il2CppModLoader/app/types/EVRApplicationTransitionState__Enum.h>
#include <Il2CppModLoader/app/types/EVRButtonId__Enum.h>
#include <Il2CppModLoader/app/types/EVRControllerAxisType__Enum.h>
#include <Il2CppModLoader/app/types/EVREventType__Enum.h>
#include <Il2CppModLoader/app/types/EVRTrackedCameraError__Enum.h>
#include <Il2CppModLoader/app/types/EVRTrackedCameraFrameType__Enum.h>
#include <Il2CppModLoader/app/types/HmdVector2_t.h>
#include <Il2CppModLoader/app/types/IVRApplications_AddApplicationManifest.h>
#include <Il2CppModLoader/app/types/IVRApplications_CancelApplicationLaunch.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationAutoLaunch.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationCount.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationKeyByIndex.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationKeyByProcessId.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationLaunchArguments.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationProcessId.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationPropertyBool.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationPropertyString.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationPropertyUint64.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationSupportedMimeTypes.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationsErrorNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationsThatSupportMimeType.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetApplicationsTransitionStateNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetDefaultApplicationForMimeType.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetStartingApplication.h>
#include <Il2CppModLoader/app/types/IVRApplications_GetTransitionState.h>
#include <Il2CppModLoader/app/types/IVRApplications_IdentifyApplication.h>
#include <Il2CppModLoader/app/types/IVRApplications_IsApplicationInstalled.h>
#include <Il2CppModLoader/app/types/IVRApplications_LaunchApplication.h>
#include <Il2CppModLoader/app/types/IVRApplications_LaunchApplicationFromMimeType.h>
#include <Il2CppModLoader/app/types/IVRApplications_LaunchDashboardOverlay.h>
#include <Il2CppModLoader/app/types/IVRApplications_LaunchTemplateApplication.h>
#include <Il2CppModLoader/app/types/IVRApplications_PerformApplicationPrelaunchCheck.h>
#include <Il2CppModLoader/app/types/IVRApplications_RemoveApplicationManifest.h>
#include <Il2CppModLoader/app/types/IVRApplications_SetApplicationAutoLaunch.h>
#include <Il2CppModLoader/app/types/IVRApplications_SetDefaultApplicationForMimeType.h>
#include <Il2CppModLoader/app/types/IVRExtendedDisplay_GetDXGIOutputInfo.h>
#include <Il2CppModLoader/app/types/IVRExtendedDisplay_GetEyeOutputViewport.h>
#include <Il2CppModLoader/app/types/IVRExtendedDisplay_GetWindowBounds.h>
#include <Il2CppModLoader/app/types/IVRSystem_AcknowledgeQuit_Exiting.h>
#include <Il2CppModLoader/app/types/IVRSystem_AcknowledgeQuit_UserPrompt.h>
#include <Il2CppModLoader/app/types/IVRSystem_ApplyTransform.h>
#include <Il2CppModLoader/app/types/IVRSystem_CaptureInputFocus.h>
#include <Il2CppModLoader/app/types/IVRSystem_DriverDebugRequest.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetBoolTrackedDeviceProperty.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetButtonIdNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetControllerAxisTypeNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetControllerRoleForTrackedDeviceIndex.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetControllerState.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetControllerStateWithPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetDeviceToAbsoluteTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetEventTypeNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetFloatTrackedDeviceProperty.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetHiddenAreaMesh.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetInt32TrackedDeviceProperty.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetMatrix34TrackedDeviceProperty.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetPropErrorNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetSortedTrackedDeviceIndicesOfClass.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetStringTrackedDeviceProperty.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetTrackedDeviceActivityLevel.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetTrackedDeviceClass.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetTrackedDeviceIndexForControllerRole.h>
#include <Il2CppModLoader/app/types/IVRSystem_GetUint64TrackedDeviceProperty.h>
#include <Il2CppModLoader/app/types/IVRSystem_IsDisplayOnDesktop.h>
#include <Il2CppModLoader/app/types/IVRSystem_IsInputFocusCapturedByAnotherProcess.h>
#include <Il2CppModLoader/app/types/IVRSystem_IsTrackedDeviceConnected.h>
#include <Il2CppModLoader/app/types/IVRSystem_PerformFirmwareUpdate.h>
#include <Il2CppModLoader/app/types/IVRSystem_PollNextEvent.h>
#include <Il2CppModLoader/app/types/IVRSystem_PollNextEventWithPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_ReleaseInputFocus.h>
#include <Il2CppModLoader/app/types/IVRSystem_ResetSeatedZeroPose.h>
#include <Il2CppModLoader/app/types/IVRSystem_SetDisplayVisibility.h>
#include <Il2CppModLoader/app/types/IVRSystem_TriggerHapticPulse.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_AcquireVideoStreamingService.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetCameraErrorNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetCameraFrameSize.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetCameraIntrinsics.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetCameraProjection.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetVideoStreamFrameBuffer.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetVideoStreamTextureD3D11.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetVideoStreamTextureGL.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_GetVideoStreamTextureSize.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_HasCamera.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_ReleaseVideoStreamTextureGL.h>
#include <Il2CppModLoader/app/types/IVRTrackedCamera_ReleaseVideoStreamingService.h>
#include <Il2CppModLoader/app/types/TrackedDevicePose_t.h>
#include <Il2CppModLoader/app/types/VRControllerState_t.h>
#include <Il2CppModLoader/app/types/VREvent_t.h>
#include <Il2CppModLoader/app/types/VRTextureBounds_t.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ETextureType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETextureType__Enum__Class** type_info = (::app::ETextureType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477D418));
    }
    namespace IVRSystem_IsDisplayOnDesktop {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_IsDisplayOnDesktop__Class** type_info = (::app::IVRSystem_IsDisplayOnDesktop__Class**)(modloader::win::memory::resolve_rva(0x04764AE0));
    }
    namespace IVRSystem_SetDisplayVisibility {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_SetDisplayVisibility__Class** type_info = (::app::IVRSystem_SetDisplayVisibility__Class**)(modloader::win::memory::resolve_rva(0x047249D8));
    }
    namespace IVRSystem_GetDeviceToAbsoluteTrackingPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class** type_info = (::app::IVRSystem_GetDeviceToAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x047791E0));
    }
    namespace ETrackingUniverseOrigin__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackingUniverseOrigin__Enum__Class** type_info = (::app::ETrackingUniverseOrigin__Enum__Class**)(modloader::win::memory::resolve_rva(0x047660C0));
    }
    namespace TrackedDevicePose_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TrackedDevicePose_t__Class** type_info = (::app::TrackedDevicePose_t__Class**)(modloader::win::memory::resolve_rva(0x04759490));
    }
    namespace IVRSystem_ResetSeatedZeroPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_ResetSeatedZeroPose__Class** type_info = (::app::IVRSystem_ResetSeatedZeroPose__Class**)(modloader::win::memory::resolve_rva(0x047955C0));
    }
    namespace IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class** type_info = (::app::IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04761190));
    }
    namespace IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class** type_info = (::app::IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04700DD0));
    }
    namespace IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class** type_info = (::app::IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class**)(modloader::win::memory::resolve_rva(0x0477BD50));
    }
    namespace ETrackedDeviceClass__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackedDeviceClass__Enum__Class** type_info = (::app::ETrackedDeviceClass__Enum__Class**)(modloader::win::memory::resolve_rva(0x047248B0));
    }
    namespace IVRSystem_GetTrackedDeviceActivityLevel {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetTrackedDeviceActivityLevel__Class** type_info = (::app::IVRSystem_GetTrackedDeviceActivityLevel__Class**)(modloader::win::memory::resolve_rva(0x04736180));
    }
    namespace IVRSystem_ApplyTransform {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_ApplyTransform__Class** type_info = (::app::IVRSystem_ApplyTransform__Class**)(modloader::win::memory::resolve_rva(0x04711080));
    }
    namespace IVRSystem_GetTrackedDeviceIndexForControllerRole {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class** type_info = (::app::IVRSystem_GetTrackedDeviceIndexForControllerRole__Class**)(modloader::win::memory::resolve_rva(0x0472CFE8));
    }
    namespace ETrackedControllerRole__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackedControllerRole__Enum__Class** type_info = (::app::ETrackedControllerRole__Enum__Class**)(modloader::win::memory::resolve_rva(0x04722158));
    }
    namespace IVRSystem_GetControllerRoleForTrackedDeviceIndex {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class** type_info = (::app::IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class**)(modloader::win::memory::resolve_rva(0x04760570));
    }
    namespace IVRSystem_GetTrackedDeviceClass {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetTrackedDeviceClass__Class** type_info = (::app::IVRSystem_GetTrackedDeviceClass__Class**)(modloader::win::memory::resolve_rva(0x04702450));
    }
    namespace IVRSystem_IsTrackedDeviceConnected {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_IsTrackedDeviceConnected__Class** type_info = (::app::IVRSystem_IsTrackedDeviceConnected__Class**)(modloader::win::memory::resolve_rva(0x047040F8));
    }
    namespace IVRSystem_GetBoolTrackedDeviceProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetBoolTrackedDeviceProperty__Class** type_info = (::app::IVRSystem_GetBoolTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x047897D8));
    }
    namespace ETrackedDeviceProperty__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackedDeviceProperty__Enum__Class** type_info = (::app::ETrackedDeviceProperty__Enum__Class**)(modloader::win::memory::resolve_rva(0x047104E0));
    }
    namespace ETrackedPropertyError__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ETrackedPropertyError__Enum__Class** type_info = (::app::ETrackedPropertyError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047674F0));
    }
    namespace IVRSystem_GetFloatTrackedDeviceProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetFloatTrackedDeviceProperty__Class** type_info = (::app::IVRSystem_GetFloatTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0477F888));
    }
    namespace IVRSystem_GetInt32TrackedDeviceProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetInt32TrackedDeviceProperty__Class** type_info = (::app::IVRSystem_GetInt32TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0471DDE0));
    }
    namespace IVRSystem_GetUint64TrackedDeviceProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetUint64TrackedDeviceProperty__Class** type_info = (::app::IVRSystem_GetUint64TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x04780B40));
    }
    namespace IVRSystem_GetMatrix34TrackedDeviceProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class** type_info = (::app::IVRSystem_GetMatrix34TrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x0474F8F8));
    }
    namespace IVRSystem_GetStringTrackedDeviceProperty {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetStringTrackedDeviceProperty__Class** type_info = (::app::IVRSystem_GetStringTrackedDeviceProperty__Class**)(modloader::win::memory::resolve_rva(0x04799C00));
    }
    namespace IVRSystem_GetPropErrorNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetPropErrorNameFromEnum__Class** type_info = (::app::IVRSystem_GetPropErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x047578C8));
    }
    namespace IVRSystem_PollNextEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_PollNextEvent__Class** type_info = (::app::IVRSystem_PollNextEvent__Class**)(modloader::win::memory::resolve_rva(0x0478C138));
    }
    namespace VREvent_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VREvent_t__Class** type_info = (::app::VREvent_t__Class**)(modloader::win::memory::resolve_rva(0x0470F4D0));
    }
    namespace IVRSystem_PollNextEventWithPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_PollNextEventWithPose__Class** type_info = (::app::IVRSystem_PollNextEventWithPose__Class**)(modloader::win::memory::resolve_rva(0x0473F728));
    }
    namespace IVRSystem_GetEventTypeNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetEventTypeNameFromEnum__Class** type_info = (::app::IVRSystem_GetEventTypeNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04780860));
    }
    namespace EVREventType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVREventType__Enum__Class** type_info = (::app::EVREventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472C640));
    }
    namespace IVRSystem_GetHiddenAreaMesh {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetHiddenAreaMesh__Class** type_info = (::app::IVRSystem_GetHiddenAreaMesh__Class**)(modloader::win::memory::resolve_rva(0x0472C7A8));
    }
    namespace EHiddenAreaMeshType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EHiddenAreaMeshType__Enum__Class** type_info = (::app::EHiddenAreaMeshType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047109A0));
    }
    namespace IVRSystem_GetControllerState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetControllerState__Class** type_info = (::app::IVRSystem_GetControllerState__Class**)(modloader::win::memory::resolve_rva(0x04787820));
    }
    namespace VRControllerState_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VRControllerState_t__Class** type_info = (::app::VRControllerState_t__Class**)(modloader::win::memory::resolve_rva(0x047473F0));
    }
    namespace IVRSystem_GetControllerStateWithPose {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetControllerStateWithPose__Class** type_info = (::app::IVRSystem_GetControllerStateWithPose__Class**)(modloader::win::memory::resolve_rva(0x0473DC78));
    }
    namespace IVRSystem_TriggerHapticPulse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_TriggerHapticPulse__Class** type_info = (::app::IVRSystem_TriggerHapticPulse__Class**)(modloader::win::memory::resolve_rva(0x04773F58));
    }
    namespace IVRSystem_GetButtonIdNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetButtonIdNameFromEnum__Class** type_info = (::app::IVRSystem_GetButtonIdNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04756460));
    }
    namespace EVRButtonId__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRButtonId__Enum__Class** type_info = (::app::EVRButtonId__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471B7B8));
    }
    namespace IVRSystem_GetControllerAxisTypeNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class** type_info = (::app::IVRSystem_GetControllerAxisTypeNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04771208));
    }
    namespace EVRControllerAxisType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRControllerAxisType__Enum__Class** type_info = (::app::EVRControllerAxisType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047703F0));
    }
    namespace IVRSystem_CaptureInputFocus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_CaptureInputFocus__Class** type_info = (::app::IVRSystem_CaptureInputFocus__Class**)(modloader::win::memory::resolve_rva(0x04796DA0));
    }
    namespace IVRSystem_ReleaseInputFocus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_ReleaseInputFocus__Class** type_info = (::app::IVRSystem_ReleaseInputFocus__Class**)(modloader::win::memory::resolve_rva(0x04768D98));
    }
    namespace IVRSystem_IsInputFocusCapturedByAnotherProcess {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class** type_info = (::app::IVRSystem_IsInputFocusCapturedByAnotherProcess__Class**)(modloader::win::memory::resolve_rva(0x0471CA50));
    }
    namespace IVRSystem_DriverDebugRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_DriverDebugRequest__Class** type_info = (::app::IVRSystem_DriverDebugRequest__Class**)(modloader::win::memory::resolve_rva(0x04703118));
    }
    namespace IVRSystem_PerformFirmwareUpdate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_PerformFirmwareUpdate__Class** type_info = (::app::IVRSystem_PerformFirmwareUpdate__Class**)(modloader::win::memory::resolve_rva(0x047789C8));
    }
    namespace IVRSystem_AcknowledgeQuit_Exiting {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_AcknowledgeQuit_Exiting__Class** type_info = (::app::IVRSystem_AcknowledgeQuit_Exiting__Class**)(modloader::win::memory::resolve_rva(0x0478CE88));
    }
    namespace IVRSystem_AcknowledgeQuit_UserPrompt {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRSystem_AcknowledgeQuit_UserPrompt__Class** type_info = (::app::IVRSystem_AcknowledgeQuit_UserPrompt__Class**)(modloader::win::memory::resolve_rva(0x0473E618));
    }
    namespace IVRExtendedDisplay_GetWindowBounds {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRExtendedDisplay_GetWindowBounds__Class** type_info = (::app::IVRExtendedDisplay_GetWindowBounds__Class**)(modloader::win::memory::resolve_rva(0x04722560));
    }
    namespace IVRExtendedDisplay_GetEyeOutputViewport {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRExtendedDisplay_GetEyeOutputViewport__Class** type_info = (::app::IVRExtendedDisplay_GetEyeOutputViewport__Class**)(modloader::win::memory::resolve_rva(0x0470A300));
    }
    namespace IVRExtendedDisplay_GetDXGIOutputInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRExtendedDisplay_GetDXGIOutputInfo__Class** type_info = (::app::IVRExtendedDisplay_GetDXGIOutputInfo__Class**)(modloader::win::memory::resolve_rva(0x047208F8));
    }
    namespace IVRTrackedCamera_GetCameraErrorNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class** type_info = (::app::IVRTrackedCamera_GetCameraErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04748760));
    }
    namespace EVRTrackedCameraError__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRTrackedCameraError__Enum__Class** type_info = (::app::EVRTrackedCameraError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047678C0));
    }
    namespace IVRTrackedCamera_HasCamera {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_HasCamera__Class** type_info = (::app::IVRTrackedCamera_HasCamera__Class**)(modloader::win::memory::resolve_rva(0x04740668));
    }
    namespace IVRTrackedCamera_GetCameraFrameSize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetCameraFrameSize__Class** type_info = (::app::IVRTrackedCamera_GetCameraFrameSize__Class**)(modloader::win::memory::resolve_rva(0x0477A4E0));
    }
    namespace EVRTrackedCameraFrameType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRTrackedCameraFrameType__Enum__Class** type_info = (::app::EVRTrackedCameraFrameType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790200));
    }
    namespace IVRTrackedCamera_GetCameraIntrinsics {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetCameraIntrinsics__Class** type_info = (::app::IVRTrackedCamera_GetCameraIntrinsics__Class**)(modloader::win::memory::resolve_rva(0x04719220));
    }
    namespace HmdVector2_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HmdVector2_t__Class** type_info = (::app::HmdVector2_t__Class**)(modloader::win::memory::resolve_rva(0x0471A000));
    }
    namespace IVRTrackedCamera_GetCameraProjection {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetCameraProjection__Class** type_info = (::app::IVRTrackedCamera_GetCameraProjection__Class**)(modloader::win::memory::resolve_rva(0x047135B0));
    }
    namespace IVRTrackedCamera_AcquireVideoStreamingService {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_AcquireVideoStreamingService__Class** type_info = (::app::IVRTrackedCamera_AcquireVideoStreamingService__Class**)(modloader::win::memory::resolve_rva(0x04742580));
    }
    namespace IVRTrackedCamera_ReleaseVideoStreamingService {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_ReleaseVideoStreamingService__Class** type_info = (::app::IVRTrackedCamera_ReleaseVideoStreamingService__Class**)(modloader::win::memory::resolve_rva(0x04731678));
    }
    namespace IVRTrackedCamera_GetVideoStreamFrameBuffer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class** type_info = (::app::IVRTrackedCamera_GetVideoStreamFrameBuffer__Class**)(modloader::win::memory::resolve_rva(0x0471E8F0));
    }
    namespace CameraVideoStreamFrameHeader_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraVideoStreamFrameHeader_t__Class** type_info = (::app::CameraVideoStreamFrameHeader_t__Class**)(modloader::win::memory::resolve_rva(0x0473F730));
    }
    namespace IVRTrackedCamera_GetVideoStreamTextureSize {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetVideoStreamTextureSize__Class** type_info = (::app::IVRTrackedCamera_GetVideoStreamTextureSize__Class**)(modloader::win::memory::resolve_rva(0x0476E350));
    }
    namespace VRTextureBounds_t {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VRTextureBounds_t__Class** type_info = (::app::VRTextureBounds_t__Class**)(modloader::win::memory::resolve_rva(0x04790208));
    }
    namespace IVRTrackedCamera_GetVideoStreamTextureD3D11 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetVideoStreamTextureD3D11__Class** type_info = (::app::IVRTrackedCamera_GetVideoStreamTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0473BEA0));
    }
    namespace IVRTrackedCamera_GetVideoStreamTextureGL {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_GetVideoStreamTextureGL__Class** type_info = (::app::IVRTrackedCamera_GetVideoStreamTextureGL__Class**)(modloader::win::memory::resolve_rva(0x04727F20));
    }
    namespace IVRTrackedCamera_ReleaseVideoStreamTextureGL {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class** type_info = (::app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class**)(modloader::win::memory::resolve_rva(0x04767858));
    }
    namespace IVRApplications_AddApplicationManifest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_AddApplicationManifest__Class** type_info = (::app::IVRApplications_AddApplicationManifest__Class**)(modloader::win::memory::resolve_rva(0x0476CF88));
    }
    namespace EVRApplicationError__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRApplicationError__Enum__Class** type_info = (::app::EVRApplicationError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047464B8));
    }
    namespace IVRApplications_RemoveApplicationManifest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_RemoveApplicationManifest__Class** type_info = (::app::IVRApplications_RemoveApplicationManifest__Class**)(modloader::win::memory::resolve_rva(0x0471B3E0));
    }
    namespace IVRApplications_IsApplicationInstalled {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_IsApplicationInstalled__Class** type_info = (::app::IVRApplications_IsApplicationInstalled__Class**)(modloader::win::memory::resolve_rva(0x04746E30));
    }
    namespace IVRApplications_GetApplicationCount {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationCount__Class** type_info = (::app::IVRApplications_GetApplicationCount__Class**)(modloader::win::memory::resolve_rva(0x0478D2A8));
    }
    namespace IVRApplications_GetApplicationKeyByIndex {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationKeyByIndex__Class** type_info = (::app::IVRApplications_GetApplicationKeyByIndex__Class**)(modloader::win::memory::resolve_rva(0x04703548));
    }
    namespace IVRApplications_GetApplicationKeyByProcessId {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationKeyByProcessId__Class** type_info = (::app::IVRApplications_GetApplicationKeyByProcessId__Class**)(modloader::win::memory::resolve_rva(0x0477B5D0));
    }
    namespace IVRApplications_LaunchApplication {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_LaunchApplication__Class** type_info = (::app::IVRApplications_LaunchApplication__Class**)(modloader::win::memory::resolve_rva(0x0473FC18));
    }
    namespace IVRApplications_LaunchTemplateApplication {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_LaunchTemplateApplication__Class** type_info = (::app::IVRApplications_LaunchTemplateApplication__Class**)(modloader::win::memory::resolve_rva(0x04710030));
    }
    namespace IVRApplications_LaunchApplicationFromMimeType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_LaunchApplicationFromMimeType__Class** type_info = (::app::IVRApplications_LaunchApplicationFromMimeType__Class**)(modloader::win::memory::resolve_rva(0x0474D190));
    }
    namespace IVRApplications_LaunchDashboardOverlay {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_LaunchDashboardOverlay__Class** type_info = (::app::IVRApplications_LaunchDashboardOverlay__Class**)(modloader::win::memory::resolve_rva(0x04784570));
    }
    namespace IVRApplications_CancelApplicationLaunch {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_CancelApplicationLaunch__Class** type_info = (::app::IVRApplications_CancelApplicationLaunch__Class**)(modloader::win::memory::resolve_rva(0x04770370));
    }
    namespace IVRApplications_IdentifyApplication {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_IdentifyApplication__Class** type_info = (::app::IVRApplications_IdentifyApplication__Class**)(modloader::win::memory::resolve_rva(0x047238B0));
    }
    namespace IVRApplications_GetApplicationProcessId {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationProcessId__Class** type_info = (::app::IVRApplications_GetApplicationProcessId__Class**)(modloader::win::memory::resolve_rva(0x0472A2D8));
    }
    namespace IVRApplications_GetApplicationsErrorNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationsErrorNameFromEnum__Class** type_info = (::app::IVRApplications_GetApplicationsErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x0477B8D0));
    }
    namespace IVRApplications_GetApplicationPropertyString {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationPropertyString__Class** type_info = (::app::IVRApplications_GetApplicationPropertyString__Class**)(modloader::win::memory::resolve_rva(0x0476F458));
    }
    namespace EVRApplicationProperty__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRApplicationProperty__Enum__Class** type_info = (::app::EVRApplicationProperty__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796988));
    }
    namespace IVRApplications_GetApplicationPropertyBool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationPropertyBool__Class** type_info = (::app::IVRApplications_GetApplicationPropertyBool__Class**)(modloader::win::memory::resolve_rva(0x0470E270));
    }
    namespace IVRApplications_GetApplicationPropertyUint64 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationPropertyUint64__Class** type_info = (::app::IVRApplications_GetApplicationPropertyUint64__Class**)(modloader::win::memory::resolve_rva(0x04774868));
    }
    namespace IVRApplications_SetApplicationAutoLaunch {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_SetApplicationAutoLaunch__Class** type_info = (::app::IVRApplications_SetApplicationAutoLaunch__Class**)(modloader::win::memory::resolve_rva(0x0472F890));
    }
    namespace IVRApplications_GetApplicationAutoLaunch {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationAutoLaunch__Class** type_info = (::app::IVRApplications_GetApplicationAutoLaunch__Class**)(modloader::win::memory::resolve_rva(0x04701F18));
    }
    namespace IVRApplications_SetDefaultApplicationForMimeType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_SetDefaultApplicationForMimeType__Class** type_info = (::app::IVRApplications_SetDefaultApplicationForMimeType__Class**)(modloader::win::memory::resolve_rva(0x04751798));
    }
    namespace IVRApplications_GetDefaultApplicationForMimeType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetDefaultApplicationForMimeType__Class** type_info = (::app::IVRApplications_GetDefaultApplicationForMimeType__Class**)(modloader::win::memory::resolve_rva(0x04713DE0));
    }
    namespace IVRApplications_GetApplicationSupportedMimeTypes {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationSupportedMimeTypes__Class** type_info = (::app::IVRApplications_GetApplicationSupportedMimeTypes__Class**)(modloader::win::memory::resolve_rva(0x04728D10));
    }
    namespace IVRApplications_GetApplicationsThatSupportMimeType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationsThatSupportMimeType__Class** type_info = (::app::IVRApplications_GetApplicationsThatSupportMimeType__Class**)(modloader::win::memory::resolve_rva(0x04706908));
    }
    namespace IVRApplications_GetApplicationLaunchArguments {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationLaunchArguments__Class** type_info = (::app::IVRApplications_GetApplicationLaunchArguments__Class**)(modloader::win::memory::resolve_rva(0x047350C8));
    }
    namespace IVRApplications_GetStartingApplication {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetStartingApplication__Class** type_info = (::app::IVRApplications_GetStartingApplication__Class**)(modloader::win::memory::resolve_rva(0x04734030));
    }
    namespace IVRApplications_GetTransitionState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetTransitionState__Class** type_info = (::app::IVRApplications_GetTransitionState__Class**)(modloader::win::memory::resolve_rva(0x04774310));
    }
    namespace EVRApplicationTransitionState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EVRApplicationTransitionState__Enum__Class** type_info = (::app::EVRApplicationTransitionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472A438));
    }
    namespace IVRApplications_PerformApplicationPrelaunchCheck {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_PerformApplicationPrelaunchCheck__Class** type_info = (::app::IVRApplications_PerformApplicationPrelaunchCheck__Class**)(modloader::win::memory::resolve_rva(0x0471E6C8));
    }
    namespace IVRApplications_GetApplicationsTransitionStateNameFromEnum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class** type_info = (::app::IVRApplications_GetApplicationsTransitionStateNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x0471AB90));
    }
} // namespace app::classes::types
