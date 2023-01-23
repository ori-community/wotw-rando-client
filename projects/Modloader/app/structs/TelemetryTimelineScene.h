#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryTimelineScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryTimelineScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene_DEFINED)
#include <Modloader/app/structs/TelemetryTimelineScene__Fields.h>
#if defined(IL2CPP_STRUCT_TelemetryTimelineScene__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryTimelineScene_DEFINED
struct TelemetryTimelineScene__Class;
struct TelemetryTimelineScene {
    struct TelemetryTimelineScene__Class* klass;
    MonitorData* monitor;
    struct TelemetryTimelineScene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene_FWDDECL)
#define IL2CPP_STRUCT_TelemetryTimelineScene_FWDDECL
#include <Modloader/app/structs/TelemetryTimelineScene__Class.h>
#endif
#undef IL2CPP_STRUCT_TelemetryTimelineScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryTimelineScene_FWDDECL)
#include <Modloader/app/structs/TelemetryTimelineScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryTimelineScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
