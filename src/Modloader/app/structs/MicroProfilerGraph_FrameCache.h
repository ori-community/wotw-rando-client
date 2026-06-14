#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_DEFINED
struct Int32__Array;
struct MicroProfilerGraph_FrameCache {
    struct Int32__Array* MetricMinY;
    struct Int32__Array* MetricMaxY;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerGraph_FrameCache_FWDDECL)
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerGraph_FrameCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
