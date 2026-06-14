#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTriggerAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTriggerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTriggerAnimator_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_EventTriggerAnimator_DEFINED
struct EventTriggerAnimator__Class;
struct EventTriggerAnimator {
    struct EventTriggerAnimator__Class* klass;
    MonitorData* monitor;
    struct EventTriggerAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventTriggerAnimator_FWDDECL)
#define IL2CPP_STRUCT_EventTriggerAnimator_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_EventTriggerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTriggerAnimator_DEFINED) && !defined(IL2CPP_STRUCT_EventTriggerAnimator_FWDDECL)
#include <Modloader/app/structs/EventTriggerAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTriggerAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
