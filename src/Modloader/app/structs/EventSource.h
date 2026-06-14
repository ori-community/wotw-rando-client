#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_DEFINED)
#include <Modloader/app/structs/EventSource__Fields.h>
#if defined(IL2CPP_STRUCT_EventSource__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSource_DEFINED
struct EventSource__Class;
struct EventSource {
    struct EventSource__Class* klass;
    MonitorData* monitor;
    struct EventSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource_FWDDECL)
#define IL2CPP_STRUCT_EventSource_FWDDECL
#include <Modloader/app/structs/EventSource__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_FWDDECL)
#include <Modloader/app/structs/EventSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
