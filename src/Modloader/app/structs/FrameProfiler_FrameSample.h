#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_FrameSample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_FrameSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample_DEFINED)
#include <Modloader/app/structs/FrameProfiler_FrameSample__Fields.h>
#if defined(IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_FrameSample_DEFINED
struct FrameProfiler_FrameSample__Class;
struct FrameProfiler_FrameSample {
    struct FrameProfiler_FrameSample__Class* klass;
    MonitorData* monitor;
    struct FrameProfiler_FrameSample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_FrameSample_FWDDECL
#include <Modloader/app/structs/FrameProfiler_FrameSample__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_FrameSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample_FWDDECL)
#include <Modloader/app/structs/FrameProfiler_FrameSample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler_FrameSample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
