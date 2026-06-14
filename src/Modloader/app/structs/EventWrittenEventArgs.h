#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventWrittenEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventWrittenEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventWrittenEventArgs_DEFINED)
#include <Modloader/app/structs/EventWrittenEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_EventWrittenEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_EventWrittenEventArgs_DEFINED
struct EventWrittenEventArgs__Class;
struct EventWrittenEventArgs {
    struct EventWrittenEventArgs__Class* klass;
    MonitorData* monitor;
    struct EventWrittenEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventWrittenEventArgs_FWDDECL)
#define IL2CPP_STRUCT_EventWrittenEventArgs_FWDDECL
#include <Modloader/app/structs/EventWrittenEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_EventWrittenEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventWrittenEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_EventWrittenEventArgs_FWDDECL)
#include <Modloader/app/structs/EventWrittenEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventWrittenEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
