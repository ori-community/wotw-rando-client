#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_DEFINED)
#include <Modloader/app/structs/EventProvider_SessionInfo.h>
#if defined(IL2CPP_STRUCT_EventProvider_SessionInfo_DEFINED)
#define IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_DEFINED
struct EventProvider_SessionInfo__Class;
struct EventProvider_SessionInfo__Boxed {
    struct EventProvider_SessionInfo__Class* klass;
    MonitorData* monitor;
    struct EventProvider_SessionInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_FWDDECL
#include <Modloader/app/structs/EventProvider_SessionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_SessionInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/EventProvider_SessionInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_SessionInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
