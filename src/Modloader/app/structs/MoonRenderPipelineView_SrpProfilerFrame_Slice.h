#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_DEFINED)
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerSample.h>
#if defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerSample_DEFINED) && defined(IL2CPP_STRUCT_Int2_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_DEFINED
struct MoonRenderPipelineView_SrpProfilerFrame_Slice {
    struct MoonRenderPipelineView_SrpProfilerSample draw;
    float blurAmount;
    float downsampling;
    struct Int2 rtSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_Slice_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
