namespace app {
enum MoonRenderPipelineAsset_RenderQueues__Enum : int32_t {
  MoonRenderPipelineAsset_RenderQueues__Enum_All = 0,
  MoonRenderPipelineAsset_RenderQueues__Enum_AllBackToFront = 1,
  MoonRenderPipelineAsset_RenderQueues__Enum_Opaque = 2,
  MoonRenderPipelineAsset_RenderQueues__Enum_Transparent = 3,
  MoonRenderPipelineAsset_RenderQueues__Enum_OpaqueThenTransparent = 4,
  MoonRenderPipelineAsset_RenderQueues__Enum_TransparentThenOpaque = 5,
  MoonRenderPipelineAsset_RenderQueues__Enum_LegacySort = 6,
  MoonRenderPipelineAsset_RenderQueues__Enum_EarlyZ = 7,
};
struct MoonRenderPipelineAsset_RenderQueues__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_RenderQueues__Enum value;
};
enum SortFlags__Enum : int32_t {
  SortFlags__Enum_None = 0,
  SortFlags__Enum_SortingLayer = 1,
  SortFlags__Enum_RenderQueue = 2,
  SortFlags__Enum_BackToFront = 4,
  SortFlags__Enum_QuantizedFrontToBack = 8,
  SortFlags__Enum_OptimizeStateChanges = 16,
  SortFlags__Enum_CanvasOrder = 32,
  SortFlags__Enum_RendererPriority = 64,
  SortFlags__Enum_CommonOpaque = 59,
  SortFlags__Enum_CommonTransparent = 23,
};
struct SortFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SortFlags__Enum value;
};
enum MoonRenderPipelineAsset_TLCCulling__Enum : int32_t {
  MoonRenderPipelineAsset_TLCCulling__Enum_None = 0,
  MoonRenderPipelineAsset_TLCCulling__Enum_Clear = 1,
  MoonRenderPipelineAsset_TLCCulling__Enum_MaskOnly = 2,
};
struct MoonRenderPipelineAsset_TLCCulling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_TLCCulling__Enum value;
};
enum MoonRenderPipelineAsset_TLCLighting__Enum : int32_t {
  MoonRenderPipelineAsset_TLCLighting__Enum_None = 0,
  MoonRenderPipelineAsset_TLCLighting__Enum_Empty = 1,
  MoonRenderPipelineAsset_TLCLighting__Enum_Pink = 2,
  MoonRenderPipelineAsset_TLCLighting__Enum_Full = 3,
};
struct MoonRenderPipelineAsset_TLCLighting__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_TLCLighting__Enum value;
};
enum MoonRenderPipelineAsset_TLCLightingDebug__Enum : int32_t {
  MoonRenderPipelineAsset_TLCLightingDebug__Enum_None = 0,
  MoonRenderPipelineAsset_TLCLightingDebug__Enum_Spectrum = 1,
  MoonRenderPipelineAsset_TLCLightingDebug__Enum_Max = 2,
};
struct MoonRenderPipelineAsset_TLCLightingDebug__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_TLCLightingDebug__Enum value;
};
enum MoonRenderPipelineAsset_WaterReflectionSortMode__Enum : int32_t {
  MoonRenderPipelineAsset_WaterReflectionSortMode__Enum_MRP = 0,
  MoonRenderPipelineAsset_WaterReflectionSortMode__Enum_ViewAxis = 1,
  MoonRenderPipelineAsset_WaterReflectionSortMode__Enum_Legacy = 2,
};
struct MoonRenderPipelineAsset_WaterReflectionSortMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_WaterReflectionSortMode__Enum value;
};
enum MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum : int32_t {
  MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum_Off = 0,
  MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum_GraphicsBlit = 1,
  MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum_CommandBuffer = 2,
};
struct MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum value;
};
enum MoonRenderPipelineAsset_GodRaySampleCount__Enum : int32_t {
  MoonRenderPipelineAsset_GodRaySampleCount__Enum_Lowest_5 = 0,
  MoonRenderPipelineAsset_GodRaySampleCount__Enum_Low_12 = 1,
  MoonRenderPipelineAsset_GodRaySampleCount__Enum_Medium_20 = 2,
  MoonRenderPipelineAsset_GodRaySampleCount__Enum_High_35 = 3,
  MoonRenderPipelineAsset_GodRaySampleCount__Enum_Highest_50 = 4,
};
struct MoonRenderPipelineAsset_GodRaySampleCount__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_GodRaySampleCount__Enum value;
};
enum SrpSampler_Scope__Enum : int32_t {
  SrpSampler_Scope__Enum_None = 0,
  SrpSampler_Scope__Enum_CPU = 1,
  SrpSampler_Scope__Enum_GPU = 2,
  SrpSampler_Scope__Enum_Both = 3,
};
struct SrpSampler_Scope__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SrpSampler_Scope__Enum value;
};
struct MoonRenderPipelineAsset__Fields {
  struct RenderPipelineAsset__Fields _;
  enum MoonRenderPipelineAsset_XboxResolution__Enum sceneResolution;
  float sceneResolutionMultiplier;
  float sceneResolutionMultiplierMin;
  float sceneResolutionMultiplierMax;
  float sceneResolutionMultiplierSteps;
  enum MoonRenderPipelineAsset_XboxResolution__Enum uiResolution;
  float uiResolutionMultiplier;
  enum MoonRenderPipelineAsset_DebugDownsample__Enum debugDownsample;
  enum MoonRenderPipelineAsset_FrameBufferFormat__Enum frameBufferFormat;
  enum RenderTextureFormat__Enum customFrameBufferFormat;
  enum MoonRenderPipelineAsset_FrameBufferDepth__Enum frameBufferDepth;
  enum SceneRTAllocationPolicy__Enum sceneAllocationPolicy;
  enum SliceRTAllocationPolicy__Enum sliceAllocationPolicy;
  enum ClearPolicy__Enum clearPolicy;
  enum ClearFlagMode__Enum clearFast;
  enum ClearFlagMode__Enum clearStencil;
  enum MoonRenderPipelineAsset_ClearSceneRT__Enum clearSceneRT;
  struct Color customColorClearSceneRT;
  enum MoonRenderPipelineAsset_ClearSliceBlurRT__Enum clearSliceBlurRT;
  bool sendOnBecameVisible;
  bool sendOnWillRenderObject;
  float cullUsingBoundsEpsilon;
  bool allowObjectCounting;
  int32_t skipEmptySlices;
  float alphaCutoff;
  float alphaSmooth;
  float globalAlphaThresholdMultiply;
  bool useHiResOpaque3D;
  bool useHiResHDR;
  bool useHiResOpaque3DTrueDepth;
  enum MoonRenderPipelineAsset_DeferredLightingDebug__Enum deferredLightingDebug;
  enum MoonRenderPipelineAsset_FXAADepthPrecull__Enum fxaaDepthPrecullType;
  enum MoonRenderPipelineAsset_FXAAHiRes__Enum fxaaHiResOpaque3DType;
  int32_t fxaaHiResOpaque3DQuadSize;
  bool useHiResOpaque3DSmartBlit;
  int32_t smartBlitHiResOpaque3DQuadSize;
  float blitColorHiResOpaque3DBlurThreshold;
  bool blitColorOnEdgesHiResOpaque3D;
  bool blitColorHiResOpaque3DForced;
  bool blitColorHiResOpaque3DAA;
  float blitColorHiResOpaque3DAAOffset;
  bool useFixedHiResOpaque3DZExpand;
  float hiResOpaque3DZExpand;
  bool useAlphaDepth;
  float alphaDepthThreshold;
  enum MoonRenderPipelineAsset_MaskErasingFixType__Enum maskErasingFixType;
  bool dbgHiResOpaque3DSlice0;
  bool dbgHiResOpaque3DSlice1;
  bool dbgHiResOpaque3DSlice2;
  bool dbgHiResOpaque3DSlice3;
  bool dbgHiResOpaque3DSlice4;
  bool dbgHiResOpaque3DSlice5;
  float vertexDepthOutOfSliceRejectionThreshold;
  bool useEarlyZReconstruction;
  int32_t earlyZRecMaxSlice;
  float earlyZRecThreshold;
  enum RenderScope__Enum allowDepthPrecull;
  enum RenderScope__Enum allowEarlyZPass;
  enum RenderScope__Enum allowObjectPass;
  enum RenderScope__Enum allowDownsampling;
  enum RenderScope__Enum useMagicDownsampling;
  float magicPower;
  bool composeClip;
  enum MoonRenderPipelineAsset_SliceCompositionType__Enum compositionType;
  float composeAlphaClipThreshold;
  struct Vector3 debugCameraMotionOffset;
  enum FilterMode__Enum filterMode;
  enum FilterMode__Enum sliceFilterMode;
  struct Material * blurSliceMaterial;
  struct Material * composeSliceMaterial;
  struct Material * composeSliceFullPSMaterial;
  struct Material * preComposeSliceFullPSMaterial;
  struct Material * deferredLightingMaterial;
  struct Material * blitMaterial;
  bool useSliceRange;
  struct IntRange sliceRange;
  int32_t numSlicesBeforeSubmit;
  int32_t numSlicesBeforeSuspendJobsThreshold;
  enum RenderScope__Enum allowInterleaved;
  bool isrAutoToggle;
  float isrGPUActivationThreshold;
  float isrGPUDeactivationThreshold;
  float isrCPUActivationThreshold;
  bool slice0Enable;
  bool slice1Enable;
  bool slice2Enable;
  bool slice3Enable;
  bool slice4Enable;
  bool slice5Enable;
  float slice0ShiftScale;
  float slice1ShiftScale;
  float slice2ShiftScale;
  float slice3ShiftScale;
  float slice4ShiftScale;
  float slice5ShiftScale;
  enum RenderScope__Enum allowDRS;
  int32_t maxDRSDownscale;
  int32_t maxDRSDownscaleY;
  int32_t sceneRTDRSDownscaleCap;
  int32_t sceneRTDRSDownscaleYCap;
  enum RenderScope__Enum allowDownsamplingThresholdDRS;
  float downsamplingThresholdDRS;
  bool forceDRSMaxDownscale;
  bool forceDRSMaxDownscaleY;
  int32_t targetDRSGPUFrameTime;
  int32_t scalingDRSSpeedUp;
  int32_t scalingDRSSpeedDown;
  enum RenderScope__Enum useAltDownsampling;
  float altDownsamplingStart;
  float altDownsamplingRatio;
  enum RenderScope__Enum useResolutionBasedAltDownsampling;
  int32_t altDownsamplingMinRes;
  int32_t altDownsamplingMidpointRes;
  int32_t altDownsamplingMaxRes;
  enum RenderScope__Enum allowTAA;
  float sliceScaleTAAThreshold;
  bool enableTAAComposition;
  enum RenderScope__Enum allowFXAA;
  float blurThresholdFXAA;
  enum MoonRenderPipelineAsset_FxaaQualityLevel__Enum fxaaQualityLevel;
  struct FXAA_QualitySettings fxaaQualitySettings;
  enum RenderScope__Enum allowBlur;
  bool blurUsesZTest;
  bool blurChecksDeadPixels;
  bool blurUsesPointSampling;
  bool blurNoBlurAroundFocusedSlice;
  enum MoonRenderPipelineAsset_DofBlurType__Enum blurType;
  struct FloatRange dofRange;
  struct FloatRange downsampleRange;
  struct FloatRange blurRange;
  float blurUIAmount;
  float blurUIMinAmount;
  float blurUIMaxDownsample;
  int32_t blurKernelBias;
  enum RenderScope__Enum allowMotionBlur;
  float motionBlurGlobalScale;
  float motionBlurGlobalScaleMin;
  float motionBlurGlobalScaleMax;
  float motionBlurGlobalScaleStep;
  float blurThresholdPerObjectMV;
  enum MoonRenderPipelineAsset_POT__Enum motionVectorsRTDownscale;
  bool linearMotionBlur;
  bool dontBlurEdges;
  int32_t linearMotionBlurMaxNumSamples;
  int32_t linearMotionBlurNumSubsamples;
  float linearMotionBlurCamCompatMul;
  float motionBlurMax;
  float motionBlurScale;
  struct Single__Array * defaultMotionBlurRatiosPerSlice;
  float blurAmountToMotionBlurScale;
  struct Vector3 motionBlurDebug;
  float MotionBlurVignettePower;
  float MotionBlurVignetteSize;
  float MotionBlurVignetteStrength;
  float vectorMotionBlurScale;
  float vectorMotionBlurRadius;
  float motionBlurSmoothTime;
  enum RenderScope__Enum allowEmissivityPass;
  float globalEmissivityIntensity;
  enum RenderScope__Enum allowDarkening;
  float darkeningIntesity;
  float darkeningDivider;
  bool useEmissivityRemapping;
  float emissivityIntesity;
  float emissivityDivider;
  struct Shader * emissivityMaskShader;
  struct Shader * emissivityCompShader;
  struct Shader * emissivityDownShader;
  float emissivityRTSizeScale;
  float emissivityCompClamp;
  float emissivityClearWeight;
  float emissivityMaxCamSpeedClearWeight;
  float emissivityMaxCamSpeed;
  bool alphaMaskClearImmediately;
  bool useEmissivitySlicing;
  bool emissivityGodraysInPostProcess;
  enum RenderScope__Enum allowPostprocessors;
  bool allowDistortion;
  enum RenderScope__Enum allowUI;
  float sharpnessPostIntensity;
  float AdditionalSharpnessPostIntensity;
  float AdditionalGlobalContrast;
  float AdditionalGlobalDesaturation;
  bool fadeInFinalPost;
  bool skipUIFinalPostOnXBWithHDR;
  bool useFastPostEnumeration;
  bool useHDRFormatForSomeRTs;
  enum RenderTextureFormat__Enum someRTsHDRFormat;
  float HDRUIBrightnessBoost;
  bool HDRUnlockGodRays;
  float HDRGodRaysRemapIntensity;
  float HDRGodRaysRemapDivider;
  bool HDRUnlockUberPostProcess;
  enum MoonRenderPipelineAsset_HDRRecMode__Enum HDRReconstruction;
  float HDRReconstructionType;
  float HDRReconstructionMaxNits;
  bool HDRReconstructionInScriptOnXBox;
  bool HDRReconstructionInUberPostOnPC;
  bool HDRBoostShadows;
  float HDRBoostShadowsAmount;
  float HDRBoostShadowsLerpUpStart;
  float HDRBoostShadowsLerpUpLen;
  float HDRBoostShadowsLerpDownStart;
  float HDRBoostShadowsLerpDownLen;
  bool HDRRemap;
  float HDRRemapShoulderStart;
  float HDRRemapMaxRangeAvailable;
  float HDRRemapMaxRangeNeeded;
  bool HDRVisualize;
  float HDRVisualizeMax;
  bool EnablePerVertexColorVariation;
  float MainTexScale;
  struct Vector2 MainTexScroll;
  float DistortionScale;
  struct Vector2 DistortionScroll;
  float DistortionStrength;
  float Intensity;
  float Speed;
  float DarkFactor;
  float LightFactor;
  float DepthBreakUpFactor;
  enum MoonRenderPipelineAsset_RenderQueues__Enum renderQueues;
  enum SortFlags__Enum opaqueSortFlags;
  bool opaqueSortOrthographic;
  enum SortFlags__Enum transparentSortFlags;
  bool transparentSortOrthographic;
  bool cachedCmdBuffersEnabled;
  bool srpBatching;
  enum MoonRenderPipelineAsset_TLCCulling__Enum tiledLightsCulling;
  enum MoonRenderPipelineAsset_TLCLighting__Enum tiledLightsLighting;
  bool enable2DLighting;
  bool enable3DLighting;
  bool enable2DUnmaskedLighting;
  bool enableSlice0Lighting;
  bool enableSlice1Lighting;
  bool enableSlice2Lighting;
  bool enableSlice3Lighting;
  bool enableSlice4Lighting;
  bool enableSlice5Lighting;
  struct ComputeShader * tiledLightsCullingShader;
  enum MoonRenderPipelineAsset_TLCLightingDebug__Enum tiledLightsCullingDebug;
  int32_t tiledLightsCullingDebugSliceIndex;
  struct Shader * tiledLightsCullingDebugShader;
  int32_t tiledLightsMaxOverlappingLights;
  int32_t tiledLightsDebugGradientMaxLights;
  float tiledLightsDebugTransparency;
  struct Shader * tiledLightsPrebakeDebugShader;
  bool tiledLightsPrebakeDebug;
  int32_t tiledLightsPrebakeDebugSliceIndex;
  float tiledLightsThicknessDirOffset;
  bool selectVisibleLights;
  bool selectVisible2DLights;
  bool selectVisible3DLights;
  enum RenderScope__Enum allowWaterReflections;
  bool waterReflectionAutomaticGrouping;
  bool waterReflectionIgnoreFromBelow;
  float waterReflectionTextureResDivider;
  enum RenderTextureFormat__Enum waterReflectionTextureFormat;
  int32_t waterReflectionUpdateStride;
  bool waterReflectionUpdateSpread;
  bool blurWaterOnlyObjects;
  float waterBlurSizeThreshold;
  enum MoonRenderPipelineAsset_WaterReflectionSortMode__Enum waterReflectionSortMode;
  bool showOnlyReflectedObjects;
  float waterRippleTextureRes;
  enum RenderTextureFormat__Enum waterRippleTextureFormat;
  enum RenderTextureFormat__Enum waterRippleTextureFormatNoDispl;
  enum MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum waterSimulationUpdateMode;
  enum RenderScope__Enum allowRefractionPass;
  bool useRealBackgroundForReflectionRefraction;
  enum MoonRenderPipelineAsset_POT__Enum reflectionRefractionRTDownscale;
  enum RenderScope__Enum allowGodRays;
  float globalGodRaysIntensity;
  struct Material * godRayMaskMaterial;
  struct Material * godRayMaterial;
  float godRayRTSize;
  struct Material * godRayComposeMaterial;
  float godRayFadeOutRate;
  enum MoonRenderPipelineAsset_GodRaySampleCount__Enum godRaySampleCount;
  bool godRayAnimateNoise;
  struct Texture2D * blueNoiseTexture;
  enum RenderScope__Enum allowMeshTrails;
  enum RenderScope__Enum allowMeshTrailsDebug;
  enum RenderScope__Enum allowMoonTrails;
  enum SrpSampler_Scope__Enum profilingScope;
  enum SrpSampler_Scope__Enum deepProfilingScope;
  bool appendFrameNumberToRootSample;
  bool profileFlushAndSubmit;
  int32_t highlightLayer;
  struct Color highlightLayerColor;
  float showAlphaMask;
  int32_t showAlphaMaskSlice;
  struct LayeredRenderSettings * LayeredRenderSettingsDefault;
  float blurTreshold;
  float zExpand;
  float maxBlurSpread;
  float DiskBlurScale;
  float minBlur;
};
struct MoonRenderPipelineAsset {
  struct MoonRenderPipelineAsset__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineAsset__Fields fields;
};
struct ComputeShader__Fields {
  struct Object_1__Fields _;
};
struct ComputeShader {
  struct ComputeShader__Class *klass;
  struct MonitorData *monitor;
  struct ComputeShader__Fields fields;
};
enum LayeredRenderSettings_UsageType__Enum : int32_t {
  LayeredRenderSettings_UsageType__Enum_Cinematic = 0,
  LayeredRenderSettings_UsageType__Enum_Gameplay = 1,
};
struct LayeredRenderSettings_UsageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LayeredRenderSettings_UsageType__Enum value;
};
enum LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum : int32_t {
  LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum_None = 0,
  LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum_Switch = 1,
};
struct LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum value;
};
struct LayeredRenderSettings_LayeredRenderSettingsOverride {
  enum LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum Platform;
  struct LayeredRenderSettings_LayerParams__Array * Layers;
  float FarPlane;
};
struct LayeredRenderSettings_LayeredRenderSettingsOverride__Boxed {
  struct LayeredRenderSettings_LayeredRenderSettingsOverride__Class *klass;
  struct MonitorData *monitor;
  struct LayeredRenderSettings_LayeredRenderSettingsOverride fields;
};
struct LayeredRenderSettings__Fields {
  struct ScriptableObject__Fields _;
  bool ShowLayers;
  enum LayeredRenderSettings_UsageType__Enum Type;
  struct LayeredRenderSettings_LayerParams__Array * m_layers;
  float m_farPlane;
  struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * Overrides;
  bool m_overrideEvaluated;
  bool m_useOverride;
  bool m_forceSwitchOverrideLocal;
  struct LayeredRenderSettings_LayeredRenderSettingsOverride m_currentOverride;
};
struct LayeredRenderSettings {
  struct LayeredRenderSettings__Class *klass;
  struct MonitorData *monitor;
  struct LayeredRenderSettings__Fields fields;
};
struct __declspec(align(8)) LayeredRenderSettings_LayerParams__Fields {
  float WorldZ;
};
struct LayeredRenderSettings_LayerParams {
  struct LayeredRenderSettings_LayerParams__Class *klass;
  struct MonitorData *monitor;
  struct LayeredRenderSettings_LayerParams__Fields fields;
};
struct LayeredRenderSettings_LayerParams__Array {
  struct LayeredRenderSettings_LayerParams__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LayeredRenderSettings_LayerParams * vector[32];
};
struct __declspec(align(8)) List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Fields {
  struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
  struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Fields fields;
};
struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array {
  struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LayeredRenderSettings_LayeredRenderSettingsOverride vector[32];
};
struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
  struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Class *klass;
  struct MonitorData *monitor;
};
struct IRenderPipeline__VTable {
  VirtualInvokeData get_disposed;
  VirtualInvokeData Render;
};
struct IRenderPipeline__StaticFields {
};
struct IRenderPipeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IRenderPipeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IRenderPipeline__VTable vtable;
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields {
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___VTable vtable;
};
struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___VTable {
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
struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields {
  struct IRenderPipeline__Array * _emptyArray;
};
struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___VTable vtable;
};
struct IntRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IntRange__StaticFields {
};
struct IntRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntRange__VTable vtable;
};
struct FXAA_QualitySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FXAA_QualitySettings__StaticFields {
};
struct FXAA_QualitySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FXAA_QualitySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FXAA_QualitySettings__VTable vtable;
};
struct FloatRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatRange__StaticFields {
};
struct FloatRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatRange__VTable vtable;
};
struct ComputeShader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ComputeShader__StaticFields {
};
struct ComputeShader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComputeShader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComputeShader__VTable vtable;
};
struct LayeredRenderSettings_LayerParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LayeredRenderSettings_LayerParams__StaticFields {
};
struct LayeredRenderSettings_LayerParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LayeredRenderSettings_LayerParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LayeredRenderSettings_LayerParams__VTable vtable;
};
struct LayeredRenderSettings_LayeredRenderSettingsOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LayeredRenderSettings_LayeredRenderSettingsOverride__StaticFields {
};
struct LayeredRenderSettings_LayeredRenderSettingsOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LayeredRenderSettings_LayeredRenderSettingsOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LayeredRenderSettings_LayeredRenderSettingsOverride__VTable vtable;
};
struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___StaticFields {
};
struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___VTable vtable;
};
struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___VTable {
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
struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___StaticFields {
  struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array * _emptyArray;
};
struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___VTable vtable;
};
struct LayeredRenderSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};
struct LayeredRenderSettings__StaticFields {
  bool ForceSwitchOverrideGlobal;
  bool m_duringSerializationCall;
};
struct LayeredRenderSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LayeredRenderSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LayeredRenderSettings__VTable vtable;
};
struct MoonRenderPipelineAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DestroyCreatedInstances;
  VirtualInvokeData CreatePipeline;
  VirtualInvokeData GetRenderingLayerMaskNames;
  VirtualInvokeData GetCullingCategoryNames;
  VirtualInvokeData GetDefaultMaterial;
  VirtualInvokeData GetAutodeskInteractiveShader;
  VirtualInvokeData GetAutodeskInteractiveTransparentShader;
  VirtualInvokeData GetAutodeskInteractiveMaskedShader;
  VirtualInvokeData GetDefaultParticleMaterial;
  VirtualInvokeData GetDefaultLineMaterial;
  VirtualInvokeData GetDefaultTerrainMaterial;
  VirtualInvokeData GetDefaultUIMaterial;
  VirtualInvokeData GetDefaultUIOverdrawMaterial;
  VirtualInvokeData GetDefaultUIETC1SupportedMaterial;
  VirtualInvokeData GetDefault2DMaterial;
  VirtualInvokeData GetDefaultShader;
  VirtualInvokeData InternalCreatePipeline;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnDisable;
};
struct MoonRenderPipelineAsset__StaticFields {
  bool LogDRSScaleEnabled;
  struct Double__Array * DRSScaleArrary;
  int32_t DRSLogIdx;
};
struct MoonRenderPipelineAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonRenderPipelineAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonRenderPipelineAsset__VTable vtable;
};
struct RenderPipelineAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DestroyCreatedInstances;
  VirtualInvokeData CreatePipeline;
  VirtualInvokeData GetRenderingLayerMaskNames;
  VirtualInvokeData GetCullingCategoryNames;
  VirtualInvokeData GetDefaultMaterial;
  VirtualInvokeData GetAutodeskInteractiveShader;
  VirtualInvokeData GetAutodeskInteractiveTransparentShader;
  VirtualInvokeData GetAutodeskInteractiveMaskedShader;
  VirtualInvokeData GetDefaultParticleMaterial;
  VirtualInvokeData GetDefaultLineMaterial;
  VirtualInvokeData GetDefaultTerrainMaterial;
  VirtualInvokeData GetDefaultUIMaterial;
  VirtualInvokeData GetDefaultUIOverdrawMaterial;
  VirtualInvokeData GetDefaultUIETC1SupportedMaterial;
  VirtualInvokeData GetDefault2DMaterial;
  VirtualInvokeData GetDefaultShader;
  VirtualInvokeData __unknown;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnDisable;
};
struct RenderPipelineAsset__StaticFields {
};
struct RenderPipelineAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderPipelineAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderPipelineAsset__VTable vtable;
};

struct __declspec(align(8)) RectOffset__Fields {
  void * m_Ptr;
  struct Object * m_SourceStyle;
};
struct RectOffset {
  struct RectOffset__Class *klass;
  struct MonitorData *monitor;
  struct RectOffset__Fields fields;
};
struct RectOffset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RectOffset__StaticFields {
};
struct RectOffset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectOffset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectOffset__VTable vtable;
};

struct GUIElement__Fields {
  struct Behaviour__Fields _;
};
struct GUIElement {
  struct GUIElement__Class *klass;
  struct MonitorData *monitor;
  struct GUIElement__Fields fields;
};
struct GUIElement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUIElement__StaticFields {
};
struct GUIElement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIElement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIElement__VTable vtable;
};

struct GUITexture__Fields {
  struct GUIElement__Fields _;
};
struct GUITexture {
  struct GUITexture__Class *klass;
  struct MonitorData *monitor;
  struct GUITexture__Fields fields;
};
struct GUITexture__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUITexture__StaticFields {
};
struct GUITexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUITexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUITexture__VTable vtable;
};

struct GUILayer__Fields {
  struct Behaviour__Fields _;
};
struct GUILayer {
  struct GUILayer__Class *klass;
  struct MonitorData *monitor;
  struct GUILayer__Fields fields;
};
struct GUILayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUILayer__StaticFields {
};
struct GUILayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUILayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUILayer__VTable vtable;
};

struct TouchScreenKeyboard {
  struct TouchScreenKeyboard__Class *klass;
  struct MonitorData *monitor;
};
enum TouchScreenKeyboardType__Enum : int32_t {
  TouchScreenKeyboardType__Enum_Default = 0,
  TouchScreenKeyboardType__Enum_ASCIICapable = 1,
  TouchScreenKeyboardType__Enum_NumbersAndPunctuation = 2,
  TouchScreenKeyboardType__Enum_URL = 3,
  TouchScreenKeyboardType__Enum_NumberPad = 4,
  TouchScreenKeyboardType__Enum_PhonePad = 5,
  TouchScreenKeyboardType__Enum_NamePhonePad = 6,
  TouchScreenKeyboardType__Enum_EmailAddress = 7,
  TouchScreenKeyboardType__Enum_NintendoNetworkAccount = 8,
  TouchScreenKeyboardType__Enum_Social = 9,
  TouchScreenKeyboardType__Enum_Search = 10,
  TouchScreenKeyboardType__Enum_DecimalPad = 11,
};
struct TouchScreenKeyboardType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TouchScreenKeyboardType__Enum value;
};
struct TouchScreenKeyboard__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TouchScreenKeyboard__StaticFields {
};
struct TouchScreenKeyboard__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TouchScreenKeyboard__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TouchScreenKeyboard__VTable vtable;
};

enum TouchScreenKeyboard_Status__Enum : int32_t {
  TouchScreenKeyboard_Status__Enum_Visible = 0,
  TouchScreenKeyboard_Status__Enum_Done = 1,
  TouchScreenKeyboard_Status__Enum_Canceled = 2,
  TouchScreenKeyboard_Status__Enum_LostFocus = 3,
};
struct TouchScreenKeyboard_Status__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TouchScreenKeyboard_Status__Enum value;
};

struct RangeInt {
  int32_t start;
  int32_t length;
};
struct RangeInt__Boxed {
  struct RangeInt__Class *klass;
  struct MonitorData *monitor;
  struct RangeInt fields;
};
struct RangeInt__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RangeInt__StaticFields {
};
struct RangeInt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RangeInt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RangeInt__VTable vtable;
};}