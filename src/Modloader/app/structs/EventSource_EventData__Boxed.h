#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_EventData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_EventData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventData__Boxed_DEFINED)
#include <Modloader/app/structs/EventSource_EventData.h>
#if defined(IL2CPP_STRUCT_EventSource_EventData_DEFINED)
#define IL2CPP_STRUCT_EventSource_EventData__Boxed_DEFINED
struct EventSource_EventData__Class;
struct EventSource_EventData__Boxed {
    struct EventSource_EventData__Class* klass;
    MonitorData* monitor;
    struct EventSource_EventData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource_EventData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventSource_EventData__Boxed_FWDDECL
#include <Modloader/app/structs/EventSource_EventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSource_EventData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_EventData__Boxed_FWDDECL)
#include <Modloader/app/structs/EventSource_EventData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource_EventData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
