namespace app {
enum AmbientOcclusion_SampleCount__Enum : int32_t {
  AmbientOcclusion_SampleCount__Enum_Lowest = 0,
  AmbientOcclusion_SampleCount__Enum_Low = 1,
  AmbientOcclusion_SampleCount__Enum_Medium = 2,
  AmbientOcclusion_SampleCount__Enum_High = 3,
  AmbientOcclusion_SampleCount__Enum_Variable = 4,
};
struct AmbientOcclusion_SampleCount__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AmbientOcclusion_SampleCount__Enum value;
};
struct __declspec(align(8)) AmbientOcclusion_Settings__Fields {
  float intensity;
  float radius;
  enum AmbientOcclusion_SampleCount__Enum sampleCount;
  int32_t sampleCountValue;
  bool downsampling;
  bool ambientOnly;
  enum AmbientOcclusion_OcclusionSource__Enum occlusionSource;
  bool debug;
};
struct AmbientOcclusion_Settings {
  struct AmbientOcclusion_Settings__Class *klass;
  struct MonitorData *monitor;
  struct AmbientOcclusion_Settings__Fields fields;
};
struct AmbientOcclusion_Settings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmbientOcclusion_Settings__StaticFields {
};
struct AmbientOcclusion_Settings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmbientOcclusion_Settings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmbientOcclusion_Settings__VTable vtable;
};
struct AmbientOcclusion_PropertyObserver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmbientOcclusion_PropertyObserver__StaticFields {
};
struct AmbientOcclusion_PropertyObserver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmbientOcclusion_PropertyObserver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmbientOcclusion_PropertyObserver__VTable vtable;
};
struct AmbientOcclusion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AmbientOcclusion__StaticFields {
};
struct AmbientOcclusion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmbientOcclusion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmbientOcclusion__VTable vtable;
};

struct AntiAliasing__Fields {
  struct MonoBehaviour__Fields _;
  struct SMAA * m_SMAA;
  struct FXAA * m_FXAA;
  int32_t m_Method;
  struct Camera * m_Camera;
};
struct AntiAliasing {
  struct AntiAliasing__Class *klass;
  struct MonitorData *monitor;
  struct AntiAliasing__Fields fields;
};
enum SMAA_DebugPass__Enum : int32_t {
  SMAA_DebugPass__Enum_Off = 0,
  SMAA_DebugPass__Enum_Edges = 1,
  SMAA_DebugPass__Enum_Weights = 2,
  SMAA_DebugPass__Enum_Accumulation = 3,
};
struct SMAA_DebugPass__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SMAA_DebugPass__Enum value;
};
enum SMAA_QualityPreset__Enum : int32_t {
  SMAA_QualityPreset__Enum_Low = 0,
  SMAA_QualityPreset__Enum_Medium = 1,
  SMAA_QualityPreset__Enum_High = 2,
  SMAA_QualityPreset__Enum_Ultra = 3,
  SMAA_QualityPreset__Enum_Custom = 4,
};
struct SMAA_QualityPreset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SMAA_QualityPreset__Enum value;
};
enum SMAA_EdgeDetectionMethod__Enum : int32_t {
  SMAA_EdgeDetectionMethod__Enum_Luma = 1,
  SMAA_EdgeDetectionMethod__Enum_Color = 2,
  SMAA_EdgeDetectionMethod__Enum_Depth = 3,
};
struct SMAA_EdgeDetectionMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SMAA_EdgeDetectionMethod__Enum value;
};
struct SMAA_GlobalSettings {
  enum SMAA_DebugPass__Enum debugPass;
  enum SMAA_QualityPreset__Enum quality;
  enum SMAA_EdgeDetectionMethod__Enum edgeDetectionMethod;
};
struct SMAA_GlobalSettings__Boxed {
  struct SMAA_GlobalSettings__Class *klass;
  struct MonitorData *monitor;
  struct SMAA_GlobalSettings fields;
};
struct SMAA_QualitySettings {
  bool diagonalDetection;
  bool cornerDetection;
  float threshold;
  float depthThreshold;
  int32_t maxSearchSteps;
  int32_t maxDiagonalSearchSteps;
  int32_t cornerRounding;
  float localContrastAdaptationFactor;
};
struct SMAA_QualitySettings__Boxed {
  struct SMAA_QualitySettings__Class *klass;
  struct MonitorData *monitor;
  struct SMAA_QualitySettings fields;
};
struct SMAA_PredicationSettings {
  bool enabled;
  float threshold;
  float scale;
  float strength;
};
struct SMAA_PredicationSettings__Boxed {
  struct SMAA_PredicationSettings__Class *klass;
  struct MonitorData *monitor;
  struct SMAA_PredicationSettings fields;
};
struct SMAA_TemporalSettings {
  bool enabled;
  float fuzzSize;
};
struct SMAA_TemporalSettings__Boxed {
  struct SMAA_TemporalSettings__Class *klass;
  struct MonitorData *monitor;
  struct SMAA_TemporalSettings fields;
};
struct __declspec(align(8)) SMAA__Fields {
  struct SMAA_GlobalSettings settings;
  struct SMAA_QualitySettings quality;
  struct SMAA_PredicationSettings predication;
  struct SMAA_TemporalSettings temporal;
  struct Matrix4x4 m_ProjectionMatrix;
  struct Matrix4x4 m_PreviousViewProjectionMatrix;
  float m_FlipFlop;
  struct RenderTexture * m_Accumulation;
  struct Shader * m_Shader;
  struct Texture2D * m_AreaTexture;
  struct Texture2D * m_SearchTexture;
  struct Material * m_Material;
};
struct SMAA {
  struct SMAA__Class *klass;
  struct MonitorData *monitor;
  struct SMAA__Fields fields;
};
struct SMAA_QualitySettings__Array {
  struct SMAA_QualitySettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SMAA_QualitySettings vector[32];
};
struct FXAA_ConsoleSettings {
  float subpixelSpreadAmount;
  float edgeSharpnessAmount;
  float edgeDetectionThreshold;
  float minimumRequiredLuminance;
};
struct FXAA_ConsoleSettings__Boxed {
  struct FXAA_ConsoleSettings__Class *klass;
  struct MonitorData *monitor;
  struct FXAA_ConsoleSettings fields;
};
struct FXAA_Preset {
  struct FXAA_QualitySettings qualitySettings;
  struct FXAA_ConsoleSettings consoleSettings;
};
struct FXAA_Preset__Boxed {
  struct FXAA_Preset__Class *klass;
  struct MonitorData *monitor;
  struct FXAA_Preset fields;
};
struct __declspec(align(8)) FXAA__Fields {
  bool m_useSeparateAlpha;
  struct Shader * m_Shader;
  struct Material * m_Material;
  struct FXAA_Preset preset;
  bool _validSourceFormat_k__BackingField;
};
struct FXAA {
  struct FXAA__Class *klass;
  struct MonitorData *monitor;
  struct FXAA__Fields fields;
};
struct FXAA_Preset__Array {
  struct FXAA_Preset__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FXAA_Preset vector[32];
};
struct SMAA_GlobalSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SMAA_GlobalSettings__StaticFields {
};
struct SMAA_GlobalSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_GlobalSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_GlobalSettings__VTable vtable;
};
struct SMAA_QualitySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SMAA_QualitySettings__StaticFields {
  struct SMAA_QualitySettings__Array * presetQualitySettings;
};
struct SMAA_QualitySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_QualitySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_QualitySettings__VTable vtable;
};
struct SMAA_PredicationSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SMAA_PredicationSettings__StaticFields {
};
struct SMAA_PredicationSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_PredicationSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_PredicationSettings__VTable vtable;
};
struct SMAA_TemporalSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SMAA_TemporalSettings__StaticFields {
};
struct SMAA_TemporalSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_TemporalSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_TemporalSettings__VTable vtable;
};
struct SMAA__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnPreCull;
  VirtualInvokeData OnPostRender;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData OnRenderImage_1;
};
struct SMAA__StaticFields {
};
struct SMAA__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA__VTable vtable;
};
struct FXAA_ConsoleSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FXAA_ConsoleSettings__StaticFields {
};
struct FXAA_ConsoleSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FXAA_ConsoleSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FXAA_ConsoleSettings__VTable vtable;
};
struct FXAA_Preset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FXAA_Preset__StaticFields {
  struct FXAA_Preset s_ExtremePerformance;
  struct FXAA_Preset s_Performance;
  struct FXAA_Preset s_Default;
  struct FXAA_Preset s_Quality;
  struct FXAA_Preset s_ExtremeQuality;
};
struct FXAA_Preset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FXAA_Preset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FXAA_Preset__VTable vtable;
};
struct FXAA__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnPreCull;
  VirtualInvokeData OnPostRender;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData OnRenderImage_1;
};
struct FXAA__StaticFields {
  struct FXAA_Preset__Array * availablePresets;
};
struct FXAA__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FXAA__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FXAA__VTable vtable;
};
struct AntiAliasing__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IRenderPostprocessor_get_enabled;
  VirtualInvokeData IRenderPostprocessor_OnRenderImage;
};
struct AntiAliasing__StaticFields {
};
struct AntiAliasing__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AntiAliasing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AntiAliasing__VTable vtable;
};

struct IAntiAliasing {
  struct IAntiAliasing__Class *klass;
  struct MonitorData *monitor;
};
struct IAntiAliasing__VTable {
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnPreCull;
  VirtualInvokeData OnPostRender;
  VirtualInvokeData OnRenderImage;
  VirtualInvokeData OnRenderImage_1;
};
struct IAntiAliasing__StaticFields {
};
struct IAntiAliasing__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAntiAliasing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAntiAliasing__VTable vtable;
};

struct FXAA_Preset_LayoutAttribute {
  struct FXAA_Preset_LayoutAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct FXAA_Preset_LayoutAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct FXAA_Preset_LayoutAttribute__StaticFields {
};
struct FXAA_Preset_LayoutAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FXAA_Preset_LayoutAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FXAA_Preset_LayoutAttribute__VTable vtable;
};

struct SMAA_SettingsGroup {
  struct SMAA_SettingsGroup__Class *klass;
  struct MonitorData *monitor;
};
struct SMAA_SettingsGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SMAA_SettingsGroup__StaticFields {
};
struct SMAA_SettingsGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_SettingsGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_SettingsGroup__VTable vtable;
};

struct SMAA_TopLevelSettings {
  struct SMAA_TopLevelSettings__Class *klass;
  struct MonitorData *monitor;
};
struct SMAA_TopLevelSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SMAA_TopLevelSettings__StaticFields {
};
struct SMAA_TopLevelSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_TopLevelSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_TopLevelSettings__VTable vtable;
};

struct SMAA_ExperimentalGroup {
  struct SMAA_ExperimentalGroup__Class *klass;
  struct MonitorData *monitor;
};
struct SMAA_ExperimentalGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SMAA_ExperimentalGroup__StaticFields {
};
struct SMAA_ExperimentalGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SMAA_ExperimentalGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SMAA_ExperimentalGroup__VTable vtable;
};

enum Bloom_BloomBlendMode__Enum : int32_t {
  Bloom_BloomBlendMode__Enum_None = 0,
  Bloom_BloomBlendMode__Enum_Additive = 1,
  Bloom_BloomBlendMode__Enum_ScreenBlend = 2,
  Bloom_BloomBlendMode__Enum_Multiply = 3,
  Bloom_BloomBlendMode__Enum_Overlay = 4,
  Bloom_BloomBlendMode__Enum_PinLight = 5,
};
struct Bloom_BloomBlendMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Bloom_BloomBlendMode__Enum value;
};
struct Bloom_Settings {
  bool enabled;
  enum Bloom_BloomBlendMode__Enum blendMode;
  float threshold;
  float softKnee;
  float radius;
  float intensity;
  bool highQuality;
  bool antiFlicker;
};
struct Bloom_Settings__Boxed {
  struct Bloom_Settings__Class *klass;
  struct MonitorData *monitor;
  struct Bloom_Settings fields;
};
struct Bloom_1__Fields {
  struct MonoBehaviour__Fields _;
  struct Bloom_Settings CinematicBloom;
  float AdditiveIntensity;
  float AdditiveThreshhold;
  struct Shader * m_Shader;
  struct Material * m_Material;
  struct RenderTexture__Array * m_blurBuffer1;
  struct RenderTexture__Array * m_blurBuffer2;
};
struct Bloom_1 {
  struct Bloom_1__Class *klass;
  struct MonitorData *monitor;
  struct Bloom_1__Fields fields;
};
struct Bloom_Settings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Bloom_Settings__StaticFields {
};
struct Bloom_Settings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bloom_Settings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bloom_Settings__VTable vtable;
};
struct Bloom_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Bloom_1__StaticFields {
};
struct Bloom_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bloom_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bloom_1__VTable vtable;
};

struct __declspec(align(8)) MinAttribute_1__Fields {
  float min;
};
struct MinAttribute_1 {
  struct MinAttribute_1__Class *klass;
  struct MonitorData *monitor;
  struct MinAttribute_1__Fields fields;
};
struct MinAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MinAttribute_1__StaticFields {
};
struct MinAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinAttribute_1__VTable vtable;
};

struct __declspec(align(8)) RenderTextureUtility__Fields {
  struct List_1_UnityEngine_RenderTexture_ * m_TemporaryRTs;
};
struct RenderTextureUtility {
  struct RenderTextureUtility__Class *klass;
  struct MonitorData *monitor;
  struct RenderTextureUtility__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_RenderTexture___Fields {
  struct RenderTexture__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_RenderTexture_ {
  struct List_1_UnityEngine_RenderTexture___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_RenderTexture___Fields fields;
};
struct IEnumerator_1_UnityEngine_RenderTexture_ {
  struct IEnumerator_1_UnityEngine_RenderTexture___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_RenderTexture___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_RenderTexture___StaticFields {
};
struct IEnumerator_1_UnityEngine_RenderTexture___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_RenderTexture___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_RenderTexture___VTable vtable;
};
struct List_1_UnityEngine_RenderTexture___VTable {
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
struct List_1_UnityEngine_RenderTexture___StaticFields {
  struct RenderTexture__Array * _emptyArray;
};
struct List_1_UnityEngine_RenderTexture___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_RenderTexture___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_RenderTexture___VTable vtable;
};
struct RenderTextureUtility__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderTextureUtility__StaticFields {
};
struct RenderTextureUtility__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderTextureUtility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderTextureUtility__VTable vtable;
};

enum DepthOfField_TweakMode__Enum : int32_t {
  DepthOfField_TweakMode__Enum_Range = 0,
  DepthOfField_TweakMode__Enum_Explicit = 1,
};
struct DepthOfField_TweakMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfField_TweakMode__Enum value;
};
enum DepthOfField_QualityPreset__Enum : int32_t {
  DepthOfField_QualityPreset__Enum_Low = 0,
  DepthOfField_QualityPreset__Enum_Medium = 1,
  DepthOfField_QualityPreset__Enum_High = 2,
};
struct DepthOfField_QualityPreset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfField_QualityPreset__Enum value;
};
enum DepthOfField_ApertureShape__Enum : int32_t {
  DepthOfField_ApertureShape__Enum_Circular = 0,
  DepthOfField_ApertureShape__Enum_Hexagonal = 1,
  DepthOfField_ApertureShape__Enum_Octogonal = 2,
};
struct DepthOfField_ApertureShape__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfField_ApertureShape__Enum value;
};
struct DepthOfField_GlobalSettings {
  bool visualizeFocus;
  enum DepthOfField_TweakMode__Enum tweakMode;
  enum DepthOfField_QualityPreset__Enum filteringQuality;
  enum DepthOfField_ApertureShape__Enum apertureShape;
  float apertureOrientation;
};
struct DepthOfField_GlobalSettings__Boxed {
  struct DepthOfField_GlobalSettings__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfField_GlobalSettings fields;
};
struct DepthOfField_FocusSettings {
  struct Transform * transform;
  float focusPlane;
  float range;
  float nearPlane;
  float nearFalloff;
  float farPlane;
  float farFalloff;
  float nearBlurRadius;
  float farBlurRadius;
};
struct DepthOfField_FocusSettings__Boxed {
  struct DepthOfField_FocusSettings__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfField_FocusSettings fields;
};
struct DepthOfField_BokehTextureSettings {
  struct Texture2D * texture;
  float scale;
  float intensity;
  float threshold;
  float spawnHeuristic;
};
struct DepthOfField_BokehTextureSettings__Boxed {
  struct DepthOfField_BokehTextureSettings__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfField_BokehTextureSettings fields;
};
enum DepthOfField_FilterQuality__Enum : int32_t {
  DepthOfField_FilterQuality__Enum_None = 0,
  DepthOfField_FilterQuality__Enum_Normal = 1,
  DepthOfField_FilterQuality__Enum_High = 2,
};
struct DepthOfField_FilterQuality__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthOfField_FilterQuality__Enum value;
};
struct DepthOfField_QualitySettings {
  bool prefilterBlur;
  enum DepthOfField_FilterQuality__Enum medianFilter;
  bool dilateNearBlur;
};
struct DepthOfField_QualitySettings__Boxed {
  struct DepthOfField_QualitySettings__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfField_QualitySettings fields;
};
struct DepthOfField_1__Fields {
  struct MonoBehaviour__Fields _;
  struct DepthOfField_GlobalSettings settings;
  struct DepthOfField_FocusSettings focus;
  struct DepthOfField_BokehTextureSettings bokehTexture;
  struct Shader * m_FilmicDepthOfFieldShader;
  struct Shader * m_MedianFilterShader;
  struct Shader * m_TextureBokehShader;
  struct RenderTextureUtility * m_RTU;
  struct Material * m_FilmicDepthOfFieldMaterial;
  struct Material * m_MedianFilterMaterial;
  struct Material * m_TextureBokehMaterial;
  struct ComputeBuffer * m_ComputeBufferDrawArgs;
  struct ComputeBuffer * m_ComputeBufferPoints;
  struct DepthOfField_QualitySettings m_CurrentQualitySettings;
  float m_LastApertureOrientation;
  struct Vector4 m_OctogonalBokehDirection1;
  struct Vector4 m_OctogonalBokehDirection2;
  struct Vector4 m_OctogonalBokehDirection3;
  struct Vector4 m_OctogonalBokehDirection4;
  struct Vector4 m_HexagonalBokehDirection1;
  struct Vector4 m_HexagonalBokehDirection2;
  struct Vector4 m_HexagonalBokehDirection3;
};
struct DepthOfField_1 {
  struct DepthOfField_1__Class *klass;
  struct MonitorData *monitor;
  struct DepthOfField_1__Fields fields;
};
struct DepthOfField_QualitySettings__Array {
  struct DepthOfField_QualitySettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DepthOfField_QualitySettings vector[32];
};
struct DepthOfField_GlobalSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DepthOfField_GlobalSettings__StaticFields {
};
struct DepthOfField_GlobalSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfField_GlobalSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfField_GlobalSettings__VTable vtable;
};
struct DepthOfField_FocusSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DepthOfField_FocusSettings__StaticFields {
};
struct DepthOfField_FocusSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfField_FocusSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfField_FocusSettings__VTable vtable;
};
struct DepthOfField_BokehTextureSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DepthOfField_BokehTextureSettings__StaticFields {
};
struct DepthOfField_BokehTextureSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfField_BokehTextureSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfField_BokehTextureSettings__VTable vtable;
};
struct DepthOfField_QualitySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DepthOfField_QualitySettings__StaticFields {
  struct DepthOfField_QualitySettings__Array * presetQualitySettings;
};
struct DepthOfField_QualitySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfField_QualitySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfField_QualitySettings__VTable vtable;
};
struct DepthOfField_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DepthOfField_1__StaticFields {
};
struct DepthOfField_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthOfField_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthOfField_1__VTable vtable;
};

struct LensAberrations_DistortionSettings {
  bool enabled;
  float amount;
  float centerX;
  float centerY;
  float amountX;
  float amountY;
  float scale;
};
struct LensAberrations_DistortionSettings__Boxed {
  struct LensAberrations_DistortionSettings__Class *klass;
  struct MonitorData *monitor;
  struct LensAberrations_DistortionSettings fields;
};
struct LensAberrations_VignetteSettings {
  bool enabled;
  struct Color color;
  struct Vector2 center;
  float intensity;
  float smoothness;
  float roundness;
  float blur;
  float desaturate;
};
struct LensAberrations_VignetteSettings__Boxed {
  struct LensAberrations_VignetteSettings__Class *klass;
  struct MonitorData *monitor;
  struct LensAberrations_VignetteSettings fields;
};
struct LensAberrations_ChromaticAberrationSettings {
  bool enabled;
  struct Color color;
  float amount;
};
struct LensAberrations_ChromaticAberrationSettings__Boxed {
  struct LensAberrations_ChromaticAberrationSettings__Class *klass;
  struct MonitorData *monitor;
  struct LensAberrations_ChromaticAberrationSettings fields;
};
struct LensAberrations__Fields {
  struct MonoBehaviour__Fields _;
  struct LensAberrations_DistortionSettings distortion;
  struct LensAberrations_VignetteSettings vignette;
  struct LensAberrations_ChromaticAberrationSettings chromaticAberration;
  struct Shader * m_Shader;
  struct Material * m_Material;
  struct RenderTextureUtility * m_RTU;
};
struct LensAberrations {
  struct LensAberrations__Class *klass;
  struct MonitorData *monitor;
  struct LensAberrations__Fields fields;
};
struct LensAberrations_DistortionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LensAberrations_DistortionSettings__StaticFields {
};
struct LensAberrations_DistortionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LensAberrations_DistortionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LensAberrations_DistortionSettings__VTable vtable;
};
struct LensAberrations_VignetteSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}