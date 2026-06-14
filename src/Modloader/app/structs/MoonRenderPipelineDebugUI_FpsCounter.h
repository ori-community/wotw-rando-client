#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_DEFINED
struct MoonRenderPipelineDebugUI_FpsCounter {
    float m_timePassed;
    float m_renderedFrames;
    float m_maxFrameTime;
    float averageFps;
    float minimumFps;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
