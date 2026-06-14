#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_DEFINED
struct __declspec(align(8)) MoonTelemetry_EndPointSettings__Fields {
    float DelayBetweenBatches;
    float MaxWaitPeriod;
    int32_t MaxBatchSize;
    int32_t MaxElementsInQueue;
    int32_t RetryCount;
    bool ShowLogs;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_EndPointSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
