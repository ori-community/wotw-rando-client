namespace app {

struct IVRCompositor {
  struct IVRCompositor_SetTrackingSpace * SetTrackingSpace;
  struct IVRCompositor_GetTrackingSpace * GetTrackingSpace;
  struct IVRCompositor_WaitGetPoses * WaitGetPoses;
  struct IVRCompositor_GetLastPoses * GetLastPoses;
  struct IVRCompositor_GetLastPoseForTrackedDeviceIndex * GetLastPoseForTrackedDeviceIndex;
  struct IVRCompositor_Submit * Submit;
  struct IVRCompositor_ClearLastSubmittedFrame * ClearLastSubmittedFrame;
  struct IVRCompositor_PostPresentHandoff * PostPresentHandoff;
  struct IVRCompositor_GetFrameTiming * GetFrameTiming;
  struct IVRCompositor_GetFrameTimings * GetFrameTimings;
  struct IVRCompositor_GetFrameTimeRemaining * GetFrameTimeRemaining;
  struct IVRCompositor_GetCumulativeStats * GetCumulativeStats;
  struct IVRCompositor_FadeToColor * FadeToColor;
  struct IVRCompositor_GetCurrentFadeColor * GetCurrentFadeColor;
  struct IVRCompositor_FadeGrid * FadeGrid;
  struct IVRCompositor_GetCurrentGridAlpha * GetCurrentGridAlpha;
  struct IVRCompositor_SetSkyboxOverride * SetSkyboxOverride;
  struct IVRCompositor_ClearSkyboxOverride * ClearSkyboxOverride;
  struct IVRCompositor_CompositorBringToFront * CompositorBringToFront;
  struct IVRCompositor_CompositorGoToBack * CompositorGoToBack;
  struct IVRCompositor_CompositorQuit * CompositorQuit;
  struct IVRCompositor_IsFullscreen * IsFullscreen;
  struct IVRCompositor_GetCurrentSceneFocusProcess * GetCurrentSceneFocusProcess;
  struct IVRCompositor_GetLastFrameRenderer * GetLastFrameRenderer;
  struct IVRCompositor_CanRenderScene * CanRenderScene;
  struct IVRCompositor_ShowMirrorWindow * ShowMirrorWindow;
  struct IVRCompositor_HideMirrorWindow * HideMirrorWindow;
  struct IVRCompositor_IsMirrorWindowVisible * IsMirrorWindowVisible;
  struct IVRCompositor_CompositorDumpImages * CompositorDumpImages;
  struct IVRCompositor_ShouldAppRenderWithLowResources * ShouldAppRenderWithLowResources;
  struct IVRCompositor_ForceInterleavedReprojectionOn * ForceInterleavedReprojectionOn;
  struct IVRCompositor_ForceReconnectProcess * ForceReconnectProcess;
  struct IVRCompositor_SuspendRendering * SuspendRendering;
  struct IVRCompositor_GetMirrorTextureD3D11 * GetMirrorTextureD3D11;
  struct IVRCompositor_ReleaseMirrorTextureD3D11 * ReleaseMirrorTextureD3D11;
  struct IVRCompositor_GetMirrorTextureGL * GetMirrorTextureGL;
  struct IVRCompositor_ReleaseSharedGLTexture * ReleaseSharedGLTexture;
  struct IVRCompositor_LockGLSharedTextureForAccess * LockGLSharedTextureForAccess;
  struct IVRCompositor_UnlockGLSharedTextureForAccess * UnlockGLSharedTextureForAccess;
  struct IVRCompositor_GetVulkanInstanceExtensionsRequired * GetVulkanInstanceExtensionsRequired;
  struct IVRCompositor_GetVulkanDeviceExtensionsRequired * GetVulkanDeviceExtensionsRequired;
  struct IVRCompositor_SetExplicitTimingMode * SetExplicitTimingMode;
  struct IVRCompositor_SubmitExplicitTimingData * SubmitExplicitTimingData;
};
struct IVRCompositor__Boxed {
  struct IVRCompositor__Class *klass;
  struct MonitorData *monitor;
  struct IVRCompositor fields;
};
struct __declspec(align(8)) CVRCompositor__Fields {
  struct IVRCompositor FnTable;
};
struct CVRCompositor {
  struct CVRCompositor__Class *klass;
  struct MonitorData *monitor;
  struct CVRCompositor__Fields fields;
};
struct IVRCompositor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRCompositor__StaticFields {
};
struct IVRCompositor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRCompositor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRCompositor__VTable vtable;
};
struct CVRCompositor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRCompositor__StaticFields {
};
struct CVRCompositor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRCompositor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRCompositor__VTable vtable;
};

struct IVROverlay {
  struct IVROverlay_FindOverlay * FindOverlay;
  struct IVROverlay_CreateOverlay * CreateOverlay;
  struct IVROverlay_DestroyOverlay * DestroyOverlay;
  struct IVROverlay_SetHighQualityOverlay * SetHighQualityOverlay;
  struct IVROverlay_GetHighQualityOverlay * GetHighQualityOverlay;
  struct IVROverlay_GetOverlayKey * GetOverlayKey;
  struct IVROverlay_GetOverlayName * GetOverlayName;
  struct IVROverlay_SetOverlayName * SetOverlayName;
  struct IVROverlay_GetOverlayImageData * GetOverlayImageData;
  struct IVROverlay_GetOverlayErrorNameFromEnum * GetOverlayErrorNameFromEnum;
  struct IVROverlay_SetOverlayRenderingPid * SetOverlayRenderingPid;
  struct IVROverlay_GetOverlayRenderingPid * GetOverlayRenderingPid;
  struct IVROverlay_SetOverlayFlag * SetOverlayFlag;
  struct IVROverlay_GetOverlayFlag * GetOverlayFlag;
  struct IVROverlay_SetOverlayColor * SetOverlayColor;
  struct IVROverlay_GetOverlayColor * GetOverlayColor;
  struct IVROverlay_SetOverlayAlpha * SetOverlayAlpha;
  struct IVROverlay_GetOverlayAlpha * GetOverlayAlpha;
  struct IVROverlay_SetOverlayTexelAspect * SetOverlayTexelAspect;
  struct IVROverlay_GetOverlayTexelAspect * GetOverlayTexelAspect;
  struct IVROverlay_SetOverlaySortOrder * SetOverlaySortOrder;
  struct IVROverlay_GetOverlaySortOrder * GetOverlaySortOrder;
  struct IVROverlay_SetOverlayWidthInMeters * SetOverlayWidthInMeters;
  struct IVROverlay_GetOverlayWidthInMeters * GetOverlayWidthInMeters;
  struct IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters * SetOverlayAutoCurveDistanceRangeInMeters;
  struct IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters * GetOverlayAutoCurveDistanceRangeInMeters;
  struct IVROverlay_SetOverlayTextureColorSpace * SetOverlayTextureColorSpace;
  struct IVROverlay_GetOverlayTextureColorSpace * GetOverlayTextureColorSpace;
  struct IVROverlay_SetOverlayTextureBounds * SetOverlayTextureBounds;
  struct IVROverlay_GetOverlayTextureBounds * GetOverlayTextureBounds;
  struct IVROverlay_GetOverlayRenderModel * GetOverlayRenderModel;
  struct IVROverlay_SetOverlayRenderModel * SetOverlayRenderModel;
  struct IVROverlay_GetOverlayTransformType * GetOverlayTransformType;
  struct IVROverlay_SetOverlayTransformAbsolute * SetOverlayTransformAbsolute;
  struct IVROverlay_GetOverlayTransformAbsolute * GetOverlayTransformAbsolute;
  struct IVROverlay_SetOverlayTransformTrackedDeviceRelative * SetOverlayTransformTrackedDeviceRelative;
  struct IVROverlay_GetOverlayTransformTrackedDeviceRelative * GetOverlayTransformTrackedDeviceRelative;
  struct IVROverlay_SetOverlayTransformTrackedDeviceComponent * SetOverlayTransformTrackedDeviceComponent;
  struct IVROverlay_GetOverlayTransformTrackedDeviceComponent * GetOverlayTransformTrackedDeviceComponent;
  struct IVROverlay_GetOverlayTransformOverlayRelative * GetOverlayTransformOverlayRelative;
  struct IVROverlay_SetOverlayTransformOverlayRelative * SetOverlayTransformOverlayRelative;
  struct IVROverlay_ShowOverlay * ShowOverlay;
  struct IVROverlay_HideOverlay * HideOverlay;
  struct IVROverlay_IsOverlayVisible * IsOverlayVisible;
  struct IVROverlay_GetTransformForOverlayCoordinates * GetTransformForOverlayCoordinates;
  struct IVROverlay_PollNextOverlayEvent * PollNextOverlayEvent;
  struct IVROverlay_GetOverlayInputMethod * GetOverlayInputMethod;
  struct IVROverlay_SetOverlayInputMethod * SetOverlayInputMethod;
  struct IVROverlay_GetOverlayMouseScale * GetOverlayMouseScale;
  struct IVROverlay_SetOverlayMouseScale * SetOverlayMouseScale;
  struct IVROverlay_ComputeOverlayIntersection * ComputeOverlayIntersection;
  struct IVROverlay_HandleControllerOverlayInteractionAsMouse * HandleControllerOverlayInteractionAsMouse;
  struct IVROverlay_IsHoverTargetOverlay * IsHoverTargetOverlay;
  struct IVROverlay_GetGamepadFocusOverlay * GetGamepadFocusOverlay;
  struct IVROverlay_SetGamepadFocusOverlay * SetGamepadFocusOverlay;
  struct IVROverlay_SetOverlayNeighbor * SetOverlayNeighbor;
  struct IVROverlay_MoveGamepadFocusToNeighbor * MoveGamepadFocusToNeighbor;
  struct IVROverlay_SetOverlayTexture * SetOverlayTexture;
  struct IVROverlay_ClearOverlayTexture * ClearOverlayTexture;
  struct IVROverlay_SetOverlayRaw * SetOverlayRaw;
  struct IVROverlay_SetOverlayFromFile * SetOverlayFromFile;
  struct IVROverlay_GetOverlayTexture * GetOverlayTexture;
  struct IVROverlay_ReleaseNativeOverlayHandle * ReleaseNativeOverlayHandle;
  struct IVROverlay_GetOverlayTextureSize * GetOverlayTextureSize;
  struct IVROverlay_CreateDashboardOverlay * CreateDashboardOverlay;
  struct IVROverlay_IsDashboardVisible * IsDashboardVisible;
  struct IVROverlay_IsActiveDashboardOverlay * IsActiveDashboardOverlay;
  struct IVROverlay_SetDashboardOverlaySceneProcess * SetDashboardOverlaySceneProcess;
  struct IVROverlay_GetDashboardOverlaySceneProcess * GetDashboardOverlaySceneProcess;
  struct IVROverlay_ShowDashboard * ShowDashboard;
  struct IVROverlay_GetPrimaryDashboardDevice * GetPrimaryDashboardDevice;
  struct IVROverlay_ShowKeyboard * ShowKeyboard;
  struct IVROverlay_ShowKeyboardForOverlay * ShowKeyboardForOverlay;
  struct IVROverlay_GetKeyboardText * GetKeyboardText;
  struct IVROverlay_HideKeyboard * HideKeyboard;
  struct IVROverlay_SetKeyboardTransformAbsolute * SetKeyboardTransformAbsolute;
  struct IVROverlay_SetKeyboardPositionForOverlay * SetKeyboardPositionForOverlay;
  struct IVROverlay_SetOverlayIntersectionMask * SetOverlayIntersectionMask;
  struct IVROverlay_GetOverlayFlags * GetOverlayFlags;
  struct IVROverlay_ShowMessageOverlay * ShowMessageOverlay;
  struct IVROverlay_CloseMessageOverlay * CloseMessageOverlay;
};
struct IVROverlay__Boxed {
  struct IVROverlay__Class *klass;
  struct MonitorData *monitor;
  struct IVROverlay fields;
};
struct __declspec(align(8)) CVROverlay__Fields {
  struct IVROverlay FnTable;
};
struct CVROverlay {
  struct CVROverlay__Class *klass;
  struct MonitorData *monitor;
  struct CVROverlay__Fields fields;
};
struct IVROverlay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVROverlay__StaticFields {
};
struct IVROverlay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVROverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVROverlay__VTable vtable;
};
struct CVROverlay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVROverlay__StaticFields {
};
struct CVROverlay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVROverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVROverlay__VTable vtable;
};

struct CVROverlay_PollNextOverlayEventPacked__Fields {
  struct MulticastDelegate__Fields _;
};
struct CVROverlay_PollNextOverlayEventPacked {
  struct CVROverlay_PollNextOverlayEventPacked__Class *klass;
  struct MonitorData *monitor;
  struct CVROverlay_PollNextOverlayEventPacked__Fields fields;
};
struct CVROverlay_PollNextOverlayEventPacked__VTable {
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
struct CVROverlay_PollNextOverlayEventPacked__StaticFields {
};
struct CVROverlay_PollNextOverlayEventPacked__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVROverlay_PollNextOverlayEventPacked__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVROverlay_PollNextOverlayEventPacked__VTable vtable;
};

struct IVRRenderModels {
  struct IVRRenderModels_LoadRenderModel_Async * LoadRenderModel_Async;
  struct IVRRenderModels_FreeRenderModel * FreeRenderModel;
  struct IVRRenderModels_LoadTexture_Async * LoadTexture_Async;
  struct IVRRenderModels_FreeTexture * FreeTexture;
  struct IVRRenderModels_LoadTextureD3D11_Async * LoadTextureD3D11_Async;
  struct IVRRenderModels_LoadIntoTextureD3D11_Async * LoadIntoTextureD3D11_Async;
  struct IVRRenderModels_FreeTextureD3D11 * FreeTextureD3D11;
  struct IVRRenderModels_GetRenderModelName * GetRenderModelName;
  struct IVRRenderModels_GetRenderModelCount * GetRenderModelCount;
  struct IVRRenderModels_GetComponentCount * GetComponentCount;
  struct IVRRenderModels_GetComponentName * GetComponentName;
  struct IVRRenderModels_GetComponentButtonMask * GetComponentButtonMask;
  struct IVRRenderModels_GetComponentRenderModelName * GetComponentRenderModelName;
  struct IVRRenderModels_GetComponentState * GetComponentState;
  struct IVRRenderModels_RenderModelHasComponent * RenderModelHasComponent;
  struct IVRRenderModels_GetRenderModelThumbnailURL * GetRenderModelThumbnailURL;
  struct IVRRenderModels_GetRenderModelOriginalPath * GetRenderModelOriginalPath;
  struct IVRRenderModels_GetRenderModelErrorNameFromEnum * GetRenderModelErrorNameFromEnum;
};
struct IVRRenderModels__Boxed {
  struct IVRRenderModels__Class *klass;
  struct MonitorData *monitor;
  struct IVRRenderModels fields;
};
struct __declspec(align(8)) CVRRenderModels__Fields {
  struct IVRRenderModels FnTable;
};
struct CVRRenderModels {
  struct CVRRenderModels__Class *klass;
  struct MonitorData *monitor;
  struct CVRRenderModels__Fields fields;
};
struct IVRRenderModels__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRRenderModels__StaticFields {
};
struct IVRRenderModels__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRRenderModels__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRRenderModels__VTable vtable;
};
struct CVRRenderModels__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRRenderModels__StaticFields {
};
struct CVRRenderModels__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRRenderModels__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRRenderModels__VTable vtable;
};

struct CVRRenderModels_GetComponentStatePacked__Fields {
  struct MulticastDelegate__Fields _;
};
struct CVRRenderModels_GetComponentStatePacked {
  struct CVRRenderModels_GetComponentStatePacked__Class *klass;
  struct MonitorData *monitor;
  struct CVRRenderModels_GetComponentStatePacked__Fields fields;
};
struct CVRRenderModels_GetComponentStatePacked__VTable {
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
struct CVRRenderModels_GetComponentStatePacked__StaticFields {
};
struct CVRRenderModels_GetComponentStatePacked__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRRenderModels_GetComponentStatePacked__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRRenderModels_GetComponentStatePacked__VTable vtable;
};

struct IVRNotifications {
  struct IVRNotifications_CreateNotification * CreateNotification;
  struct IVRNotifications_RemoveNotification * RemoveNotification;
};
struct IVRNotifications__Boxed {
  struct IVRNotifications__Class *klass;
  struct MonitorData *monitor;
  struct IVRNotifications fields;
};
struct __declspec(align(8)) CVRNotifications__Fields {
  struct IVRNotifications FnTable;
};
struct CVRNotifications {
  struct CVRNotifications__Class *klass;
  struct MonitorData *monitor;
  struct CVRNotifications__Fields fields;
};
struct IVRNotifications__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRNotifications__StaticFields {
};
struct IVRNotifications__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRNotifications__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRNotifications__VTable vtable;
};
struct CVRNotifications__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRNotifications__StaticFields {
};
struct CVRNotifications__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRNotifications__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRNotifications__VTable vtable;
};

struct IVRSettings {
  struct IVRSettings_GetSettingsErrorNameFromEnum * GetSettingsErrorNameFromEnum;
  struct IVRSettings_Sync * Sync;
  struct IVRSettings_SetBool * SetBool;
  struct IVRSettings_SetInt32 * SetInt32;
  struct IVRSettings_SetFloat * SetFloat;
  struct IVRSettings_SetString * SetString;
  struct IVRSettings_GetBool * GetBool;
  struct IVRSettings_GetInt32 * GetInt32;
  struct IVRSettings_GetFloat * GetFloat;
  struct IVRSettings_GetString * GetString;
  struct IVRSettings_RemoveSection * RemoveSection;
  struct IVRSettings_RemoveKeyInSection * RemoveKeyInSection;
};
struct IVRSettings__Boxed {
  struct IVRSettings__Class *klass;
  struct MonitorData *monitor;
  struct IVRSettings fields;
};
struct __declspec(align(8)) CVRSettings__Fields {
  struct IVRSettings FnTable;
};
struct CVRSettings {
  struct CVRSettings__Class *klass;
  struct MonitorData *monitor;
  struct CVRSettings__Fields fields;
};
struct IVRSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRSettings__StaticFields {
};
struct IVRSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSettings__VTable vtable;
};
struct CVRSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRSettings__StaticFields {
};
struct CVRSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRSettings__VTable vtable;
};

struct IVRScreenshots {
  struct IVRScreenshots_RequestScreenshot * RequestScreenshot;
  struct IVRScreenshots_HookScreenshot * HookScreenshot;
  struct IVRScreenshots_GetScreenshotPropertyType * GetScreenshotPropertyType;
  struct IVRScreenshots_GetScreenshotPropertyFilename * GetScreenshotPropertyFilename;
  struct IVRScreenshots_UpdateScreenshotProgress * UpdateScreenshotProgress;
  struct IVRScreenshots_TakeStereoScreenshot * TakeStereoScreenshot;
  struct IVRScreenshots_SubmitScreenshot * SubmitScreenshot;
};
struct IVRScreenshots__Boxed {
  struct IVRScreenshots__Class *klass;
  struct MonitorData *monitor;
  struct IVRScreenshots fields;
};
struct __declspec(align(8)) CVRScreenshots__Fields {
  struct IVRScreenshots FnTable;
};
struct CVRScreenshots {
  struct CVRScreenshots__Class *klass;
  struct MonitorData *monitor;
  struct CVRScreenshots__Fields fields;
};
struct IVRScreenshots__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRScreenshots__StaticFields {
};
struct IVRScreenshots__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRScreenshots__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRScreenshots__VTable vtable;
};
struct CVRScreenshots__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRScreenshots__StaticFields {
};
struct CVRScreenshots__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRScreenshots__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRScreenshots__VTable vtable;
};

struct IVRResources {
  struct IVRResources_LoadSharedResource * LoadSharedResource;
  struct IVRResources_GetResourceFullPath * GetResourceFullPath;
};
struct IVRResources__Boxed {
  struct IVRResources__Class *klass;
  struct MonitorData *monitor;
  struct IVRResources fields;
};
struct __declspec(align(8)) CVRResources__Fields {
  struct IVRResources FnTable;
};
struct CVRResources {
  struct CVRResources__Class *klass;
  struct MonitorData *monitor;
  struct CVRResources__Fields fields;
};
struct IVRResources__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRResources__StaticFields {
};
struct IVRResources__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRResources__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRResources__VTable vtable;
};
struct CVRResources__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRResources__StaticFields {
};
struct CVRResources__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRResources__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRResources__VTable vtable;
};

struct IVRDriverManager {
  struct IVRDriverManager_GetDriverCount * GetDriverCount;
  struct IVRDriverManager_GetDriverName * GetDriverName;
};
struct IVRDriverManager__Boxed {
  struct IVRDriverManager__Class *klass;
  struct MonitorData *monitor;
  struct IVRDriverManager fields;
};
struct __declspec(align(8)) CVRDriverManager__Fields {
  struct IVRDriverManager FnTable;
};
struct CVRDriverManager {
  struct CVRDriverManager__Class *klass;
  struct MonitorData *monitor;
  struct CVRDriverManager__Fields fields;
};
struct IVRDriverManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IVRDriverManager__StaticFields {
};
struct IVRDriverManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRDriverManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRDriverManager__VTable vtable;
};
struct CVRDriverManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CVRDriverManager__StaticFields {
};
struct CVRDriverManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CVRDriverManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CVRDriverManager__VTable vtable;
};

enum EVRInitError__Enum : int32_t {
  EVRInitError__Enum_None = 0,
  EVRInitError__Enum_Unknown = 1,
  EVRInitError__Enum_Init_InstallationNotFound = 100,
  EVRInitError__Enum_Init_InstallationCorrupt = 101,
  EVRInitError__Enum_Init_VRClientDLLNotFound = 102,
  EVRInitError__Enum_Init_FileNotFound = 103,
  EVRInitError__Enum_Init_FactoryNotFound = 104,
  EVRInitError__Enum_Init_InterfaceNotFound = 105,
  EVRInitError__Enum_Init_InvalidInterface = 106,
  EVRInitError__Enum_Init_UserConfigDirectoryInvalid = 107,
  EVRInitError__Enum_Init_HmdNotFound = 108,
  EVRInitError__Enum_Init_NotInitialized = 109,
  EVRInitError__Enum_Init_PathRegistryNotFound = 110,
  EVRInitError__Enum_Init_NoConfigPath = 111,
  EVRInitError__Enum_Init_NoLogPath = 112,
  EVRInitError__Enum_Init_PathRegistryNotWritable = 113,
  EVRInitError__Enum_Init_AppInfoInitFailed = 114,
  EVRInitError__Enum_Init_Retry = 115,
  EVRInitError__Enum_Init_InitCanceledByUser = 116,
  EVRInitError__Enum_Init_AnotherAppLaunching = 117,
  EVRInitError__Enum_Init_SettingsInitFailed = 118,
  EVRInitError__Enum_Init_ShuttingDown = 119,
  EVRInitError__Enum_Init_TooManyObjects = 120,
  EVRInitError__Enum_Init_NoServerForBackgroundApp = 121,
  EVRInitError__Enum_Init_NotSupportedWithCompositor = 122,
  EVRInitError__Enum_Init_NotAvailableToUtilityApps = 123,
  EVRInitError__Enum_Init_Internal = 124,
  EVRInitError__Enum_Init_HmdDriverIdIsNone = 125,
  EVRInitError__Enum_Init_HmdNotFoundPresenceFailed = 126,
  EVRInitError__Enum_Init_VRMonitorNotFound = 127,
  EVRInitError__Enum_Init_VRMonitorStartupFailed = 128,
  EVRInitError__Enum_Init_LowPowerWatchdogNotSupported = 129,
  EVRInitError__Enum_Init_InvalidApplicationType = 130,
  EVRInitError__Enum_Init_NotAvailableToWatchdogApps = 131,
  EVRInitError__Enum_Init_WatchdogDisabledInSettings = 132,
  EVRInitError__Enum_Init_VRDashboardNotFound = 133,
  EVRInitError__Enum_Init_VRDashboardStartupFailed = 134,
  EVRInitError__Enum_Init_VRHomeNotFound = 135,
  EVRInitError__Enum_Init_VRHomeStartupFailed = 136,
  EVRInitError__Enum_Init_RebootingBusy = 137,
  EVRInitError__Enum_Init_FirmwareUpdateBusy = 138,
  EVRInitError__Enum_Init_FirmwareRecoveryBusy = 139,
  EVRInitError__Enum_Driver_Failed = 200,
  EVRInitError__Enum_Driver_Unknown = 201,
  EVRInitError__Enum_Driver_HmdUnknown = 202,
  EVRInitError__Enum_Driver_NotLoaded = 203,
  EVRInitError__Enum_Driver_RuntimeOutOfDate = 204,
  EVRInitError__Enum_Driver_HmdInUse = 205,
  EVRInitError__Enum_Driver_NotCalibrated = 206,
  EVRInitError__Enum_Driver_CalibrationInvalid = 207,
  EVRInitError__Enum_Driver_HmdDisplayNotFound = 208,
  EVRInitError__Enum_Driver_TrackedDeviceInterfaceUnknown = 209,
  EVRInitError__Enum_Driver_HmdDriverIdOutOfBounds = 211,
  EVRInitError__Enum_Driver_HmdDisplayMirrored = 212,
  EVRInitError__Enum_IPC_ServerInitFailed = 300,
  EVRInitError__Enum_IPC_ConnectFailed = 301,
  EVRInitError__Enum_IPC_SharedStateInitFailed = 302,
  EVRInitError__Enum_IPC_CompositorInitFailed = 303,
  EVRInitError__Enum_IPC_MutexInitFailed = 304,
  EVRInitError__Enum_IPC_Failed = 305,
  EVRInitError__Enum_IPC_CompositorConnectFailed = 306,
  EVRInitError__Enum_IPC_CompositorInvalidConnectResponse = 307,
  EVRInitError__Enum_IPC_ConnectFailedAfterMultipleAttempts = 308,
  EVRInitError__Enum_Compositor_Failed = 400,
  EVRInitError__Enum_Compositor_D3D11HardwareRequired = 401,
  EVRInitError__Enum_Compositor_FirmwareRequiresUpdate = 402,
  EVRInitError__Enum_Compositor_OverlayInitFailed = 403,
  EVRInitError__Enum_Compositor_ScreenshotsInitFailed = 404,
  EVRInitError__Enum_Compositor_UnableToCreateDevice = 405,
  EVRInitError__Enum_VendorSpecific_UnableToConnectToOculusRuntime = 1000,
  EVRInitError__Enum_VendorSpecific_HmdFound_CantOpenDevice = 1101,
  EVRInitError__Enum_VendorSpecific_HmdFound_UnableToRequestConfigStart = 1102,
  EVRInitError__Enum_VendorSpecific_HmdFound_NoStoredConfig = 1103,
  EVRInitError__Enum_VendorSpecific_HmdFound_ConfigTooBig = 1104,
  EVRInitError__Enum_VendorSpecific_HmdFound_ConfigTooSmall = 1105,
  EVRInitError__Enum_VendorSpecific_HmdFound_UnableToInitZLib = 1106,
  EVRInitError__Enum_VendorSpecific_HmdFound_CantReadFirmwareVersion = 1107,
  EVRInitError__Enum_VendorSpecific_HmdFound_UnableToSendUserDataStart = 1108,
  EVRInitError__Enum_VendorSpecific_HmdFound_UnableToGetUserDataStart = 1109,
  EVRInitError__Enum_VendorSpecific_HmdFound_UnableToGetUserDataNext = 1110,
  EVRInitError__Enum_VendorSpecific_HmdFound_UserDataAddressRange = 1111,
  EVRInitError__Enum_VendorSpecific_HmdFound_UserDataError = 1112,
  EVRInitError__Enum_VendorSpecific_HmdFound_ConfigFailedSanityCheck = 1113,
  EVRInitError__Enum_Steam_SteamInstallationNotFound = 2000,
};
struct EVRInitError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRInitError__Enum value;
};
enum EVRApplicationType__Enum : int32_t {
  EVRApplicationType__Enum_VRApplication_Other = 0,
  EVRApplicationType__Enum_VRApplication_Scene = 1,
  EVRApplicationType__Enum_VRApplication_Overlay = 2,
  EVRApplicationType__Enum_VRApplication_Background = 3,
  EVRApplicationType__Enum_VRApplication_Utility = 4,
  EVRApplicationType__Enum_VRApplication_VRMonitor = 5,
  EVRApplicationType__Enum_VRApplication_SteamWatchdog = 6,
  EVRApplicationType__Enum_VRApplication_Bootstrapper = 7,
  EVRApplicationType__Enum_VRApplication_Max = 8,
};
struct EVRApplicationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVRApplicationType__Enum value;
};

struct OpenVRInterop {
  struct OpenVRInterop__Class *klass;
  struct MonitorData *monitor;
};
struct OpenVRInterop__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpenVRInterop__StaticFields {
};
struct OpenVRInterop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenVRInterop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenVRInterop__VTable vtable;
};

struct RenderModel_TextureMap_t_Packed {
  uint16_t unWidth;
  uint16_t unHeight;
  void * rubTextureMapData;
};
struct RenderModel_TextureMap_t_Packed__Boxed {
  struct RenderModel_TextureMap_t_Packed__Class *klass;
  struct MonitorData *monitor;
  struct RenderModel_TextureMap_t_Packed fields;
};
struct RenderModel_TextureMap_t {
  uint16_t unWidth;
  uint16_t unHeight;
  void * rubTextureMapData;
};
struct RenderModel_TextureMap_t__Boxed {
  struct RenderModel_TextureMap_t__Class *klass;
  struct MonitorData *monitor;
  struct RenderModel_TextureMap_t fields;
};
struct RenderModel_TextureMap_t_Packed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderModel_TextureMap_t_Packed__StaticFields {
};
struct RenderModel_TextureMap_t_Packed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderModel_TextureMap_t_Packed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderModel_TextureMap_t_Packed__VTable vtable;
};
struct RenderModel_TextureMap_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderModel_TextureMap_t__StaticFields {
};
struct RenderModel_TextureMap_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderModel_TextureMap_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderModel_TextureMap_t__VTable vtable;
};

struct RenderModel_t_Packed {
  void * rVertexData;
  uint32_t unVertexCount;
  void * rIndexData;
  uint32_t unTriangleCount;
  int32_t diffuseTextureId;
};
struct RenderModel_t_Packed__Boxed {
  struct RenderModel_t_Packed__Class *klass;
  struct MonitorData *monitor;
  struct RenderModel_t_Packed fields;
};
struct RenderModel_t {
  void * rVertexData;
  uint32_t unVertexCount;
  void * rIndexData;
  uint32_t unTriangleCount;
  int32_t diffuseTextureId;
};
struct RenderModel_t__Boxed {
  struct RenderModel_t__Class *klass;
  struct MonitorData *monitor;
  struct RenderModel_t fields;
};
struct RenderModel_t_Packed__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderModel_t_Packed__StaticFields {
};
struct RenderModel_t_Packed__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderModel_t_Packed__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderModel_t_Packed__VTable vtable;
};
struct RenderModel_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderModel_t__StaticFields {
};
struct RenderModel_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderModel_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderModel_t__VTable vtable;
};

struct __declspec(align(8)) OpenVR_COpenVRContext__Fields {
  struct CVRSystem * m_pVRSystem;
  struct CVRChaperone * m_pVRChaperone;
  struct CVRChaperoneSetup * m_pVRChaperoneSetup;
  struct CVRCompositor * m_pVRCompositor;
  struct CVROverlay * m_pVROverlay;
  struct CVRRenderModels * m_pVRRenderModels;
  struct CVRExtendedDisplay * m_pVRExtendedDisplay;
  struct CVRSettings * m_pVRSettings;
  struct CVRApplications * m_pVRApplications;
  struct CVRScreenshots * m_pVRScreenshots;
  struct CVRTrackedCamera * m_pVRTrackedCamera;
};
struct OpenVR_COpenVRContext {
  struct OpenVR_COpenVRContext__Class *klass;
  struct MonitorData *monitor;
  struct OpenVR_COpenVRContext__Fields fields;
};
struct OpenVR_COpenVRContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpenVR_COpenVRContext__StaticFields {
};
struct OpenVR_COpenVRContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenVR_COpenVRContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenVR_COpenVRContext__VTable vtable;
};

struct OpenVR {
  struct OpenVR__Class *klass;
  struct MonitorData *monitor;
};
struct OpenVR__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OpenVR__StaticFields {
  uint32_t _VRToken_k__BackingField;
  struct OpenVR_COpenVRContext * _OpenVRInternal_ModuleContext;
};
struct OpenVR__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OpenVR__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OpenVR__VTable vtable;
};

struct FlagsFieldAttribute {
  struct FlagsFieldAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct FlagsFieldAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct FlagsFieldAttribute__StaticFields {
};
struct FlagsFieldAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlagsFieldAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlagsFieldAttribute__VTable vtable;
};

enum BrowserNative_ChangeType__Enum : int32_t {
  BrowserNative_ChangeType__Enum_CHT_CURSOR = 0,
  BrowserNative_ChangeType__Enum_CHT_BROWSER_CLOSE = 1,
  BrowserNative_ChangeType__Enum_CHT_FETCH_FINISHED = 2,
  BrowserNative_ChangeType__Enum_CHT_FETCH_FAILED = 3,
  BrowserNative_ChangeType__Enum_CHT_LOAD_FINISHED = 4,
  BrowserNative_ChangeType__Enum_CHT_CERT_ERROR = 5,
  BrowserNative_ChangeType__Enum_CHT_SAD_TAB = 6,
  BrowserNative_ChangeType__Enum_CHT_DOWNLOAD_STARTED = 7,
  BrowserNative_ChangeType__Enum_CHT_DOWNLOAD_STATUS = 8,
  BrowserNative_ChangeType__Enum_CHT_FOCUSED_NODE = 9,
};
struct BrowserNative_ChangeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BrowserNative_ChangeType__Enum value;
};

enum BrowserNative_FrameCommand__Enum : int32_t {
  BrowserNative_FrameCommand__Enum_Undo = 0,
  BrowserNative_FrameCommand__Enum_Redo = 1,
  BrowserNative_FrameCommand__Enum_Cut = 2,
  BrowserNative_FrameCommand__Enum_Copy = 3,
  BrowserNative_FrameCommand__Enum_Paste = 4,
  BrowserNative_FrameCommand__Enum_Delete = 5,
  BrowserNative_FrameCommand__Enum_SelectAll = 6,
  BrowserNative_FrameCommand__Enum_ViewSource = 7,
};
struct BrowserNative_FrameCommand__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BrowserNative_FrameCommand__Enum value;
};

struct IPromise_1_JSONNode_ {
  struct IPromise_1_JSONNode___Class *klass;
  struct MonitorData *monitor;
};
struct IPromise_1_JSONNode___VTable {
  VirtualInvokeData WithName;
  VirtualInvokeData Done;
  VirtualInvokeData Done_1;
  VirtualInvokeData Done_2;
  VirtualInvokeData Catch;
  VirtualInvokeData Then;
  VirtualInvokeData Then_1;
  VirtualInvokeData Then_2;
  VirtualInvokeData Then_3;
  VirtualInvokeData Then_4;
  VirtualInvokeData Then_5;
  VirtualInvokeData Then_6;
  VirtualInvokeData Transform;
  VirtualInvokeData ThenAll;
  VirtualInvokeData ThenAll_1;
  VirtualInvokeData ThenRace;
  VirtualInvokeData ThenRace_1;
  VirtualInvokeData get_Value;
  VirtualInvokeData ToWaitFor;
};}