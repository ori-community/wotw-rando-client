#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatadogEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatadogEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogEvent_DEFINED)
#define IL2CPP_STRUCT_DatadogEvent_DEFINED
struct DatadogEvent__Class;
struct DatadogEvent {
    struct DatadogEvent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DatadogEvent_FWDDECL)
#define IL2CPP_STRUCT_DatadogEvent_FWDDECL
#include <Modloader/app/structs/DatadogEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_DatadogEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogEvent_DEFINED) && !defined(IL2CPP_STRUCT_DatadogEvent_FWDDECL)
#include <Modloader/app/structs/DatadogEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatadogEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
