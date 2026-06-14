#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTrigger_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTrigger_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger_Entry__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerType__Enum.h>
#if defined(IL2CPP_STRUCT_EventTriggerType__Enum_DEFINED)
#define IL2CPP_STRUCT_EventTrigger_Entry__Fields_DEFINED
struct EventTrigger_TriggerEvent;
struct __declspec(align(8)) EventTrigger_Entry__Fields {
    EventTriggerType__Enum eventID;

    struct EventTrigger_TriggerEvent* callback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventTrigger_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventTrigger_Entry__Fields_FWDDECL
#include <Modloader/app/structs/EventTrigger_TriggerEvent.h>
#endif
#undef IL2CPP_STRUCT_EventTrigger_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTrigger_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventTrigger_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/EventTrigger_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTrigger_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
