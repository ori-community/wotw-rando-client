#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerEventBroadcaster_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerEventBroadcaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerEventBroadcaster_DEFINED)
#include <Modloader/app/structs/TriggerEventBroadcaster__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerEventBroadcaster__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerEventBroadcaster_DEFINED
struct TriggerEventBroadcaster__Class;
struct TriggerEventBroadcaster {
    struct TriggerEventBroadcaster__Class* klass;
    MonitorData* monitor;
    struct TriggerEventBroadcaster__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerEventBroadcaster_FWDDECL)
#define IL2CPP_STRUCT_TriggerEventBroadcaster_FWDDECL
#include <Modloader/app/structs/TriggerEventBroadcaster__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerEventBroadcaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerEventBroadcaster_DEFINED) && !defined(IL2CPP_STRUCT_TriggerEventBroadcaster_FWDDECL)
#include <Modloader/app/structs/TriggerEventBroadcaster.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerEventBroadcaster.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
