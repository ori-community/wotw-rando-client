namespace app {
struct AdvancedDebugMenuPage {
  struct AdvancedDebugMenuPage__Class *klass;
  struct MonitorData *monitor;
  struct AdvancedDebugMenuPage__Fields fields;
};
struct AdvancedDebugMenuPage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ColumnOffset;
  VirtualInvokeData GetItems;
};
struct AdvancedDebugMenuPage__StaticFields {
  bool MantisShotSettingsEnabled;
};
struct AdvancedDebugMenuPage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdvancedDebugMenuPage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdvancedDebugMenuPage__VTable vtable;
};

struct __declspec(align(8)) AdvancedDebugMenuPage_c_DisplayClass15_0__Fields {
  struct SkinnedMeshLod * current;
};
struct AdvancedDebugMenuPage_c_DisplayClass15_0 {
  struct AdvancedDebugMenuPage_c_DisplayClass15_0__Class *klass;
  struct MonitorData *monitor;
  struct AdvancedDebugMenuPage_c_DisplayClass15_0__Fields fields;
};
struct SkinnedMeshLod__Fields {
  struct MonoBehaviour__Fields _;
  struct SkinnedMeshRenderer__Array * m_activeRenderers;
  struct Transform__Array * m_children;
  int32_t m_currentLevel;
  struct List_1_UnityEngine_GameObject_ * LodLevelRigs;
};
struct SkinnedMeshLod {
  struct SkinnedMeshLod__Class *klass;
  struct MonitorData *monitor;
  struct SkinnedMeshLod__Fields fields;
};
struct SkinnedMeshLod__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SkinnedMeshLod__StaticFields {
};
struct SkinnedMeshLod__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkinnedMeshLod__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkinnedMeshLod__VTable vtable;
};
struct AdvancedDebugMenuPage_c_DisplayClass15_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AdvancedDebugMenuPage_c_DisplayClass15_0__StaticFields {
};
struct AdvancedDebugMenuPage_c_DisplayClass15_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AdvancedDebugMenuPage_c_DisplayClass15_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AdvancedDebugMenuPage_c_DisplayClass15_0__VTable vtable;
};

struct __declspec(align(8)) AdvancedDebugMenuPage_c_DisplayClass15_1__Fields {
  struct LightCullingSystem_LightCullingGroup * current;
};
struct AdvancedDebugMenuPage_c_DisplayClass15_1 {
  struct AdvancedDebugMenuPage_c_DisplayClass15_1__Class *klass;
  struct MonitorData *monitor;
  struct AdvancedDebugMenuPage_c_DisplayClass15_1__Fields fields;
};
enum LightCullingSystem_LightCullingGroupId__Enum : int32_t {
  LightCullingSystem_LightCullingGroupId__Enum_TorchLights = 0,
  LightCullingSystem_LightCullingGroupId__Enum_GameplayLights = 1,
};
struct LightCullingSystem_LightCullingGroupId__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightCullingSystem_LightCullingGroupId__Enum value;
};
struct LightCullingSystem_LightCullingConfigPerType {
  enum LightCullingSystem_LightCullingGroupId__Enum Id;
  bool Enabled;
  int32_t MaxAmount;
};
struct LightCullingSystem_LightCullingConfigPerType__Boxed {
  struct LightCullingSystem_LightCullingConfigPerType__Class *klass;
  struct MonitorData *monitor;
  struct LightCullingSystem_LightCullingConfigPerType fields;
};
struct __declspec(align(8)) LightCullingSystem_LightCullingGroup__Fields {
  struct HashSet_1_LightPriority_Layer_ * Layers;
  struct LightCullingSystem_LightCullingConfigPerType m_config;
  struct HashSet_1_System_Int32_ * m_lightsToCull;
  struct List_1_PointLightMaskModifier_ * m_validLigths;
};
struct LightCullingSystem_LightCullingGroup {
  struct LightCullingSystem_LightCullingGroup__Class *klass;
  struct MonitorData *monitor;
  struct LightCullingSystem_LightCullingGroup__Fields fields;
};
struct __declspec(align(8)) HashSet_1_LightPriority_Layer___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_LightPriority_Layer___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_LightPriority_Layer_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_LightPriority_Layer_ {
  struct HashSet_1_LightPriority_Layer___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_LightPriority_Layer___Fields fields;
};
struct HashSet_1_T_Slot_LightPriority_Layer_ {
  int32_t hashCode;
  int32_t next;
  enum LightPriority_Layer__Enum value;
};
struct HashSet_1_T_Slot_LightPriority_Layer___Boxed {
  struct HashSet_1_T_Slot_LightPriority_Layer___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_LightPriority_Layer_ fields;
};
struct HashSet_1_T_Slot_LightPriority_Layer___Array {
  struct HashSet_1_T_Slot_LightPriority_Layer___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_LightPriority_Layer_ vector[32];
};
struct __declspec(align(8)) List_1_PointLightMaskModifier___Fields {
  struct PointLightMaskModifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PointLightMaskModifier_ {
  struct List_1_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PointLightMaskModifier___Fields fields;
};
struct PointLightMaskModifier__Fields {
  struct UberShaderModifier__Fields _;
  struct UberShaderVector * LightParams;
  struct AnimationCurve * FalloffCurve;
  struct UberShaderVector * FalloffNear;
  struct UberShaderVector * FalloffFar;
  bool UseCustomLightBandsDepths;
  struct UberShaderVector * CustomLightBandsDepths;
  struct UberShaderVector * LightBandsIntensities;
  struct UberShaderVector * DirectionalLight;
  struct Vector3 LightCenter;
  struct UberShaderVector * LocalLightCenter;
  struct UberShaderVector * AffectedObjTypes_Offset_Hardness_Darkening;
  struct UberShaderVector * ErasingWeight_Priority_DarkeningLightMaskInfluence_Intensity3D;
  enum LightPriority_Layer__Enum Layer;
  int32_t DarkeningErasingPriority;
  int32_t CullingPriority;
  float LayerInfluenceMultiplier;
  float _CullingScore_k__BackingField;
  struct Renderer * m_cachedRendererLocal;
  struct MeshFilter * m_meshFilterLocal;
  bool m_componentsCachedOnBuild;
};
struct PointLightMaskModifier {
  struct PointLightMaskModifier__Class *klass;
  struct MonitorData *monitor;
  struct PointLightMaskModifier__Fields fields;
};
struct PointLightMaskModifier__Array {
  struct PointLightMaskModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PointLightMaskModifier * vector[32];
};
struct __declspec(align(8)) CullingCategoryManager__Fields {
  struct RendererCullingCategoryParameters parameters;
  struct RendererCullingCategoryResults _lastResults_k__BackingField;
};
struct CullingCategoryManager {
  struct CullingCategoryManager__Class *klass;
  struct MonitorData *monitor;
  struct CullingCategoryManager__Fields fields;
};
struct CullingCategoryManager_1_PointLightMaskModifier___Fields {
  struct CullingCategoryManager__Fields _;
  struct Dictionary_2_System_Int32_PointLightMaskModifier_ * registeredItems;
};
struct CullingCategoryManager_1_PointLightMaskModifier_ {
  struct CullingCategoryManager_1_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct CullingCategoryManager_1_PointLightMaskModifier___Fields fields;
};
struct CullingCategoryManagerWithList_1_PointLightMaskModifier___Fields {
  struct CullingCategoryManager_1_PointLightMaskModifier___Fields _;
  struct List_1_PointLightMaskModifier_ * Items;
};
struct CullingCategoryManagerWithList_1_PointLightMaskModifier_ {
  struct CullingCategoryManagerWithList_1_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct CullingCategoryManagerWithList_1_PointLightMaskModifier___Fields fields;
};
enum MoonRenderPipelineViewType__Enum : int32_t {
  MoonRenderPipelineViewType__Enum_Invalid = -1,
  MoonRenderPipelineViewType__Enum_Game = 0,
  MoonRenderPipelineViewType__Enum_Scene = 1,
  MoonRenderPipelineViewType__Enum_Preview = 2,
};
struct MoonRenderPipelineViewType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineViewType__Enum value;
};
struct SrpSampler {
  bool isRoot;
  int32_t profilerMetric;
  struct CustomSampler * cpu;
  struct CustomSampler * gpu;
  struct Recorder * cpuRecorder;
  struct Recorder * gpuRecorder;
};
struct SrpSampler__Boxed {
  struct SrpSampler__Class *klass;
  struct MonitorData *monitor;
  struct SrpSampler fields;
};
struct __declspec(align(8)) MoonRenderPipelineView__Fields {
  enum MoonRenderPipelineViewType__Enum viewType;
  struct MoonRenderPipelineAsset * owner;
  struct MoonRenderPipelineSettings * settings;
  struct MoonRenderPipelineDebug * debug;
  struct MoonRenderContext * ctx;
  float _dynamicResolutionScale_k__BackingField;
  float _dynamicResolutionScaleY_k__BackingField;
  struct Stopwatch * m_gameViewStopwatch;
  struct CommandBuffer__Array__Array * CachedCBs;
  struct Material * emissivityMaskMaterial;
  struct Material * emissivityCompMaterial;
  struct Material * emissivityDownMaterialH;
  struct Material * emissivityDownMaterialV;
  struct RenderStateBlock emissivityRSBlock;
  struct RenderStateBlock maskErasingRSBlock;
  struct RenderStateBlock hiResDefRSBlock;
  struct RenderStateBlock hiResDefHDRRSBlock;
  struct RenderStateBlock hiResMVHDRRSBlock;
  struct Camera * renderCam;
  struct Camera * cullCam;
  struct Camera * sortCam;
  struct CullResults cullResults;
  struct Int2 sceneResolution;
  struct Int2 uiResolution;
  enum RenderTextureFormat__Enum frameBufferFormat;
  int32_t frameBufferDepth;
  float motionVectorsRTMultiplier;
  int32_t emissivityMRTCurrIndex;
  float reflectionRefractionRTMultiplier;
  struct Int2 sceneResolutionPrev;
  struct RenderTargetIdentifier sceneRTPrevId;
  bool rtMulsFixedOnce;
  struct RenderTarget * sceneRT;
  struct RenderTarget * scenePostRT;
  struct RenderTarget * uiRT;
  struct RenderTarget * uiPostRT;
  struct RenderTarget * frameBuffer;
  struct RenderTarget * uiFinalRTForCapturing;
  struct RenderTarget__Array * sliceBackupAlphaMaskRTs;
  struct RenderTarget__Array * sliceBackupColorRTs;
  struct RenderTargetIdentifier__Array * isrMRT;
  int32_t numEmissivityExtraMips;
  int32_t numEmissivityExtraMipsMats;
  int32_t numEmissivityCompSteps;
  struct RenderTarget__Array * emissivityRTs;
  bool emissivity2InUse;
  struct RenderTargetIdentifier__Array__Array * emissivityMRTs;
  struct RenderTarget * emissivityCompRT;
  struct RenderTarget * emissivityDepthPrecullRT;
  struct RenderTarget * emissivityDepthRT;
  struct RenderTarget__Array * emissivityRTMipsT;
  struct RenderTarget__Array * emissivityRTMips;
  struct RenderTarget__Array * sliceHistColorRTs;
  struct RenderTarget__Array * sliceHistAlphaRTs;
  struct RenderTargetIdentifier__Array__Array * sliceHistMRT;
  int32_t TLCDispatchSizeX;
  int32_t TLCDispatchSizeY;
  struct RenderTexture * TLCLightIndicesUAV;
  int32_t TLCNumLights;
  int32_t TLCCullLightsKernelIndex;
  int32_t TLCClearIndicesKernelIndex;
  struct Vector4 TLCScreenSizeInvAndNumTiles;
  struct Vector4__Array * TLCSliceDepths;
  int32_t TLCPhysNumTilesX;
  int32_t TLCPhysNumTilesY;
  struct Vector4__Array * TLCLightsShadeInfo;
  struct UInt32__Array * TLCLightsSliceVisMasks;
  uint32_t TLCLights2DMask;
  uint32_t TLCLightsUnmasked2DMask;
  uint32_t TLCLights3DMask;
  struct RenderTexture * TLCLightsPrebakeMaskRT;
  struct Vector4 UVScaleDRS;
  struct Vector4 UVMaxRegionDRS;
  float SceneDRSScale;
  float SceneDRSScaleY;
  struct List_1_IRenderPostprocessor_ * allPosts;
  struct List_1_IRenderPostprocessor_ * scenePosts;
  struct List_1_IRenderPostprocessor_ * uiPosts;
  struct MoonRenderPipelineView_UpscalePost * upscalePost;
  struct MoonRenderPipelineView_FinalPost * finalPost;
  struct PostProcessRenderContext * postProcessRenderContext;
  struct RenderTargetIdentifier blackTexture;
  struct RenderTargetIdentifier whiteTexture;
  struct RuntimeSliceRenderSettings * m_runtimeSliceRenderSettings;
  bool isInit;
  struct Transform * m_transform;
  struct Vector3 m_transformPosition;
  float m_transformPositionZ;
  struct Vector2__Array * m_camProjOffsetsHalton_2_3_x16;
  struct SceneDefaultSettingsHelper * m_defaultSettingsHelper;
  struct LayeredRenderSettings * m_layeredRenderSettings;
  struct Boolean__Array * m_hiResOpaque3D;
  struct Vector4__Array * m_layeredRenderAllSlices;
  struct SliceRenderSettings * m_sliceRenderSettings;
  struct MotionBlurController * m_motionBlurController;
  float deltaTime;
  float prevRealTime;
  struct Matrix4x4 VPprev;
  struct Matrix4x4 Vprev;
  struct Matrix4x4 Pprev;
  int32_t m_PrevLastCameraFrame;
  struct Matrix4x4 m_PrevViewProjMatrix;
  struct Vector3 m_PrevCameraPos;
  struct Vector3 m_LastCameraMovement;
  uint64_t m_lastCameraStepsCounter;
  int32_t m_cameraSteps;
  float MaxCameraMovementDelta;
  struct RenderTarget__Array * sliceColorRTs;
  struct RenderTarget__Array * sliceAlphaMaskRTs;
  struct RenderTarget * sliceHiresOpaque3DRT;
  struct RenderTarget * sliceHiresOpaque3DAlphaRT;
  struct RenderTarget * sliceHiresOpaque3DRT1;
  struct RenderTarget * sliceHiresOpaque3DRT2;
  struct RenderTarget * sliceHiresOpaque3DRTLight;
  struct RenderTarget * sliceHiresOpaque3DDepthRT;
  struct RenderTarget * sceneRTCopy;
  struct RenderTarget * sliceDepthRT;
  struct RenderTarget * depthPrecullRT;
  struct RenderTarget * motionVectorsRT;
  struct RenderTarget * motionVectorsDepthRT;
  struct RenderTarget__Array * sliceRTs;
  struct FXAA * m_sliceFXAA;
  struct MoonRenderPipelineView_GodRaySrcRT__Array * godraySourceRTs;
  struct MoonRenderPipelineView_GodRayBlurRT__Array * godrayBlurRTs;
  int32_t godraysCount;
  struct RenderTarget * godrayCompositeRT;
  struct Int2 godrayRTSize;
  struct Rect godrayViewportRect;
  struct Material * blitEarlyZMaterial;
  struct Material * composeSliceMaterial;
  struct Material * composeSliceFullPSMaterial;
  struct Material * preComposeSliceFullPSMaterial;
  struct Material * deferredLightingMaterial;
  int32_t blitEarlyZPass;
  int32_t blitEarlyZPassB;
  float camMovementDelta;
  struct RenderTargetIdentifier__Array * sliceMRT;
  struct RenderTargetIdentifier__Array * secSliceMRT;
  struct RenderTargetIdentifier__Array * hiResHDRMRT;
  struct RenderTargetIdentifier__Array * hiResDefMRT;
  struct RenderTargetIdentifier__Array * hiResDefHDRMRT;
  struct RenderTarget * sliceColorRT;
  struct RenderTarget * sliceAlphaMaskRT;
  int32_t firstRTIndex;
  int32_t secondaryRTIndex;
  struct Int32__Array * availableRTIndices;
  int32_t numAvailableRTIndices;
  struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array * finalSliceInfo;
  struct Int32__Array * colorRTAlphaMaskRTIDs;
  struct Vector4__Array * sliceScalesAndMaxRegions;
  struct Int32__Array * sliceClearAlphaMaskRTIDs;
  struct Int32__Array * sliceEmissivityCompKeywords;
  struct InterleavedRenderingSettings * isrSettings;
  struct DiskBlurSRP * m_DiskBlur;
  struct Vector3 m_motionBlur;
  struct Vector3 m_motionBlurSpeed;
  struct SrpSampler rootSampler;
  struct SrpSampler__Array * sliceSamplers;
};
struct MoonRenderPipelineView {
  struct MoonRenderPipelineView__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView__Fields fields;
};
struct __declspec(align(8)) MoonRenderPipelineSettings__Fields {
  bool useCustomDofPerSlice;
  struct MoonRenderPipelineSettings_Slice__Array * slices;
};
struct MoonRenderPipelineSettings {
  struct MoonRenderPipelineSettings__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineSettings__Fields fields;
};
struct __declspec(align(8)) MoonRenderPipelineSettings_Slice__Fields {
  float worldZ;
  float dofAmount;
};
struct MoonRenderPipelineSettings_Slice {
  struct MoonRenderPipelineSettings_Slice__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineSettings_Slice__Fields fields;
};
struct MoonRenderPipelineSettings_Slice__Array {
  struct MoonRenderPipelineSettings_Slice__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineSettings_Slice * vector[32];
};
struct MoonRenderPipelineDebug_ReflectionStats {
  int32_t visiblePlaneCount;
  int32_t visibleGroupCount;
  int32_t renderedGroupCount;
};
struct MoonRenderPipelineDebug_ReflectionStats__Boxed {
  struct MoonRenderPipelineDebug_ReflectionStats__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineDebug_ReflectionStats fields;
};
struct __declspec(align(8)) MoonRenderPipelineDebug__Fields {
  struct Int2 sceneSize;
  struct Int2 uiSize;
  bool overrideSlicesFromDebug;
  struct MoonRenderPipelineDebug_Slice__Array * slices;
  struct RendererCullingCategoryResults__Array * cullingCategoryResults;
  struct MoonRenderPipelineDebug_ReflectionStats reflections;
};
struct MoonRenderPipelineDebug {
  struct MoonRenderPipelineDebug__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineDebug__Fields fields;
};
struct __declspec(align(8)) MoonRenderPipelineDebug_Slice__Fields {
  bool clipped;
  float zWorldNear;
  float zWorldFar;
  float zFar;
  float zNear;
  struct Bounds cullBounds;
  float blurAmount;
  float downsampling;
  struct Int2 rtSize;
};
struct MoonRenderPipelineDebug_Slice {
  struct MoonRenderPipelineDebug_Slice__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineDebug_Slice__Fields fields;
};
struct MoonRenderPipelineDebug_Slice__Array {
  struct MoonRenderPipelineDebug_Slice__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineDebug_Slice * vector[32];
};
struct __declspec(align(8)) MoonRenderContext__Fields {
  enum ClearPolicy__Enum clearPolicy;
  enum ClearFlagMode__Enum clearFast;
  enum ClearFlagMode__Enum clearStencil;
  struct ScriptableRenderContext ctx;
  struct CommandBuffer * currentCommandBuffer;
  struct Stack_1_UnityEngine_Rendering_CommandBuffer_ * availableCommandBuffers;
  struct Stack_1_UnityEngine_Rendering_CommandBuffer_ * usedCommandBuffers;
  bool profileFlushAndSubmit;
};
struct MoonRenderContext {
  struct MoonRenderContext__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderContext__Fields fields;
};
struct __declspec(align(8)) Stack_1_UnityEngine_Rendering_CommandBuffer___Fields {
  struct CommandBuffer__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_UnityEngine_Rendering_CommandBuffer_ {
  struct Stack_1_UnityEngine_Rendering_CommandBuffer___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_UnityEngine_Rendering_CommandBuffer___Fields fields;
};
struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer_ {
  struct IEnumerator_1_UnityEngine_Rendering_CommandBuffer___Class *klass;
  struct MonitorData *monitor;
};
struct CommandBuffer__Array__Array {
  struct CommandBuffer__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CommandBuffer__Array * vector[32];
};
struct RenderTarget__Array {
  struct RenderTarget__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RenderTarget * vector[32];
};
struct RenderTargetIdentifier__Array__Array {
  struct RenderTargetIdentifier__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RenderTargetIdentifier__Array * vector[32];
};
struct __declspec(align(8)) List_1_IRenderPostprocessor___Fields {
  struct IRenderPostprocessor__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IRenderPostprocessor_ {
  struct List_1_IRenderPostprocessor___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IRenderPostprocessor___Fields fields;
};
struct IRenderPostprocessor {
  struct IRenderPostprocessor__Class *klass;
  struct MonitorData *monitor;
};
struct IRenderPostprocessor__Array {
  struct IRenderPostprocessor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IRenderPostprocessor * vector[32];
};
struct IEnumerator_1_IRenderPostprocessor_ {
  struct IEnumerator_1_IRenderPostprocessor___Class *klass;
  struct MonitorData *monitor;
};
struct MoonRenderPipelineView_UpscalePost {
  struct MoonRenderPipelineView_UpscalePost__Class *klass;
  struct MonitorData *monitor;
};
struct MoonRenderPipelineView_FinalPost {
  struct MoonRenderPipelineView_FinalPost__Class *klass;
  struct MonitorData *monitor;
};
enum RuntimeSliceRenderSettings_DofCurveMode__Enum : int32_t {
  RuntimeSliceRenderSettings_DofCurveMode__Enum_From = 0,
  RuntimeSliceRenderSettings_DofCurveMode__Enum_To = 1,
  RuntimeSliceRenderSettings_DofCurveMode__Enum_Tween = 2,
  RuntimeSliceRenderSettings_DofCurveMode__Enum_Off = 3,
};
struct RuntimeSliceRenderSettings_DofCurveMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RuntimeSliceRenderSettings_DofCurveMode__Enum value;
};
struct __declspec(align(8)) RuntimeSliceRenderSettings__Fields {
  struct SceneDefaultSettingsHelper * m_defaultSettingsHelper;
  struct SliceRenderSettings * m_currentSRS;
  struct LayeredRenderSettings * m_currentLRS;
  bool m_isDirty;
  float m_deltaTime;
  struct Vector3 m_cameraPos;
  enum RuntimeSliceRenderSettings_DofCurveMode__Enum dofCurveMode;
};
struct RuntimeSliceRenderSettings {
  struct RuntimeSliceRenderSettings__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeSliceRenderSettings__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Rendering_ILayeredRenderInfluencer___Fields {
  struct ILayeredRenderInfluencer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Rendering_ILayeredRenderInfluencer_ {
  struct List_1_Moon_Rendering_ILayeredRenderInfluencer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Rendering_ILayeredRenderInfluencer___Fields fields;
};
struct ILayeredRenderInfluencer {
  struct ILayeredRenderInfluencer__Class *klass;
  struct MonitorData *monitor;
};
struct ILayeredRenderInfluencer__Array {
  struct ILayeredRenderInfluencer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ILayeredRenderInfluencer * vector[32];
};
struct IEnumerator_1_Moon_Rendering_ILayeredRenderInfluencer_ {
  struct IEnumerator_1_Moon_Rendering_ILayeredRenderInfluencer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Fields {
  struct ISliceRenderSettingsInfluencer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Rendering_ISliceRenderSettingsInfluencer_ {
  struct List_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Fields fields;
};
struct ISliceRenderSettingsInfluencer {
  struct ISliceRenderSettingsInfluencer__Class *klass;
  struct MonitorData *monitor;
};
struct ISliceRenderSettingsInfluencer__Array {
  struct ISliceRenderSettingsInfluencer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISliceRenderSettingsInfluencer * vector[32];
};
struct IEnumerator_1_Moon_Rendering_ISliceRenderSettingsInfluencer_ {
  struct IEnumerator_1_Moon_Rendering_ISliceRenderSettingsInfluencer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) LightCullingSystem__Fields {
  bool Enabled;
  struct LightCullingSystem_LightCullingGroup__Array * Groups;
};
struct LightCullingSystem {
  struct LightCullingSystem__Class *klass;
  struct MonitorData *monitor;
  struct LightCullingSystem__Fields fields;
};
struct LightCullingSystem_LightCullingGroup__Array {
  struct LightCullingSystem_LightCullingGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LightCullingSystem_LightCullingGroup * vector[32];
};
struct __declspec(align(8)) MoonRenderPipelineView_GodRaySrcRT__Fields {
  struct RenderTarget * rt;
  int32_t id;
  int32_t blurRTIndex;
};
struct MoonRenderPipelineView_GodRaySrcRT {
  struct MoonRenderPipelineView_GodRaySrcRT__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_GodRaySrcRT__Fields fields;
};
struct MoonRenderPipelineView_GodRaySrcRT__Array {
  struct MoonRenderPipelineView_GodRaySrcRT__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineView_GodRaySrcRT * vector[32];
};
struct __declspec(align(8)) MoonRenderPipelineView_GodRayBlurRT__Fields {
  struct RenderTarget * rt;
  int32_t id;
  int32_t frameIndex;
  bool forceClear;
};
struct MoonRenderPipelineView_GodRayBlurRT {
  struct MoonRenderPipelineView_GodRayBlurRT__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_GodRayBlurRT__Fields fields;
};
struct MoonRenderPipelineView_GodRayBlurRT__Array {
  struct MoonRenderPipelineView_GodRayBlurRT__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineView_GodRayBlurRT * vector[32];
};
struct ICullingCategoryManager {
  struct ICullingCategoryManager__Class *klass;
  struct MonitorData *monitor;
};
struct ICullingCategoryManager__Array {
  struct ICullingCategoryManager__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ICullingCategoryManager * vector[32];
};
struct LightDarkeningErasingComparer {
  struct LightDarkeningErasingComparer__Class *klass;
  struct MonitorData *monitor;
};
struct LightCullingComparer {
  struct LightCullingComparer__Class *klass;
  struct MonitorData *monitor;
};
struct MoonRenderPipelineView_FilterBounds {
  struct Bounds bounds;
  float zNear;
  float zFar;
};
struct MoonRenderPipelineView_FilterBounds__Boxed {
  struct MoonRenderPipelineView_FilterBounds__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_FilterBounds fields;
};
struct Viewport {
  struct Rect rect;
};
struct Viewport__Boxed {
  struct Viewport__Class *klass;
  struct MonitorData *monitor;
  struct Viewport fields;
};
struct MoonRenderPipelineView_FinalSliceCompositionInfo {
  int32_t sliceRTIdx;
  float zNear;
  float zFar;
  struct Vector4 slicingParams;
  struct MoonRenderPipelineView_FilterBounds cullBounds;
  struct Vector2 sliceScale;
  struct Viewport sliceViewport;
  struct Vector4 sliceUVScale;
  struct Vector4 uvMaxRegion;
  float sampling;
  bool doDepthPrecull;
};
struct MoonRenderPipelineView_FinalSliceCompositionInfo__Boxed {
  struct MoonRenderPipelineView_FinalSliceCompositionInfo__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_FinalSliceCompositionInfo fields;
};
struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array {
  struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonRenderPipelineView_FinalSliceCompositionInfo vector[32];
};
struct __declspec(align(8)) InterleavedRenderingSettings__Fields {
  struct InterleavedRenderingSettings_PerSlice__Array * slices;
  struct InterleavedRenderingSettings_SliceLoop * bgLoop;
  struct InterleavedRenderingSettings_SliceLoop * fgLoop;
};
struct InterleavedRenderingSettings {
  struct InterleavedRenderingSettings__Class *klass;
  struct MonitorData *monitor;
  struct InterleavedRenderingSettings__Fields fields;
};
struct __declspec(align(8)) InterleavedRenderingSettings_PerSlice__Fields {
  int32_t index;
  struct Vector2 prevDrsScale;
  struct Int2 sliceSize;
  float xMovementScale;
  bool overwrite;
  bool enabled;
};
struct InterleavedRenderingSettings_PerSlice {
  struct InterleavedRenderingSettings_PerSlice__Class *klass;
  struct MonitorData *monitor;
  struct InterleavedRenderingSettings_PerSlice__Fields fields;
};
struct InterleavedRenderingSettings_PerSlice__Array {
  struct InterleavedRenderingSettings_PerSlice__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InterleavedRenderingSettings_PerSlice * vector[32];
};
struct __declspec(align(8)) InterleavedRenderingSettings_SliceLoop__Fields {
  struct InterleavedRenderingSettings_PerSlice__Array * slices;
  int32_t sliceBase;
  int32_t sliceCount;
  int32_t readWriteIndex;
  int32_t sliceIndexToStore;
  int32_t sliceIndexToReuse;
};
struct InterleavedRenderingSettings_SliceLoop {
  struct InterleavedRenderingSettings_SliceLoop__Class *klass;
  struct MonitorData *monitor;
  struct InterleavedRenderingSettings_SliceLoop__Fields fields;
};
struct __declspec(align(8)) DiskBlurSRP__Fields {
  int32_t _sampleCount;
  struct Vector4 motionBlurParams;
  float MotionBlurVignettePower;
  float MotionBlurVignetteSize;
  float MotionBlurVignetteStrength;
  float VectorMotionBlurRadius;
  float VectorMotionBlurScale;
  float MotionBlurFPSScale;
  bool debugShowInterest;
  bool debugShowMotionVectors;
  struct Material__Array * materials;
  struct Material__Array * materialsMB;
  struct Vector4__Array * m_interestZonePos;
};
struct DiskBlurSRP {
  struct DiskBlurSRP__Class *klass;
  struct MonitorData *monitor;
  struct DiskBlurSRP__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_Moon_Rendering_SrpSampler___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Moon_Rendering_SrpSampler_ {
  struct Dictionary_2_System_String_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Moon_Rendering_SrpSampler___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct SrpSampler value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Moon_Rendering_SrpSampler_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler___Fields {
  struct Dictionary_2_System_String_Moon_Rendering_SrpSampler_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Moon_Rendering_SrpSampler___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler___Fields {
  struct Dictionary_2_System_String_Moon_Rendering_SrpSampler_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Moon_Rendering_SrpSampler___Fields fields;
};
struct SrpSampler__Array {
  struct SrpSampler__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SrpSampler vector[32];
};
struct IEnumerator_1_Moon_Rendering_SrpSampler_ {
  struct IEnumerator_1_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Rendering_SrpSampler_ {
  struct ICollection_1_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ {
  struct String * key;
  struct SrpSampler value;
};
struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Boxed {
  struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ fields;
};
struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Array {
  struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Rendering_SrpSampler_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Rendering_SrpSampler_ {
  struct IEnumerable_1_Moon_Rendering_SrpSampler___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_PointLightMaskModifier___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_PointLightMaskModifier_ {
  struct Dictionary_2_System_Int32_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_PointLightMaskModifier___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct PointLightMaskModifier * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_PointLightMaskModifier_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier___Fields {
  struct Dictionary_2_System_Int32_PointLightMaskModifier_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_PointLightMaskModifier___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier___Fields {
  struct Dictionary_2_System_Int32_PointLightMaskModifier_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_PointLightMaskModifier___Fields fields;
};
struct IEnumerator_1_PointLightMaskModifier_ {
  struct IEnumerator_1_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_PointLightMaskModifier_ {
  struct ICollection_1_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_PointLightMaskModifier_ {
  int32_t key;
  struct PointLightMaskModifier * value;
};
struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Boxed {
  struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_PointLightMaskModifier_ fields;
};
struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Array {
  struct KeyValuePair_2_System_Int32_PointLightMaskModifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_PointLightMaskModifier_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_PointLightMaskModifier_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_PointLightMaskModifier_ {
  struct IEnumerable_1_PointLightMaskModifier___Class *klass;
  struct MonitorData *monitor;
};
struct HashSet_1_T_Slot_LightPriority_Layer___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_LightPriority_Layer___StaticFields {
};}