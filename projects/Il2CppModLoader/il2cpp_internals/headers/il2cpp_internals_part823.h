namespace app {
struct IVRScreenshots_RequestScreenshot {
  struct IVRScreenshots_RequestScreenshot__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_RequestScreenshot__Fields fields;
};
enum EVRScreenshotError__Enum : int32_t {
  EVRScreenshotError__Enum_None = 0,
  EVRScreenshotError__Enum_RequestFailed = 1,
  EVRScreenshotError__Enum_IncompatibleVersion = 100,
  EVRScreenshotError__Enum_NotFound = 101,
  EVRScreenshotError__Enum_BufferTooSmall = 102,
  EVRScreenshotError__Enum_ScreenshotAlreadyInProgress = 108,
};
struct EVRScreenshotError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRScreenshotError__Enum value;
};
enum EVRScreenshotType__Enum : int32_t {
  EVRScreenshotType__Enum_None = 0,
  EVRScreenshotType__Enum_Mono = 1,
  EVRScreenshotType__Enum_Stereo = 2,
  EVRScreenshotType__Enum_Cubemap = 3,
  EVRScreenshotType__Enum_MonoPanorama = 4,
  EVRScreenshotType__Enum_StereoPanorama = 5,
};
struct EVRScreenshotType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRScreenshotType__Enum value;
};
struct IVRScreenshots_RequestScreenshot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_RequestScreenshot__StaticFields {
};
struct IVRScreenshots_RequestScreenshot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_RequestScreenshot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_RequestScreenshot__VTable vtable;
};

struct IVRScreenshots_HookScreenshot__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRScreenshots_HookScreenshot {
  struct IVRScreenshots_HookScreenshot__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_HookScreenshot__Fields fields;
};
struct EVRScreenshotType__Enum__Array {
  struct EVRScreenshotType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum EVRScreenshotType__Enum vector[32];
};
struct IVRScreenshots_HookScreenshot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_HookScreenshot__StaticFields {
};
struct IVRScreenshots_HookScreenshot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_HookScreenshot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_HookScreenshot__VTable vtable;
};

struct IVRScreenshots_GetScreenshotPropertyType__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRScreenshots_GetScreenshotPropertyType {
  struct IVRScreenshots_GetScreenshotPropertyType__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_GetScreenshotPropertyType__Fields fields;
};
struct IVRScreenshots_GetScreenshotPropertyType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_GetScreenshotPropertyType__StaticFields {
};
struct IVRScreenshots_GetScreenshotPropertyType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_GetScreenshotPropertyType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_GetScreenshotPropertyType__VTable vtable;
};

struct IVRScreenshots_GetScreenshotPropertyFilename__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRScreenshots_GetScreenshotPropertyFilename {
  struct IVRScreenshots_GetScreenshotPropertyFilename__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_GetScreenshotPropertyFilename__Fields fields;
};
enum EVRScreenshotPropertyFilenames__Enum : int32_t {
  EVRScreenshotPropertyFilenames__Enum_Preview = 0,
  EVRScreenshotPropertyFilenames__Enum_VR = 1,
};
struct EVRScreenshotPropertyFilenames__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRScreenshotPropertyFilenames__Enum value;
};
struct IVRScreenshots_GetScreenshotPropertyFilename__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_GetScreenshotPropertyFilename__StaticFields {
};
struct IVRScreenshots_GetScreenshotPropertyFilename__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_GetScreenshotPropertyFilename__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_GetScreenshotPropertyFilename__VTable vtable;
};

struct IVRScreenshots_UpdateScreenshotProgress__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRScreenshots_UpdateScreenshotProgress {
  struct IVRScreenshots_UpdateScreenshotProgress__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_UpdateScreenshotProgress__Fields fields;
};
struct IVRScreenshots_UpdateScreenshotProgress__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_UpdateScreenshotProgress__StaticFields {
};
struct IVRScreenshots_UpdateScreenshotProgress__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_UpdateScreenshotProgress__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_UpdateScreenshotProgress__VTable vtable;
};

struct IVRScreenshots_TakeStereoScreenshot__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRScreenshots_TakeStereoScreenshot {
  struct IVRScreenshots_TakeStereoScreenshot__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_TakeStereoScreenshot__Fields fields;
};
struct IVRScreenshots_TakeStereoScreenshot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_TakeStereoScreenshot__StaticFields {
};
struct IVRScreenshots_TakeStereoScreenshot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_TakeStereoScreenshot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_TakeStereoScreenshot__VTable vtable;
};

struct IVRScreenshots_SubmitScreenshot__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRScreenshots_SubmitScreenshot {
  struct IVRScreenshots_SubmitScreenshot__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots_SubmitScreenshot__Fields fields;
};
struct IVRScreenshots_SubmitScreenshot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRScreenshots_SubmitScreenshot__StaticFields {
};
struct IVRScreenshots_SubmitScreenshot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots_SubmitScreenshot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots_SubmitScreenshot__VTable vtable;
};

struct IVRResources_LoadSharedResource__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRResources_LoadSharedResource {
  struct IVRResources_LoadSharedResource__Class *klass;
  struct MonitorData *monitor;
  struct IVRResources_LoadSharedResource__Fields fields;
};
struct IVRResources_LoadSharedResource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRResources_LoadSharedResource__StaticFields {
};
struct IVRResources_LoadSharedResource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRResources_LoadSharedResource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRResources_LoadSharedResource__VTable vtable;
};

struct IVRResources_GetResourceFullPath__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRResources_GetResourceFullPath {
  struct IVRResources_GetResourceFullPath__Class *klass;
  struct MonitorData *monitor;
  struct IVRResources_GetResourceFullPath__Fields fields;
};
struct IVRResources_GetResourceFullPath__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRResources_GetResourceFullPath__StaticFields {
};
struct IVRResources_GetResourceFullPath__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRResources_GetResourceFullPath__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRResources_GetResourceFullPath__VTable vtable;
};

struct IVRDriverManager_GetDriverCount__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRDriverManager_GetDriverCount {
  struct IVRDriverManager_GetDriverCount__Class *klass;
  struct MonitorData *monitor;
  struct IVRDriverManager_GetDriverCount__Fields fields;
};
struct IVRDriverManager_GetDriverCount__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRDriverManager_GetDriverCount__StaticFields {
};
struct IVRDriverManager_GetDriverCount__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRDriverManager_GetDriverCount__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRDriverManager_GetDriverCount__VTable vtable;
};

struct IVRDriverManager_GetDriverName__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRDriverManager_GetDriverName {
  struct IVRDriverManager_GetDriverName__Class *klass;
  struct MonitorData *monitor;
  struct IVRDriverManager_GetDriverName__Fields fields;
};
struct IVRDriverManager_GetDriverName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRDriverManager_GetDriverName__StaticFields {
};
struct IVRDriverManager_GetDriverName__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRDriverManager_GetDriverName__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRDriverManager_GetDriverName__VTable vtable;
};

struct IVRSystem {
  struct IVRSystem_GetRecommendedRenderTargetSize * GetRecommendedRenderTargetSize;
  struct IVRSystem_GetProjectionMatrix * GetProjectionMatrix;
  struct IVRSystem_GetProjectionRaw * GetProjectionRaw;
  struct IVRSystem_ComputeDistortion * ComputeDistortion;
  struct IVRSystem_GetEyeToHeadTransform * GetEyeToHeadTransform;
  struct IVRSystem_GetTimeSinceLastVsync * GetTimeSinceLastVsync;
  struct IVRSystem_GetD3D9AdapterIndex * GetD3D9AdapterIndex;
  struct IVRSystem_GetDXGIOutputInfo * GetDXGIOutputInfo;
  struct IVRSystem_GetOutputDevice * GetOutputDevice;
  struct IVRSystem_IsDisplayOnDesktop * IsDisplayOnDesktop;
  struct IVRSystem_SetDisplayVisibility * SetDisplayVisibility;
  struct IVRSystem_GetDeviceToAbsoluteTrackingPose * GetDeviceToAbsoluteTrackingPose;
  struct IVRSystem_ResetSeatedZeroPose * ResetSeatedZeroPose;
  struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose * GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
  struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose * GetRawZeroPoseToStandingAbsoluteTrackingPose;
  struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass * GetSortedTrackedDeviceIndicesOfClass;
  struct IVRSystem_GetTrackedDeviceActivityLevel * GetTrackedDeviceActivityLevel;
  struct IVRSystem_ApplyTransform * ApplyTransform;
  struct IVRSystem_GetTrackedDeviceIndexForControllerRole * GetTrackedDeviceIndexForControllerRole;
  struct IVRSystem_GetControllerRoleForTrackedDeviceIndex * GetControllerRoleForTrackedDeviceIndex;
  struct IVRSystem_GetTrackedDeviceClass * GetTrackedDeviceClass;
  struct IVRSystem_IsTrackedDeviceConnected * IsTrackedDeviceConnected;
  struct IVRSystem_GetBoolTrackedDeviceProperty * GetBoolTrackedDeviceProperty;
  struct IVRSystem_GetFloatTrackedDeviceProperty * GetFloatTrackedDeviceProperty;
  struct IVRSystem_GetInt32TrackedDeviceProperty * GetInt32TrackedDeviceProperty;
  struct IVRSystem_GetUint64TrackedDeviceProperty * GetUint64TrackedDeviceProperty;
  struct IVRSystem_GetMatrix34TrackedDeviceProperty * GetMatrix34TrackedDeviceProperty;
  struct IVRSystem_GetStringTrackedDeviceProperty * GetStringTrackedDeviceProperty;
  struct IVRSystem_GetPropErrorNameFromEnum * GetPropErrorNameFromEnum;
  struct IVRSystem_PollNextEvent * PollNextEvent;
  struct IVRSystem_PollNextEventWithPose * PollNextEventWithPose;
  struct IVRSystem_GetEventTypeNameFromEnum * GetEventTypeNameFromEnum;
  struct IVRSystem_GetHiddenAreaMesh * GetHiddenAreaMesh;
  struct IVRSystem_GetControllerState * GetControllerState;
  struct IVRSystem_GetControllerStateWithPose * GetControllerStateWithPose;
  struct IVRSystem_TriggerHapticPulse * TriggerHapticPulse;
  struct IVRSystem_GetButtonIdNameFromEnum * GetButtonIdNameFromEnum;
  struct IVRSystem_GetControllerAxisTypeNameFromEnum * GetControllerAxisTypeNameFromEnum;
  struct IVRSystem_CaptureInputFocus * CaptureInputFocus;
  struct IVRSystem_ReleaseInputFocus * ReleaseInputFocus;
  struct IVRSystem_IsInputFocusCapturedByAnotherProcess * IsInputFocusCapturedByAnotherProcess;
  struct IVRSystem_DriverDebugRequest * DriverDebugRequest;
  struct IVRSystem_PerformFirmwareUpdate * PerformFirmwareUpdate;
  struct IVRSystem_AcknowledgeQuit_Exiting * AcknowledgeQuit_Exiting;
  struct IVRSystem_AcknowledgeQuit_UserPrompt * AcknowledgeQuit_UserPrompt;
};
struct IVRSystem__Boxed {
  struct IVRSystem__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem fields;
};
struct __declspec(align(8)) CVRSystem__Fields {
  struct IVRSystem FnTable;
};
struct CVRSystem {
  struct CVRSystem__Class *klass;
  struct MonitorData *monitor;
  struct CVRSystem__Fields fields;
};
struct IVRSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRSystem__StaticFields {
};
struct IVRSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem__VTable vtable;
};
struct CVRSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRSystem__StaticFields {
};
struct CVRSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRSystem__VTable vtable;
};

struct CVRSystem_PollNextEventPacked__Fields {
  struct MulticastDelegate__Fields _;
};
struct CVRSystem_PollNextEventPacked {
  struct CVRSystem_PollNextEventPacked__Class *klass;
  struct MonitorData *monitor;
  struct CVRSystem_PollNextEventPacked__Fields fields;
};
struct VREvent_t_Packed {
  uint32_t eventType;
  uint32_t trackedDeviceIndex;
  float eventAgeSeconds;
  struct VREvent_Data_t data;
};
struct VREvent_t_Packed__Boxed {
  struct VREvent_t_Packed__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_t_Packed fields;
};
struct VREvent_t_Packed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_t_Packed__StaticFields {
};
struct VREvent_t_Packed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_t_Packed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_t_Packed__VTable vtable;
};
struct CVRSystem_PollNextEventPacked__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct CVRSystem_PollNextEventPacked__StaticFields {
};
struct CVRSystem_PollNextEventPacked__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRSystem_PollNextEventPacked__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRSystem_PollNextEventPacked__VTable vtable;
};

struct CVRSystem_GetControllerStatePacked__Fields {
  struct MulticastDelegate__Fields _;
};
struct CVRSystem_GetControllerStatePacked {
  struct CVRSystem_GetControllerStatePacked__Class *klass;
  struct MonitorData *monitor;
  struct CVRSystem_GetControllerStatePacked__Fields fields;
};
struct VRControllerState_t_Packed {
  uint32_t unPacketNum;
  uint64_t ulButtonPressed;
  uint64_t ulButtonTouched;
  struct VRControllerAxis_t rAxis0;
  struct VRControllerAxis_t rAxis1;
  struct VRControllerAxis_t rAxis2;
  struct VRControllerAxis_t rAxis3;
  struct VRControllerAxis_t rAxis4;
};
struct VRControllerState_t_Packed__Boxed {
  struct VRControllerState_t_Packed__Class *klass;
  struct MonitorData *monitor;
  struct VRControllerState_t_Packed fields;
};
struct VRControllerState_t_Packed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VRControllerState_t_Packed__StaticFields {
};
struct VRControllerState_t_Packed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRControllerState_t_Packed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRControllerState_t_Packed__VTable vtable;
};
struct CVRSystem_GetControllerStatePacked__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct CVRSystem_GetControllerStatePacked__StaticFields {
};
struct CVRSystem_GetControllerStatePacked__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRSystem_GetControllerStatePacked__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRSystem_GetControllerStatePacked__VTable vtable;
};

struct CVRSystem_GetControllerStateWithPosePacked__Fields {
  struct MulticastDelegate__Fields _;
};
struct CVRSystem_GetControllerStateWithPosePacked {
  struct CVRSystem_GetControllerStateWithPosePacked__Class *klass;
  struct MonitorData *monitor;
  struct CVRSystem_GetControllerStateWithPosePacked__Fields fields;
};
struct CVRSystem_GetControllerStateWithPosePacked__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct CVRSystem_GetControllerStateWithPosePacked__StaticFields {
};
struct CVRSystem_GetControllerStateWithPosePacked__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRSystem_GetControllerStateWithPosePacked__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRSystem_GetControllerStateWithPosePacked__VTable vtable;
};

struct IVRExtendedDisplay {
  struct IVRExtendedDisplay_GetWindowBounds * GetWindowBounds;
  struct IVRExtendedDisplay_GetEyeOutputViewport * GetEyeOutputViewport;
  struct IVRExtendedDisplay_GetDXGIOutputInfo * GetDXGIOutputInfo;
};
struct IVRExtendedDisplay__Boxed {
  struct IVRExtendedDisplay__Class *klass;
  struct MonitorData *monitor;
  struct IVRExtendedDisplay fields;
};
struct __declspec(align(8)) CVRExtendedDisplay__Fields {
  struct IVRExtendedDisplay FnTable;
};
struct CVRExtendedDisplay {
  struct CVRExtendedDisplay__Class *klass;
  struct MonitorData *monitor;
  struct CVRExtendedDisplay__Fields fields;
};
struct IVRExtendedDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRExtendedDisplay__StaticFields {
};
struct IVRExtendedDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRExtendedDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRExtendedDisplay__VTable vtable;
};
struct CVRExtendedDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRExtendedDisplay__StaticFields {
};
struct CVRExtendedDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRExtendedDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRExtendedDisplay__VTable vtable;
};

struct IVRTrackedCamera {
  struct IVRTrackedCamera_GetCameraErrorNameFromEnum * GetCameraErrorNameFromEnum;
  struct IVRTrackedCamera_HasCamera * HasCamera;
  struct IVRTrackedCamera_GetCameraFrameSize * GetCameraFrameSize;
  struct IVRTrackedCamera_GetCameraIntrinsics * GetCameraIntrinsics;
  struct IVRTrackedCamera_GetCameraProjection * GetCameraProjection;
  struct IVRTrackedCamera_AcquireVideoStreamingService * AcquireVideoStreamingService;
  struct IVRTrackedCamera_ReleaseVideoStreamingService * ReleaseVideoStreamingService;
  struct IVRTrackedCamera_GetVideoStreamFrameBuffer * GetVideoStreamFrameBuffer;
  struct IVRTrackedCamera_GetVideoStreamTextureSize * GetVideoStreamTextureSize;
  struct IVRTrackedCamera_GetVideoStreamTextureD3D11 * GetVideoStreamTextureD3D11;
  struct IVRTrackedCamera_GetVideoStreamTextureGL * GetVideoStreamTextureGL;
  struct IVRTrackedCamera_ReleaseVideoStreamTextureGL * ReleaseVideoStreamTextureGL;
};
struct IVRTrackedCamera__Boxed {
  struct IVRTrackedCamera__Class *klass;
  struct MonitorData *monitor;
  struct IVRTrackedCamera fields;
};
struct __declspec(align(8)) CVRTrackedCamera__Fields {
  struct IVRTrackedCamera FnTable;
};
struct CVRTrackedCamera {
  struct CVRTrackedCamera__Class *klass;
  struct MonitorData *monitor;
  struct CVRTrackedCamera__Fields fields;
};
struct IVRTrackedCamera__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRTrackedCamera__StaticFields {
};
struct IVRTrackedCamera__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRTrackedCamera__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRTrackedCamera__VTable vtable;
};
struct CVRTrackedCamera__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRTrackedCamera__StaticFields {
};
struct CVRTrackedCamera__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRTrackedCamera__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRTrackedCamera__VTable vtable;
};

struct IVRApplications {
  struct IVRApplications_AddApplicationManifest * AddApplicationManifest;
  struct IVRApplications_RemoveApplicationManifest * RemoveApplicationManifest;
  struct IVRApplications_IsApplicationInstalled * IsApplicationInstalled;
  struct IVRApplications_GetApplicationCount * GetApplicationCount;
  struct IVRApplications_GetApplicationKeyByIndex * GetApplicationKeyByIndex;
  struct IVRApplications_GetApplicationKeyByProcessId * GetApplicationKeyByProcessId;
  struct IVRApplications_LaunchApplication * LaunchApplication;
  struct IVRApplications_LaunchTemplateApplication * LaunchTemplateApplication;
  struct IVRApplications_LaunchApplicationFromMimeType * LaunchApplicationFromMimeType;
  struct IVRApplications_LaunchDashboardOverlay * LaunchDashboardOverlay;
  struct IVRApplications_CancelApplicationLaunch * CancelApplicationLaunch;
  struct IVRApplications_IdentifyApplication * IdentifyApplication;
  struct IVRApplications_GetApplicationProcessId * GetApplicationProcessId;
  struct IVRApplications_GetApplicationsErrorNameFromEnum * GetApplicationsErrorNameFromEnum;
  struct IVRApplications_GetApplicationPropertyString * GetApplicationPropertyString;
  struct IVRApplications_GetApplicationPropertyBool * GetApplicationPropertyBool;
  struct IVRApplications_GetApplicationPropertyUint64 * GetApplicationPropertyUint64;
  struct IVRApplications_SetApplicationAutoLaunch * SetApplicationAutoLaunch;
  struct IVRApplications_GetApplicationAutoLaunch * GetApplicationAutoLaunch;
  struct IVRApplications_SetDefaultApplicationForMimeType * SetDefaultApplicationForMimeType;
  struct IVRApplications_GetDefaultApplicationForMimeType * GetDefaultApplicationForMimeType;
  struct IVRApplications_GetApplicationSupportedMimeTypes * GetApplicationSupportedMimeTypes;
  struct IVRApplications_GetApplicationsThatSupportMimeType * GetApplicationsThatSupportMimeType;
  struct IVRApplications_GetApplicationLaunchArguments * GetApplicationLaunchArguments;
  struct IVRApplications_GetStartingApplication * GetStartingApplication;
  struct IVRApplications_GetTransitionState * GetTransitionState;
  struct IVRApplications_PerformApplicationPrelaunchCheck * PerformApplicationPrelaunchCheck;
  struct IVRApplications_GetApplicationsTransitionStateNameFromEnum * GetApplicationsTransitionStateNameFromEnum;
  struct IVRApplications_IsQuitUserPromptRequested * IsQuitUserPromptRequested;
  struct IVRApplications_LaunchInternalProcess * LaunchInternalProcess;
  struct IVRApplications_GetCurrentSceneProcessId * GetCurrentSceneProcessId;
};
struct IVRApplications__Boxed {
  struct IVRApplications__Class *klass;
  struct MonitorData *monitor;
  struct IVRApplications fields;
};
struct __declspec(align(8)) CVRApplications__Fields {
  struct IVRApplications FnTable;
};
struct CVRApplications {
  struct CVRApplications__Class *klass;
  struct MonitorData *monitor;
  struct CVRApplications__Fields fields;
};
struct IVRApplications__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRApplications__StaticFields {
};
struct IVRApplications__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRApplications__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRApplications__VTable vtable;
};
struct CVRApplications__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRApplications__StaticFields {
};
struct CVRApplications__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRApplications__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRApplications__VTable vtable;
};

struct IVRChaperone {
  struct IVRChaperone_GetCalibrationState * GetCalibrationState;
  struct IVRChaperone_GetPlayAreaSize * GetPlayAreaSize;
  struct IVRChaperone_GetPlayAreaRect * GetPlayAreaRect;
  struct IVRChaperone_ReloadInfo * ReloadInfo;
  struct IVRChaperone_SetSceneColor * SetSceneColor;
  struct IVRChaperone_GetBoundsColor * GetBoundsColor;
  struct IVRChaperone_AreBoundsVisible * AreBoundsVisible;
  struct IVRChaperone_ForceBoundsVisible * ForceBoundsVisible;
};
struct IVRChaperone__Boxed {
  struct IVRChaperone__Class *klass;
  struct MonitorData *monitor;
  struct IVRChaperone fields;
};
struct __declspec(align(8)) CVRChaperone__Fields {
  struct IVRChaperone FnTable;
};
struct CVRChaperone {
  struct CVRChaperone__Class *klass;
  struct MonitorData *monitor;
  struct CVRChaperone__Fields fields;
};
struct IVRChaperone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRChaperone__StaticFields {
};
struct IVRChaperone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRChaperone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRChaperone__VTable vtable;
};
struct CVRChaperone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRChaperone__StaticFields {
};
struct CVRChaperone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRChaperone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRChaperone__VTable vtable;
};

struct IVRChaperoneSetup {
  struct IVRChaperoneSetup_CommitWorkingCopy * CommitWorkingCopy;
  struct IVRChaperoneSetup_RevertWorkingCopy * RevertWorkingCopy;
  struct IVRChaperoneSetup_GetWorkingPlayAreaSize * GetWorkingPlayAreaSize;
  struct IVRChaperoneSetup_GetWorkingPlayAreaRect * GetWorkingPlayAreaRect;
  struct IVRChaperoneSetup_GetWorkingCollisionBoundsInfo * GetWorkingCollisionBoundsInfo;
  struct IVRChaperoneSetup_GetLiveCollisionBoundsInfo * GetLiveCollisionBoundsInfo;
  struct IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose * GetWorkingSeatedZeroPoseToRawTrackingPose;
  struct IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose * GetWorkingStandingZeroPoseToRawTrackingPose;
  struct IVRChaperoneSetup_SetWorkingPlayAreaSize * SetWorkingPlayAreaSize;
  struct IVRChaperoneSetup_SetWorkingCollisionBoundsInfo * SetWorkingCollisionBoundsInfo;
  struct IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose * SetWorkingSeatedZeroPoseToRawTrackingPose;
  struct IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose * SetWorkingStandingZeroPoseToRawTrackingPose;
  struct IVRChaperoneSetup_ReloadFromDisk * ReloadFromDisk;
  struct IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose * GetLiveSeatedZeroPoseToRawTrackingPose;
  struct IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo * SetWorkingCollisionBoundsTagsInfo;
  struct IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo * GetLiveCollisionBoundsTagsInfo;
  struct IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo * SetWorkingPhysicalBoundsInfo;
  struct IVRChaperoneSetup_GetLivePhysicalBoundsInfo * GetLivePhysicalBoundsInfo;
  struct IVRChaperoneSetup_ExportLiveToBuffer * ExportLiveToBuffer;
  struct IVRChaperoneSetup_ImportFromBufferToWorking * ImportFromBufferToWorking;
};
struct IVRChaperoneSetup__Boxed {
  struct IVRChaperoneSetup__Class *klass;
  struct MonitorData *monitor;
  struct IVRChaperoneSetup fields;
};
struct __declspec(align(8)) CVRChaperoneSetup__Fields {
  struct IVRChaperoneSetup FnTable;
};
struct CVRChaperoneSetup {
  struct CVRChaperoneSetup__Class *klass;
  struct MonitorData *monitor;
  struct CVRChaperoneSetup__Fields fields;
};
struct IVRChaperoneSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRChaperoneSetup__StaticFields {
};
struct IVRChaperoneSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRChaperoneSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRChaperoneSetup__VTable vtable;
};
struct CVRChaperoneSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRChaperoneSetup__StaticFields {
};
struct CVRChaperoneSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRChaperoneSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRChaperoneSetup__VTable vtable;
};}