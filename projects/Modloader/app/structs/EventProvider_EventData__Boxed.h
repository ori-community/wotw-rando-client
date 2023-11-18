#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_EventData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_EventData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_EventData__Boxed_DEFINED)
#include <Modloader/app/structs/EventProvider_EventData.h>
#if defined(IL2CPP_STRUCT_EventProvider_EventData_DEFINED)
#define IL2CPP_STRUCT_EventProvider_EventData__Boxed_DEFINED
struct EventProvider_EventData__Class;
struct EventProvider_EventData__Boxed {
    struct EventProvider_EventData__Class* klass;
    MonitorData* monitor;
    struct EventProvider_EventData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_EventData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_EventData__Boxed_FWDDECL
#include <Modloader/app/structs/EventProvider_EventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EventProvider_EventData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_EventData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_EventData__Boxed_FWDDECL)
#include <Modloader/app/structs/EventProvider_EventData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_EventData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
