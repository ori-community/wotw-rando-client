#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventKeywords__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventKeywords__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED)
#define IL2CPP_STRUCT_EventKeywords__Enum_DEFINED
enum class EventKeywords__Enum : int64_t {
    None = 0x0000000000000000,
    All = -1,
    MicrosoftTelemetry = 0x0002000000000000,
    WdiContext = 0x0002000000000000,
    WdiDiagnostic = 0x0004000000000000,
    Sqm = 0x0008000000000000,
    AuditFailure = 0x0010000000000000,
    AuditSuccess = 0x0020000000000000,
    CorrelationHint = 0x0010000000000000,
    EventLogClassic = 0x0080000000000000,
};
#endif
#if !defined(IL2CPP_STRUCT_EventKeywords__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventKeywords__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventKeywords__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventKeywords__Enum_FWDDECL)
#include <Modloader/app/structs/EventKeywords__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventKeywords__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
