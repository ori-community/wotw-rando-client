#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_DEFINED)
#include <Modloader/app/structs/EventSource_EventMetadata.h>
#if defined(IL2CPP_STRUCT_EventSource_EventMetadata_DEFINED)
#define IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_DEFINED
struct EventSource_EventMetadata__Class;
struct EventSource_EventMetadata__Boxed {
    struct EventSource_EventMetadata__Class* klass;
    MonitorData* monitor;
    struct EventSource_EventMetadata fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_FWDDECL
#include <Modloader/app/structs/EventSource_EventMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_EventMetadata__Boxed_FWDDECL)
#include <Modloader/app/structs/EventSource_EventMetadata__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource_EventMetadata__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
