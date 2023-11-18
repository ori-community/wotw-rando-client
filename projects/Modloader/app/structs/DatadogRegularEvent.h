#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatadogRegularEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatadogRegularEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogRegularEvent_DEFINED)
#include <Modloader/app/structs/DatadogRegularEvent__Fields.h>
#if defined(IL2CPP_STRUCT_DatadogRegularEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_DatadogRegularEvent_DEFINED
struct DatadogRegularEvent__Class;
struct DatadogRegularEvent {
    struct DatadogRegularEvent__Class* klass;
    MonitorData* monitor;
    struct DatadogRegularEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DatadogRegularEvent_FWDDECL)
#define IL2CPP_STRUCT_DatadogRegularEvent_FWDDECL
#include <Modloader/app/structs/DatadogRegularEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_DatadogRegularEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogRegularEvent_DEFINED) && !defined(IL2CPP_STRUCT_DatadogRegularEvent_FWDDECL)
#include <Modloader/app/structs/DatadogRegularEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatadogRegularEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
