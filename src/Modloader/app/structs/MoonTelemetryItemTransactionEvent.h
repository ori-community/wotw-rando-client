#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_DEFINED
struct MoonTelemetryItemTransactionEvent__Class;
struct MoonTelemetryItemTransactionEvent {
    struct MoonTelemetryItemTransactionEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryItemTransactionEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryItemTransactionEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
