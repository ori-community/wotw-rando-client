namespace app {
struct PCQualityModeManager__StaticFields {
  enum PCQualityModeManager_QualityMode__Enum m_currentMode;
};
struct PCQualityModeManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PCQualityModeManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PCQualityModeManager__VTable vtable;
};

struct QualityModeTweakAsset__Fields {
  struct ScriptableObject__Fields _;
  int32_t vsyncCount;
  float MipBias;
  bool UseMipBias;
  int32_t MasterTextureLimit;
  float TimesliceScaleFactor;
  struct LightCullingSystem_LightCullingSettings LightCullingSettings;
  bool UseSwitchSliceDepths;
  bool OverrideWaterSimDisableToggles;
};
struct QualityModeTweakAsset {
  struct QualityModeTweakAsset__Class *klass;
  struct MonitorData *monitor;
  struct QualityModeTweakAsset__Fields fields;
};
struct QualityModeTweakAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityModeTweakAsset__StaticFields {
};
struct QualityModeTweakAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityModeTweakAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityModeTweakAsset__VTable vtable;
};

struct XboxQualityModeManager {
  struct XboxQualityModeManager__Class *klass;
  struct MonitorData *monitor;
};
struct XboxQualityModeManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XboxQualityModeManager__StaticFields {
  bool m_disableVsyncForPerformanceMode;
  enum XboxQualityModeManager_QualityMode__Enum m_currentMode;
};
struct XboxQualityModeManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxQualityModeManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxQualityModeManager__VTable vtable;
};

struct IVRSystem_GetRecommendedRenderTargetSize__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetRecommendedRenderTargetSize {
  struct IVRSystem_GetRecommendedRenderTargetSize__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetRecommendedRenderTargetSize__Fields fields;
};
struct IVRSystem_GetRecommendedRenderTargetSize__VTable {
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
struct IVRSystem_GetRecommendedRenderTargetSize__StaticFields {
};
struct IVRSystem_GetRecommendedRenderTargetSize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetRecommendedRenderTargetSize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetRecommendedRenderTargetSize__VTable vtable;
};

struct IVRSystem_GetProjectionMatrix__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetProjectionMatrix {
  struct IVRSystem_GetProjectionMatrix__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetProjectionMatrix__Fields fields;
};
struct HmdMatrix44_t {
  float m0;
  float m1;
  float m2;
  float m3;
  float m4;
  float m5;
  float m6;
  float m7;
  float m8;
  float m9;
  float m10;
  float m11;
  float m12;
  float m13;
  float m14;
  float m15;
};
struct HmdMatrix44_t__Boxed {
  struct HmdMatrix44_t__Class *klass;
  struct MonitorData *monitor;
  struct HmdMatrix44_t fields;
};
enum EVREye__Enum : int32_t {
  EVREye__Enum_Eye_Left = 0,
  EVREye__Enum_Eye_Right = 1,
};
struct EVREye__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EVREye__Enum value;
};
struct HmdMatrix44_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HmdMatrix44_t__StaticFields {
};
struct HmdMatrix44_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HmdMatrix44_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HmdMatrix44_t__VTable vtable;
};
struct IVRSystem_GetProjectionMatrix__VTable {
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
struct IVRSystem_GetProjectionMatrix__StaticFields {
};
struct IVRSystem_GetProjectionMatrix__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetProjectionMatrix__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetProjectionMatrix__VTable vtable;
};

struct IVRSystem_GetProjectionRaw__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetProjectionRaw {
  struct IVRSystem_GetProjectionRaw__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetProjectionRaw__Fields fields;
};
struct IVRSystem_GetProjectionRaw__VTable {
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
struct IVRSystem_GetProjectionRaw__StaticFields {
};
struct IVRSystem_GetProjectionRaw__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetProjectionRaw__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetProjectionRaw__VTable vtable;
};

struct IVRSystem_ComputeDistortion__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_ComputeDistortion {
  struct IVRSystem_ComputeDistortion__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_ComputeDistortion__Fields fields;
};
struct DistortionCoordinates_t {
  float rfRed0;
  float rfRed1;
  float rfGreen0;
  float rfGreen1;
  float rfBlue0;
  float rfBlue1;
};
struct DistortionCoordinates_t__Boxed {
  struct DistortionCoordinates_t__Class *klass;
  struct MonitorData *monitor;
  struct DistortionCoordinates_t fields;
};
struct DistortionCoordinates_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DistortionCoordinates_t__StaticFields {
};
struct DistortionCoordinates_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistortionCoordinates_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistortionCoordinates_t__VTable vtable;
};
struct IVRSystem_ComputeDistortion__VTable {
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
struct IVRSystem_ComputeDistortion__StaticFields {
};
struct IVRSystem_ComputeDistortion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_ComputeDistortion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_ComputeDistortion__VTable vtable;
};

struct IVRSystem_GetEyeToHeadTransform__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetEyeToHeadTransform {
  struct IVRSystem_GetEyeToHeadTransform__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetEyeToHeadTransform__Fields fields;
};
struct HmdMatrix34_t {
  float m0;
  float m1;
  float m2;
  float m3;
  float m4;
  float m5;
  float m6;
  float m7;
  float m8;
  float m9;
  float m10;
  float m11;
};
struct HmdMatrix34_t__Boxed {
  struct HmdMatrix34_t__Class *klass;
  struct MonitorData *monitor;
  struct HmdMatrix34_t fields;
};
struct HmdMatrix34_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HmdMatrix34_t__StaticFields {
};
struct HmdMatrix34_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HmdMatrix34_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HmdMatrix34_t__VTable vtable;
};
struct IVRSystem_GetEyeToHeadTransform__VTable {
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
struct IVRSystem_GetEyeToHeadTransform__StaticFields {
};
struct IVRSystem_GetEyeToHeadTransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetEyeToHeadTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetEyeToHeadTransform__VTable vtable;
};

struct IVRSystem_GetTimeSinceLastVsync__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetTimeSinceLastVsync {
  struct IVRSystem_GetTimeSinceLastVsync__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetTimeSinceLastVsync__Fields fields;
};
struct IVRSystem_GetTimeSinceLastVsync__VTable {
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
struct IVRSystem_GetTimeSinceLastVsync__StaticFields {
};
struct IVRSystem_GetTimeSinceLastVsync__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetTimeSinceLastVsync__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetTimeSinceLastVsync__VTable vtable;
};

struct IVRSystem_GetD3D9AdapterIndex__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetD3D9AdapterIndex {
  struct IVRSystem_GetD3D9AdapterIndex__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetD3D9AdapterIndex__Fields fields;
};
struct IVRSystem_GetD3D9AdapterIndex__VTable {
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
struct IVRSystem_GetD3D9AdapterIndex__StaticFields {
};
struct IVRSystem_GetD3D9AdapterIndex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetD3D9AdapterIndex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetD3D9AdapterIndex__VTable vtable;
};

struct IVRSystem_GetDXGIOutputInfo__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetDXGIOutputInfo {
  struct IVRSystem_GetDXGIOutputInfo__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetDXGIOutputInfo__Fields fields;
};
struct IVRSystem_GetDXGIOutputInfo__VTable {
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
struct IVRSystem_GetDXGIOutputInfo__StaticFields {
};
struct IVRSystem_GetDXGIOutputInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetDXGIOutputInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetDXGIOutputInfo__VTable vtable;
};

struct IVRSystem_GetOutputDevice__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetOutputDevice {
  struct IVRSystem_GetOutputDevice__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetOutputDevice__Fields fields;
};
enum ETextureType__Enum : int32_t {
  ETextureType__Enum_DirectX = 0,
  ETextureType__Enum_OpenGL = 1,
  ETextureType__Enum_Vulkan = 2,
  ETextureType__Enum_IOSurface = 3,
  ETextureType__Enum_DirectX12 = 4,
};
struct ETextureType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETextureType__Enum value;
};
struct IVRSystem_GetOutputDevice__VTable {
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
struct IVRSystem_GetOutputDevice__StaticFields {
};
struct IVRSystem_GetOutputDevice__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetOutputDevice__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetOutputDevice__VTable vtable;
};

struct IVRSystem_IsDisplayOnDesktop__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_IsDisplayOnDesktop {
  struct IVRSystem_IsDisplayOnDesktop__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_IsDisplayOnDesktop__Fields fields;
};
struct IVRSystem_IsDisplayOnDesktop__VTable {
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
struct IVRSystem_IsDisplayOnDesktop__StaticFields {
};
struct IVRSystem_IsDisplayOnDesktop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_IsDisplayOnDesktop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_IsDisplayOnDesktop__VTable vtable;
};

struct IVRSystem_SetDisplayVisibility__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_SetDisplayVisibility {
  struct IVRSystem_SetDisplayVisibility__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_SetDisplayVisibility__Fields fields;
};
struct IVRSystem_SetDisplayVisibility__VTable {
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
struct IVRSystem_SetDisplayVisibility__StaticFields {
};
struct IVRSystem_SetDisplayVisibility__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_SetDisplayVisibility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_SetDisplayVisibility__VTable vtable;
};

struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetDeviceToAbsoluteTrackingPose {
  struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Fields fields;
};
enum ETrackingUniverseOrigin__Enum : int32_t {
  ETrackingUniverseOrigin__Enum_TrackingUniverseSeated = 0,
  ETrackingUniverseOrigin__Enum_TrackingUniverseStanding = 1,
  ETrackingUniverseOrigin__Enum_TrackingUniverseRawAndUncalibrated = 2,
};
struct ETrackingUniverseOrigin__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETrackingUniverseOrigin__Enum value;
};
struct HmdVector3_t {
  float v0;
  float v1;
  float v2;
};
struct HmdVector3_t__Boxed {
  struct HmdVector3_t__Class *klass;
  struct MonitorData *monitor;
  struct HmdVector3_t fields;
};
enum ETrackingResult__Enum : int32_t {
  ETrackingResult__Enum_Uninitialized = 1,
  ETrackingResult__Enum_Calibrating_InProgress = 100,
  ETrackingResult__Enum_Calibrating_OutOfRange = 101,
  ETrackingResult__Enum_Running_OK = 200,
  ETrackingResult__Enum_Running_OutOfRange = 201,
};
struct ETrackingResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETrackingResult__Enum value;
};
struct TrackedDevicePose_t {
  struct HmdMatrix34_t mDeviceToAbsoluteTracking;
  struct HmdVector3_t vVelocity;
  struct HmdVector3_t vAngularVelocity;
  enum ETrackingResult__Enum eTrackingResult;
  bool bPoseIsValid;
  bool bDeviceIsConnected;
};
struct TrackedDevicePose_t__Boxed {
  struct TrackedDevicePose_t__Class *klass;
  struct MonitorData *monitor;
  struct TrackedDevicePose_t fields;
};
struct TrackedDevicePose_t__Array {
  struct TrackedDevicePose_t__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TrackedDevicePose_t vector[32];
};
struct HmdVector3_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HmdVector3_t__StaticFields {
};
struct HmdVector3_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HmdVector3_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HmdVector3_t__VTable vtable;
};
struct TrackedDevicePose_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TrackedDevicePose_t__StaticFields {
};
struct TrackedDevicePose_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrackedDevicePose_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrackedDevicePose_t__VTable vtable;
};
struct IVRSystem_GetDeviceToAbsoluteTrackingPose__VTable {
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
struct IVRSystem_GetDeviceToAbsoluteTrackingPose__StaticFields {
};
struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetDeviceToAbsoluteTrackingPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetDeviceToAbsoluteTrackingPose__VTable vtable;
};

struct IVRSystem_ResetSeatedZeroPose__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_ResetSeatedZeroPose {
  struct IVRSystem_ResetSeatedZeroPose__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_ResetSeatedZeroPose__Fields fields;
};
struct IVRSystem_ResetSeatedZeroPose__VTable {
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
struct IVRSystem_ResetSeatedZeroPose__StaticFields {
};
struct IVRSystem_ResetSeatedZeroPose__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_ResetSeatedZeroPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_ResetSeatedZeroPose__VTable vtable;
};

struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose {
  struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Fields fields;
};
struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__VTable {
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
struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__StaticFields {
};
struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__VTable vtable;
};

struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose {
  struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Fields fields;
};
struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__VTable {
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
struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__StaticFields {
};
struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__VTable vtable;
};

struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
  struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Fields fields;
};
enum ETrackedDeviceClass__Enum : int32_t {
  ETrackedDeviceClass__Enum_Invalid = 0,
  ETrackedDeviceClass__Enum_HMD = 1,
  ETrackedDeviceClass__Enum_Controller = 2,
  ETrackedDeviceClass__Enum_GenericTracker = 3,
  ETrackedDeviceClass__Enum_TrackingReference = 4,
  ETrackedDeviceClass__Enum_DisplayRedirect = 5,
};
struct ETrackedDeviceClass__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETrackedDeviceClass__Enum value;
};
struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__VTable {
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
struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__StaticFields {
};
struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__VTable vtable;
};

struct IVRSystem_GetTrackedDeviceActivityLevel__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetTrackedDeviceActivityLevel {
  struct IVRSystem_GetTrackedDeviceActivityLevel__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetTrackedDeviceActivityLevel__Fields fields;
};
enum EDeviceActivityLevel__Enum : int32_t {
  EDeviceActivityLevel__Enum_k_EDeviceActivityLevel_Unknown = -1,
  EDeviceActivityLevel__Enum_k_EDeviceActivityLevel_Idle = 0,
  EDeviceActivityLevel__Enum_k_EDeviceActivityLevel_UserInteraction = 1,
  EDeviceActivityLevel__Enum_k_EDeviceActivityLevel_UserInteraction_Timeout = 2,
  EDeviceActivityLevel__Enum_k_EDeviceActivityLevel_Standby = 3,
};
struct EDeviceActivityLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EDeviceActivityLevel__Enum value;
};
struct IVRSystem_GetTrackedDeviceActivityLevel__VTable {
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
struct IVRSystem_GetTrackedDeviceActivityLevel__StaticFields {
};
struct IVRSystem_GetTrackedDeviceActivityLevel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetTrackedDeviceActivityLevel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetTrackedDeviceActivityLevel__VTable vtable;
};

struct IVRSystem_ApplyTransform__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_ApplyTransform {
  struct IVRSystem_ApplyTransform__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_ApplyTransform__Fields fields;
};
struct IVRSystem_ApplyTransform__VTable {
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
struct IVRSystem_ApplyTransform__StaticFields {
};
struct IVRSystem_ApplyTransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_ApplyTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_ApplyTransform__VTable vtable;
};

struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetTrackedDeviceIndexForControllerRole {
  struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Fields fields;
};
enum ETrackedControllerRole__Enum : int32_t {
  ETrackedControllerRole__Enum_Invalid = 0,
  ETrackedControllerRole__Enum_LeftHand = 1,
  ETrackedControllerRole__Enum_RightHand = 2,
};
struct ETrackedControllerRole__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETrackedControllerRole__Enum value;
};
struct IVRSystem_GetTrackedDeviceIndexForControllerRole__VTable {
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
struct IVRSystem_GetTrackedDeviceIndexForControllerRole__StaticFields {
};
struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetTrackedDeviceIndexForControllerRole__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetTrackedDeviceIndexForControllerRole__VTable vtable;
};

struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetControllerRoleForTrackedDeviceIndex {
  struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Fields fields;
};}