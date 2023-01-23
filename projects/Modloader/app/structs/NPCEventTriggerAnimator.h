#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEventTriggerAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEventTriggerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator_DEFINED)
#include <Modloader/app/structs/NPCEventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEventTriggerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCEventTriggerAnimator_DEFINED
struct NPCEventTriggerAnimator__Class;
struct NPCEventTriggerAnimator {
    struct NPCEventTriggerAnimator__Class* klass;
    MonitorData* monitor;
    struct NPCEventTriggerAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator_FWDDECL)
#define IL2CPP_STRUCT_NPCEventTriggerAnimator_FWDDECL
#include <Modloader/app/structs/NPCEventTriggerAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCEventTriggerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator_DEFINED) && !defined(IL2CPP_STRUCT_NPCEventTriggerAnimator_FWDDECL)
#include <Modloader/app/structs/NPCEventTriggerAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEventTriggerAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
