#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_FrameData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_FrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameData_DEFINED)
#include <Modloader/app/structs/FrameProfiler_FrameData__Fields.h>
#if defined(IL2CPP_STRUCT_FrameProfiler_FrameData__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_FrameData_DEFINED
struct FrameProfiler_FrameData__Class;
struct FrameProfiler_FrameData {
    struct FrameProfiler_FrameData__Class* klass;
    MonitorData* monitor;
    struct FrameProfiler_FrameData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameData_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_FrameData_FWDDECL
#include <Modloader/app/structs/FrameProfiler_FrameData__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_FrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameData_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_FrameData_FWDDECL)
#include <Modloader/app/structs/FrameProfiler_FrameData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler_FrameData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
