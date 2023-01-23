#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSMonitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSMonitor__Fields_DEFINED
struct DroppedFrameMonitor;
struct FPSMonitor_FrameTimingData__Array;
struct FPSMonitor__Fields {
    struct MonoBehaviour__Fields _;
    struct DroppedFrameMonitor* m_DroppedFrameMonitor;
    float m_renderedFrames;
    float m_lastTime;
    float m_currentSampleTime;
    float m_currentMaxFrameTime;
    float m_currentMinFrameTime;
    float m_frameTime;
    int32_t AverageFPS;
    int32_t MinimumFPS;
    int32_t MaximumFPS;
    float AverageFrameTime;
    float MinFrameTime;
    float MaxFrameTime;
    int32_t m_frameIndex;
    struct FPSMonitor_FrameTimingData__Array* m_frameHistory;
    float m_deltaTimeAverage;
    float m_hitchDeltaTimeAverage;
    float m_slowDownDeltaTimeAverage;
    int32_t m_hitchCount;
    int32_t m_slowdownCount;
    int32_t m_frameCount;
    int32_t m_badFrameCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSMonitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSMonitor__Fields_FWDDECL
#include <Modloader/app/structs/DroppedFrameMonitor.h>
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Array.h>
#endif
#undef IL2CPP_STRUCT_FPSMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSMonitor__Fields_FWDDECL)
#include <Modloader/app/structs/FPSMonitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSMonitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
