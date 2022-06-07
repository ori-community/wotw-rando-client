namespace app {
struct DeltaTimeManager__Fields {
    struct MonoBehaviour__Fields _;
    struct DeltaTimeManager_DeltaTimeFrameHistory__Array *m_history;
    int32_t m_historyIndex;
    bool m_historyWrapped;
    struct IDeltaTimeController *m_controller;
    DeltaTimeManager_ControllerType__Enum m_controllerType;
    
    bool m_enabled;
    struct Stopwatch *m_stopWatch;
};

struct DeltaTimeManager {
    struct DeltaTimeManager__Class *klass;
    MonitorData *monitor;
    struct DeltaTimeManager__Fields fields;
};

struct IDeltaTimeController {
    struct IDeltaTimeController__Class *klass;
    MonitorData *monitor;
};

struct IDeltaTimeController__VTable {
    VirtualInvokeData Initialize;
    VirtualInvokeData PreTimeManagerUpdate;
    VirtualInvokeData PostTimeManagerUpdate;
};

struct IDeltaTimeController__StaticFields {
};

struct IDeltaTimeController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IDeltaTimeController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IDeltaTimeController__VTable vtable;
};

struct DeltaTimeManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DeltaTimeManager__StaticFields {
    int32_t HISTORY_LENGTH;
    struct DeltaTimeManager *Instance;
    struct PlayerLoopSystem m_afterTimeManagerPLS;
    struct PlayerLoopSystem m_beforeTimeManagerPLS;
};

struct DeltaTimeManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeltaTimeManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeltaTimeManager__VTable vtable;
};

enum class DeltaTimeManager_InsertionMode__Enum : int32_t {
    Before = 0x00000000,
    After = 0x00000001,
};

struct DeltaTimeManager_InsertionMode__Enum__Boxed {
    struct DeltaTimeManager_InsertionMode__Enum__Class *klass;
    MonitorData *monitor;
    DeltaTimeManager_InsertionMode__Enum value;
    
};

struct DeltaTimeManager_InsertionMode__Enum__VTable {
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

struct DeltaTimeManager_InsertionMode__Enum__StaticFields {
};

struct DeltaTimeManager_InsertionMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeltaTimeManager_InsertionMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeltaTimeManager_InsertionMode__Enum__VTable vtable;
};

struct DeltaTimeManager_DeltaTimeFrameHistory___VTable {
};

struct DeltaTimeManager_DeltaTimeFrameHistory___StaticFields {
};

struct DeltaTimeManager_DeltaTimeFrameHistory___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DeltaTimeManager_DeltaTimeFrameHistory___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DeltaTimeManager_DeltaTimeFrameHistory___VTable vtable;
};

struct DirectDeltaTimeController {
    struct DirectDeltaTimeController__Class *klass;
    MonitorData *monitor;
};

struct DirectDeltaTimeController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData PreTimeManagerUpdate;
    VirtualInvokeData PostTimeManagerUpdate;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData PreTimeManagerUpdate_1;
    VirtualInvokeData PostTimeManagerUpdate_1;
};

struct DirectDeltaTimeController__StaticFields {
};

struct DirectDeltaTimeController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DirectDeltaTimeController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DirectDeltaTimeController__VTable vtable;
};

struct __declspec(align(8)) FixedDeltaTimeController__Fields {
    int32_t m_fps;
};

struct FixedDeltaTimeController {
    struct FixedDeltaTimeController__Class *klass;
    MonitorData *monitor;
    struct FixedDeltaTimeController__Fields fields;
};

struct FixedDeltaTimeController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData PreTimeManagerUpdate;
    VirtualInvokeData PostTimeManagerUpdate;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData PreTimeManagerUpdate_1;
    VirtualInvokeData PostTimeManagerUpdate_1;
};

struct FixedDeltaTimeController__StaticFields {
};

struct FixedDeltaTimeController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FixedDeltaTimeController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FixedDeltaTimeController__VTable vtable;
};

struct PausedDeltaTimeController {
    struct PausedDeltaTimeController__Class *klass;
    MonitorData *monitor;
};

struct PausedDeltaTimeController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData PreTimeManagerUpdate;
    VirtualInvokeData PostTimeManagerUpdate;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData PreTimeManagerUpdate_1;
    VirtualInvokeData PostTimeManagerUpdate_1;
};

struct PausedDeltaTimeController__StaticFields {
};

struct PausedDeltaTimeController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PausedDeltaTimeController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PausedDeltaTimeController__VTable vtable;
};

struct Utils_5 {
    struct Utils_5__Class *klass;
    MonitorData *monitor;
};

struct Utils_5__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Utils_5__StaticFields {
};

struct Utils_5__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Utils_5__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Utils_5__VTable vtable;
};

struct PCQualityModeManager {
    struct PCQualityModeManager__Class *klass;
    MonitorData *monitor;
};

struct PCQualityModeManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PCQualityModeManager__StaticFields {
    PCQualityModeManager_QualityMode__Enum m_currentMode;
    
};

struct PCQualityModeManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PCQualityModeManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QualityModeTweakAsset__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QualityModeTweakAsset__VTable vtable;
};

struct XboxQualityModeManager {
    struct XboxQualityModeManager__Class *klass;
    MonitorData *monitor;
};

struct XboxQualityModeManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XboxQualityModeManager__StaticFields {
    bool m_disableVsyncForPerformanceMode;
    XboxQualityModeManager_QualityMode__Enum m_currentMode;
    
};

struct XboxQualityModeManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XboxQualityModeManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XboxQualityModeManager__VTable vtable;
};

struct IVRSystem_GetRecommendedRenderTargetSize__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetRecommendedRenderTargetSize {
    struct IVRSystem_GetRecommendedRenderTargetSize__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetRecommendedRenderTargetSize__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetRecommendedRenderTargetSize__VTable vtable;
};

struct IVRSystem_GetProjectionMatrix__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetProjectionMatrix {
    struct IVRSystem_GetProjectionMatrix__Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
    struct HmdMatrix44_t fields;
};

enum class EVREye__Enum : int32_t {
    Eye_Left = 0x00000000,
    Eye_Right = 0x00000001,
};

struct EVREye__Enum__Boxed {
    struct EVREye__Enum__Class *klass;
    MonitorData *monitor;
    EVREye__Enum value;
    
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HmdMatrix44_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HmdMatrix44_t__VTable vtable;
};

struct EVREye__Enum__VTable {
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

struct EVREye__Enum__StaticFields {
};

struct EVREye__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVREye__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVREye__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetProjectionMatrix__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetProjectionMatrix__VTable vtable;
};

struct IVRSystem_GetProjectionRaw__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetProjectionRaw {
    struct IVRSystem_GetProjectionRaw__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetProjectionRaw__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetProjectionRaw__VTable vtable;
};

struct IVRSystem_ComputeDistortion__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_ComputeDistortion {
    struct IVRSystem_ComputeDistortion__Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DistortionCoordinates_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DistortionCoordinates_t__VTable vtable;
};

struct DistortionCoordinates_t___VTable {
};

struct DistortionCoordinates_t___StaticFields {
};

struct DistortionCoordinates_t___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DistortionCoordinates_t___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DistortionCoordinates_t___VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_ComputeDistortion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_ComputeDistortion__VTable vtable;
};

struct IVRSystem_GetEyeToHeadTransform__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetEyeToHeadTransform {
    struct IVRSystem_GetEyeToHeadTransform__Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HmdMatrix34_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetEyeToHeadTransform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetEyeToHeadTransform__VTable vtable;
};

struct IVRSystem_GetTimeSinceLastVsync__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetTimeSinceLastVsync {
    struct IVRSystem_GetTimeSinceLastVsync__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetTimeSinceLastVsync__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetTimeSinceLastVsync__VTable vtable;
};

struct IVRSystem_GetD3D9AdapterIndex__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetD3D9AdapterIndex {
    struct IVRSystem_GetD3D9AdapterIndex__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetD3D9AdapterIndex__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetD3D9AdapterIndex__VTable vtable;
};

struct IVRSystem_GetDXGIOutputInfo__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetDXGIOutputInfo {
    struct IVRSystem_GetDXGIOutputInfo__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetDXGIOutputInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetDXGIOutputInfo__VTable vtable;
};

struct IVRSystem_GetOutputDevice__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_GetOutputDevice {
    struct IVRSystem_GetOutputDevice__Class *klass;
    MonitorData *monitor;
    struct IVRSystem_GetOutputDevice__Fields fields;
};

enum class ETextureType__Enum : int32_t {
    DirectX = 0x00000000,
    OpenGL = 0x00000001,
    Vulkan = 0x00000002,
    IOSurface = 0x00000003,
    DirectX12 = 0x00000004,
};

struct ETextureType__Enum__Boxed {
    struct ETextureType__Enum__Class *klass;
    MonitorData *monitor;
    ETextureType__Enum value;
    
};

struct ETextureType__Enum__VTable {
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

struct ETextureType__Enum__StaticFields {
};

struct ETextureType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ETextureType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ETextureType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_GetOutputDevice__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_GetOutputDevice__VTable vtable;
};

struct IVRSystem_IsDisplayOnDesktop__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_IsDisplayOnDesktop {
    struct IVRSystem_IsDisplayOnDesktop__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRSystem_IsDisplayOnDesktop__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRSystem_IsDisplayOnDesktop__VTable vtable;
};

struct IVRSystem_SetDisplayVisibility__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRSystem_SetDisplayVisibility {
    struct IVRSystem_SetDisplayVisibility__Class *klass;
    MonitorData *monitor;
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

}
