#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameDVRPerformanceMonitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameDVRPerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor_DEFINED)
#include <Modloader/app/structs/GameDVRPerformanceMonitor__Fields.h>
#if defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_GameDVRPerformanceMonitor_DEFINED
struct GameDVRPerformanceMonitor__Class;
struct GameDVRPerformanceMonitor {
    struct GameDVRPerformanceMonitor__Class* klass;
    MonitorData* monitor;
    struct GameDVRPerformanceMonitor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor_FWDDECL)
#define IL2CPP_STRUCT_GameDVRPerformanceMonitor_FWDDECL
#include <Modloader/app/structs/GameDVRPerformanceMonitor__Class.h>
#endif
#undef IL2CPP_STRUCT_GameDVRPerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor_DEFINED) && !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor_FWDDECL)
#include <Modloader/app/structs/GameDVRPerformanceMonitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameDVRPerformanceMonitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
