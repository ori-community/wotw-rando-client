#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_DEFINED)
#include <Modloader/app/structs/MoonRenderPipelineView_FilterBounds.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Viewport.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineView_FilterBounds_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Viewport_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_DEFINED
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
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_FinalSliceCompositionInfo_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
