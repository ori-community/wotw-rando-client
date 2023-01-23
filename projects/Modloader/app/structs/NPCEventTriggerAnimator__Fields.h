#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#include <Modloader/app/structs/NPCEventType__Enum.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_NPCEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_DEFINED
struct NPCEventTriggerAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    NPCEventType__Enum EventType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/NPCEventTriggerAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEventTriggerAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
