#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameTiming_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameTiming_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameTiming_DEFINED)
#define IL2CPP_STRUCT_FrameTiming_DEFINED
struct FrameTiming {
    double mainThreadFrameTime;
    double mainThreadSemaphoreTime;
    double mainThreadWaitForPresent;
    double WaitForRenderJobDuration;
    uint64_t cpuTimePresentCalled;
    double cpuFrameTime;
    double rtSpinTime;
    double overallFrameTime;
    uint64_t cpuTimeFrameComplete;
    double gpuFrameTime;
    uint32_t drawCallCount;
    float heightScale;
    float widthScale;
    uint32_t syncInterval;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameTiming_FWDDECL)
#define IL2CPP_STRUCT_FrameTiming_FWDDECL
#endif
#undef IL2CPP_STRUCT_FrameTiming_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameTiming_DEFINED) && !defined(IL2CPP_STRUCT_FrameTiming_FWDDECL)
#include <Modloader/app/structs/FrameTiming.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameTiming.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
