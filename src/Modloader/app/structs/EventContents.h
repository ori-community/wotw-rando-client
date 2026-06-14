#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventContents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventContents_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventContents_DEFINED)
#include <Modloader/app/structs/EventContents__Fields.h>
#if defined(IL2CPP_STRUCT_EventContents__Fields_DEFINED)
#define IL2CPP_STRUCT_EventContents_DEFINED
struct EventContents__Class;
struct EventContents {
    struct EventContents__Class* klass;
    MonitorData* monitor;
    struct EventContents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventContents_FWDDECL)
#define IL2CPP_STRUCT_EventContents_FWDDECL
#include <Modloader/app/structs/EventContents__Class.h>
#endif
#undef IL2CPP_STRUCT_EventContents_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventContents_DEFINED) && !defined(IL2CPP_STRUCT_EventContents_FWDDECL)
#include <Modloader/app/structs/EventContents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventContents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
