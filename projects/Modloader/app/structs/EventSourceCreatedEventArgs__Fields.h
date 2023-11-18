#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_DEFINED
struct EventSource;
struct __declspec(align(8)) EventSourceCreatedEventArgs__Fields {
    struct EventSource* _EventSource_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/EventSource.h>
#endif
#undef IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventSourceCreatedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/EventSourceCreatedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSourceCreatedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
