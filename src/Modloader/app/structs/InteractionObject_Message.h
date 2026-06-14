#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject_Message_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject_Message_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_Message_DEFINED)
#include <Modloader/app/structs/InteractionObject_Message__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionObject_Message__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionObject_Message_DEFINED
struct InteractionObject_Message__Class;
struct InteractionObject_Message {
    struct InteractionObject_Message__Class* klass;
    MonitorData* monitor;
    struct InteractionObject_Message__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject_Message_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject_Message_FWDDECL
#include <Modloader/app/structs/InteractionObject_Message__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionObject_Message_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_Message_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject_Message_FWDDECL)
#include <Modloader/app/structs/InteractionObject_Message.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject_Message.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
