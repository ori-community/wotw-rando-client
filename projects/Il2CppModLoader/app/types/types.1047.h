namespace app {
struct VREvent_t___StaticFields {
};

struct VREvent_t___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VREvent_t___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VREvent_t___VTable vtable;
};

struct IVRSystem_PollNextEvent__VTable {
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

struct IVRSystem_PollNextEvent__StaticFields {
};

struct IVRSystem_PollNextEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_PollNextEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_PollNextEvent__VTable vtable;
};

struct IVRSystem_PollNextEventWithPose__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_PollNextEventWithPose {
    struct IVRSystem_PollNextEventWithPose__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_PollNextEventWithPose__Fields fields;
};

struct IVRSystem_PollNextEventWithPose__VTable {
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

struct IVRSystem_PollNextEventWithPose__StaticFields {
};

struct IVRSystem_PollNextEventWithPose__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_PollNextEventWithPose__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_PollNextEventWithPose__VTable vtable;
};

struct IVRSystem_GetEventTypeNameFromEnum__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetEventTypeNameFromEnum {
    struct IVRSystem_GetEventTypeNameFromEnum__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetEventTypeNameFromEnum__Fields fields;
};

enum class EVREventType__Enum : int32_t {
    VREvent_None = 0x00000000,
    VREvent_TrackedDeviceActivated = 0x00000064,
    VREvent_TrackedDeviceDeactivated = 0x00000065,
    VREvent_TrackedDeviceUpdated = 0x00000066,
    VREvent_TrackedDeviceUserInteractionStarted = 0x00000067,
    VREvent_TrackedDeviceUserInteractionEnded = 0x00000068,
    VREvent_IpdChanged = 0x00000069,
    VREvent_EnterStandbyMode = 0x0000006a,
    VREvent_LeaveStandbyMode = 0x0000006b,
    VREvent_TrackedDeviceRoleChanged = 0x0000006c,
    VREvent_WatchdogWakeUpRequested = 0x0000006d,
    VREvent_LensDistortionChanged = 0x0000006e,
    VREvent_PropertyChanged = 0x0000006f,
    VREvent_WirelessDisconnect = 0x00000070,
    VREvent_WirelessReconnect = 0x00000071,
    VREvent_ButtonPress = 0x000000c8,
    VREvent_ButtonUnpress = 0x000000c9,
    VREvent_ButtonTouch = 0x000000ca,
    VREvent_ButtonUntouch = 0x000000cb,
    VREvent_MouseMove = 0x0000012c,
    VREvent_MouseButtonDown = 0x0000012d,
    VREvent_MouseButtonUp = 0x0000012e,
    VREvent_FocusEnter = 0x0000012f,
    VREvent_FocusLeave = 0x00000130,
    VREvent_Scroll = 0x00000131,
    VREvent_TouchPadMove = 0x00000132,
    VREvent_OverlayFocusChanged = 0x00000133,
    VREvent_InputFocusCaptured = 0x00000190,
    VREvent_InputFocusReleased = 0x00000191,
    VREvent_SceneFocusLost = 0x00000192,
    VREvent_SceneFocusGained = 0x00000193,
    VREvent_SceneApplicationChanged = 0x00000194,
    VREvent_SceneFocusChanged = 0x00000195,
    VREvent_InputFocusChanged = 0x00000196,
    VREvent_SceneApplicationSecondaryRenderingStarted = 0x00000197,
    VREvent_HideRenderModels = 0x0000019a,
    VREvent_ShowRenderModels = 0x0000019b,
    VREvent_OverlayShown = 0x000001f4,
    VREvent_OverlayHidden = 0x000001f5,
    VREvent_DashboardActivated = 0x000001f6,
    VREvent_DashboardDeactivated = 0x000001f7,
    VREvent_DashboardThumbSelected = 0x000001f8,
    VREvent_DashboardRequested = 0x000001f9,
    VREvent_ResetDashboard = 0x000001fa,
    VREvent_RenderToast = 0x000001fb,
    VREvent_ImageLoaded = 0x000001fc,
    VREvent_ShowKeyboard = 0x000001fd,
    VREvent_HideKeyboard = 0x000001fe,
    VREvent_OverlayGamepadFocusGained = 0x000001ff,
    VREvent_OverlayGamepadFocusLost = 0x00000200,
    VREvent_OverlaySharedTextureChanged = 0x00000201,
    VREvent_DashboardGuideButtonDown = 0x00000202,
    VREvent_DashboardGuideButtonUp = 0x00000203,
    VREvent_ScreenshotTriggered = 0x00000204,
    VREvent_ImageFailed = 0x00000205,
    VREvent_DashboardOverlayCreated = 0x00000206,
    VREvent_RequestScreenshot = 0x00000208,
    VREvent_ScreenshotTaken = 0x00000209,
    VREvent_ScreenshotFailed = 0x0000020a,
    VREvent_SubmitScreenshotToDashboard = 0x0000020b,
    VREvent_ScreenshotProgressToDashboard = 0x0000020c,
    VREvent_PrimaryDashboardDeviceChanged = 0x0000020d,
    VREvent_Notification_Shown = 0x00000258,
    VREvent_Notification_Hidden = 0x00000259,
    VREvent_Notification_BeginInteraction = 0x0000025a,
    VREvent_Notification_Destroyed = 0x0000025b,
    VREvent_Quit = 0x000002bc,
    VREvent_ProcessQuit = 0x000002bd,
    VREvent_QuitAborted_UserPrompt = 0x000002be,
    VREvent_QuitAcknowledged = 0x000002bf,
    VREvent_DriverRequestedQuit = 0x000002c0,
    VREvent_ChaperoneDataHasChanged = 0x00000320,
    VREvent_ChaperoneUniverseHasChanged = 0x00000321,
    VREvent_ChaperoneTempDataHasChanged = 0x00000322,
    VREvent_ChaperoneSettingsHaveChanged = 0x00000323,
    VREvent_SeatedZeroPoseReset = 0x00000324,
    VREvent_AudioSettingsHaveChanged = 0x00000334,
    VREvent_BackgroundSettingHasChanged = 0x00000352,
    VREvent_CameraSettingsHaveChanged = 0x00000353,
    VREvent_ReprojectionSettingHasChanged = 0x00000354,
    VREvent_ModelSkinSettingsHaveChanged = 0x00000355,
    VREvent_EnvironmentSettingsHaveChanged = 0x00000356,
    VREvent_PowerSettingsHaveChanged = 0x00000357,
    VREvent_EnableHomeAppSettingsHaveChanged = 0x00000358,
    VREvent_StatusUpdate = 0x00000384,
    VREvent_MCImageUpdated = 0x000003e8,
    VREvent_FirmwareUpdateStarted = 0x0000044c,
    VREvent_FirmwareUpdateFinished = 0x0000044d,
    VREvent_KeyboardClosed = 0x000004b0,
    VREvent_KeyboardCharInput = 0x000004b1,
    VREvent_KeyboardDone = 0x000004b2,
    VREvent_ApplicationTransitionStarted = 0x00000514,
    VREvent_ApplicationTransitionAborted = 0x00000515,
    VREvent_ApplicationTransitionNewAppStarted = 0x00000516,
    VREvent_ApplicationListUpdated = 0x00000517,
    VREvent_ApplicationMimeTypeLoad = 0x00000518,
    VREvent_ApplicationTransitionNewAppLaunchComplete = 0x00000519,
    VREvent_ProcessConnected = 0x0000051a,
    VREvent_ProcessDisconnected = 0x0000051b,
    VREvent_Compositor_MirrorWindowShown = 0x00000578,
    VREvent_Compositor_MirrorWindowHidden = 0x00000579,
    VREvent_Compositor_ChaperoneBoundsShown = 0x00000582,
    VREvent_Compositor_ChaperoneBoundsHidden = 0x00000583,
    VREvent_TrackedCamera_StartVideoStream = 0x000005dc,
    VREvent_TrackedCamera_StopVideoStream = 0x000005dd,
    VREvent_TrackedCamera_PauseVideoStream = 0x000005de,
    VREvent_TrackedCamera_ResumeVideoStream = 0x000005df,
    VREvent_TrackedCamera_EditingSurface = 0x0000060e,
    VREvent_PerformanceTest_EnableCapture = 0x00000640,
    VREvent_PerformanceTest_DisableCapture = 0x00000641,
    VREvent_PerformanceTest_FidelityLevel = 0x00000642,
    VREvent_MessageOverlay_Closed = 0x00000672,
    VREvent_MessageOverlayCloseRequested = 0x00000673,
    VREvent_VendorSpecific_Reserved_Start = 0x00002710,
    VREvent_VendorSpecific_Reserved_End = 0x00004e1f,
};

struct EVREventType__Enum__Boxed {
    struct EVREventType__Enum__Class *klass;
    MonitorData *monitor;
    EVREventType__Enum value;
    
};

struct EVREventType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct EVREventType__Enum__StaticFields {
};

struct EVREventType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVREventType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVREventType__Enum__VTable vtable;
};

struct IVRSystem_GetEventTypeNameFromEnum__VTable {
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

struct IVRSystem_GetEventTypeNameFromEnum__StaticFields {
};

struct IVRSystem_GetEventTypeNameFromEnum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetEventTypeNameFromEnum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetEventTypeNameFromEnum__VTable vtable;
};

struct IVRSystem_GetHiddenAreaMesh__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetHiddenAreaMesh {
    struct IVRSystem_GetHiddenAreaMesh__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetHiddenAreaMesh__Fields fields;
};

struct HiddenAreaMesh_t {
    void *pVertexData;
    uint32_t unTriangleCount;
};

struct HiddenAreaMesh_t__Boxed {
    struct HiddenAreaMesh_t__Class *klass;
    MonitorData *monitor;
    struct HiddenAreaMesh_t fields;
};

enum class EHiddenAreaMeshType__Enum : int32_t {
    k_eHiddenAreaMesh_Standard = 0x00000000,
    k_eHiddenAreaMesh_Inverse = 0x00000001,
    k_eHiddenAreaMesh_LineLoop = 0x00000002,
    k_eHiddenAreaMesh_Max = 0x00000003,
};

struct EHiddenAreaMeshType__Enum__Boxed {
    struct EHiddenAreaMeshType__Enum__Class *klass;
    MonitorData *monitor;
    EHiddenAreaMeshType__Enum value;
    
};

struct HiddenAreaMesh_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HiddenAreaMesh_t__StaticFields {
};

struct HiddenAreaMesh_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HiddenAreaMesh_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HiddenAreaMesh_t__VTable vtable;
};

struct EHiddenAreaMeshType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct EHiddenAreaMeshType__Enum__StaticFields {
};

struct EHiddenAreaMeshType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EHiddenAreaMeshType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EHiddenAreaMeshType__Enum__VTable vtable;
};

struct IVRSystem_GetHiddenAreaMesh__VTable {
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

struct IVRSystem_GetHiddenAreaMesh__StaticFields {
};

struct IVRSystem_GetHiddenAreaMesh__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetHiddenAreaMesh__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetHiddenAreaMesh__VTable vtable;
};

struct IVRSystem_GetControllerState__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetControllerState {
    struct IVRSystem_GetControllerState__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetControllerState__Fields fields;
};

struct VRControllerAxis_t {
    float x;
    float y;
};

struct VRControllerAxis_t__Boxed {
    struct VRControllerAxis_t__Class *klass;
    MonitorData *monitor;
    struct VRControllerAxis_t fields;
};

struct VRControllerState_t {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    struct VRControllerAxis_t rAxis0;
    struct VRControllerAxis_t rAxis1;
    struct VRControllerAxis_t rAxis2;
    struct VRControllerAxis_t rAxis3;
    struct VRControllerAxis_t rAxis4;
};

struct VRControllerState_t__Boxed {
    struct VRControllerState_t__Class *klass;
    MonitorData *monitor;
    struct VRControllerState_t fields;
};

struct VRControllerAxis_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VRControllerAxis_t__StaticFields {
};

struct VRControllerAxis_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VRControllerAxis_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VRControllerAxis_t__VTable vtable;
};

struct VRControllerState_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VRControllerState_t__StaticFields {
};

struct VRControllerState_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VRControllerState_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VRControllerState_t__VTable vtable;
};

struct VRControllerState_t___VTable {
};

struct VRControllerState_t___StaticFields {
};

struct VRControllerState_t___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VRControllerState_t___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VRControllerState_t___VTable vtable;
};

struct IVRSystem_GetControllerState__VTable {
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

struct IVRSystem_GetControllerState__StaticFields {
};

struct IVRSystem_GetControllerState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetControllerState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetControllerState__VTable vtable;
};

struct IVRSystem_GetControllerStateWithPose__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetControllerStateWithPose {
    struct IVRSystem_GetControllerStateWithPose__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetControllerStateWithPose__Fields fields;
};

struct IVRSystem_GetControllerStateWithPose__VTable {
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

struct IVRSystem_GetControllerStateWithPose__StaticFields {
};

struct IVRSystem_GetControllerStateWithPose__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetControllerStateWithPose__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetControllerStateWithPose__VTable vtable;
};

struct IVRSystem_TriggerHapticPulse__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_TriggerHapticPulse {
    struct IVRSystem_TriggerHapticPulse__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_TriggerHapticPulse__Fields fields;
};

struct IVRSystem_TriggerHapticPulse__VTable {
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

struct IVRSystem_TriggerHapticPulse__StaticFields {
};

struct IVRSystem_TriggerHapticPulse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_TriggerHapticPulse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_TriggerHapticPulse__VTable vtable;
};

struct IVRSystem_GetButtonIdNameFromEnum__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetButtonIdNameFromEnum {
    struct IVRSystem_GetButtonIdNameFromEnum__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetButtonIdNameFromEnum__Fields fields;
};

enum class EVRButtonId__Enum : int32_t {
    k_EButton_System = 0x00000000,
    k_EButton_ApplicationMenu = 0x00000001,
    k_EButton_Grip = 0x00000002,
    k_EButton_DPad_Left = 0x00000003,
    k_EButton_DPad_Up = 0x00000004,
    k_EButton_DPad_Right = 0x00000005,
    k_EButton_DPad_Down = 0x00000006,
    k_EButton_A = 0x00000007,
    k_EButton_ProximitySensor = 0x0000001f,
    k_EButton_Axis0 = 0x00000020,
    k_EButton_Axis1 = 0x00000021,
    k_EButton_Axis2 = 0x00000022,
    k_EButton_Axis3 = 0x00000023,
    k_EButton_Axis4 = 0x00000024,
    k_EButton_SteamVR_Touchpad = 0x00000020,
    k_EButton_SteamVR_Trigger = 0x00000021,
    k_EButton_Dashboard_Back = 0x00000002,
    k_EButton_Max = 0x00000040,
};

struct EVRButtonId__Enum__Boxed {
    struct EVRButtonId__Enum__Class *klass;
    MonitorData *monitor;
    EVRButtonId__Enum value;
    
};

struct EVRButtonId__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct EVRButtonId__Enum__StaticFields {
};

struct EVRButtonId__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVRButtonId__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVRButtonId__Enum__VTable vtable;
};

struct IVRSystem_GetButtonIdNameFromEnum__VTable {
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

struct IVRSystem_GetButtonIdNameFromEnum__StaticFields {
};

struct IVRSystem_GetButtonIdNameFromEnum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetButtonIdNameFromEnum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetButtonIdNameFromEnum__VTable vtable;
};

struct IVRSystem_GetControllerAxisTypeNameFromEnum__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetControllerAxisTypeNameFromEnum {
    struct IVRSystem_GetControllerAxisTypeNameFromEnum__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetControllerAxisTypeNameFromEnum__Fields fields;
};

enum class EVRControllerAxisType__Enum : int32_t {
    k_eControllerAxis_None = 0x00000000,
    k_eControllerAxis_TrackPad = 0x00000001,
    k_eControllerAxis_Joystick = 0x00000002,
    k_eControllerAxis_Trigger = 0x00000003,
};

struct EVRControllerAxisType__Enum__Boxed {
    struct EVRControllerAxisType__Enum__Class *klass;
    MonitorData *monitor;
    EVRControllerAxisType__Enum value;
    
};

struct EVRControllerAxisType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct EVRControllerAxisType__Enum__StaticFields {
};

struct EVRControllerAxisType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVRControllerAxisType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVRControllerAxisType__Enum__VTable vtable;
};

struct IVRSystem_GetControllerAxisTypeNameFromEnum__VTable {
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

struct IVRSystem_GetControllerAxisTypeNameFromEnum__StaticFields {
};

struct IVRSystem_GetControllerAxisTypeNameFromEnum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetControllerAxisTypeNameFromEnum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetControllerAxisTypeNameFromEnum__VTable vtable;
};

struct IVRSystem_CaptureInputFocus__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_CaptureInputFocus {
    struct IVRSystem_CaptureInputFocus__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_CaptureInputFocus__Fields fields;
};

struct IVRSystem_CaptureInputFocus__VTable {
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

struct IVRSystem_CaptureInputFocus__StaticFields {
};

struct IVRSystem_CaptureInputFocus__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_CaptureInputFocus__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_CaptureInputFocus__VTable vtable;
};

struct IVRSystem_ReleaseInputFocus__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_ReleaseInputFocus {
    struct IVRSystem_ReleaseInputFocus__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_ReleaseInputFocus__Fields fields;
};

struct IVRSystem_ReleaseInputFocus__VTable {
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

struct IVRSystem_ReleaseInputFocus__StaticFields {
};

struct IVRSystem_ReleaseInputFocus__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_ReleaseInputFocus__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_ReleaseInputFocus__VTable vtable;
};

struct IVRSystem_IsInputFocusCapturedByAnotherProcess__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_IsInputFocusCapturedByAnotherProcess {
    struct IVRSystem_IsInputFocusCapturedByAnotherProcess__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_IsInputFocusCapturedByAnotherProcess__Fields fields;
};

struct IVRSystem_IsInputFocusCapturedByAnotherProcess__VTable {
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

struct IVRSystem_IsInputFocusCapturedByAnotherProcess__StaticFields {
};

struct IVRSystem_IsInputFocusCapturedByAnotherProcess__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_IsInputFocusCapturedByAnotherProcess__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_IsInputFocusCapturedByAnotherProcess__VTable vtable;
};

struct IVRSystem_DriverDebugRequest__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_DriverDebugRequest {
    struct IVRSystem_DriverDebugRequest__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_DriverDebugRequest__Fields fields;
};

struct IVRSystem_DriverDebugRequest__VTable {
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

struct IVRSystem_DriverDebugRequest__StaticFields {
};

struct IVRSystem_DriverDebugRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_DriverDebugRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_DriverDebugRequest__VTable vtable;
};

struct IVRSystem_PerformFirmwareUpdate__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_PerformFirmwareUpdate {
    struct IVRSystem_PerformFirmwareUpdate__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_PerformFirmwareUpdate__Fields fields;
};

enum class EVRFirmwareError__Enum : int32_t {
    None = 0x00000000,
    Success = 0x00000001,
    Fail = 0x00000002,
};

struct EVRFirmwareError__Enum__Boxed {
    struct EVRFirmwareError__Enum__Class *klass;
    MonitorData *monitor;
    EVRFirmwareError__Enum value;
    
};

struct EVRFirmwareError__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

}
