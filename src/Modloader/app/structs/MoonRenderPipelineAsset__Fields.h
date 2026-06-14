#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_DEFINED)
#include <Modloader/app/structs/ClearFlagMode__Enum.h>
#include <Modloader/app/structs/ClearPolicy__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/FXAA_QualitySettings.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/FloatRange.h>
#include <Modloader/app/structs/IntRange.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_ClearSceneRT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_ClearSliceBlurRT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DebugDownsample__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DeferredLightingDebug__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FXAADepthPrecull__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FXAAHiRes__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FrameBufferDepth__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FrameBufferFormat__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_FxaaQualityLevel__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_GodRaySampleCount__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_HDRRecMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_MaskErasingFixType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_POT__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_SliceCompositionType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCCulling__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCLightingDebug__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCLighting__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_WaterReflectionSortMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_XboxResolution__Enum.h>
#include <Modloader/app/structs/RenderPipelineAsset__Fields.h>
#include <Modloader/app/structs/RenderScope__Enum.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/SceneRTAllocationPolicy__Enum.h>
#include <Modloader/app/structs/SliceRTAllocationPolicy__Enum.h>
#include <Modloader/app/structs/SortFlags__Enum.h>
#include <Modloader/app/structs/SrpSampler_Scope__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_RenderPipelineAsset__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_XboxResolution__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_DebugDownsample__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_FrameBufferFormat__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_FrameBufferDepth__Enum_DEFINED) && defined(IL2CPP_STRUCT_SceneRTAllocationPolicy__Enum_DEFINED) && defined(IL2CPP_STRUCT_SliceRTAllocationPolicy__Enum_DEFINED) && defined(IL2CPP_STRUCT_ClearPolicy__Enum_DEFINED) && defined(IL2CPP_STRUCT_ClearFlagMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_ClearSceneRT__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_ClearSliceBlurRT__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_DeferredLightingDebug__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_FXAADepthPrecull__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_FXAAHiRes__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_MaskErasingFixType__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderScope__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_SliceCompositionType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_FilterMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_IntRange_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_FxaaQualityLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_FXAA_QualitySettings_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_DofBlurType__Enum_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_POT__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_HDRRecMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_RenderQueues__Enum_DEFINED) && defined(IL2CPP_STRUCT_SortFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_TLCCulling__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_TLCLighting__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_TLCLightingDebug__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_WaterReflectionSortMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_WaterSimulationUpdateMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineAsset_GodRaySampleCount__Enum_DEFINED) && defined(IL2CPP_STRUCT_SrpSampler_Scope__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_DEFINED
struct Material;
struct Single__Array;
struct Shader;
struct ComputeShader;
struct Texture2D;
struct LayeredRenderSettings;
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

    struct Material* blurSliceMaterial;
    struct Material* composeSliceMaterial;
    struct Material* composeSliceFullPSMaterial;
    struct Material* preComposeSliceFullPSMaterial;
    struct Material* deferredLightingMaterial;
    struct Material* blitMaterial;
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
    struct Single__Array* defaultMotionBlurRatiosPerSlice;
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
    struct Shader* emissivityMaskShader;
    struct Shader* emissivityCompShader;
    struct Shader* emissivityDownShader;
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
    struct ComputeShader* tiledLightsCullingShader;
    MoonRenderPipelineAsset_TLCLightingDebug__Enum tiledLightsCullingDebug;

    int32_t tiledLightsCullingDebugSliceIndex;
    struct Shader* tiledLightsCullingDebugShader;
    int32_t tiledLightsMaxOverlappingLights;
    int32_t tiledLightsDebugGradientMaxLights;
    float tiledLightsDebugTransparency;
    struct Shader* tiledLightsPrebakeDebugShader;
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
    struct Material* godRayMaskMaterial;
    struct Material* godRayMaterial;
    float godRayRTSize;
    struct Material* godRayComposeMaterial;
    float godRayFadeOutRate;
    MoonRenderPipelineAsset_GodRaySampleCount__Enum godRaySampleCount;

    bool godRayAnimateNoise;
    struct Texture2D* blueNoiseTexture;
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
    struct LayeredRenderSettings* LayeredRenderSettingsDefault;
    float blurTreshold;
    float zExpand;
    float maxBlurSpread;
    float DiskBlurScale;
    float minBlur;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_FWDDECL
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineAsset__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
