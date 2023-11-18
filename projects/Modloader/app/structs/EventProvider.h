#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_DEFINED)
#include <Modloader/app/structs/EventProvider__Fields.h>
#if defined(IL2CPP_STRUCT_EventProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_EventProvider_DEFINED
struct EventProvider__Class;
struct EventProvider {
    struct EventProvider__Class* klass;
    MonitorData* monitor;
    struct EventProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_FWDDECL
#include <Modloader/app/structs/EventProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_EventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_FWDDECL)
#include <Modloader/app/structs/EventProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
