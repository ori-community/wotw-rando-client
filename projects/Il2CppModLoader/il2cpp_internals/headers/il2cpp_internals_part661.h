namespace app {
struct MiscDebugMenuPage {
  struct MiscDebugMenuPage__Class *klass;
  struct MonitorData *monitor;
  struct MiscDebugMenuPage__Fields fields;
};
struct MiscDebugMenuPage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ColumnOffset;
  VirtualInvokeData GetItems;
};
struct MiscDebugMenuPage__StaticFields {
};
struct MiscDebugMenuPage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MiscDebugMenuPage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MiscDebugMenuPage__VTable vtable;
};

struct MiscDebugMenuPage_c {
  struct MiscDebugMenuPage_c__Class *klass;
  struct MonitorData *monitor;
};
struct MiscDebugMenuPage_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MiscDebugMenuPage_c__StaticFields {
  struct MiscDebugMenuPage_c * __9;
  struct Func_1_Boolean_ * __9__9_0;
  struct Action_1_Boolean_ * __9__9_1;
};
struct MiscDebugMenuPage_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MiscDebugMenuPage_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MiscDebugMenuPage_c__VTable vtable;
};

struct PerformanceDebugMenuPage__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_name;
  struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ * m_usedSettings;
};
struct PerformanceDebugMenuPage {
  struct PerformanceDebugMenuPage__Class *klass;
  struct MonitorData *monitor;
  struct PerformanceDebugMenuPage__Fields fields;
};
struct __declspec(align(8)) HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
  struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Fields fields;
};
enum ProfilingSettings_SettingType__Enum : int32_t {
  ProfilingSettings_SettingType__Enum_AlwaysShowDynamicTestDebugInfo = 0,
  ProfilingSettings_SettingType__Enum_BoostMode = 1,
  ProfilingSettings_SettingType__Enum_GPUAutoBoost = 2,
  ProfilingSettings_SettingType__Enum_CenterSliceOnly = 3,
  ProfilingSettings_SettingType__Enum_ColorVariation = 4,
  ProfilingSettings_SettingType__Enum_DepthOfField = 5,
  ProfilingSettings_SettingType__Enum_DepthPrecull = 6,
  ProfilingSettings_SettingType__Enum_Distortion = 7,
  ProfilingSettings_SettingType__Enum_DoStressTests = 8,
  ProfilingSettings_SettingType__Enum_EarlyZ = 9,
  ProfilingSettings_SettingType__Enum_EarlyZReconstruction = 10,
  ProfilingSettings_SettingType__Enum_Emissivity = 11,
  ProfilingSettings_SettingType__Enum_Darkening = 12,
  ProfilingSettings_SettingType__Enum_EnableSimpleFPS = 13,
  ProfilingSettings_SettingType__Enum_EnableFrameGraph = 14,
  ProfilingSettings_SettingType__Enum_FXAA = 15,
  ProfilingSettings_SettingType__Enum_GodRays = 16,
  ProfilingSettings_SettingType__Enum_InstantiationProfiling = 17,
  ProfilingSettings_SettingType__Enum_Lighting = 18,
  ProfilingSettings_SettingType__Enum_LowResolution = 19,
  ProfilingSettings_SettingType__Enum_ForceMaxDRS = 20,
  ProfilingSettings_SettingType__Enum_MeshTrails = 21,
  ProfilingSettings_SettingType__Enum_MoonTrails = 22,
  ProfilingSettings_SettingType__Enum_MotionBlur = 23,
  ProfilingSettings_SettingType__Enum_ObjectProfiling = 24,
  ProfilingSettings_SettingType__Enum_OneCorePerWorker = 25,
  ProfilingSettings_SettingType__Enum_AllowCoreTwoWorkerOnCoreZero = 26,
  ProfilingSettings_SettingType__Enum_WorkersOnAllCores = 27,
  ProfilingSettings_SettingType__Enum_Particles = 28,
  ProfilingSettings_SettingType__Enum_ParticleSimulation = 29,
  ProfilingSettings_SettingType__Enum_Pooling = 30,
  ProfilingSettings_SettingType__Enum_PostProcessing = 31,
  ProfilingSettings_SettingType__Enum_PotatoMode = 32,
  ProfilingSettings_SettingType__Enum_Refraction = 33,
  ProfilingSettings_SettingType__Enum_ShowFPSGraph = 34,
  ProfilingSettings_SettingType__Enum_ExpandFPSGraph = 35,
  ProfilingSettings_SettingType__Enum_ShowSlicedRenderEditor = 36,
  ProfilingSettings_SettingType__Enum_ShowSceneInspector = 37,
  ProfilingSettings_SettingType__Enum_ShowMemoryOverlay = 38,
  ProfilingSettings_SettingType__Enum_TAA = 39,
  ProfilingSettings_SettingType__Enum_TakeScreenshotsDuringDynamicTest = 40,
  ProfilingSettings_SettingType__Enum_UI = 41,
  ProfilingSettings_SettingType__Enum_WaterReflection = 42,
  ProfilingSettings_SettingType__Enum_WaterSimulation = 43,
  ProfilingSettings_SettingType__Enum_Wwise = 44,
  ProfilingSettings_SettingType__Enum_DynamicResolutionScaling = 45,
  ProfilingSettings_SettingType__Enum_EnemySpawning = 46,
  ProfilingSettings_SettingType__Enum_AllSpawning = 47,
  ProfilingSettings_SettingType__Enum_ObjectPass = 48,
  ProfilingSettings_SettingType__Enum_DownsamplingThreshold = 49,
  ProfilingSettings_SettingType__Enum_FreezeShaderTime = 50,
  ProfilingSettings_SettingType__Enum_FreezeColorVariation = 51,
  ProfilingSettings_SettingType__Enum_NoBlurAroundFocusedSlice = 52,
  ProfilingSettings_SettingType__Enum_TrilinearFiltering = 53,
  ProfilingSettings_SettingType__Enum_SkinnedMeshRendering = 54,
  ProfilingSettings_SettingType__Enum_GfxJobQueue = 55,
  ProfilingSettings_SettingType__Enum_ScarlettPerformanceMode = 56,
  ProfilingSettings_SettingType__Enum_ResourcesUnloading = 57,
  ProfilingSettings_SettingType__Enum_ResourcesUnloadingV2 = 58,
  ProfilingSettings_SettingType__Enum_UberPoolLoadFromSceneStreaming = 59,
  ProfilingSettings_SettingType__Enum_UberPoolPrewarmExhausted = 60,
  ProfilingSettings_SettingType__Enum_HighResOpaqueCharacterRendering = 61,
  ProfilingSettings_SettingType__Enum_TimesliceSystemEOF = 62,
  ProfilingSettings_SettingType__Enum_TimeslicedResourceUnloading = 63,
  ProfilingSettings_SettingType__Enum_ThreeDeeLighting = 64,
  ProfilingSettings_SettingType__Enum_TwoDeeLighting = 65,
  ProfilingSettings_SettingType__Enum_Setting_Count = 66,
  ProfilingSettings_SettingType__Enum_WwiseSoundBankRefCounting = 67,
  ProfilingSettings_SettingType__Enum_PanicHints = 68,
  ProfilingSettings_SettingType__Enum_GcOnPanicHints = 69,
  ProfilingSettings_SettingType__Enum_CallDestroyWhenNotAwoken = 70,
  ProfilingSettings_SettingType__Enum_CallMoonCleanupWhenNotAwoken = 71,
  ProfilingSettings_SettingType__Enum_CallMoonCleanupWhenAwoken = 72,
  ProfilingSettings_SettingType__Enum_MaskErasingFixAllSlices = 73,
  ProfilingSettings_SettingType__Enum_MaskErasingFixFocusedSlice = 74,
  ProfilingSettings_SettingType__Enum_MaskErasingFixOff = 75,
  ProfilingSettings_SettingType__Enum_MainThreadLoadDebugger = 76,
  ProfilingSettings_SettingType__Enum_ReduceUnloadUtilityValue = 77,
  ProfilingSettings_SettingType__Enum_JobsThresholdSuspend = 78,
  ProfilingSettings_SettingType__Enum_TelemetryNewDeserialization = 79,
  ProfilingSettings_SettingType__Enum_TelemetryDeserializationDebug = 80,
  ProfilingSettings_SettingType__Enum_UseSwitchSlices = 81,
};
struct ProfilingSettings_SettingType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ProfilingSettings_SettingType__Enum value;
};
struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
  int32_t hashCode;
  int32_t next;
  enum ProfilingSettings_SettingType__Enum value;
};
struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Boxed {
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ fields;
};
struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Array {
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ vector[32];
};
struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
  struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
  struct MonitorData *monitor;
};
struct ProfilingSettings_SettingType__Enum__Array {
  struct ProfilingSettings_SettingType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum ProfilingSettings_SettingType__Enum vector[32];
};
struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
  struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
  struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_System_Byte__1__Fields {
  struct Byte__Array__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Byte__1 {
  struct List_1_System_Byte__1__Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Byte__1__Fields fields;
};
struct Byte__Array__Array {
  struct Byte__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Byte__Array * vector[32];
};
struct IEnumerator_1_System_Byte__1 {
  struct IEnumerator_1_System_Byte__1__Class *klass;
  struct MonitorData *monitor;
};
struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields {
};
struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable vtable;
};
struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields {
};
struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable vtable;
};
struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields {
};
struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable vtable;
};
struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields {
};
struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable vtable;
};
struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields {
};
struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType___VTable vtable;
};
struct IEnumerator_1_System_Byte__1__VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Byte__1__StaticFields {
};
struct IEnumerator_1_System_Byte__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Byte__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Byte__1__VTable vtable;
};
struct List_1_System_Byte__1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_System_Byte__1__StaticFields {
  struct Byte__Array__Array * _emptyArray;
};
struct List_1_System_Byte__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Byte__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Byte__1__VTable vtable;
};
struct PerformanceDebugMenuPage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ColumnOffset;
  VirtualInvokeData GetItems;
};
struct PerformanceDebugMenuPage__StaticFields {
  struct List_1_System_Byte__1 * m_fakeAllocations;
  enum FilterMode__Enum m_forceTrilinear;
  float m_mipBiasOverride;
};
struct PerformanceDebugMenuPage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PerformanceDebugMenuPage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PerformanceDebugMenuPage__VTable vtable;
};

struct PerformanceDebugMenuPage_c {
  struct PerformanceDebugMenuPage_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode_ {
  struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Fields fields;
};
enum UberGCLogic_ResourceCollectPriorityMode__Enum : int32_t {
  UberGCLogic_ResourceCollectPriorityMode__Enum_DefaultOnly = 0,
  UberGCLogic_ResourceCollectPriorityMode__Enum_Maximum = 1,
  UberGCLogic_ResourceCollectPriorityMode__Enum_Smart = 2,
};
struct UberGCLogic_ResourceCollectPriorityMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberGCLogic_ResourceCollectPriorityMode__Enum value;
};
struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode_ {
  struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Fields fields;
};
struct Func_1_GameplaySoundManager_AudioQualitySetting___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_GameplaySoundManager_AudioQualitySetting_ {
  struct Func_1_GameplaySoundManager_AudioQualitySetting___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_GameplaySoundManager_AudioQualitySetting___Fields fields;
};
struct Action_1_GameplaySoundManager_AudioQualitySetting___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_GameplaySoundManager_AudioQualitySetting_ {
  struct Action_1_GameplaySoundManager_AudioQualitySetting___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_GameplaySoundManager_AudioQualitySetting___Fields fields;
};
struct Func_1_UnityEngine_ThreadPriority___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UnityEngine_ThreadPriority_ {
  struct Func_1_UnityEngine_ThreadPriority___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UnityEngine_ThreadPriority___Fields fields;
};
struct Action_1_UnityEngine_ThreadPriority___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_ThreadPriority_ {
  struct Action_1_UnityEngine_ThreadPriority___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_ThreadPriority___Fields fields;
};
struct Func_1_LoadingBoostController_BoostModeLevel___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_LoadingBoostController_BoostModeLevel_ {
  struct Func_1_LoadingBoostController_BoostModeLevel___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_LoadingBoostController_BoostModeLevel___Fields fields;
};
struct Action_1_LoadingBoostController_BoostModeLevel___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_LoadingBoostController_BoostModeLevel_ {
  struct Action_1_LoadingBoostController_BoostModeLevel___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_LoadingBoostController_BoostModeLevel___Fields fields;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality_ {
  struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Fields fields;
};
enum MoonRenderPipelineDebugUI_Quality__Enum : int32_t {
  MoonRenderPipelineDebugUI_Quality__Enum_None = -1,
  MoonRenderPipelineDebugUI_Quality__Enum_Editor = 0,
  MoonRenderPipelineDebugUI_Quality__Enum_PC = 1,
  MoonRenderPipelineDebugUI_Quality__Enum_Switch = 2,
  MoonRenderPipelineDebugUI_Quality__Enum_SwitchDocked = 3,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxOne = 4,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxOneS = 5,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxOneX = 6,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxSeriesS = 7,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxSeriesX = 8,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxSeriesSQuality = 9,
  MoonRenderPipelineDebugUI_Quality__Enum_XboxSeriesXQuality = 10,
  MoonRenderPipelineDebugUI_Quality__Enum_PCLow = 11,
  MoonRenderPipelineDebugUI_Quality__Enum_PCHigh = 12,
};
struct MoonRenderPipelineDebugUI_Quality__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineDebugUI_Quality__Enum value;
};
struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality_ {
  struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Fields fields;
};
struct Func_1_MoonDataPlatform_XboxQualityModeManager_QualityMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_MoonDataPlatform_XboxQualityModeManager_QualityMode_ {
  struct Func_1_MoonDataPlatform_XboxQualityModeManager_QualityMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_MoonDataPlatform_XboxQualityModeManager_QualityMode___Fields fields;
};
enum XboxQualityModeManager_QualityMode__Enum : int32_t {
  XboxQualityModeManager_QualityMode__Enum_Performance = 0,
  XboxQualityModeManager_QualityMode__Enum_Quality = 1,
};
struct XboxQualityModeManager_QualityMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XboxQualityModeManager_QualityMode__Enum value;
};
struct Action_1_MoonDataPlatform_XboxQualityModeManager_QualityMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_MoonDataPlatform_XboxQualityModeManager_QualityMode_ {
  struct Action_1_MoonDataPlatform_XboxQualityModeManager_QualityMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_MoonDataPlatform_XboxQualityModeManager_QualityMode___Fields fields;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType_ {
  struct Func_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType___Fields fields;
};
struct Action_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType_ {
  struct Action_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Rendering_MoonRenderPipelineAsset_DofBlurType___Fields fields;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality_ {
  struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality___Fields fields;
};
enum MoonRenderPipelineDebugUI_TextureQuality__Enum : int32_t {
  MoonRenderPipelineDebugUI_TextureQuality__Enum_Full = 0,
  MoonRenderPipelineDebugUI_TextureQuality__Enum_Half = 1,
  MoonRenderPipelineDebugUI_TextureQuality__Enum_Quarter = 2,
  MoonRenderPipelineDebugUI_TextureQuality__Enum_Eighth = 3,
};
struct MoonRenderPipelineDebugUI_TextureQuality__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineDebugUI_TextureQuality__Enum value;
};
struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality_ {
  struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Rendering_MoonRenderPipelineDebugUI_TextureQuality___Fields fields;
};
struct Func_1_UnityEngine_FilterMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UnityEngine_FilterMode_ {
  struct Func_1_UnityEngine_FilterMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UnityEngine_FilterMode___Fields fields;
};
struct Action_1_UnityEngine_FilterMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_FilterMode_ {
  struct Action_1_UnityEngine_FilterMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_FilterMode___Fields fields;
};
struct Func_1_BehaviourTreeEvaluationSystem_EvaluationMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_BehaviourTreeEvaluationSystem_EvaluationMode_ {
  struct Func_1_BehaviourTreeEvaluationSystem_EvaluationMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_BehaviourTreeEvaluationSystem_EvaluationMode___Fields fields;
};
enum BehaviourTreeEvaluationSystem_EvaluationMode__Enum : int32_t {
  BehaviourTreeEvaluationSystem_EvaluationMode__Enum_AllEveryFrame = 0,
  BehaviourTreeEvaluationSystem_EvaluationMode__Enum_AllAtAInterval = 1,
  BehaviourTreeEvaluationSystem_EvaluationMode__Enum_HeuristicBased = 2,
};
struct BehaviourTreeEvaluationSystem_EvaluationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BehaviourTreeEvaluationSystem_EvaluationMode__Enum value;
};
struct Action_1_BehaviourTreeEvaluationSystem_EvaluationMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_BehaviourTreeEvaluationSystem_EvaluationMode_ {
  struct Action_1_BehaviourTreeEvaluationSystem_EvaluationMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_BehaviourTreeEvaluationSystem_EvaluationMode___Fields fields;
};
struct Func_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_ {
  struct Func_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint___Fields fields;
};
struct Action_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_ {
  struct Action_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint___Fields fields;
};
struct Func_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint_ {
  struct Func_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint___Fields fields;
};
struct Action_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint_ {
  struct Action_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Experimental_Rendering_WaitForPresentSyncPoint___Fields fields;
};
struct Func_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType_ {
  struct Func_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType___Fields fields;
};
enum DeltaTimeManager_ControllerType__Enum : int32_t {
  DeltaTimeManager_ControllerType__Enum_None = 0,
  DeltaTimeManager_ControllerType__Enum_Direct = 1,
  DeltaTimeManager_ControllerType__Enum_AverageBoth = 2,
  DeltaTimeManager_ControllerType__Enum_Fixed30 = 3,
  DeltaTimeManager_ControllerType__Enum_Fixed60 = 4,
  DeltaTimeManager_ControllerType__Enum_Fixed120 = 5,
  DeltaTimeManager_ControllerType__Enum_Fixed240 = 6,
  DeltaTimeManager_ControllerType__Enum_Paused = 7,
};
struct DeltaTimeManager_ControllerType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DeltaTimeManager_ControllerType__Enum value;
};
struct Action_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType_ {
  struct Action_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_usedStandaloneScripts_DeltaTimeManagers_DeltaTimeManager_ControllerType___Fields fields;
};
struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_ {
  struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode___Fields fields;
};
enum MainThreadWorkStealer_WorkStealingMode__Enum : int32_t {
  MainThreadWorkStealer_WorkStealingMode__Enum_None = 0,
  MainThreadWorkStealer_WorkStealingMode__Enum_Physics = 1,
  MainThreadWorkStealer_WorkStealingMode__Enum_All = 2,
};
struct MainThreadWorkStealer_WorkStealingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MainThreadWorkStealer_WorkStealingMode__Enum value;
};
struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode_ {
  struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_WorkStealingMode___Fields fields;
};
struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode_ {
  struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode___Fields fields;
};
enum MainThreadWorkStealer_TimeBudgetMode__Enum : int32_t {
  MainThreadWorkStealer_TimeBudgetMode__Enum_Fixed = 0,
  MainThreadWorkStealer_TimeBudgetMode__Enum_Auto = 1,
  MainThreadWorkStealer_TimeBudgetMode__Enum_DebugFixedWithPadding = 2,
};
struct MainThreadWorkStealer_TimeBudgetMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MainThreadWorkStealer_TimeBudgetMode__Enum value;
};
struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode_ {
  struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_usedStandaloneScripts_MainThreadWorkStealer_TimeBudgetMode___Fields fields;
};
struct Func_1_Moon_Jobs_JobMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Moon_Jobs_JobMode_ {
  struct Func_1_Moon_Jobs_JobMode___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Moon_Jobs_JobMode___Fields fields;
};
enum JobMode__Enum : int32_t {
  JobMode__Enum_NotJobbed = 0,
  JobMode__Enum_JobWithMonoBehaviour = 1,
};
struct JobMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JobMode__Enum value;
};
struct Action_1_Moon_Jobs_JobMode___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Jobs_JobMode_ {
  struct Action_1_Moon_Jobs_JobMode___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Jobs_JobMode___Fields fields;
};
struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___VTable {
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
struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___StaticFields {
};
struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___VTable vtable;
};
struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___VTable {
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
struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___StaticFields {
};
struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UberShader_optimizations_gc_UberGCLogic_ResourceCollectPriorityMode___VTable vtable;
};
struct Func_1_GameplaySoundManager_AudioQualitySetting___VTable {
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
struct Func_1_GameplaySoundManager_AudioQualitySetting___StaticFields {
};
struct Func_1_GameplaySoundManager_AudioQualitySetting___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_GameplaySoundManager_AudioQualitySetting___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_GameplaySoundManager_AudioQualitySetting___VTable vtable;
};
struct Action_1_GameplaySoundManager_AudioQualitySetting___VTable {
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
struct Action_1_GameplaySoundManager_AudioQualitySetting___StaticFields {
};
struct Action_1_GameplaySoundManager_AudioQualitySetting___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_GameplaySoundManager_AudioQualitySetting___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_GameplaySoundManager_AudioQualitySetting___VTable vtable;
};
struct Func_1_UnityEngine_ThreadPriority___VTable {
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
struct Func_1_UnityEngine_ThreadPriority___StaticFields {
};
struct Func_1_UnityEngine_ThreadPriority___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_UnityEngine_ThreadPriority___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_UnityEngine_ThreadPriority___VTable vtable;
};
struct Action_1_UnityEngine_ThreadPriority___VTable {
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
struct Action_1_UnityEngine_ThreadPriority___StaticFields {
};
struct Action_1_UnityEngine_ThreadPriority___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_ThreadPriority___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_ThreadPriority___VTable vtable;
};
struct Func_1_LoadingBoostController_BoostModeLevel___VTable {
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
struct Func_1_LoadingBoostController_BoostModeLevel___StaticFields {
};
struct Func_1_LoadingBoostController_BoostModeLevel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_LoadingBoostController_BoostModeLevel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_LoadingBoostController_BoostModeLevel___VTable vtable;
};
struct Action_1_LoadingBoostController_BoostModeLevel___VTable {
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
struct Action_1_LoadingBoostController_BoostModeLevel___StaticFields {
};
struct Action_1_LoadingBoostController_BoostModeLevel___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_LoadingBoostController_BoostModeLevel___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_LoadingBoostController_BoostModeLevel___VTable vtable;
};
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___VTable {
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
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___StaticFields {
};
struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_Moon_Rendering_MoonRenderPipelineDebugUI_Quality___VTable vtable;
};}