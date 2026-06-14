#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_SendRequestData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_SendRequestData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData_DEFINED)
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_SendRequestData_DEFINED
struct MoonTelemetry_SendRequestData__Class;
struct MoonTelemetry_SendRequestData {
    struct MoonTelemetry_SendRequestData__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetry_SendRequestData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_SendRequestData_FWDDECL
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_SendRequestData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_SendRequestData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_SendRequestData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
