#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSourceCreatedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSourceCreatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs_DEFINED)
#include <Modloader/app/structs/EventSourceCreatedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSourceCreatedEventArgs_DEFINED
struct EventSourceCreatedEventArgs__Class;
struct EventSourceCreatedEventArgs {
    struct EventSourceCreatedEventArgs__Class* klass;
    MonitorData* monitor;
    struct EventSourceCreatedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_EventSourceCreatedEventArgs_FWDDECL
#include <Modloader/app/structs/EventSourceCreatedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSourceCreatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs_FWDDECL)
#include <Modloader/app/structs/EventSourceCreatedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSourceCreatedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
