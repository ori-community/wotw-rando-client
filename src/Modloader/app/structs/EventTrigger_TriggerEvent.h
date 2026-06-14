#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTrigger_TriggerEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTrigger_TriggerEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger_TriggerEvent_DEFINED)
#include <Modloader/app/structs/EventTrigger_TriggerEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EventTrigger_TriggerEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EventTrigger_TriggerEvent_DEFINED
struct EventTrigger_TriggerEvent__Class;
struct EventTrigger_TriggerEvent {
    struct EventTrigger_TriggerEvent__Class* klass;
    MonitorData* monitor;
    struct EventTrigger_TriggerEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventTrigger_TriggerEvent_FWDDECL)
#define IL2CPP_STRUCT_EventTrigger_TriggerEvent_FWDDECL
#include <Modloader/app/structs/EventTrigger_TriggerEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EventTrigger_TriggerEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger_TriggerEvent_DEFINED) && !defined(IL2CPP_STRUCT_EventTrigger_TriggerEvent_FWDDECL)
#include <Modloader/app/structs/EventTrigger_TriggerEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTrigger_TriggerEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
