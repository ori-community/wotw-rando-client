#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventCommandEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventCommandEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventCommandEventArgs_DEFINED)
#include <Modloader/app/structs/EventCommandEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_EventCommandEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_EventCommandEventArgs_DEFINED
struct EventCommandEventArgs__Class;
struct EventCommandEventArgs {
    struct EventCommandEventArgs__Class* klass;
    MonitorData* monitor;
    struct EventCommandEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventCommandEventArgs_FWDDECL)
#define IL2CPP_STRUCT_EventCommandEventArgs_FWDDECL
#include <Modloader/app/structs/EventCommandEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_EventCommandEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventCommandEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_EventCommandEventArgs_FWDDECL)
#include <Modloader/app/structs/EventCommandEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventCommandEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
