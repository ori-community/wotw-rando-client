#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_DEFINED)
#include <Modloader/app/structs/SrpSampler.h>
#if defined(IL2CPP_STRUCT_SrpSampler_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_DEFINED
struct SrpSampler__Array;
struct Dictionary_2_System_Type_Moon_Rendering_SrpSampler_;
struct Dictionary_2_System_String_System_String_;
struct Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler___Array;
struct MoonRenderPipelineView_Samplers__StaticFields {
    struct SrpSampler__Array* m_roots;
    struct SrpSampler prepare;
    struct SrpSampler prepareRender;
    struct SrpSampler prepareScene;
    struct SrpSampler postsAndUI;
    struct SrpSampler scenePosts;
    struct SrpSampler uiPosts;
    struct SrpSampler ui;
    struct Dictionary_2_System_Type_Moon_Rendering_SrpSampler_* m_posts;
    struct SrpSampler releaseSceneRTs;
    struct Dictionary_2_System_String_System_String_* m_releaseRTs;
    struct SrpSampler__Array* slices;
    struct Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler___Array* slicesBySize;
    struct SrpSampler update;
    struct SrpSampler prepareSlices;
    struct SrpSampler drawSlices;
    struct SrpSampler acquireSharedSliceRTs;
    struct SrpSampler clearSlice;
    struct SrpSampler startSlice;
    struct SrpSampler depthPrecull;
    struct SrpSampler acquireMRT;
    struct SrpSampler clearMRT;
    struct SrpSampler earlyZ;
    struct SrpSampler objects;
    struct SrpSampler water;
    struct SrpSampler opaque3DObjects;
    struct SrpSampler otherObjects;
    struct SrpSampler maskErasingObjects;
    struct SrpSampler maskedObjects;
    struct SrpSampler reflectionRefraction;
    struct SrpSampler lights;
    struct SrpSampler emissivity;
    struct SrpSampler emissivityPost;
    struct SrpSampler darkeningPost;
    struct SrpSampler motionVectors;
    struct SrpSampler cameraMotion;
    struct SrpSampler taa;
    struct SrpSampler fxaa;
    struct SrpSampler motionBlur;
    struct SrpSampler blurSlice;
    struct SrpSampler composeToScene;
    struct SrpSampler frontToBackBgColor;
    struct SrpSampler releaseSharedSliceRTs;
    struct SrpSampler trails;
    struct SrpSampler godrays;
    struct SrpSampler godraysBlurAndPost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler___Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_Moon_Rendering_SrpSampler_.h>
#include <Modloader/app/structs/SrpSampler__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_Samplers__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_Samplers__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_Samplers__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
