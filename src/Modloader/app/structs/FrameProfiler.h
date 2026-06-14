#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_DEFINED)
#include <Modloader/app/structs/FrameProfiler__Fields.h>
#if defined(IL2CPP_STRUCT_FrameProfiler__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_DEFINED
struct FrameProfiler__Class;
struct FrameProfiler {
    struct FrameProfiler__Class* klass;
    MonitorData* monitor;
    struct FrameProfiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_FWDDECL
#include <Modloader/app/structs/FrameProfiler__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_FWDDECL)
#include <Modloader/app/structs/FrameProfiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
