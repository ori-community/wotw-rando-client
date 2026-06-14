#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_DEFINED)
#include <Modloader/app/structs/EventProvider__Fields.h>
#if defined(IL2CPP_STRUCT_EventProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_DEFINED
struct EventSource;
struct EventSource_OverideEventProvider__Fields {
    struct EventProvider__Fields _;
    struct EventSource* m_eventSource;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_FWDDECL
#include <Modloader/app/structs/EventSource.h>
#endif
#undef IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_FWDDECL)
#include <Modloader/app/structs/EventSource_OverideEventProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource_OverideEventProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
