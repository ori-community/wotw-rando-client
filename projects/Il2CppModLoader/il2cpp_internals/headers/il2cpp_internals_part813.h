namespace app {
struct VREvent_Keyboard_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Keyboard_t__StaticFields {
};
struct VREvent_Keyboard_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Keyboard_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Keyboard_t__VTable vtable;
};
struct VREvent_Data_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Data_t__StaticFields {
};
struct VREvent_Data_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Data_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Data_t__VTable vtable;
};
struct VREvent_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_t__StaticFields {
};
struct VREvent_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_t__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_PollNextEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_PollNextEvent__VTable vtable;
};

struct IVRSystem_PollNextEventWithPose__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_PollNextEventWithPose {
  struct IVRSystem_PollNextEventWithPose__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_PollNextEventWithPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_PollNextEventWithPose__VTable vtable;
};

struct IVRSystem_GetEventTypeNameFromEnum__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetEventTypeNameFromEnum {
  struct IVRSystem_GetEventTypeNameFromEnum__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetEventTypeNameFromEnum__Fields fields;
};
enum EVREventType__Enum : int32_t {
  EVREventType__Enum_VREvent_None = 0,
  EVREventType__Enum_VREvent_TrackedDeviceActivated = 100,
  EVREventType__Enum_VREvent_TrackedDeviceDeactivated = 101,
  EVREventType__Enum_VREvent_TrackedDeviceUpdated = 102,
  EVREventType__Enum_VREvent_TrackedDeviceUserInteractionStarted = 103,
  EVREventType__Enum_VREvent_TrackedDeviceUserInteractionEnded = 104,
  EVREventType__Enum_VREvent_IpdChanged = 105,
  EVREventType__Enum_VREvent_EnterStandbyMode = 106,
  EVREventType__Enum_VREvent_LeaveStandbyMode = 107,
  EVREventType__Enum_VREvent_TrackedDeviceRoleChanged = 108,
  EVREventType__Enum_VREvent_WatchdogWakeUpRequested = 109,
  EVREventType__Enum_VREvent_LensDistortionChanged = 110,
  EVREventType__Enum_VREvent_PropertyChanged = 111,
  EVREventType__Enum_VREvent_WirelessDisconnect = 112,
  EVREventType__Enum_VREvent_WirelessReconnect = 113,
  EVREventType__Enum_VREvent_ButtonPress = 200,
  EVREventType__Enum_VREvent_ButtonUnpress = 201,
  EVREventType__Enum_VREvent_ButtonTouch = 202,
  EVREventType__Enum_VREvent_ButtonUntouch = 203,
  EVREventType__Enum_VREvent_MouseMove = 300,
  EVREventType__Enum_VREvent_MouseButtonDown = 301,
  EVREventType__Enum_VREvent_MouseButtonUp = 302,
  EVREventType__Enum_VREvent_FocusEnter = 303,
  EVREventType__Enum_VREvent_FocusLeave = 304,
  EVREventType__Enum_VREvent_Scroll = 305,
  EVREventType__Enum_VREvent_TouchPadMove = 306,
  EVREventType__Enum_VREvent_OverlayFocusChanged = 307,
  EVREventType__Enum_VREvent_InputFocusCaptured = 400,
  EVREventType__Enum_VREvent_InputFocusReleased = 401,
  EVREventType__Enum_VREvent_SceneFocusLost = 402,
  EVREventType__Enum_VREvent_SceneFocusGained = 403,
  EVREventType__Enum_VREvent_SceneApplicationChanged = 404,
  EVREventType__Enum_VREvent_SceneFocusChanged = 405,
  EVREventType__Enum_VREvent_InputFocusChanged = 406,
  EVREventType__Enum_VREvent_SceneApplicationSecondaryRenderingStarted = 407,
  EVREventType__Enum_VREvent_HideRenderModels = 410,
  EVREventType__Enum_VREvent_ShowRenderModels = 411,
  EVREventType__Enum_VREvent_OverlayShown = 500,
  EVREventType__Enum_VREvent_OverlayHidden = 501,
  EVREventType__Enum_VREvent_DashboardActivated = 502,
  EVREventType__Enum_VREvent_DashboardDeactivated = 503,
  EVREventType__Enum_VREvent_DashboardThumbSelected = 504,
  EVREventType__Enum_VREvent_DashboardRequested = 505,
  EVREventType__Enum_VREvent_ResetDashboard = 506,
  EVREventType__Enum_VREvent_RenderToast = 507,
  EVREventType__Enum_VREvent_ImageLoaded = 508,
  EVREventType__Enum_VREvent_ShowKeyboard = 509,
  EVREventType__Enum_VREvent_HideKeyboard = 510,
  EVREventType__Enum_VREvent_OverlayGamepadFocusGained = 511,
  EVREventType__Enum_VREvent_OverlayGamepadFocusLost = 512,
  EVREventType__Enum_VREvent_OverlaySharedTextureChanged = 513,
  EVREventType__Enum_VREvent_DashboardGuideButtonDown = 514,
  EVREventType__Enum_VREvent_DashboardGuideButtonUp = 515,
  EVREventType__Enum_VREvent_ScreenshotTriggered = 516,
  EVREventType__Enum_VREvent_ImageFailed = 517,
  EVREventType__Enum_VREvent_DashboardOverlayCreated = 518,
  EVREventType__Enum_VREvent_RequestScreenshot = 520,
  EVREventType__Enum_VREvent_ScreenshotTaken = 521,
  EVREventType__Enum_VREvent_ScreenshotFailed = 522,
  EVREventType__Enum_VREvent_SubmitScreenshotToDashboard = 523,
  EVREventType__Enum_VREvent_ScreenshotProgressToDashboard = 524,
  EVREventType__Enum_VREvent_PrimaryDashboardDeviceChanged = 525,
  EVREventType__Enum_VREvent_Notification_Shown = 600,
  EVREventType__Enum_VREvent_Notification_Hidden = 601,
  EVREventType__Enum_VREvent_Notification_BeginInteraction = 602,
  EVREventType__Enum_VREvent_Notification_Destroyed = 603,
  EVREventType__Enum_VREvent_Quit = 700,
  EVREventType__Enum_VREvent_ProcessQuit = 701,
  EVREventType__Enum_VREvent_QuitAborted_UserPrompt = 702,
  EVREventType__Enum_VREvent_QuitAcknowledged = 703,
  EVREventType__Enum_VREvent_DriverRequestedQuit = 704,
  EVREventType__Enum_VREvent_ChaperoneDataHasChanged = 800,
  EVREventType__Enum_VREvent_ChaperoneUniverseHasChanged = 801,
  EVREventType__Enum_VREvent_ChaperoneTempDataHasChanged = 802,
  EVREventType__Enum_VREvent_ChaperoneSettingsHaveChanged = 803,
  EVREventType__Enum_VREvent_SeatedZeroPoseReset = 804,
  EVREventType__Enum_VREvent_AudioSettingsHaveChanged = 820,
  EVREventType__Enum_VREvent_BackgroundSettingHasChanged = 850,
  EVREventType__Enum_VREvent_CameraSettingsHaveChanged = 851,
  EVREventType__Enum_VREvent_ReprojectionSettingHasChanged = 852,
  EVREventType__Enum_VREvent_ModelSkinSettingsHaveChanged = 853,
  EVREventType__Enum_VREvent_EnvironmentSettingsHaveChanged = 854,
  EVREventType__Enum_VREvent_PowerSettingsHaveChanged = 855,
  EVREventType__Enum_VREvent_EnableHomeAppSettingsHaveChanged = 856,
  EVREventType__Enum_VREvent_StatusUpdate = 900,
  EVREventType__Enum_VREvent_MCImageUpdated = 1000,
  EVREventType__Enum_VREvent_FirmwareUpdateStarted = 1100,
  EVREventType__Enum_VREvent_FirmwareUpdateFinished = 1101,
  EVREventType__Enum_VREvent_KeyboardClosed = 1200,
  EVREventType__Enum_VREvent_KeyboardCharInput = 1201,
  EVREventType__Enum_VREvent_KeyboardDone = 1202,
  EVREventType__Enum_VREvent_ApplicationTransitionStarted = 1300,
  EVREventType__Enum_VREvent_ApplicationTransitionAborted = 1301,
  EVREventType__Enum_VREvent_ApplicationTransitionNewAppStarted = 1302,
  EVREventType__Enum_VREvent_ApplicationListUpdated = 1303,
  EVREventType__Enum_VREvent_ApplicationMimeTypeLoad = 1304,
  EVREventType__Enum_VREvent_ApplicationTransitionNewAppLaunchComplete = 1305,
  EVREventType__Enum_VREvent_ProcessConnected = 1306,
  EVREventType__Enum_VREvent_ProcessDisconnected = 1307,
  EVREventType__Enum_VREvent_Compositor_MirrorWindowShown = 1400,
  EVREventType__Enum_VREvent_Compositor_MirrorWindowHidden = 1401,
  EVREventType__Enum_VREvent_Compositor_ChaperoneBoundsShown = 1410,
  EVREventType__Enum_VREvent_Compositor_ChaperoneBoundsHidden = 1411,
  EVREventType__Enum_VREvent_TrackedCamera_StartVideoStream = 1500,
  EVREventType__Enum_VREvent_TrackedCamera_StopVideoStream = 1501,
  EVREventType__Enum_VREvent_TrackedCamera_PauseVideoStream = 1502,
  EVREventType__Enum_VREvent_TrackedCamera_ResumeVideoStream = 1503,
  EVREventType__Enum_VREvent_TrackedCamera_EditingSurface = 1550,
  EVREventType__Enum_VREvent_PerformanceTest_EnableCapture = 1600,
  EVREventType__Enum_VREvent_PerformanceTest_DisableCapture = 1601,
  EVREventType__Enum_VREvent_PerformanceTest_FidelityLevel = 1602,
  EVREventType__Enum_VREvent_MessageOverlay_Closed = 1650,
  EVREventType__Enum_VREvent_MessageOverlayCloseRequested = 1651,
  EVREventType__Enum_VREvent_VendorSpecific_Reserved_Start = 10000,
  EVREventType__Enum_VREvent_VendorSpecific_Reserved_End = 19999,
};
struct EVREventType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVREventType__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetEventTypeNameFromEnum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetEventTypeNameFromEnum__VTable vtable;
};

struct IVRSystem_GetHiddenAreaMesh__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetHiddenAreaMesh {
  struct IVRSystem_GetHiddenAreaMesh__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetHiddenAreaMesh__Fields fields;
};
struct HiddenAreaMesh_t {
  void * pVertexData;
  uint32_t unTriangleCount;
};
struct HiddenAreaMesh_t__Boxed {
  struct HiddenAreaMesh_t__Class *klass;
  struct MonitorData *monitor;
  struct HiddenAreaMesh_t fields;
};
enum EHiddenAreaMeshType__Enum : int32_t {
  EHiddenAreaMeshType__Enum_k_eHiddenAreaMesh_Standard = 0,
  EHiddenAreaMeshType__Enum_k_eHiddenAreaMesh_Inverse = 1,
  EHiddenAreaMeshType__Enum_k_eHiddenAreaMesh_LineLoop = 2,
  EHiddenAreaMeshType__Enum_k_eHiddenAreaMesh_Max = 3,
};
struct EHiddenAreaMeshType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EHiddenAreaMeshType__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HiddenAreaMesh_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HiddenAreaMesh_t__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetHiddenAreaMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetHiddenAreaMesh__VTable vtable;
};

struct IVRSystem_GetControllerState__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetControllerState {
  struct IVRSystem_GetControllerState__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetControllerState__Fields fields;
};
struct VRControllerAxis_t {
  float x;
  float y;
};
struct VRControllerAxis_t__Boxed {
  struct VRControllerAxis_t__Class *klass;
  struct MonitorData *monitor;
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
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRControllerAxis_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VRControllerState_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VRControllerState_t__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetControllerState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetControllerState__VTable vtable;
};

struct IVRSystem_GetControllerStateWithPose__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetControllerStateWithPose {
  struct IVRSystem_GetControllerStateWithPose__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetControllerStateWithPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetControllerStateWithPose__VTable vtable;
};

struct IVRSystem_TriggerHapticPulse__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_TriggerHapticPulse {
  struct IVRSystem_TriggerHapticPulse__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_TriggerHapticPulse__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_TriggerHapticPulse__VTable vtable;
};

struct IVRSystem_GetButtonIdNameFromEnum__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetButtonIdNameFromEnum {
  struct IVRSystem_GetButtonIdNameFromEnum__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetButtonIdNameFromEnum__Fields fields;
};
enum EVRButtonId__Enum : int32_t {
  EVRButtonId__Enum_k_EButton_System = 0,
  EVRButtonId__Enum_k_EButton_ApplicationMenu = 1,
  EVRButtonId__Enum_k_EButton_Grip = 2,
  EVRButtonId__Enum_k_EButton_DPad_Left = 3,
  EVRButtonId__Enum_k_EButton_DPad_Up = 4,
  EVRButtonId__Enum_k_EButton_DPad_Right = 5,
  EVRButtonId__Enum_k_EButton_DPad_Down = 6,
  EVRButtonId__Enum_k_EButton_A = 7,
  EVRButtonId__Enum_k_EButton_ProximitySensor = 31,
  EVRButtonId__Enum_k_EButton_Axis0 = 32,
  EVRButtonId__Enum_k_EButton_Axis1 = 33,
  EVRButtonId__Enum_k_EButton_Axis2 = 34,
  EVRButtonId__Enum_k_EButton_Axis3 = 35,
  EVRButtonId__Enum_k_EButton_Axis4 = 36,
  EVRButtonId__Enum_k_EButton_SteamVR_Touchpad = 32,
  EVRButtonId__Enum_k_EButton_SteamVR_Trigger = 33,
  EVRButtonId__Enum_k_EButton_Dashboard_Back = 2,
  EVRButtonId__Enum_k_EButton_Max = 64,
};
struct EVRButtonId__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRButtonId__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetButtonIdNameFromEnum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetButtonIdNameFromEnum__VTable vtable;
};

struct IVRSystem_GetControllerAxisTypeNameFromEnum__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetControllerAxisTypeNameFromEnum {
  struct IVRSystem_GetControllerAxisTypeNameFromEnum__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetControllerAxisTypeNameFromEnum__Fields fields;
};
enum EVRControllerAxisType__Enum : int32_t {
  EVRControllerAxisType__Enum_k_eControllerAxis_None = 0,
  EVRControllerAxisType__Enum_k_eControllerAxis_TrackPad = 1,
  EVRControllerAxisType__Enum_k_eControllerAxis_Joystick = 2,
  EVRControllerAxisType__Enum_k_eControllerAxis_Trigger = 3,
};
struct EVRControllerAxisType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRControllerAxisType__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetControllerAxisTypeNameFromEnum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetControllerAxisTypeNameFromEnum__VTable vtable;
};

struct IVRSystem_CaptureInputFocus__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_CaptureInputFocus {
  struct IVRSystem_CaptureInputFocus__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_CaptureInputFocus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_CaptureInputFocus__VTable vtable;
};

struct IVRSystem_ReleaseInputFocus__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_ReleaseInputFocus {
  struct IVRSystem_ReleaseInputFocus__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_ReleaseInputFocus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_ReleaseInputFocus__VTable vtable;
};

struct IVRSystem_IsInputFocusCapturedByAnotherProcess__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_IsInputFocusCapturedByAnotherProcess {
  struct IVRSystem_IsInputFocusCapturedByAnotherProcess__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_IsInputFocusCapturedByAnotherProcess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_IsInputFocusCapturedByAnotherProcess__VTable vtable;
};

struct IVRSystem_DriverDebugRequest__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_DriverDebugRequest {
  struct IVRSystem_DriverDebugRequest__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_DriverDebugRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_DriverDebugRequest__VTable vtable;
};

struct IVRSystem_PerformFirmwareUpdate__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_PerformFirmwareUpdate {
  struct IVRSystem_PerformFirmwareUpdate__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_PerformFirmwareUpdate__Fields fields;
};
enum EVRFirmwareError__Enum : int32_t {
  EVRFirmwareError__Enum_None = 0,
  EVRFirmwareError__Enum_Success = 1,
  EVRFirmwareError__Enum_Fail = 2,
};
struct EVRFirmwareError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRFirmwareError__Enum value;
};
struct IVRSystem_PerformFirmwareUpdate__VTable {
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
struct IVRSystem_PerformFirmwareUpdate__StaticFields {
};
struct IVRSystem_PerformFirmwareUpdate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_PerformFirmwareUpdate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_PerformFirmwareUpdate__VTable vtable;
};

struct IVRSystem_AcknowledgeQuit_Exiting__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_AcknowledgeQuit_Exiting {
  struct IVRSystem_AcknowledgeQuit_Exiting__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_AcknowledgeQuit_Exiting__Fields fields;
};
struct IVRSystem_AcknowledgeQuit_Exiting__VTable {
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
struct IVRSystem_AcknowledgeQuit_Exiting__StaticFields {
};
struct IVRSystem_AcknowledgeQuit_Exiting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_AcknowledgeQuit_Exiting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_AcknowledgeQuit_Exiting__VTable vtable;
};

struct IVRSystem_AcknowledgeQuit_UserPrompt__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_AcknowledgeQuit_UserPrompt {
  struct IVRSystem_AcknowledgeQuit_UserPrompt__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_AcknowledgeQuit_UserPrompt__Fields fields;
};
struct IVRSystem_AcknowledgeQuit_UserPrompt__VTable {
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
struct IVRSystem_AcknowledgeQuit_UserPrompt__StaticFields {
};
struct IVRSystem_AcknowledgeQuit_UserPrompt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_AcknowledgeQuit_UserPrompt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_AcknowledgeQuit_UserPrompt__VTable vtable;
};

struct IVRExtendedDisplay_GetWindowBounds__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRExtendedDisplay_GetWindowBounds {
  struct IVRExtendedDisplay_GetWindowBounds__Class *klass;
  struct MonitorData *monitor;
  struct IVRExtendedDisplay_GetWindowBounds__Fields fields;
};
struct IVRExtendedDisplay_GetWindowBounds__VTable {
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
struct IVRExtendedDisplay_GetWindowBounds__StaticFields {
};
struct IVRExtendedDisplay_GetWindowBounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRExtendedDisplay_GetWindowBounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRExtendedDisplay_GetWindowBounds__VTable vtable;
};

struct IVRExtendedDisplay_GetEyeOutputViewport__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRExtendedDisplay_GetEyeOutputViewport {
  struct IVRExtendedDisplay_GetEyeOutputViewport__Class *klass;
  struct MonitorData *monitor;
  struct IVRExtendedDisplay_GetEyeOutputViewport__Fields fields;
};
struct IVRExtendedDisplay_GetEyeOutputViewport__VTable {
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
struct IVRExtendedDisplay_GetEyeOutputViewport__StaticFields {
};
struct IVRExtendedDisplay_GetEyeOutputViewport__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRExtendedDisplay_GetEyeOutputViewport__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRExtendedDisplay_GetEyeOutputViewport__VTable vtable;
};

struct IVRExtendedDisplay_GetDXGIOutputInfo__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRExtendedDisplay_GetDXGIOutputInfo {
  struct IVRExtendedDisplay_GetDXGIOutputInfo__Class *klass;
  struct MonitorData *monitor;
  struct IVRExtendedDisplay_GetDXGIOutputInfo__Fields fields;
};
struct IVRExtendedDisplay_GetDXGIOutputInfo__VTable {
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
struct IVRExtendedDisplay_GetDXGIOutputInfo__StaticFields {
};
struct IVRExtendedDisplay_GetDXGIOutputInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRExtendedDisplay_GetDXGIOutputInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRExtendedDisplay_GetDXGIOutputInfo__VTable vtable;
};

struct IVRTrackedCamera_GetCameraErrorNameFromEnum__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRTrackedCamera_GetCameraErrorNameFromEnum {
  struct IVRTrackedCamera_GetCameraErrorNameFromEnum__Class *klass;
  struct MonitorData *monitor;
  struct IVRTrackedCamera_GetCameraErrorNameFromEnum__Fields fields;
};
enum EVRTrackedCameraError__Enum : int32_t {
  EVRTrackedCameraError__Enum_None = 0,
  EVRTrackedCameraError__Enum_OperationFailed = 100,
  EVRTrackedCameraError__Enum_InvalidHandle = 101,
  EVRTrackedCameraError__Enum_InvalidFrameHeaderVersion = 102,
  EVRTrackedCameraError__Enum_OutOfHandles = 103,
  EVRTrackedCameraError__Enum_IPCFailure = 104,
  EVRTrackedCameraError__Enum_NotSupportedForThisDevice = 105,
  EVRTrackedCameraError__Enum_SharedMemoryFailure = 106,
  EVRTrackedCameraError__Enum_FrameBufferingFailure = 107,
  EVRTrackedCameraError__Enum_StreamSetupFailure = 108,
  EVRTrackedCameraError__Enum_InvalidGLTextureId = 109,
  EVRTrackedCameraError__Enum_InvalidSharedTextureHandle = 110,
  EVRTrackedCameraError__Enum_FailedToGetGLTextureId = 111,
  EVRTrackedCameraError__Enum_SharedTextureFailure = 112,
  EVRTrackedCameraError__Enum_NoFrameAvailable = 113,
  EVRTrackedCameraError__Enum_InvalidArgument = 114,
  EVRTrackedCameraError__Enum_InvalidFrameBufferSize = 115,
};}