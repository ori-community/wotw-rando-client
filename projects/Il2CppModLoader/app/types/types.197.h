namespace app {
struct FXAA_QualitySettings {
    float subpixelAliasingRemovalAmount;
    float edgeDetectionThreshold;
    float minimumRequiredLuminance;
};

struct FXAA_QualitySettings__Boxed {
    struct FXAA_QualitySettings__Class *klass;
    MonitorData *monitor;
    struct FXAA_QualitySettings fields;
};

enum class MoonRenderPipelineAsset_DofBlurType__Enum : int32_t {
    Blur_Standard = 0x00000000,
    Blur_Separated = 0x00000001,
    Blur_Low_Samples = 0x00000002,
};

struct MoonRenderPipelineAsset_DofBlurType__Enum__Boxed {
    struct MoonRenderPipelineAsset_DofBlurType__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_DofBlurType__Enum value;
    
};

struct FloatRange {
    float min;
    float max;
};

struct FloatRange__Boxed {
    struct FloatRange__Class *klass;
    MonitorData *monitor;
    struct FloatRange fields;
};

enum class MoonRenderPipelineAsset_POT__Enum : int32_t {
    _1 = 0x00000001,
    _2 = 0x00000002,
    _4 = 0x00000004,
    _8 = 0x00000008,
    _16 = 0x00000010,
};

struct MoonRenderPipelineAsset_POT__Enum__Boxed {
    struct MoonRenderPipelineAsset_POT__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_POT__Enum value;
    
};

enum class MoonRenderPipelineAsset_HDRRecMode__Enum : int32_t {
    Off = 0x00000000,
    On = 0x00000001,
    Forced = 0x00000002,
};

struct MoonRenderPipelineAsset_HDRRecMode__Enum__Boxed {
    struct MoonRenderPipelineAsset_HDRRecMode__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_HDRRecMode__Enum value;
    
};

enum class MoonRenderPipelineAsset_RenderQueues__Enum : int32_t {
    All = 0x00000000,
    AllBackToFront = 0x00000001,
    Opaque = 0x00000002,
    Transparent = 0x00000003,
    OpaqueThenTransparent = 0x00000004,
    TransparentThenOpaque = 0x00000005,
    LegacySort = 0x00000006,
    EarlyZ = 0x00000007,
};

struct MoonRenderPipelineAsset_RenderQueues__Enum__Boxed {
    struct MoonRenderPipelineAsset_RenderQueues__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_RenderQueues__Enum value;
    
};

enum class SortFlags__Enum : int32_t {
    None = 0x00000000,
    SortingLayer = 0x00000001,
    RenderQueue = 0x00000002,
    BackToFront = 0x00000004,
    QuantizedFrontToBack = 0x00000008,
    OptimizeStateChanges = 0x00000010,
    CanvasOrder = 0x00000020,
    RendererPriority = 0x00000040,
    CommonOpaque = 0x0000003b,
    CommonTransparent = 0x00000017,
};

struct SortFlags__Enum__Boxed {
    struct SortFlags__Enum__Class *klass;
    MonitorData *monitor;
    SortFlags__Enum value;
    
};

enum class MoonRenderPipelineAsset_TLCCulling__Enum : int32_t {
    None = 0x00000000,
    Clear = 0x00000001,
    MaskOnly = 0x00000002,
};

struct MoonRenderPipelineAsset_TLCCulling__Enum__Boxed {
    struct MoonRenderPipelineAsset_TLCCulling__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_TLCCulling__Enum value;
    
};

enum class MoonRenderPipelineAsset_TLCLighting__Enum : int32_t {
    None = 0x00000000,
    Empty = 0x00000001,
    Pink = 0x00000002,
    Full = 0x00000003,
};

struct MoonRenderPipelineAsset_TLCLighting__Enum__Boxed {
    struct MoonRenderPipelineAsset_TLCLighting__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_TLCLighting__Enum value;
    
};

enum class MoonRenderPipelineAsset_TLCLightingDebug__Enum : int32_t {
    None = 0x00000000,
    Spectrum = 0x00000001,
    Max = 0x00000002,
};

struct MoonRenderPipelineAsset_TLCLightingDebug__Enum__Boxed {
    struct MoonRenderPipelineAsset_TLCLightingDebug__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_TLCLightingDebug__Enum value;
    
};

enum class MoonRenderPipelineAsset_WaterReflectionSortMode__Enum : int32_t {
    MRP = 0x00000000,
    ViewAxis = 0x00000001,
    Legacy = 0x00000002,
};

struct MoonRenderPipelineAsset_WaterReflectionSortMode__Enum__Boxed {
    struct MoonRenderPipelineAsset_WaterReflectionSortMode__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_WaterReflectionSortMode__Enum value;
    
};

enum class MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum : int32_t {
    Off = 0x00000000,
    GraphicsBlit = 0x00000001,
    CommandBuffer = 0x00000002,
};

struct MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Boxed {
    struct MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum value;
    
};

enum class MoonRenderPipelineAsset_GodRaySampleCount__Enum : int32_t {
    Lowest_5 = 0x00000000,
    Low_12 = 0x00000001,
    Medium_20 = 0x00000002,
    High_35 = 0x00000003,
    Highest_50 = 0x00000004,
};

struct MoonRenderPipelineAsset_GodRaySampleCount__Enum__Boxed {
    struct MoonRenderPipelineAsset_GodRaySampleCount__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_GodRaySampleCount__Enum value;
    
};

enum class SrpSampler_Scope__Enum : int32_t {
    None = 0x00000000,
    CPU = 0x00000001,
    GPU = 0x00000002,
    Both = 0x00000003,
};

struct SrpSampler_Scope__Enum__Boxed {
    struct SrpSampler_Scope__Enum__Class *klass;
    MonitorData *monitor;
    SrpSampler_Scope__Enum value;
    
};

struct MoonRenderPipelineAsset__Fields {
    struct RenderPipelineAsset__Fields _;
    MoonRenderPipelineAsset_XboxResolution__Enum sceneResolution;
    
    float sceneResolutionMultiplier;
    float sceneResolutionMultiplierMin;
    float sceneResolutionMultiplierMax;
    float sceneResolutionMultiplierSteps;
    MoonRenderPipelineAsset_XboxResolution__Enum uiResolution;
    
    float uiResolutionMultiplier;
    MoonRenderPipelineAsset_DebugDownsample__Enum debugDownsample;
    
    MoonRenderPipelineAsset_FrameBufferFormat__Enum frameBufferFormat;
    
    RenderTextureFormat__Enum customFrameBufferFormat;
    
    MoonRenderPipelineAsset_FrameBufferDepth__Enum frameBufferDepth;
    
    SceneRTAllocationPolicy__Enum sceneAllocationPolicy;
    
    SliceRTAllocationPolicy__Enum sliceAllocationPolicy;
    
    ClearPolicy__Enum clearPolicy;
    
    ClearFlagMode__Enum clearFast;
    
    ClearFlagMode__Enum clearStencil;
    
    MoonRenderPipelineAsset_ClearSceneRT__Enum clearSceneRT;
    
    struct Color customColorClearSceneRT;
    MoonRenderPipelineAsset_ClearSliceBlurRT__Enum clearSliceBlurRT;
    
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
    MoonRenderPipelineAsset_DeferredLightingDebug__Enum deferredLightingDebug;
    
    MoonRenderPipelineAsset_FXAADepthPrecull__Enum fxaaDepthPrecullType;
    
    MoonRenderPipelineAsset_FXAAHiRes__Enum fxaaHiResOpaque3DType;
    
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
    MoonRenderPipelineAsset_MaskErasingFixType__Enum maskErasingFixType;
    
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
    RenderScope__Enum allowDepthPrecull;
    
    RenderScope__Enum allowEarlyZPass;
    
    RenderScope__Enum allowObjectPass;
    
    RenderScope__Enum allowDownsampling;
    
    RenderScope__Enum useMagicDownsampling;
    
    float magicPower;
    bool composeClip;
    MoonRenderPipelineAsset_SliceCompositionType__Enum compositionType;
    
    float composeAlphaClipThreshold;
    struct Vector3 debugCameraMotionOffset;
    FilterMode__Enum filterMode;
    
    FilterMode__Enum sliceFilterMode;
    
    struct Material *blurSliceMaterial;
    struct Material *composeSliceMaterial;
    struct Material *composeSliceFullPSMaterial;
    struct Material *preComposeSliceFullPSMaterial;
    struct Material *deferredLightingMaterial;
    struct Material *blitMaterial;
    bool useSliceRange;
    struct IntRange sliceRange;
    int32_t numSlicesBeforeSubmit;
    int32_t numSlicesBeforeSuspendJobsThreshold;
    RenderScope__Enum allowInterleaved;
    
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
    RenderScope__Enum allowDRS;
    
    int32_t maxDRSDownscale;
    int32_t maxDRSDownscaleY;
    int32_t sceneRTDRSDownscaleCap;
    int32_t sceneRTDRSDownscaleYCap;
    RenderScope__Enum allowDownsamplingThresholdDRS;
    
    float downsamplingThresholdDRS;
    bool forceDRSMaxDownscale;
    bool forceDRSMaxDownscaleY;
    int32_t targetDRSGPUFrameTime;
    int32_t scalingDRSSpeedUp;
    int32_t scalingDRSSpeedDown;
    RenderScope__Enum useAltDownsampling;
    
    float altDownsamplingStart;
    float altDownsamplingRatio;
    RenderScope__Enum useResolutionBasedAltDownsampling;
    
    int32_t altDownsamplingMinRes;
    int32_t altDownsamplingMidpointRes;
    int32_t altDownsamplingMaxRes;
    RenderScope__Enum allowTAA;
    
    float sliceScaleTAAThreshold;
    bool enableTAAComposition;
    RenderScope__Enum allowFXAA;
    
    float blurThresholdFXAA;
    MoonRenderPipelineAsset_FxaaQualityLevel__Enum fxaaQualityLevel;
    
    struct FXAA_QualitySettings fxaaQualitySettings;
    RenderScope__Enum allowBlur;
    
    bool blurUsesZTest;
    bool blurChecksDeadPixels;
    bool blurUsesPointSampling;
    bool blurNoBlurAroundFocusedSlice;
    MoonRenderPipelineAsset_DofBlurType__Enum blurType;
    
    struct FloatRange dofRange;
    struct FloatRange downsampleRange;
    struct FloatRange blurRange;
    float blurUIAmount;
    float blurUIMinAmount;
    float blurUIMaxDownsample;
    int32_t blurKernelBias;
    RenderScope__Enum allowMotionBlur;
    
    float motionBlurGlobalScale;
    float motionBlurGlobalScaleMin;
    float motionBlurGlobalScaleMax;
    float motionBlurGlobalScaleStep;
    float blurThresholdPerObjectMV;
    MoonRenderPipelineAsset_POT__Enum motionVectorsRTDownscale;
    
    bool linearMotionBlur;
    bool dontBlurEdges;
    int32_t linearMotionBlurMaxNumSamples;
    int32_t linearMotionBlurNumSubsamples;
    float linearMotionBlurCamCompatMul;
    float motionBlurMax;
    float motionBlurScale;
    struct Single__Array *defaultMotionBlurRatiosPerSlice;
    float blurAmountToMotionBlurScale;
    struct Vector3 motionBlurDebug;
    float MotionBlurVignettePower;
    float MotionBlurVignetteSize;
    float MotionBlurVignetteStrength;
    float vectorMotionBlurScale;
    float vectorMotionBlurRadius;
    float motionBlurSmoothTime;
    RenderScope__Enum allowEmissivityPass;
    
    float globalEmissivityIntensity;
    RenderScope__Enum allowDarkening;
    
    float darkeningIntesity;
    float darkeningDivider;
    bool useEmissivityRemapping;
    float emissivityIntesity;
    float emissivityDivider;
    struct Shader *emissivityMaskShader;
    struct Shader *emissivityCompShader;
    struct Shader *emissivityDownShader;
    float emissivityRTSizeScale;
    float emissivityCompClamp;
    float emissivityClearWeight;
    float emissivityMaxCamSpeedClearWeight;
    float emissivityMaxCamSpeed;
    bool alphaMaskClearImmediately;
    bool useEmissivitySlicing;
    bool emissivityGodraysInPostProcess;
    RenderScope__Enum allowPostprocessors;
    
    bool allowDistortion;
    RenderScope__Enum allowUI;
    
    float sharpnessPostIntensity;
    float AdditionalSharpnessPostIntensity;
    float AdditionalGlobalContrast;
    float AdditionalGlobalDesaturation;
    bool fadeInFinalPost;
    bool skipUIFinalPostOnXBWithHDR;
    bool useFastPostEnumeration;
    bool useHDRFormatForSomeRTs;
    RenderTextureFormat__Enum someRTsHDRFormat;
    
    float HDRUIBrightnessBoost;
    bool HDRUnlockGodRays;
    float HDRGodRaysRemapIntensity;
    float HDRGodRaysRemapDivider;
    bool HDRUnlockUberPostProcess;
    MoonRenderPipelineAsset_HDRRecMode__Enum HDRReconstruction;
    
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
    MoonRenderPipelineAsset_RenderQueues__Enum renderQueues;
    
    SortFlags__Enum opaqueSortFlags;
    
    bool opaqueSortOrthographic;
    SortFlags__Enum transparentSortFlags;
    
    bool transparentSortOrthographic;
    bool cachedCmdBuffersEnabled;
    bool srpBatching;
    MoonRenderPipelineAsset_TLCCulling__Enum tiledLightsCulling;
    
    MoonRenderPipelineAsset_TLCLighting__Enum tiledLightsLighting;
    
    bool enable2DLighting;
    bool enable3DLighting;
    bool enable2DUnmaskedLighting;
    bool enableSlice0Lighting;
    bool enableSlice1Lighting;
    bool enableSlice2Lighting;
    bool enableSlice3Lighting;
    bool enableSlice4Lighting;
    bool enableSlice5Lighting;
    struct ComputeShader *tiledLightsCullingShader;
    MoonRenderPipelineAsset_TLCLightingDebug__Enum tiledLightsCullingDebug;
    
    int32_t tiledLightsCullingDebugSliceIndex;
    struct Shader *tiledLightsCullingDebugShader;
    int32_t tiledLightsMaxOverlappingLights;
    int32_t tiledLightsDebugGradientMaxLights;
    float tiledLightsDebugTransparency;
    struct Shader *tiledLightsPrebakeDebugShader;
    bool tiledLightsPrebakeDebug;
    int32_t tiledLightsPrebakeDebugSliceIndex;
    float tiledLightsThicknessDirOffset;
    bool selectVisibleLights;
    bool selectVisible2DLights;
    bool selectVisible3DLights;
    RenderScope__Enum allowWaterReflections;
    
    bool waterReflectionAutomaticGrouping;
    bool waterReflectionIgnoreFromBelow;
    float waterReflectionTextureResDivider;
    RenderTextureFormat__Enum waterReflectionTextureFormat;
    
    int32_t waterReflectionUpdateStride;
    bool waterReflectionUpdateSpread;
    bool blurWaterOnlyObjects;
    float waterBlurSizeThreshold;
    MoonRenderPipelineAsset_WaterReflectionSortMode__Enum waterReflectionSortMode;
    
    bool showOnlyReflectedObjects;
    float waterRippleTextureRes;
    RenderTextureFormat__Enum waterRippleTextureFormat;
    
    RenderTextureFormat__Enum waterRippleTextureFormatNoDispl;
    
    MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum waterSimulationUpdateMode;
    
    RenderScope__Enum allowRefractionPass;
    
    bool useRealBackgroundForReflectionRefraction;
    MoonRenderPipelineAsset_POT__Enum reflectionRefractionRTDownscale;
    
    RenderScope__Enum allowGodRays;
    
    float globalGodRaysIntensity;
    struct Material *godRayMaskMaterial;
    struct Material *godRayMaterial;
    float godRayRTSize;
    struct Material *godRayComposeMaterial;
    float godRayFadeOutRate;
    MoonRenderPipelineAsset_GodRaySampleCount__Enum godRaySampleCount;
    
    bool godRayAnimateNoise;
    struct Texture2D *blueNoiseTexture;
    RenderScope__Enum allowMeshTrails;
    
    RenderScope__Enum allowMeshTrailsDebug;
    
    RenderScope__Enum allowMoonTrails;
    
    SrpSampler_Scope__Enum profilingScope;
    
    SrpSampler_Scope__Enum deepProfilingScope;
    
    bool appendFrameNumberToRootSample;
    bool profileFlushAndSubmit;
    int32_t highlightLayer;
    struct Color highlightLayerColor;
    float showAlphaMask;
    int32_t showAlphaMaskSlice;
    struct LayeredRenderSettings *LayeredRenderSettingsDefault;
    float blurTreshold;
    float zExpand;
    float maxBlurSpread;
    float DiskBlurScale;
    float minBlur;
};

struct MoonRenderPipelineAsset {
    struct MoonRenderPipelineAsset__Class *klass;
    MonitorData *monitor;
    struct MoonRenderPipelineAsset__Fields fields;
};

struct ComputeShader__Fields {
    struct Object_1__Fields _;
};

struct ComputeShader {
    struct ComputeShader__Class *klass;
    MonitorData *monitor;
    struct ComputeShader__Fields fields;
};

enum class LayeredRenderSettings_UsageType__Enum : int32_t {
    Cinematic = 0x00000000,
    Gameplay = 0x00000001,
};

struct LayeredRenderSettings_UsageType__Enum__Boxed {
    struct LayeredRenderSettings_UsageType__Enum__Class *klass;
    MonitorData *monitor;
    LayeredRenderSettings_UsageType__Enum value;
    
};

enum class LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum : int32_t {
    None = 0x00000000,
    Switch = 0x00000001,
};

struct LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum__Boxed {
    struct LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum__Class *klass;
    MonitorData *monitor;
    LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum value;
    
};

struct LayeredRenderSettings_LayeredRenderSettingsOverride {
    LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum Platform;
    
    struct LayeredRenderSettings_LayerParams__Array *Layers;
    float FarPlane;
};

struct LayeredRenderSettings_LayeredRenderSettingsOverride__Boxed {
    struct LayeredRenderSettings_LayeredRenderSettingsOverride__Class *klass;
    MonitorData *monitor;
    struct LayeredRenderSettings_LayeredRenderSettingsOverride fields;
};

struct LayeredRenderSettings__Fields {
    struct ScriptableObject__Fields _;
    bool ShowLayers;
    LayeredRenderSettings_UsageType__Enum Type;
    
    struct LayeredRenderSettings_LayerParams__Array *m_layers;
    float m_farPlane;
    struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ *Overrides;
    bool m_overrideEvaluated;
    bool m_useOverride;
    bool m_forceSwitchOverrideLocal;
    struct LayeredRenderSettings_LayeredRenderSettingsOverride m_currentOverride;
};

struct LayeredRenderSettings {
    struct LayeredRenderSettings__Class *klass;
    MonitorData *monitor;
    struct LayeredRenderSettings__Fields fields;
};

struct __declspec(align(8)) LayeredRenderSettings_LayerParams__Fields {
    float WorldZ;
};

struct LayeredRenderSettings_LayerParams {
    struct LayeredRenderSettings_LayerParams__Class *klass;
    MonitorData *monitor;
    struct LayeredRenderSettings_LayerParams__Fields fields;
};

struct LayeredRenderSettings_LayerParams__Array {
    struct LayeredRenderSettings_LayerParams__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LayeredRenderSettings_LayerParams *vector[32];
};

struct __declspec(align(8)) List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Fields {
    struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
    struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Class *klass;
    MonitorData *monitor;
    struct List_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Fields fields;
};

struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array {
    struct LayeredRenderSettings_LayeredRenderSettingsOverride__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LayeredRenderSettings_LayeredRenderSettingsOverride vector[32];
};

struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
    struct IEnumerator_1_LayeredRenderSettings_LayeredRenderSettingsOverride___Class *klass;
    MonitorData *monitor;
};

struct IRenderPipeline__VTable {
    VirtualInvokeData get_disposed;
    VirtualInvokeData Render;
};

struct IRenderPipeline__StaticFields {
};

struct IRenderPipeline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRenderPipeline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRenderPipeline__VTable vtable;
};

struct IRenderPipeline__Array__VTable {
};

struct IRenderPipeline__Array__StaticFields {
};

struct IRenderPipeline__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRenderPipeline__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRenderPipeline__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields {
};

struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct IRenderPipeline__Array *_emptyArray;
};

struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___VTable vtable;
};

struct MoonRenderPipelineAsset_XboxResolution__Enum__VTable {
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

struct MoonRenderPipelineAsset_XboxResolution__Enum__StaticFields {
};

struct MoonRenderPipelineAsset_XboxResolution__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineAsset_XboxResolution__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineAsset_XboxResolution__Enum__VTable vtable;
};

struct MoonRenderPipelineAsset_DebugDownsample__Enum__VTable {
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

struct MoonRenderPipelineAsset_DebugDownsample__Enum__StaticFields {
};

struct MoonRenderPipelineAsset_DebugDownsample__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineAsset_DebugDownsample__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineAsset_DebugDownsample__Enum__VTable vtable;
};

struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__VTable {
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

struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__StaticFields {
};

struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__VTable vtable;
};

struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__VTable {
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

struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__StaticFields {
};

struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__VTable vtable;
};

struct SceneRTAllocationPolicy__Enum__VTable {
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

struct SceneRTAllocationPolicy__Enum__StaticFields {
};

struct SceneRTAllocationPolicy__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SceneRTAllocationPolicy__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SceneRTAllocationPolicy__Enum__VTable vtable;
};

struct SliceRTAllocationPolicy__Enum__VTable {
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

struct SliceRTAllocationPolicy__Enum__StaticFields {
};

struct SliceRTAllocationPolicy__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SliceRTAllocationPolicy__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SliceRTAllocationPolicy__Enum__VTable vtable;
};

}
