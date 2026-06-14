#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryIngestionConfigRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryIngestionConfigRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryIngestionConfigRequest_DEFINED)
#include <Modloader/app/structs/TelemetryIngestionConfigRequest__Fields.h>
#if defined(IL2CPP_STRUCT_TelemetryIngestionConfigRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryIngestionConfigRequest_DEFINED
struct TelemetryIngestionConfigRequest__Class;
struct TelemetryIngestionConfigRequest {
    struct TelemetryIngestionConfigRequest__Class* klass;
    MonitorData* monitor;
    struct TelemetryIngestionConfigRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryIngestionConfigRequest_FWDDECL)
#define IL2CPP_STRUCT_TelemetryIngestionConfigRequest_FWDDECL
#include <Modloader/app/structs/TelemetryIngestionConfigRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_TelemetryIngestionConfigRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryIngestionConfigRequest_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryIngestionConfigRequest_FWDDECL)
#include <Modloader/app/structs/TelemetryIngestionConfigRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryIngestionConfigRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
