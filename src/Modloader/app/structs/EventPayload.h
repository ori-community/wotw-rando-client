#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventPayload_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventPayload_DEFINED)
#include <Modloader/app/structs/EventPayload__Fields.h>
#if defined(IL2CPP_STRUCT_EventPayload__Fields_DEFINED)
#define IL2CPP_STRUCT_EventPayload_DEFINED
struct EventPayload__Class;
struct EventPayload {
    struct EventPayload__Class* klass;
    MonitorData* monitor;
    struct EventPayload__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventPayload_FWDDECL)
#define IL2CPP_STRUCT_EventPayload_FWDDECL
#include <Modloader/app/structs/EventPayload__Class.h>
#endif
#undef IL2CPP_STRUCT_EventPayload_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventPayload_DEFINED) && !defined(IL2CPP_STRUCT_EventPayload_FWDDECL)
#include <Modloader/app/structs/EventPayload.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventPayload.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
