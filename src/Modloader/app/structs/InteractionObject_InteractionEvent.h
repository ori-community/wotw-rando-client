#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject_InteractionEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject_InteractionEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent_DEFINED)
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionObject_InteractionEvent_DEFINED
struct InteractionObject_InteractionEvent__Class;
struct InteractionObject_InteractionEvent {
    struct InteractionObject_InteractionEvent__Class* klass;
    MonitorData* monitor;
    struct InteractionObject_InteractionEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject_InteractionEvent_FWDDECL
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionObject_InteractionEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent_FWDDECL)
#include <Modloader/app/structs/InteractionObject_InteractionEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject_InteractionEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
