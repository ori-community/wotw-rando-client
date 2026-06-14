#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventInfo_AddEventAdapter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventInfo_AddEventAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventInfo_AddEventAdapter_DEFINED)
#include <Modloader/app/structs/EventInfo_AddEventAdapter__Fields.h>
#if defined(IL2CPP_STRUCT_EventInfo_AddEventAdapter__Fields_DEFINED)
#define IL2CPP_STRUCT_EventInfo_AddEventAdapter_DEFINED
struct EventInfo_AddEventAdapter__Class;
struct EventInfo_AddEventAdapter {
    struct EventInfo_AddEventAdapter__Class* klass;
    MonitorData* monitor;
    struct EventInfo_AddEventAdapter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventInfo_AddEventAdapter_FWDDECL)
#define IL2CPP_STRUCT_EventInfo_AddEventAdapter_FWDDECL
#include <Modloader/app/structs/EventInfo_AddEventAdapter__Class.h>
#endif
#undef IL2CPP_STRUCT_EventInfo_AddEventAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventInfo_AddEventAdapter_DEFINED) && !defined(IL2CPP_STRUCT_EventInfo_AddEventAdapter_FWDDECL)
#include <Modloader/app/structs/EventInfo_AddEventAdapter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventInfo_AddEventAdapter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
