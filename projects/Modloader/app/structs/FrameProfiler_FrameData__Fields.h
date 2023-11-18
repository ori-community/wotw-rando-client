#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_DEFINED
struct FrameProfiler_FrameSample__Array;
struct __declspec(align(8)) FrameProfiler_FrameData__Fields {
    int64_t NsEnd;
    struct FrameProfiler_FrameSample__Array* Samples;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_FWDDECL
#include <Modloader/app/structs/FrameProfiler_FrameSample__Array.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_FWDDECL)
#include <Modloader/app/structs/FrameProfiler_FrameData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler_FrameData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
