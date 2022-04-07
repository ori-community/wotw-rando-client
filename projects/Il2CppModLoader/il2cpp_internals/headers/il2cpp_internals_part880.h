namespace app {
struct VolumetricConfig__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VolumetricConfig__StaticFields {
};
struct VolumetricConfig__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumetricConfig__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumetricConfig__VTable vtable;
};
struct Volumetric__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Volumetric__StaticFields {
  struct List_1_Moon_Rendering_VolumetricPointLight_ * s_lights;
  struct List_1_Moon_Rendering_VolumetricAreaLight_ * s_areaLights;
  struct VolumetricConfig * s_config;
};
struct Volumetric__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Volumetric__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Volumetric__VTable vtable;
};

enum CullingCategory__Enum : uint32_t {
  CullingCategory__Enum_Light = 1,
  CullingCategory__Enum_DepthPrecull = 2,
  CullingCategory__Enum_MeshTrail = 4,
  CullingCategory__Enum_GodRay = 8,
  CullingCategory__Enum_MotionVectors = 16,
  CullingCategory__Enum_WaterTop = 32,
  CullingCategory__Enum_WaterEdge = 64,
  CullingCategory__Enum_WaterCross = 128,
  CullingCategory__Enum_Emissive = 256,
  CullingCategory__Enum_Opaque3D = 512,
  CullingCategory__Enum_Masked = 1024,
  CullingCategory__Enum_Refraction = 2048,
  CullingCategory__Enum_Darkening = 4096,
  CullingCategory__Enum_MaskErasing = 8192,
  CullingCategory__Enum_All = 4294967295,
};
struct CullingCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CullingCategory__Enum value;
};

struct DummyRenderPostprocessor__Fields {
  struct MonoBehaviour__Fields _;
};
struct DummyRenderPostprocessor {
  struct DummyRenderPostprocessor__Class *klass;
  struct MonitorData *monitor;
  struct DummyRenderPostprocessor__Fields fields;
};
struct DummyRenderPostprocessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IRenderPostprocessor_get_enabled;
  VirtualInvokeData IRenderPostprocessor_OnRenderImage;
};
struct DummyRenderPostprocessor__StaticFields {
};
struct DummyRenderPostprocessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DummyRenderPostprocessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DummyRenderPostprocessor__VTable vtable;
};

struct EarlyZChildDebugger__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform__Array * includedObjects;
};
struct EarlyZChildDebugger {
  struct EarlyZChildDebugger__Class *klass;
  struct MonitorData *monitor;
  struct EarlyZChildDebugger__Fields fields;
};
struct EarlyZChildDebugger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EarlyZChildDebugger__StaticFields {
};
struct EarlyZChildDebugger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EarlyZChildDebugger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EarlyZChildDebugger__VTable vtable;
};

struct EarlyZDelayDebugMenuItem__Fields {
  struct IntDebugMenuItem__Fields _;
};
struct EarlyZDelayDebugMenuItem {
  struct EarlyZDelayDebugMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct EarlyZDelayDebugMenuItem__Fields fields;
};
struct EarlyZDelayDebugMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct EarlyZDelayDebugMenuItem__StaticFields {
};
struct EarlyZDelayDebugMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EarlyZDelayDebugMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EarlyZDelayDebugMenuItem__VTable vtable;
};

struct EarlyZDelayedUnhide__Fields {
  struct MonoBehaviour__Fields _;
  struct MeshRenderer * m_cachedRenderer;
  bool m_hasCached;
};
struct EarlyZDelayedUnhide {
  struct EarlyZDelayedUnhide__Class *klass;
  struct MonitorData *monitor;
  struct EarlyZDelayedUnhide__Fields fields;
};
struct EarlyZDelayedUnhide__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EarlyZDelayedUnhide__StaticFields {
  bool DelayUnhideEarlyZ;
  bool HideOnDisplay;
  int32_t kFrameDelay;
};
struct EarlyZDelayedUnhide__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EarlyZDelayedUnhide__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EarlyZDelayedUnhide__VTable vtable;
};

struct EarlyZGrid {
  struct Bounds bounds;
  struct Vector3 min;
  struct Vector3 size;
  struct Vector3 cellSize;
  struct Vector3Int count;
  int32_t cellCount;
};
struct EarlyZGrid__Boxed {
  struct EarlyZGrid__Class *klass;
  struct MonitorData *monitor;
  struct EarlyZGrid fields;
};
struct EarlyZGrid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EarlyZGrid__StaticFields {
};
struct EarlyZGrid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EarlyZGrid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EarlyZGrid__VTable vtable;
};

struct EarlyZParentDebugger_GridOptions {
  bool draw;
  bool drawBounds;
  bool drawPlaneZero;
  bool drawFrontPlane;
  bool drawBackPlane;
  bool drawAllPlanes;
  bool drawDepthLines;
  bool drawCells;
  struct Color color;
};
struct EarlyZParentDebugger_GridOptions__Boxed {
  struct EarlyZParentDebugger_GridOptions__Class *klass;
  struct MonitorData *monitor;
  struct EarlyZParentDebugger_GridOptions fields;
};
struct EarlyZParentDebugger__Fields {
  struct MonoBehaviour__Fields _;
  struct EarlyZGrid grid;
  bool debug;
  struct EarlyZParentDebugger_GridOptions gridOptions;
  int32_t selectedCellX;
  int32_t selectedCellY;
};
struct EarlyZParentDebugger {
  struct EarlyZParentDebugger__Class *klass;
  struct MonitorData *monitor;
  struct EarlyZParentDebugger__Fields fields;
};
struct EarlyZParentDebugger_GridOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EarlyZParentDebugger_GridOptions__StaticFields {
};
struct EarlyZParentDebugger_GridOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EarlyZParentDebugger_GridOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EarlyZParentDebugger_GridOptions__VTable vtable;
};
struct EarlyZParentDebugger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EarlyZParentDebugger__StaticFields {
};
struct EarlyZParentDebugger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EarlyZParentDebugger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EarlyZParentDebugger__VTable vtable;
};

enum FXAA_Mode__Enum : int32_t {
  FXAA_Mode__Enum_DEFAULT_QUALITY = 0,
  FXAA_Mode__Enum_DEFAULT_QUALITY_DEBUG = 1,
  FXAA_Mode__Enum_EXTREME_QUALITY = 2,
  FXAA_Mode__Enum_EXTREME_QUALITY_DEBUG = 3,
};
struct FXAA_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FXAA_Mode__Enum value;
};
struct FXAA_1__Fields {
  struct MonoBehaviour__Fields _;
  enum FXAA_Mode__Enum RenderMode;
  float ContrastThreshold;
  float SubPixelRemoval;
  struct ComputeShader * Pass1;
  struct ComputeShader * Pass2Horizontal;
  struct ComputeShader * Pass2Vertical;
  struct ComputeShader * Resolve;
  struct RenderTarget * tempFinalOutput;
  struct RenderTarget * tempLuma;
  struct RenderTexture * m_finalOutputRenderTexture;
  struct RenderTexture * m_lumaRenderTexture;
  struct ComputeBuffer * m_HWorkComputeBuffer;
  struct ComputeBuffer * m_VWorkComputeBuffer;
  struct ComputeBuffer * m_indirectParamsComputeBuffer;
  struct Single__Array * m_reciprocalScreenSize;
  int32_t m_prevScreenWidth;
  int32_t m_prevScreenHeight;
  float m_prevContrastThreshold;
  float m_prevSubPixelRemoval;
};
struct FXAA_1 {
  struct FXAA_1__Class *klass;
  struct MonitorData *monitor;
  struct FXAA_1__Fields fields;
};
struct FXAA_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IRenderPostprocessor_get_enabled;
  VirtualInvokeData IRenderPostprocessor_OnRenderImage;
};
struct FXAA_1__StaticFields {
  int32_t _FXAATempFinalOutput;
  int32_t _FXAATempLuma;
  int32_t _FXAAColor;
  int32_t _FXAALuma;
  int32_t MaximumNumberOfAliasedPixelsPerDirection;
  enum RenderTextureFormat__Enum FinalOutputRenderTextureFormat;
  enum RenderTextureFormat__Enum LumaRenderTextureFormat;
};
struct FXAA_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FXAA_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FXAA_1__VTable vtable;
};

struct MoonRenderPipeline__Fields {
  struct RenderPipeline__Fields _;
  struct MoonRenderPipelineAsset * owner;
  struct MoonRenderPipelineView__Array * views;
  struct MoonRenderPipelineSettings * settings;
  struct MoonRenderPipelineView * _currentView_k__BackingField;
  struct FrameTiming__Array * m_frameTimings;
  double m_currentDRSScaleInternal;
  double m_currentDRSScale;
  double m_currentDRSScaleY;
  float m_badCPUPerfTotalTime;
  bool m_isrDRSEnabled;
  bool m_isrCPUEnabled;
  struct Stopwatch * m_drsStopwatch;
  bool isRendering;
};
struct MoonRenderPipeline {
  struct MoonRenderPipeline__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipeline__Fields fields;
};
struct MoonRenderPipelineView__Array {
  struct MoonRenderPipelineView__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineView * vector[32];
};
struct MoonRenderPipeline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_disposed;
  VirtualInvokeData Render;
  VirtualInvokeData Dispose;
  VirtualInvokeData Render_1;
  VirtualInvokeData Dispose_1;
};
struct MoonRenderPipeline__StaticFields {
  bool UseDeltaTimeForDRS;
  bool DisableSRPBatcher;
};
struct MoonRenderPipeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipeline__VTable vtable;
};

enum MoonRenderPipelineView_CachedCBType__Enum : int32_t {
  MoonRenderPipelineView_CachedCBType__Enum_EmissivityPost = 0,
};
struct MoonRenderPipelineView_CachedCBType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineView_CachedCBType__Enum value;
};

struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ {
  struct MoonRenderPipelineView_FilterBounds value;
  bool has_value;
};
struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Boxed {
  struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ fields;
};
enum RenderFlags__Enum : uint32_t {
  RenderFlags__Enum_Default = 1,
  RenderFlags__Enum_Masked = 2,
  RenderFlags__Enum_Emissive = 4,
  RenderFlags__Enum_ReflectedOnly = 8,
  RenderFlags__Enum_MoonTrail = 16,
  RenderFlags__Enum_MotionVectors = 32,
  RenderFlags__Enum_GodRays = 64,
  RenderFlags__Enum_MeshTrail = 128,
  RenderFlags__Enum_Refraction = 256,
  RenderFlags__Enum_DepthPrecull = 512,
  RenderFlags__Enum_Reflected = 1024,
  RenderFlags__Enum_Darkening = 2048,
  RenderFlags__Enum_EmissiveMoonTrail = 4096,
  RenderFlags__Enum_EmissiveMeshTrail = 8192,
  RenderFlags__Enum_MaskedMoonTrail = 16384,
  RenderFlags__Enum_DarkeningMoonTrail = 32768,
  RenderFlags__Enum_DarkeningMeshTrail = 65536,
  RenderFlags__Enum_MaskErasing = 131072,
  RenderFlags__Enum_Opaque3D = 262144,
  RenderFlags__Enum_Everything = 4294967295,
};
struct RenderFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderFlags__Enum value;
};
struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ {
  struct RenderStateBlock value;
  bool has_value;
};
struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed {
  struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ fields;
};
struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___StaticFields {
};
struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds___VTable vtable;
};
struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___StaticFields {
};
struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___VTable vtable;
};

enum MoonRenderPipelineView_ReleaseReason__Enum : int32_t {
  MoonRenderPipelineView_ReleaseReason__Enum_PassFinished = 0,
  MoonRenderPipelineView_ReleaseReason__Enum_FrameFinished = 1,
};
struct MoonRenderPipelineView_ReleaseReason__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineView_ReleaseReason__Enum value;
};

struct MoonRenderPipelineView_c {
  struct MoonRenderPipelineView_c__Class *klass;
  struct MonitorData *monitor;
};
struct MoonRenderPipelineView_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineView_c__StaticFields {
  struct MoonRenderPipelineView_c * __9;
};
struct MoonRenderPipelineView_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineView_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineView_c__VTable vtable;
};

struct DrawRendererSortSettingsRaw {
  struct DrawRendererSortSettings source;
  struct Matrix4x4 worldToCameraMatrix;
  struct Vector3 cameraPosition;
  enum SortFlags__Enum flags;
  int32_t _sortOrthographic;
  struct Matrix4x4 _previousVPMatrix;
  struct Matrix4x4 _nonJitteredVPMatrix;
};
struct DrawRendererSortSettingsRaw__Boxed {
  struct DrawRendererSortSettingsRaw__Class *klass;
  struct MonitorData *monitor;
  struct DrawRendererSortSettingsRaw fields;
};
struct DrawRendererSortSettingsRaw__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DrawRendererSortSettingsRaw__StaticFields {
};
struct DrawRendererSortSettingsRaw__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrawRendererSortSettingsRaw__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrawRendererSortSettingsRaw__VTable vtable;
};

enum MoonRenderPipelineAsset_ConfigurableOn__Enum : int32_t {
  MoonRenderPipelineAsset_ConfigurableOn__Enum_None = 0,
  MoonRenderPipelineAsset_ConfigurableOn__Enum_Pc = 1,
  MoonRenderPipelineAsset_ConfigurableOn__Enum_Xbox = 2,
  MoonRenderPipelineAsset_ConfigurableOn__Enum_All = 3,
};
struct MoonRenderPipelineAsset_ConfigurableOn__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_ConfigurableOn__Enum value;
};
struct __declspec(align(8)) MoonRenderPipelineAsset_UserConfigurable__Fields {
  enum MoonRenderPipelineAsset_ConfigurableOn__Enum Platforms;
};
struct MoonRenderPipelineAsset_UserConfigurable {
  struct MoonRenderPipelineAsset_UserConfigurable__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineAsset_UserConfigurable__Fields fields;
};
struct MoonRenderPipelineAsset_UserConfigurable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MoonRenderPipelineAsset_UserConfigurable__StaticFields {
};
struct MoonRenderPipelineAsset_UserConfigurable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineAsset_UserConfigurable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineAsset_UserConfigurable__VTable vtable;
};

enum MoonRenderPipelineDebugUI_SliceRangeMode__Enum : int32_t {
  MoonRenderPipelineDebugUI_SliceRangeMode__Enum_Off = 0,
  MoonRenderPipelineDebugUI_SliceRangeMode__Enum_Index = 1,
  MoonRenderPipelineDebugUI_SliceRangeMode__Enum_Range = 2,
};
struct MoonRenderPipelineDebugUI_SliceRangeMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineDebugUI_SliceRangeMode__Enum value;
};
struct MoonRenderPipelineDebugUI_FpsCounter {
  float m_timePassed;
  float m_renderedFrames;
  float m_maxFrameTime;
  float averageFps;
  float minimumFps;
};
struct MoonRenderPipelineDebugUI_FpsCounter__Boxed {
  struct MoonRenderPipelineDebugUI_FpsCounter__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineDebugUI_FpsCounter fields;
};
struct MoonRenderPipelineDebugUI__Fields {
  struct MonoBehaviour__Fields _;
  struct QualityProfile * editorProfile;
  struct QualityProfile * pcProfile;
  struct QualityProfile * pcProfileLow;
  struct QualityProfile * pcProfileHigh;
  struct QualityProfile * switchProfile;
  struct QualityProfile * switchProfileDocked;
  struct QualityProfile * xboxOneProfile;
  struct QualityProfile * xboxOneSProfile;
  struct QualityProfile * xboxOneXProfile;
  struct QualityProfile * xboxSeriesSProfile;
  struct QualityProfile * xboxSeriesXProfile;
  struct QualityProfile * xboxSeriesSProfileQuality;
  struct QualityProfile * xboxSeriesXProfileQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum editorQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum pcQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum pcQualityLow;
  enum MoonRenderPipelineDebugUI_Quality__Enum pcQualityHigh;
  enum MoonRenderPipelineDebugUI_Quality__Enum switchQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum switchQualityDocked;
  enum MoonRenderPipelineDebugUI_Quality__Enum xboxOneQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum xboxOneSQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum xboxOneXQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum xboxSeriesSQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum xboxSeriesXQuality;
  enum MoonRenderPipelineDebugUI_Quality__Enum currentQuality;
  bool visible;
  bool expanded;
  bool interactiveWhenMinimized;
  bool hideDeveloperConsole;
  float sliderDeadZone;
  float sliderSensitivity;
  float repeatDuration;
  bool prevNeedsImGUI;
  struct Vector2 scroll1;
  struct Vector2 scroll2;
  enum MoonRenderPipelineDebugUI_SliceRangeMode__Enum sliceRangeMode;
  bool foldoutVIP;
  bool foldoutHR;
  bool foldoutTLC;
  bool foldoutDRS;
  bool foldoutISR;
  bool foldoutFXAA;
  bool foldoutDebug;
  bool foldoutMisc;
  bool foldoutFreeze;
  bool foldoutFrameBuffer;
  bool foldoutFrameBufferClear;
  bool foldoutFrameBufferMore;
  bool foldoutPosts;
  bool foldoutSrp;
  bool foldoutSrpSort;
  bool foldoutSliceInfo;
  bool foldoutResolution;
  bool foldoutSupportedFormats;
  bool foldoutSystemInfo;
  bool foldoutGodRay;
  bool isrReprojection;
  int32_t cullingCountHeaderWidth;
  int32_t cullingCountColumnWidth;
  struct StringBuilder * sb;
  bool collectTimings;
  bool displayTimings;
  struct StringBuilder * capture;
  int32_t captureFrameCount;
  float fpsUpdateInterval;
  struct FpsGraph * fpsGraph;
  struct MoonRenderPipelineDebugUI_FpsCounter intervalCounter;
  struct MoonRenderPipelineDebugUI_FpsCounter manualCounter;
  float m_lastTime;
};
struct MoonRenderPipelineDebugUI {
  struct MoonRenderPipelineDebugUI__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineDebugUI__Fields fields;
};
struct QualityProfile__Fields {
  struct ScriptableObject__Fields _;
  struct QualityModeTweakAsset * tweakAsset;
  struct MoonRenderPipelineAsset * srpAsset;
  bool overrideGcSettings;
  struct UberGCLogic_GCLogicSettings * gclogicSettings;
  bool vSync;
  bool allowMSAA;
  bool allowHDR;
};
struct QualityProfile {
  struct QualityProfile__Class *klass;
  struct MonitorData *monitor;
  struct QualityProfile__Fields fields;
};
struct RenderTextureFormat__Enum__Array {
  struct RenderTextureFormat__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum RenderTextureFormat__Enum vector[32];
};
struct QualityProfile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QualityProfile__StaticFields {
};
struct QualityProfile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QualityProfile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QualityProfile__VTable vtable;
};
struct MoonRenderPipelineDebugUI_FpsCounter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineDebugUI_FpsCounter__StaticFields {
};
struct MoonRenderPipelineDebugUI_FpsCounter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineDebugUI_FpsCounter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineDebugUI_FpsCounter__VTable vtable;
};
struct MoonRenderPipelineDebugUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineDebugUI__StaticFields {
  struct MoonRenderPipelineDebugUI * Instance;
  struct NavigableOnGUI_1 * ui;
  struct GUILayoutOption__Array * noExpand;
  struct RenderTextureFormat__Enum__Array * renderTextureFormats;
};
struct MoonRenderPipelineDebugUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineDebugUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineDebugUI__VTable vtable;
};

struct MoonRenderPipelineDebugUI_GUIColor {
  struct Color prevColor;
};
struct MoonRenderPipelineDebugUI_GUIColor__Boxed {
  struct MoonRenderPipelineDebugUI_GUIColor__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineDebugUI_GUIColor fields;
};
struct MoonRenderPipelineDebugUI_GUIColor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct MoonRenderPipelineDebugUI_GUIColor__StaticFields {
};
struct MoonRenderPipelineDebugUI_GUIColor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineDebugUI_GUIColor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineDebugUI_GUIColor__VTable vtable;
};

struct MoonRenderPipelineDebugUI_c {
  struct MoonRenderPipelineDebugUI_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_IRenderPostprocessor_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_IRenderPostprocessor_Boolean_ {
  struct Func_2_IRenderPostprocessor_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_IRenderPostprocessor_Boolean___Fields fields;
};
struct Func_2_IRenderPostprocessor_Boolean___VTable {
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
struct Func_2_IRenderPostprocessor_Boolean___StaticFields {
};
struct Func_2_IRenderPostprocessor_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_IRenderPostprocessor_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_IRenderPostprocessor_Boolean___VTable vtable;
};
struct MoonRenderPipelineDebugUI_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineDebugUI_c__StaticFields {
  struct MoonRenderPipelineDebugUI_c * __9;
  struct Func_2_IRenderPostprocessor_Boolean_ * __9__83_0;
};
struct MoonRenderPipelineDebugUI_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineDebugUI_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineDebugUI_c__VTable vtable;
};

struct MoonRenderPipelineSlowObjects__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject__Array * gameObjects;
};
struct MoonRenderPipelineSlowObjects {
  struct MoonRenderPipelineSlowObjects__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineSlowObjects__Fields fields;
};
struct MoonRenderPipelineSlowObjects__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonRenderPipelineSlowObjects__StaticFields {
};
struct MoonRenderPipelineSlowObjects__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineSlowObjects__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineSlowObjects__VTable vtable;
};

struct Nullable_1_Moon_Rendering_Viewport_ {
  struct Viewport value;
  bool has_value;
};
struct Nullable_1_Moon_Rendering_Viewport___Boxed {
  struct Nullable_1_Moon_Rendering_Viewport___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Moon_Rendering_Viewport_ fields;
};
struct ClearSettings {
  enum ClearFlags__Enum flags;
  struct Color color;
  float depth;
};
struct ClearSettings__Boxed {
  struct ClearSettings__Class *klass;
  struct MonitorData *monitor;
  struct ClearSettings fields;
};
struct Nullable_1_Moon_Rendering_Viewport___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Moon_Rendering_Viewport___StaticFields {
};
struct Nullable_1_Moon_Rendering_Viewport___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Moon_Rendering_Viewport___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Moon_Rendering_Viewport___VTable vtable;
};
struct ClearSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ClearSettings__StaticFields {
};
struct ClearSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClearSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClearSettings__VTable vtable;
};

struct MoonRenderContext_Sample {
};
struct MoonRenderContext_Sample__Boxed {
  struct MoonRenderContext_Sample__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderContext_Sample fields;
};
struct MoonRenderContext_Sample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct MoonRenderContext_Sample__StaticFields {
};
struct MoonRenderContext_Sample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderContext_Sample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderContext_Sample__VTable vtable;
};

struct GraphicsExt_Sample {
  struct String * name;
};
struct GraphicsExt_Sample__Boxed {
  struct GraphicsExt_Sample__Class *klass;
  struct MonitorData *monitor;
  struct GraphicsExt_Sample fields;
};
struct GraphicsExt_Sample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct GraphicsExt_Sample__StaticFields {
};
struct GraphicsExt_Sample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GraphicsExt_Sample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GraphicsExt_Sample__VTable vtable;
};

struct CanRetryRaceCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanRetryRaceCondition {
  struct CanRetryRaceCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanRetryRaceCondition__Fields fields;
};
struct CanRetryRaceCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct CanRetryRaceCondition__StaticFields {
};
struct CanRetryRaceCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanRetryRaceCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanRetryRaceCondition__VTable vtable;
};

struct CanSkipRaceCondition__Fields {
  struct Condition_1__Fields _;
};
struct CanSkipRaceCondition {
  struct CanSkipRaceCondition__Class *klass;
  struct MonitorData *monitor;
  struct CanSkipRaceCondition__Fields fields;
};}