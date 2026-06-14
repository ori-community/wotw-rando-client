#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_DEFINED)
#include <Modloader/app/structs/RendererCullingParameters_CategoryList.h>
#include <Modloader/app/structs/ShaderPassName.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_ShaderPassName_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_RendererCullingParameters_CategoryList_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_DEFINED
struct LightCullingSystem;
struct Int32__Array;
struct CullingCategoryManager;
struct ICullingCategoryManager__Array;
struct String__Array;
struct Single__Array;
struct LightDarkeningErasingComparer;
struct LightCullingComparer;
struct RenderingSettingsPerScene;
struct MoonRenderPipelineView__StaticFields {
    int64_t LastGameViewRenderNanoSeconds;
    struct ShaderPassName passObject;
    struct ShaderPassName passLight;
    struct ShaderPassName passCommon;
    struct ShaderPassName passDepthPrecull;
    struct ShaderPassName passMotionVectors;
    int32_t layerEarlyZ;
    int32_t layerWater;
    int32_t layerUI;
    int32_t layerUberShader;
    int32_t layerUberShaderAndWater;
    struct LightCullingSystem* LightCullingSystem;
    float s_emissivitySpread0;
    float s_emissivitySpread1;
    float s_emissivitySpread2;
    float s_emissivitySpread3;
    struct Vector4 s_emissivityIntensity;
    struct Int32__Array* godRaysBlurRTNames;
    struct CullingCategoryManager* totalCullingCategoryManager;
    struct CullingCategoryManager* depthPrecullCullingCategoryManager;
    struct CullingCategoryManager* motionVectorCullingCategoryManager;
    struct CullingCategoryManager* opaque3DObjectsCullingCategoryManager;
    struct CullingCategoryManager* maskedObjectsCullingCategoryManager;
    struct CullingCategoryManager* emissivityCullingCategoryManager;
    struct CullingCategoryManager* refractionCullingCategoryManager;
    struct CullingCategoryManager* darkeningCullingCategoryManager;
    struct CullingCategoryManager* maskErasingCullingCategoryManager;
    struct ICullingCategoryManager__Array* cullingCategoryManagersWithCounting;
    struct RendererCullingParameters_CategoryList cullingCategoriesWithCounting;
    struct String__Array* cullingCategoryNamesWithCounting;
    int32_t cullingCategoryCountWithCounting;
    struct ICullingCategoryManager__Array* cullingCategoryManagersWithoutCounting;
    struct RendererCullingParameters_CategoryList cullingCategoriesWithoutCounting;
    struct String__Array* cullingCategoryNamesWithoutCounting;
    int32_t cullingCategoryCountWithoutCounting;
    struct ICullingCategoryManager__Array* cullingCategoryManagers;
    struct RendererCullingParameters_CategoryList cullingCategories;
    struct String__Array* cullingCategoryNames;
    int32_t cullingCategoryCount;
    struct Single__Array* cullingSliceRanges;
    struct LightDarkeningErasingComparer* lightDarkeningErasingComparer;
    struct LightCullingComparer* lightCullingComparer;
    struct RenderingSettingsPerScene* s_perSceneSettings;
    struct RenderingSettingsPerScene* DebugPerSceneSettings;
    bool UseDebugPerSceneSettings;
    bool s_forceAllowDofOnAllSlices;
    int32_t s_forceAllowDofOnAllSlicesFrame;
    bool ForceAllowDofOnAllSlicesDebug;
    bool s_forceFXAADepthPrecull;
    int32_t s_forceAFXAADepthPrecullFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_FWDDECL
#include <Modloader/app/structs/CullingCategoryManager.h>
#include <Modloader/app/structs/ICullingCategoryManager__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/LightCullingComparer.h>
#include <Modloader/app/structs/LightCullingSystem.h>
#include <Modloader/app/structs/LightDarkeningErasingComparer.h>
#include <Modloader/app/structs/RenderingSettingsPerScene.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
