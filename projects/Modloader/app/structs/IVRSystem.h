#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_DEFINED)
#define IL2CPP_STRUCT_IVRSystem_DEFINED
struct IVRSystem_GetRecommendedRenderTargetSize;
struct IVRSystem_GetProjectionMatrix;
struct IVRSystem_GetProjectionRaw;
struct IVRSystem_ComputeDistortion;
struct IVRSystem_GetEyeToHeadTransform;
struct IVRSystem_GetTimeSinceLastVsync;
struct IVRSystem_GetD3D9AdapterIndex;
struct IVRSystem_GetDXGIOutputInfo;
struct IVRSystem_GetOutputDevice;
struct IVRSystem_IsDisplayOnDesktop;
struct IVRSystem_SetDisplayVisibility;
struct IVRSystem_GetDeviceToAbsoluteTrackingPose;
struct IVRSystem_ResetSeatedZeroPose;
struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose;
struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass;
struct IVRSystem_GetTrackedDeviceActivityLevel;
struct IVRSystem_ApplyTransform;
struct IVRSystem_GetTrackedDeviceIndexForControllerRole;
struct IVRSystem_GetControllerRoleForTrackedDeviceIndex;
struct IVRSystem_GetTrackedDeviceClass;
struct IVRSystem_IsTrackedDeviceConnected;
struct IVRSystem_GetBoolTrackedDeviceProperty;
struct IVRSystem_GetFloatTrackedDeviceProperty;
struct IVRSystem_GetInt32TrackedDeviceProperty;
struct IVRSystem_GetUint64TrackedDeviceProperty;
struct IVRSystem_GetMatrix34TrackedDeviceProperty;
struct IVRSystem_GetStringTrackedDeviceProperty;
struct IVRSystem_GetPropErrorNameFromEnum;
struct IVRSystem_PollNextEvent;
struct IVRSystem_PollNextEventWithPose;
struct IVRSystem_GetEventTypeNameFromEnum;
struct IVRSystem_GetHiddenAreaMesh;
struct IVRSystem_GetControllerState;
struct IVRSystem_GetControllerStateWithPose;
struct IVRSystem_TriggerHapticPulse;
struct IVRSystem_GetButtonIdNameFromEnum;
struct IVRSystem_GetControllerAxisTypeNameFromEnum;
struct IVRSystem_CaptureInputFocus;
struct IVRSystem_ReleaseInputFocus;
struct IVRSystem_IsInputFocusCapturedByAnotherProcess;
struct IVRSystem_DriverDebugRequest;
struct IVRSystem_PerformFirmwareUpdate;
struct IVRSystem_AcknowledgeQuit_Exiting;
struct IVRSystem_AcknowledgeQuit_UserPrompt;
struct IVRSystem {
    struct IVRSystem_GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;
    struct IVRSystem_GetProjectionMatrix* GetProjectionMatrix;
    struct IVRSystem_GetProjectionRaw* GetProjectionRaw;
    struct IVRSystem_ComputeDistortion* ComputeDistortion;
    struct IVRSystem_GetEyeToHeadTransform* GetEyeToHeadTransform;
    struct IVRSystem_GetTimeSinceLastVsync* GetTimeSinceLastVsync;
    struct IVRSystem_GetD3D9AdapterIndex* GetD3D9AdapterIndex;
    struct IVRSystem_GetDXGIOutputInfo* GetDXGIOutputInfo;
    struct IVRSystem_GetOutputDevice* GetOutputDevice;
    struct IVRSystem_IsDisplayOnDesktop* IsDisplayOnDesktop;
    struct IVRSystem_SetDisplayVisibility* SetDisplayVisibility;
    struct IVRSystem_GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;
    struct IVRSystem_ResetSeatedZeroPose* ResetSeatedZeroPose;
    struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
    struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;
    struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;
    struct IVRSystem_GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;
    struct IVRSystem_ApplyTransform* ApplyTransform;
    struct IVRSystem_GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;
    struct IVRSystem_GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;
    struct IVRSystem_GetTrackedDeviceClass* GetTrackedDeviceClass;
    struct IVRSystem_IsTrackedDeviceConnected* IsTrackedDeviceConnected;
    struct IVRSystem_GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;
    struct IVRSystem_GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;
    struct IVRSystem_GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;
    struct IVRSystem_GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;
    struct IVRSystem_GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;
    struct IVRSystem_GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;
    struct IVRSystem_GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;
    struct IVRSystem_PollNextEvent* PollNextEvent;
    struct IVRSystem_PollNextEventWithPose* PollNextEventWithPose;
    struct IVRSystem_GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;
    struct IVRSystem_GetHiddenAreaMesh* GetHiddenAreaMesh;
    struct IVRSystem_GetControllerState* GetControllerState;
    struct IVRSystem_GetControllerStateWithPose* GetControllerStateWithPose;
    struct IVRSystem_TriggerHapticPulse* TriggerHapticPulse;
    struct IVRSystem_GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;
    struct IVRSystem_GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;
    struct IVRSystem_CaptureInputFocus* CaptureInputFocus;
    struct IVRSystem_ReleaseInputFocus* ReleaseInputFocus;
    struct IVRSystem_IsInputFocusCapturedByAnotherProcess* IsInputFocusCapturedByAnotherProcess;
    struct IVRSystem_DriverDebugRequest* DriverDebugRequest;
    struct IVRSystem_PerformFirmwareUpdate* PerformFirmwareUpdate;
    struct IVRSystem_AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;
    struct IVRSystem_AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRSystem_FWDDECL)
#define IL2CPP_STRUCT_IVRSystem_FWDDECL
#include <Modloader/app/structs/IVRSystem_AcknowledgeQuit_Exiting.h>
#include <Modloader/app/structs/IVRSystem_AcknowledgeQuit_UserPrompt.h>
#include <Modloader/app/structs/IVRSystem_ApplyTransform.h>
#include <Modloader/app/structs/IVRSystem_CaptureInputFocus.h>
#include <Modloader/app/structs/IVRSystem_ComputeDistortion.h>
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest.h>
#include <Modloader/app/structs/IVRSystem_GetBoolTrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetButtonIdNameFromEnum.h>
#include <Modloader/app/structs/IVRSystem_GetControllerAxisTypeNameFromEnum.h>
#include <Modloader/app/structs/IVRSystem_GetControllerRoleForTrackedDeviceIndex.h>
#include <Modloader/app/structs/IVRSystem_GetControllerState.h>
#include <Modloader/app/structs/IVRSystem_GetControllerStateWithPose.h>
#include <Modloader/app/structs/IVRSystem_GetD3D9AdapterIndex.h>
#include <Modloader/app/structs/IVRSystem_GetDXGIOutputInfo.h>
#include <Modloader/app/structs/IVRSystem_GetDeviceToAbsoluteTrackingPose.h>
#include <Modloader/app/structs/IVRSystem_GetEventTypeNameFromEnum.h>
#include <Modloader/app/structs/IVRSystem_GetEyeToHeadTransform.h>
#include <Modloader/app/structs/IVRSystem_GetFloatTrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetHiddenAreaMesh.h>
#include <Modloader/app/structs/IVRSystem_GetInt32TrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetMatrix34TrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetOutputDevice.h>
#include <Modloader/app/structs/IVRSystem_GetProjectionMatrix.h>
#include <Modloader/app/structs/IVRSystem_GetProjectionRaw.h>
#include <Modloader/app/structs/IVRSystem_GetPropErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Modloader/app/structs/IVRSystem_GetRecommendedRenderTargetSize.h>
#include <Modloader/app/structs/IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose.h>
#include <Modloader/app/structs/IVRSystem_GetSortedTrackedDeviceIndicesOfClass.h>
#include <Modloader/app/structs/IVRSystem_GetStringTrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_GetTimeSinceLastVsync.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceActivityLevel.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceClass.h>
#include <Modloader/app/structs/IVRSystem_GetTrackedDeviceIndexForControllerRole.h>
#include <Modloader/app/structs/IVRSystem_GetUint64TrackedDeviceProperty.h>
#include <Modloader/app/structs/IVRSystem_IsDisplayOnDesktop.h>
#include <Modloader/app/structs/IVRSystem_IsInputFocusCapturedByAnotherProcess.h>
#include <Modloader/app/structs/IVRSystem_IsTrackedDeviceConnected.h>
#include <Modloader/app/structs/IVRSystem_PerformFirmwareUpdate.h>
#include <Modloader/app/structs/IVRSystem_PollNextEvent.h>
#include <Modloader/app/structs/IVRSystem_PollNextEventWithPose.h>
#include <Modloader/app/structs/IVRSystem_ReleaseInputFocus.h>
#include <Modloader/app/structs/IVRSystem_ResetSeatedZeroPose.h>
#include <Modloader/app/structs/IVRSystem_SetDisplayVisibility.h>
#include <Modloader/app/structs/IVRSystem_TriggerHapticPulse.h>
#endif
#undef IL2CPP_STRUCT_IVRSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_DEFINED) && !defined(IL2CPP_STRUCT_IVRSystem_FWDDECL)
#include <Modloader/app/structs/IVRSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
