#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_DEFINED)
#include <Modloader/app/structs/MoonProfilerSample.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerSample.h>
#if defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerSample_DEFINED) && defined(IL2CPP_STRUCT_MoonProfilerSample_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_DEFINED
struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array;
struct MoonRenderPipelineView_SrpProfilerFrame {
    struct MoonRenderPipelineView_SrpProfilerSample totalTime;
    float prepareTime;
    struct MoonRenderPipelineView_SrpProfilerSample drawSlicesTime;
    float postsAndUiTime;
    struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array* slices;
    struct MoonProfilerSample cull;
    struct MoonRenderPipelineView_SrpProfilerSample rtManagement;
    struct MoonProfilerSample rtAcquire;
    struct MoonProfilerSample rtAcquireInternal;
    struct MoonProfilerSample rtAcquireInternalGPU;
    struct MoonProfilerSample rtRelease;
    struct MoonProfilerSample rtReleaseInternal;
    struct MoonProfilerSample rtReleaseInternalGPU;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_FWDDECL
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
