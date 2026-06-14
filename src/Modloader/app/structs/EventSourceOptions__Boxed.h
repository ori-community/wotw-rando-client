#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSourceOptions__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSourceOptions__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceOptions__Boxed_DEFINED)
#include <Modloader/app/structs/EventSourceOptions.h>
#if defined(IL2CPP_STRUCT_EventSourceOptions_DEFINED)
#define IL2CPP_STRUCT_EventSourceOptions__Boxed_DEFINED
struct EventSourceOptions__Class;
struct EventSourceOptions__Boxed {
    struct EventSourceOptions__Class* klass;
    MonitorData* monitor;
    struct EventSourceOptions fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSourceOptions__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventSourceOptions__Boxed_FWDDECL
#include <Modloader/app/structs/EventSourceOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSourceOptions__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceOptions__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventSourceOptions__Boxed_FWDDECL)
#include <Modloader/app/structs/EventSourceOptions__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSourceOptions__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
