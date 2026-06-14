#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Compositor_FrameTiming_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Compositor_FrameTiming_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_FrameTiming_DEFINED)
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#if defined(IL2CPP_STRUCT_TrackedDevicePose_t_DEFINED)
#define IL2CPP_STRUCT_Compositor_FrameTiming_DEFINED
struct Compositor_FrameTiming {
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumMisPresented;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    struct TrackedDevicePose_t m_HmdPose;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Compositor_FrameTiming_FWDDECL)
#define IL2CPP_STRUCT_Compositor_FrameTiming_FWDDECL
#endif
#undef IL2CPP_STRUCT_Compositor_FrameTiming_INITIALIZING
#if !defined(IL2CPP_STRUCT_Compositor_FrameTiming_DEFINED) && !defined(IL2CPP_STRUCT_Compositor_FrameTiming_FWDDECL)
#include <Modloader/app/structs/Compositor_FrameTiming.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Compositor_FrameTiming.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
