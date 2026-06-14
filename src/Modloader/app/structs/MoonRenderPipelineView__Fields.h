#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView__Fields_DEFINED)
#include <Modloader/app/structs/CullResults.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MoonRenderPipelineViewType__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RenderStateBlock.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MoonRenderPipelineViewType__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderStateBlock_DEFINED) && defined(IL2CPP_STRUCT_CullResults_DEFINED) && defined(IL2CPP_STRUCT_Int2_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderTargetIdentifier_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_SrpSampler_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView__Fields_DEFINED
struct MoonRenderPipelineAsset;
struct MoonRenderPipelineSettings;
struct MoonRenderPipelineDebug;
struct MoonRenderContext;
struct Stopwatch;
struct CommandBuffer__Array__Array;
struct Material;
struct Camera;
struct RenderTarget;
struct RenderTarget__Array;
struct RenderTargetIdentifier__Array;
struct RenderTargetIdentifier__Array__Array;
struct RenderTexture;
struct Vector4__Array;
struct UInt32__Array;
struct List_1_IRenderPostprocessor_;
struct MoonRenderPipelineView_UpscalePost;
struct MoonRenderPipelineView_FinalPost;
struct PostProcessRenderContext;
struct RuntimeSliceRenderSettings;
struct Transform;
struct Vector2__Array;
struct SceneDefaultSettingsHelper;
struct LayeredRenderSettings;
struct Boolean__Array;
struct SliceRenderSettings;
struct MotionBlurController;
struct FXAA;
struct MoonRenderPipelineView_GodRaySrcRT__Array;
struct MoonRenderPipelineView_GodRayBlurRT__Array;
struct Int32__Array;
struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array;
struct InterleavedRenderingSettings;
struct DiskBlurSRP;
struct SrpSampler__Array;
struct __declspec(align(8)) MoonRenderPipelineView__Fields {
    MoonRenderPipelineViewType__Enum viewType;

    struct MoonRenderPipelineAsset* owner;
    struct MoonRenderPipelineSettings* settings;
    struct MoonRenderPipelineDebug* debug;
    struct MoonRenderContext* ctx;
    float _dynamicResolutionScale_k__BackingField;
    float _dynamicResolutionScaleY_k__BackingField;
    struct Stopwatch* m_gameViewStopwatch;
    struct CommandBuffer__Array__Array* CachedCBs;
    struct Material* emissivityMaskMaterial;
    struct Material* emissivityCompMaterial;
    struct Material* emissivityDownMaterialH;
    struct Material* emissivityDownMaterialV;
    struct RenderStateBlock emissivityRSBlock;
    struct RenderStateBlock maskErasingRSBlock;
    struct RenderStateBlock hiResDefRSBlock;
    struct RenderStateBlock hiResDefHDRRSBlock;
    struct RenderStateBlock hiResMVHDRRSBlock;
    struct Camera* renderCam;
    struct Camera* cullCam;
    struct Camera* sortCam;
    struct CullResults cullResults;
    struct Int2 sceneResolution;
    struct Int2 uiResolution;
    RenderTextureFormat__Enum frameBufferFormat;

    int32_t frameBufferDepth;
    float motionVectorsRTMultiplier;
    int32_t emissivityMRTCurrIndex;
    float reflectionRefractionRTMultiplier;
    struct Int2 sceneResolutionPrev;
    struct RenderTargetIdentifier sceneRTPrevId;
    bool rtMulsFixedOnce;
    struct RenderTarget* sceneRT;
    struct RenderTarget* scenePostRT;
    struct RenderTarget* uiRT;
    struct RenderTarget* uiPostRT;
    struct RenderTarget* frameBuffer;
    struct RenderTarget* uiFinalRTForCapturing;
    struct RenderTarget__Array* sliceBackupAlphaMaskRTs;
    struct RenderTarget__Array* sliceBackupColorRTs;
    struct RenderTargetIdentifier__Array* isrMRT;
    int32_t numEmissivityExtraMips;
    int32_t numEmissivityExtraMipsMats;
    int32_t numEmissivityCompSteps;
    struct RenderTarget__Array* emissivityRTs;
    bool emissivity2InUse;
    struct RenderTargetIdentifier__Array__Array* emissivityMRTs;
    struct RenderTarget* emissivityCompRT;
    struct RenderTarget* emissivityDepthPrecullRT;
    struct RenderTarget* emissivityDepthRT;
    struct RenderTarget__Array* emissivityRTMipsT;
    struct RenderTarget__Array* emissivityRTMips;
    struct RenderTarget__Array* sliceHistColorRTs;
    struct RenderTarget__Array* sliceHistAlphaRTs;
    struct RenderTargetIdentifier__Array__Array* sliceHistMRT;
    int32_t TLCDispatchSizeX;
    int32_t TLCDispatchSizeY;
    struct RenderTexture* TLCLightIndicesUAV;
    int32_t TLCNumLights;
    int32_t TLCCullLightsKernelIndex;
    int32_t TLCClearIndicesKernelIndex;
    struct Vector4 TLCScreenSizeInvAndNumTiles;
    struct Vector4__Array* TLCSliceDepths;
    int32_t TLCPhysNumTilesX;
    int32_t TLCPhysNumTilesY;
    struct Vector4__Array* TLCLightsShadeInfo;
    struct UInt32__Array* TLCLightsSliceVisMasks;
    uint32_t TLCLights2DMask;
    uint32_t TLCLightsUnmasked2DMask;
    uint32_t TLCLights3DMask;
    struct RenderTexture* TLCLightsPrebakeMaskRT;
    struct Vector4 UVScaleDRS;
    struct Vector4 UVMaxRegionDRS;
    float SceneDRSScale;
    float SceneDRSScaleY;
    struct List_1_IRenderPostprocessor_* allPosts;
    struct List_1_IRenderPostprocessor_* scenePosts;
    struct List_1_IRenderPostprocessor_* uiPosts;
    struct MoonRenderPipelineView_UpscalePost* upscalePost;
    struct MoonRenderPipelineView_FinalPost* finalPost;
    struct PostProcessRenderContext* postProcessRenderContext;
    struct RenderTargetIdentifier blackTexture;
    struct RenderTargetIdentifier whiteTexture;
    struct RuntimeSliceRenderSettings* m_runtimeSliceRenderSettings;
    bool isInit;
    struct Transform* m_transform;
    struct Vector3 m_transformPosition;
    float m_transformPositionZ;
    struct Vector2__Array* m_camProjOffsetsHalton_2_3_x16;
    struct SceneDefaultSettingsHelper* m_defaultSettingsHelper;
    struct LayeredRenderSettings* m_layeredRenderSettings;
    struct Boolean__Array* m_hiResOpaque3D;
    struct Vector4__Array* m_layeredRenderAllSlices;
    struct SliceRenderSettings* m_sliceRenderSettings;
    struct MotionBlurController* m_motionBlurController;
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
    struct RenderTarget__Array* sliceColorRTs;
    struct RenderTarget__Array* sliceAlphaMaskRTs;
    struct RenderTarget* sliceHiresOpaque3DRT;
    struct RenderTarget* sliceHiresOpaque3DAlphaRT;
    struct RenderTarget* sliceHiresOpaque3DRT1;
    struct RenderTarget* sliceHiresOpaque3DRT2;
    struct RenderTarget* sliceHiresOpaque3DRTLight;
    struct RenderTarget* sliceHiresOpaque3DDepthRT;
    struct RenderTarget* sceneRTCopy;
    struct RenderTarget* sliceDepthRT;
    struct RenderTarget* depthPrecullRT;
    struct RenderTarget* motionVectorsRT;
    struct RenderTarget* motionVectorsDepthRT;
    struct RenderTarget__Array* sliceRTs;
    struct FXAA* m_sliceFXAA;
    struct MoonRenderPipelineView_GodRaySrcRT__Array* godraySourceRTs;
    struct MoonRenderPipelineView_GodRayBlurRT__Array* godrayBlurRTs;
    int32_t godraysCount;
    struct RenderTarget* godrayCompositeRT;
    struct Int2 godrayRTSize;
    struct Rect godrayViewportRect;
    struct Material* blitEarlyZMaterial;
    struct Material* composeSliceMaterial;
    struct Material* composeSliceFullPSMaterial;
    struct Material* preComposeSliceFullPSMaterial;
    struct Material* deferredLightingMaterial;
    int32_t blitEarlyZPass;
    int32_t blitEarlyZPassB;
    float camMovementDelta;
    struct RenderTargetIdentifier__Array* sliceMRT;
    struct RenderTargetIdentifier__Array* secSliceMRT;
    struct RenderTargetIdentifier__Array* hiResHDRMRT;
    struct RenderTargetIdentifier__Array* hiResDefMRT;
    struct RenderTargetIdentifier__Array* hiResDefHDRMRT;
    struct RenderTarget* sliceColorRT;
    struct RenderTarget* sliceAlphaMaskRT;
    int32_t firstRTIndex;
    int32_t secondaryRTIndex;
    struct Int32__Array* availableRTIndices;
    int32_t numAvailableRTIndices;
    struct MoonRenderPipelineView_FinalSliceCompositionInfo__Array* finalSliceInfo;
    struct Int32__Array* colorRTAlphaMaskRTIDs;
    struct Vector4__Array* sliceScalesAndMaxRegions;
    struct Int32__Array* sliceClearAlphaMaskRTIDs;
    struct Int32__Array* sliceEmissivityCompKeywords;
    struct InterleavedRenderingSettings* isrSettings;
    struct DiskBlurSRP* m_DiskBlur;
    struct Vector3 m_motionBlur;
    struct Vector3 m_motionBlurSpeed;
    struct SrpSampler rootSampler;
    struct SrpSampler__Array* sliceSamplers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CommandBuffer__Array__Array.h>
#include <Modloader/app/structs/DiskBlurSRP.h>
#include <Modloader/app/structs/FXAA.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/InterleavedRenderingSettings.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/List_1_IRenderPostprocessor_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug.h>
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalPost.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRayBlurRT__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRaySrcRT__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_UpscalePost.h>
#include <Modloader/app/structs/MotionBlurController.h>
#include <Modloader/app/structs/PostProcessRenderContext.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array__Array.h>
#include <Modloader/app/structs/RenderTarget__Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RuntimeSliceRenderSettings.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#include <Modloader/app/structs/SrpSampler__Array.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
