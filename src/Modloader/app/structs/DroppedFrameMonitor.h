#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DroppedFrameMonitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DroppedFrameMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor_DEFINED)
#include <Modloader/app/structs/DroppedFrameMonitor__Fields.h>
#if defined(IL2CPP_STRUCT_DroppedFrameMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_DroppedFrameMonitor_DEFINED
struct DroppedFrameMonitor__Class;
struct DroppedFrameMonitor {
    struct DroppedFrameMonitor__Class* klass;
    MonitorData* monitor;
    struct DroppedFrameMonitor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor_FWDDECL)
#define IL2CPP_STRUCT_DroppedFrameMonitor_FWDDECL
#include <Modloader/app/structs/DroppedFrameMonitor__Class.h>
#endif
#undef IL2CPP_STRUCT_DroppedFrameMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DroppedFrameMonitor_DEFINED) && !defined(IL2CPP_STRUCT_DroppedFrameMonitor_FWDDECL)
#include <Modloader/app/structs/DroppedFrameMonitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DroppedFrameMonitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
