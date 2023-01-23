#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySceneEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_DEFINED
struct MoonTelemetrySceneEvent__Class;
struct MoonTelemetrySceneEvent {
    struct MoonTelemetrySceneEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetrySceneEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySceneEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySceneEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySceneEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
