#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler__Fields_DEFINED
struct FrameProfiler_FrameData__Array;
struct FrameProfiler_FrameData;
struct Stopwatch;
struct __declspec(align(8)) FrameProfiler__Fields {
    struct FrameProfiler_FrameData__Array* m_frameHistory;
    struct FrameProfiler_FrameData* m_currentFrame;
    struct Stopwatch* m_stopwatch;
    int32_t m_historyIndex;
    bool m_hasRenderedFrame;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler__Fields_FWDDECL
#include <Modloader/app/structs/FrameProfiler_FrameData.h>
#include <Modloader/app/structs/FrameProfiler_FrameData__Array.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler__Fields_FWDDECL)
#include <Modloader/app/structs/FrameProfiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
