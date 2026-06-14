#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryInfo_DEFINED)
#include <Modloader/app/structs/TelemetryInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TelemetryInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryInfo_DEFINED
struct TelemetryInfo__Class;
struct TelemetryInfo {
    struct TelemetryInfo__Class* klass;
    MonitorData* monitor;
    struct TelemetryInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryInfo_FWDDECL)
#define IL2CPP_STRUCT_TelemetryInfo_FWDDECL
#include <Modloader/app/structs/TelemetryInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TelemetryInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryInfo_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryInfo_FWDDECL)
#include <Modloader/app/structs/TelemetryInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
