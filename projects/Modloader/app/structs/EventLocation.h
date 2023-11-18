#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventLocation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventLocation_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventLocation_DEFINED)
#include <Modloader/app/structs/EventLocation__Fields.h>
#if defined(IL2CPP_STRUCT_EventLocation__Fields_DEFINED)
#define IL2CPP_STRUCT_EventLocation_DEFINED
struct EventLocation__Class;
struct EventLocation {
    struct EventLocation__Class* klass;
    MonitorData* monitor;
    struct EventLocation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventLocation_FWDDECL)
#define IL2CPP_STRUCT_EventLocation_FWDDECL
#include <Modloader/app/structs/EventLocation__Class.h>
#endif
#undef IL2CPP_STRUCT_EventLocation_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventLocation_DEFINED) && !defined(IL2CPP_STRUCT_EventLocation_FWDDECL)
#include <Modloader/app/structs/EventLocation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventLocation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
