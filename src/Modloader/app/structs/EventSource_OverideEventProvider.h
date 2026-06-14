#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_OverideEventProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_OverideEventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider_DEFINED)
#include <Modloader/app/structs/EventSource_OverideEventProvider__Fields.h>
#if defined(IL2CPP_STRUCT_EventSource_OverideEventProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSource_OverideEventProvider_DEFINED
struct EventSource_OverideEventProvider__Class;
struct EventSource_OverideEventProvider {
    struct EventSource_OverideEventProvider__Class* klass;
    MonitorData* monitor;
    struct EventSource_OverideEventProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider_FWDDECL)
#define IL2CPP_STRUCT_EventSource_OverideEventProvider_FWDDECL
#include <Modloader/app/structs/EventSource_OverideEventProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSource_OverideEventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_OverideEventProvider_FWDDECL)
#include <Modloader/app/structs/EventSource_OverideEventProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource_OverideEventProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
