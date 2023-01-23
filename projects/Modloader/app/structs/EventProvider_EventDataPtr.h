#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_EventDataPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_EventDataPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_EventDataPtr_DEFINED)
#define IL2CPP_STRUCT_EventProvider_EventDataPtr_DEFINED
struct EventProvider_EventDataPtr__Class;
struct EventProvider_EventDataPtr {
    struct EventProvider_EventDataPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_EventDataPtr_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_EventDataPtr_FWDDECL
#include <Modloader/app/structs/EventProvider_EventDataPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_EventProvider_EventDataPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_EventDataPtr_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_EventDataPtr_FWDDECL)
#include <Modloader/app/structs/EventProvider_EventDataPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_EventDataPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
