#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonProfilerFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonProfilerFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerFrame_DEFINED)
#include <Modloader/app/structs/MoonProfilerSample.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame.h>
#if defined(IL2CPP_STRUCT_MoonProfilerSample_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineView_SrpProfilerFrame_DEFINED)
#define IL2CPP_STRUCT_MoonProfilerFrame_DEFINED
struct MoonProfilerFrame {
    float cpuTime;
    float gpuTime;
    float frameTime;
    struct MoonProfilerSample fixedUpdate;
    struct MoonProfilerSample update;
    struct MoonProfilerSample lateUpdate;
    struct MoonProfilerSample coroutines;
    struct MoonProfilerSample physicsFixedUpdate;
    float gameplayTime;
    struct MoonRenderPipelineView_SrpProfilerFrame srp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonProfilerFrame_FWDDECL)
#define IL2CPP_STRUCT_MoonProfilerFrame_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonProfilerFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonProfilerFrame_DEFINED) && !defined(IL2CPP_STRUCT_MoonProfilerFrame_FWDDECL)
#include <Modloader/app/structs/MoonProfilerFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonProfilerFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
