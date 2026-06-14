#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSourceException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSourceException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceException_DEFINED)
#include <Modloader/app/structs/EventSourceException__Fields.h>
#if defined(IL2CPP_STRUCT_EventSourceException__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSourceException_DEFINED
struct EventSourceException__Class;
struct EventSourceException {
    struct EventSourceException__Class* klass;
    MonitorData* monitor;
    struct EventSourceException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSourceException_FWDDECL)
#define IL2CPP_STRUCT_EventSourceException_FWDDECL
#include <Modloader/app/structs/EventSourceException__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSourceException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceException_DEFINED) && !defined(IL2CPP_STRUCT_EventSourceException_FWDDECL)
#include <Modloader/app/structs/EventSourceException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSourceException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
