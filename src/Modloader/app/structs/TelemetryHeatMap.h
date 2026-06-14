#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryHeatMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryHeatMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryHeatMap_DEFINED)
#include <Modloader/app/structs/TelemetryHeatMap__Fields.h>
#if defined(IL2CPP_STRUCT_TelemetryHeatMap__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryHeatMap_DEFINED
struct TelemetryHeatMap__Class;
struct TelemetryHeatMap {
    struct TelemetryHeatMap__Class* klass;
    MonitorData* monitor;
    struct TelemetryHeatMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryHeatMap_FWDDECL)
#define IL2CPP_STRUCT_TelemetryHeatMap_FWDDECL
#include <Modloader/app/structs/TelemetryHeatMap__Class.h>
#endif
#undef IL2CPP_STRUCT_TelemetryHeatMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryHeatMap_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryHeatMap_FWDDECL)
#include <Modloader/app/structs/TelemetryHeatMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryHeatMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
