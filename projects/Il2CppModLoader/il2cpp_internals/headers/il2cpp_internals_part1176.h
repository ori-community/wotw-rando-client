namespace app {

struct RemoteStorageEnumerateUserSubscribedFilesResult_t {
  enum EResult__Enum m_eResult;
  int32_t m_nResultsReturned;
  int32_t m_nTotalResultCount;
  struct PublishedFileId_t__Array * m_rgPublishedFileId;
  struct UInt32__Array * m_rgRTimeSubscribed;
};
struct RemoteStorageEnumerateUserSubscribedFilesResult_t__Boxed {
  struct RemoteStorageEnumerateUserSubscribedFilesResult_t__Class *klass;
  struct MonitorData *monitor;
  struct RemoteStorageEnumerateUserSubscribedFilesResult_t fields;
};
struct RemoteStorageEnumerateUserSubscribedFilesResult_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RemoteStorageEnumerateUserSubscribedFilesResult_t__StaticFields {
};
struct RemoteStorageEnumerateUserSubscribedFilesResult_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RemoteStorageEnumerateUserSubscribedFilesResult_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RemoteStorageEnumerateUserSubscribedFilesResult_t__VTable vtable;
};

struct ParameterizedStrings {
  struct ParameterizedStrings__Class *klass;
  struct MonitorData *monitor;
};
struct ParameterizedStrings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParameterizedStrings__StaticFields {
  struct ParameterizedStrings_LowLevelStack * _cachedStack;
};
struct ParameterizedStrings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParameterizedStrings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParameterizedStrings__VTable vtable;
};

struct EarlyZChildDebugger__Array {
  struct EarlyZChildDebugger__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EarlyZChildDebugger * vector[32];
};

struct ShaderID_PerformanceTestManager {
  struct ShaderID_PerformanceTestManager__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_PerformanceTestManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_PerformanceTestManager__StaticFields {
  int32_t _GlobalDebugScale;
};
struct ShaderID_PerformanceTestManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_PerformanceTestManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_PerformanceTestManager__VTable vtable;
};

struct ISecurityEncodable {
  struct ISecurityEncodable__Class *klass;
  struct MonitorData *monitor;
};
struct ISecurityEncodable__VTable {
  VirtualInvokeData ToXml;
};
struct ISecurityEncodable__StaticFields {
};
struct ISecurityEncodable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISecurityEncodable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISecurityEncodable__VTable vtable;
};

enum PetrifiedOwlBossEntity_AnimationDirections__Enum : int32_t {
  PetrifiedOwlBossEntity_AnimationDirections__Enum_Normal = 0,
  PetrifiedOwlBossEntity_AnimationDirections__Enum_Mirrored = 1,
};
struct PetrifiedOwlBossEntity_AnimationDirections__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PetrifiedOwlBossEntity_AnimationDirections__Enum value;
};

struct ShaderID_PhotoFilter {
  struct ShaderID_PhotoFilter__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_PhotoFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_PhotoFilter__StaticFields {
  int32_t _RGB;
  int32_t _Density;
};
struct ShaderID_PhotoFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_PhotoFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_PhotoFilter__VTable vtable;
};

struct SmoothCurve__Array {
  struct SmoothCurve__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SmoothCurve * vector[32];
};

struct PhraseRecognitionSystem {
  struct PhraseRecognitionSystem__Class *klass;
  struct MonitorData *monitor;
};
struct PhraseRecognitionSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PhraseRecognitionSystem__StaticFields {
  struct PhraseRecognitionSystem_ErrorDelegate * OnError;
  struct PhraseRecognitionSystem_StatusDelegate * OnStatusChanged;
};
struct PhraseRecognitionSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhraseRecognitionSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhraseRecognitionSystem__VTable vtable;
};

struct IPhysicsUpdateHandlerValidable {
  struct IPhysicsUpdateHandlerValidable__Class *klass;
  struct MonitorData *monitor;
};
struct IPhysicsUpdateHandlerValidable__VTable {
  VirtualInvokeData get_IsValid;
};
struct IPhysicsUpdateHandlerValidable__StaticFields {
};
struct IPhysicsUpdateHandlerValidable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPhysicsUpdateHandlerValidable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPhysicsUpdateHandlerValidable__VTable vtable;
};

struct PhysicsUpdateHandlerManager_Temp {
  struct PhysicsUpdateHandlerManager_Temp__Class *klass;
  struct MonitorData *monitor;
};
struct PhysicsUpdateHandlerManager_Temp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PhysicsUpdateHandlerManager_Temp__StaticFields {
  struct List_1_Moon_IPhysicsUpdateHandler_ * updateHandlers;
  struct List_1_Moon_IPhysicsUpdateHandler_ * updateHandlersFixed;
  struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ * jobSystems;
  struct Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ * jobSystemsFixed;
};
struct PhysicsUpdateHandlerManager_Temp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicsUpdateHandlerManager_Temp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicsUpdateHandlerManager_Temp__VTable vtable;
};

struct ShaderID_PixelMatrix {
  struct ShaderID_PixelMatrix__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_PixelMatrix__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_PixelMatrix__StaticFields {
  int32_t _Params;
};
struct ShaderID_PixelMatrix__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_PixelMatrix__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_PixelMatrix__VTable vtable;
};

struct ShaderID_Pixelate {
  struct ShaderID_Pixelate__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Pixelate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Pixelate__StaticFields {
  int32_t _Params;
};
struct ShaderID_Pixelate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Pixelate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Pixelate__VTable vtable;
};

struct ShaderID_UberWaterReflection {
  struct ShaderID_UberWaterReflection__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_UberWaterReflection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_UberWaterReflection__StaticFields {
  int32_t _UberShaderGlobalParams;
  int32_t _ReflectionClipPlane;
  int32_t _ReflectionTex;
  int32_t _LayeredRender;
  int32_t _ReflStrength;
  int32_t _Parameter;
  int32_t _ReflUVScale;
  int32_t _ReflUVMaxRegion;
};
struct ShaderID_UberWaterReflection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_UberWaterReflection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_UberWaterReflection__VTable vtable;
};

struct PlatformHelper {
  struct PlatformHelper__Class *klass;
  struct MonitorData *monitor;
};
struct PlatformHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlatformHelper__StaticFields {
  int32_t s_processorCount;
  int32_t s_lastProcessorCountRefreshTicks;
};
struct PlatformHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlatformHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlatformHelper__VTable vtable;
};

struct Platform {
  struct Platform__Class *klass;
  struct MonitorData *monitor;
};
struct Platform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Platform__StaticFields {
  bool checkedOS;
  bool isMacOS;
  bool isFreeBSD;
};
struct Platform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Platform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Platform__VTable vtable;
};

struct PlayFabDeviceUtil {
  struct PlayFabDeviceUtil__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabDeviceUtil__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabDeviceUtil__StaticFields {
  bool _needsAttribution;
  bool _gatherDeviceInfo;
  bool _gatherScreenTime;
};
struct PlayFabDeviceUtil__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabDeviceUtil__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabDeviceUtil__VTable vtable;
};

struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline_ {
  struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___StaticFields {
};
struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_KeyValuePair_2_PlayFab_EventPipelineKey_PlayFab_Pipeline_IEventPipeline___VTable vtable;
};

struct PlayFabDataAPI {
  struct PlayFabDataAPI__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabDataAPI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabDataAPI__StaticFields {
};
struct PlayFabDataAPI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabDataAPI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabDataAPI__VTable vtable;
};

struct PlayFabIdfa {
  struct PlayFabIdfa__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabIdfa__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabIdfa__StaticFields {
};
struct PlayFabIdfa__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabIdfa__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabIdfa__VTable vtable;
};

struct ITelemetrySerializable {
  struct ITelemetrySerializable__Class *klass;
  struct MonitorData *monitor;
};
struct ITelemetrySerializable__VTable {
  VirtualInvokeData Serialize;
};
struct ITelemetrySerializable__StaticFields {
};
struct ITelemetrySerializable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITelemetrySerializable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITelemetrySerializable__VTable vtable;
};

struct PlayFabServerAPI {
  struct PlayFabServerAPI__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabServerAPI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabServerAPI__StaticFields {
};
struct PlayFabServerAPI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabServerAPI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabServerAPI__VTable vtable;
};

struct PlayFabProfilesAPI {
  struct PlayFabProfilesAPI__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabProfilesAPI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabProfilesAPI__StaticFields {
};
struct PlayFabProfilesAPI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabProfilesAPI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabProfilesAPI__VTable vtable;
};

struct PlayFabEventsAPI {
  struct PlayFabEventsAPI__Class *klass;
  struct MonitorData *monitor;
};
struct PlayFabEventsAPI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayFabEventsAPI__StaticFields {
};
struct PlayFabEventsAPI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayFabEventsAPI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayFabEventsAPI__VTable vtable;
};

struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate_ {
  struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___StaticFields {
};
struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_KeyValuePair_2_System_String_KeyValuePair_2_System_Type_PlayFab_Json_ReflectionUtils_SetDelegate___VTable vtable;
};

struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate_ {
  struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___StaticFields {
};
struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_KeyValuePair_2_System_Reflection_MemberInfo_PlayFab_Json_ReflectionUtils_GetDelegate___VTable vtable;
};

struct ShaderID_PostEffectsHelper {
  struct ShaderID_PostEffectsHelper__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_PostEffectsHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_PostEffectsHelper__StaticFields {
  int32_t _MainTex;
};
struct ShaderID_PostEffectsHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_PostEffectsHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_PostEffectsHelper__VTable vtable;
};

struct ShaderID_Posterize {
  struct ShaderID_Posterize__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_Posterize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_Posterize__StaticFields {
  int32_t _Params;
};
struct ShaderID_Posterize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_Posterize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_Posterize__VTable vtable;
};

struct ScenePreloading {
  struct ScenePreloading__Class *klass;
  struct MonitorData *monitor;
};
struct ScenePreloading__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScenePreloading__StaticFields {
  struct List_1_Moon_Timeline_FixedDurationSceneEntity_ * m_tempEntities;
};
struct ScenePreloading__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScenePreloading__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScenePreloading__VTable vtable;
};

struct ValidateNames {
  struct ValidateNames__Class *klass;
  struct MonitorData *monitor;
};
struct ValidateNames__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ValidateNames__StaticFields {
  struct XmlCharType xmlCharType;
};
struct ValidateNames__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValidateNames__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValidateNames__VTable vtable;
};

struct IDesignerHost {
  struct IDesignerHost__Class *klass;
  struct MonitorData *monitor;
};
struct IDesignerHost__VTable {
  VirtualInvokeData get_RootComponent;
  VirtualInvokeData GetDesigner;
};
struct IDesignerHost__StaticFields {
};
struct IDesignerHost__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDesignerHost__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDesignerHost__VTable vtable;
};

struct Ambience_Processing {
  struct Ambience_Processing__Class *klass;
  struct MonitorData *monitor;
};
struct Ambience_Processing__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Ambience_Processing__StaticFields {
  int32_t MaxActiveAmbienceZones;
};
struct Ambience_Processing__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Ambience_Processing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Ambience_Processing__VTable vtable;
};

struct _PropertyInfo {
  struct _PropertyInfo__Class *klass;
  struct MonitorData *monitor;
};
struct _PropertyInfo__VTable {
};
struct _PropertyInfo__StaticFields {
};
struct _PropertyInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct _PropertyInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct _PropertyInfo__VTable vtable;
};

struct ShaderID_RGBSplit {
  struct ShaderID_RGBSplit__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_RGBSplit__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_RGBSplit__StaticFields {
  int32_t _Params;
};
struct ShaderID_RGBSplit__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_RGBSplit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_RGBSplit__VTable vtable;
};

struct ShaderID_RadialBlur {
  struct ShaderID_RadialBlur__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_RadialBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_RadialBlur__StaticFields {
  int32_t _Center;
  int32_t _Params;
};
struct ShaderID_RadialBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_RadialBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_RadialBlur__VTable vtable;
};

struct ICollisionContext {
  struct ICollisionContext__Class *klass;
  struct MonitorData *monitor;
};
struct ICollisionContext__VTable {
  VirtualInvokeData get_Collision;
  VirtualInvokeData get_CollisionReciever;
};
struct ICollisionContext__StaticFields {
};
struct ICollisionContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollisionContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollisionContext__VTable vtable;
};

struct ShaderID_ReconstructionFilter {
  struct ShaderID_ReconstructionFilter__Class *klass;
  struct MonitorData *monitor;
};
struct ShaderID_ReconstructionFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShaderID_ReconstructionFilter__StaticFields {
  int32_t _VelocityScale;
  int32_t _MaxBlurRadius;
  int32_t _RcpMaxBlurRadius;
  int32_t _TileMaxOffs;
  int32_t _TileMaxLoop;
  int32_t _LoopCount;
  int32_t _NeighborMaxTex;
  int32_t _VelocityTex;
};
struct ShaderID_ReconstructionFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShaderID_ReconstructionFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShaderID_ReconstructionFilter__VTable vtable;
};

struct IFrameData {
  struct IFrameData__Class *klass;
  struct MonitorData *monitor;
};
struct IFrameData__VTable {
  VirtualInvokeData Save;
  VirtualInvokeData Load;
  VirtualInvokeData FrameType;
};
struct IFrameData__StaticFields {
};
struct IFrameData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IFrameData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IFrameData__VTable vtable;
};

struct MoonProfilerManager_Recorders {
  struct MoonProfilerManager_Recorders__Class *klass;
  struct MonitorData *monitor;
};
struct MoonProfilerManager_Recorders__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonProfilerManager_Recorders__StaticFields {
  struct Recorder * fixedUpdate;
  struct Recorder * update;
  struct Recorder * lateUpdate;
  struct Recorder * coroutines;
  struct Recorder * physicsFixedUpdate;
};
struct MoonProfilerManager_Recorders__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonProfilerManager_Recorders__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonProfilerManager_Recorders__VTable vtable;
};

struct IReferenceService {
  struct IReferenceService__Class *klass;
  struct MonitorData *monitor;
};
struct IReferenceService__VTable {
  VirtualInvokeData GetReference;
  VirtualInvokeData GetName;
  VirtualInvokeData GetReferences;
};
struct IReferenceService__StaticFields {
};
struct IReferenceService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IReferenceService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IReferenceService__VTable vtable;
};

struct IMoonType {
  struct IMoonType__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType__VTable {
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
};
struct IMoonType__StaticFields {
};
struct IMoonType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType__VTable vtable;
};

struct IComponentChangeService {
  struct IComponentChangeService__Class *klass;
  struct MonitorData *monitor;
};
struct IComponentChangeService__VTable {
  VirtualInvokeData OnComponentChanged;
  VirtualInvokeData OnComponentChanging;
};
struct IComponentChangeService__StaticFields {
};
struct IComponentChangeService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IComponentChangeService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IComponentChangeService__VTable vtable;
};

struct IDictionaryService {
  struct IDictionaryService__Class *klass;
  struct MonitorData *monitor;
};
struct IDictionaryService__VTable {
  VirtualInvokeData GetValue;
  VirtualInvokeData SetValue;
};
struct IDictionaryService__StaticFields {
};
struct IDictionaryService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionaryService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionaryService__VTable vtable;
};

struct Attribute__Array__Array {
  struct Attribute__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Attribute__Array * vector[32];
};

struct IExtenderListService {
  struct IExtenderListService__Class *klass;
  struct MonitorData *monitor;
};
struct IExtenderListService__VTable {
  VirtualInvokeData GetExtenderProviders;
};
struct IExtenderListService__StaticFields {
};
struct IExtenderListService__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IExtenderListService__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IExtenderListService__VTable vtable;
};

struct ReflectPropertyDescriptor__Array {
  struct ReflectPropertyDescriptor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ReflectPropertyDescriptor * vector[32];
};

struct TypeTranslator {
  struct TypeTranslator__Class *klass;
  struct MonitorData *monitor;
};
struct TypeTranslator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeTranslator__StaticFields {
  struct Hashtable * nameCache;
  struct Hashtable * primitiveTypes;
  struct Hashtable * primitiveArrayTypes;
  struct Hashtable * nullableTypes;
};
struct TypeTranslator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeTranslator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeTranslator__VTable vtable;
};

struct Physics {
  struct Physics__Class *klass;
  struct MonitorData *monitor;
};
struct Physics__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Physics__StaticFields {
};
struct Physics__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Physics__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Physics__VTable vtable;
};

struct ICollection_1_System_Reflection_PropertyInfo_ {
  struct ICollection_1_System_Reflection_PropertyInfo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Reflection_PropertyInfo___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_System_Reflection_PropertyInfo___StaticFields {
};
struct ICollection_1_System_Reflection_PropertyInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_System_Reflection_PropertyInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_System_Reflection_PropertyInfo___VTable vtable;
};

struct IEnumerator_1_System_Linq_IGrouping_2__3 {
  struct IEnumerator_1_System_Linq_IGrouping_2__3__Class *klass;
  struct MonitorData *monitor;
};}