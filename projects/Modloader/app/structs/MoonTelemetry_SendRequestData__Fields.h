#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_DEFINED
struct String;
struct MoonTelemetrySendRequest;
struct __declspec(align(8)) MoonTelemetry_SendRequestData__Fields {
    struct String* m_body;
    int32_t RetryCount;
    bool ShouldRetry;
    bool Done;
    bool m_isProcessing;
    struct MoonTelemetrySendRequest* m_request;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_FWDDECL
#include <Modloader/app/structs/MoonTelemetrySendRequest.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry_SendRequestData__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
