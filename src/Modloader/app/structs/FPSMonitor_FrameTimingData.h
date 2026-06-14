#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSMonitor_FrameTimingData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSMonitor_FrameTimingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor_FrameTimingData_DEFINED)
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Fields.h>
#if defined(IL2CPP_STRUCT_FPSMonitor_FrameTimingData__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSMonitor_FrameTimingData_DEFINED
struct FPSMonitor_FrameTimingData__Class;
struct FPSMonitor_FrameTimingData {
    struct FPSMonitor_FrameTimingData__Class* klass;
    MonitorData* monitor;
    struct FPSMonitor_FrameTimingData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSMonitor_FrameTimingData_FWDDECL)
#define IL2CPP_STRUCT_FPSMonitor_FrameTimingData_FWDDECL
#include <Modloader/app/structs/FPSMonitor_FrameTimingData__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSMonitor_FrameTimingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor_FrameTimingData_DEFINED) && !defined(IL2CPP_STRUCT_FPSMonitor_FrameTimingData_FWDDECL)
#include <Modloader/app/structs/FPSMonitor_FrameTimingData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSMonitor_FrameTimingData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
