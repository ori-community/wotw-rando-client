#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler__StaticFields_DEFINED
struct Action;
struct MicroProfiler_SampleStats;
struct MicroProfiler_SampleStats__Array;
struct MicroProfiler_Timer__Array;
struct FrameTiming__Array;
struct MicroProfiler__StaticFields {
    struct Action* PreEndFrameHandler;
    struct Action* PostBeginFrameHandler;
    struct MicroProfiler_SampleStats* m_currentFrameStats;
    struct MicroProfiler_SampleStats* m_lastCompletedFrameStats;
    struct MicroProfiler_SampleStats* m_currentSampleStats;
    struct MicroProfiler_SampleStats* m_lastRecordedSampleStats;
    struct MicroProfiler_SampleStats__Array* m_frames;
    struct MicroProfiler_Timer__Array* m_timers;
    int32_t m_currentFrame;
    int32_t m_currentFrameUnwrapped;
    bool m_paused;
    float m_lastFrameComplete;
    struct FrameTiming__Array* frameTimings;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/FrameTiming__Array.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats.h>
#include <Modloader/app/structs/MicroProfiler_SampleStats__Array.h>
#include <Modloader/app/structs/MicroProfiler_Timer__Array.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler__StaticFields_FWDDECL)
#include <Modloader/app/structs/MicroProfiler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
