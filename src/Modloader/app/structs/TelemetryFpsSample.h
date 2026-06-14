#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryFpsSample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryFpsSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryFpsSample_DEFINED)
#include <Modloader/app/structs/TelemetryFpsSample__Fields.h>
#if defined(IL2CPP_STRUCT_TelemetryFpsSample__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryFpsSample_DEFINED
struct TelemetryFpsSample__Class;
struct TelemetryFpsSample {
    struct TelemetryFpsSample__Class* klass;
    MonitorData* monitor;
    struct TelemetryFpsSample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryFpsSample_FWDDECL)
#define IL2CPP_STRUCT_TelemetryFpsSample_FWDDECL
#include <Modloader/app/structs/TelemetryFpsSample__Class.h>
#endif
#undef IL2CPP_STRUCT_TelemetryFpsSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryFpsSample_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryFpsSample_FWDDECL)
#include <Modloader/app/structs/TelemetryFpsSample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryFpsSample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
