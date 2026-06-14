#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSendingStage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSendingStage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSendingStage_DEFINED)
#include <Modloader/app/structs/EventSendingStage__Fields.h>
#if defined(IL2CPP_STRUCT_EventSendingStage__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSendingStage_DEFINED
struct EventSendingStage__Class;
struct EventSendingStage {
    struct EventSendingStage__Class* klass;
    MonitorData* monitor;
    struct EventSendingStage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSendingStage_FWDDECL)
#define IL2CPP_STRUCT_EventSendingStage_FWDDECL
#include <Modloader/app/structs/EventSendingStage__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSendingStage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSendingStage_DEFINED) && !defined(IL2CPP_STRUCT_EventSendingStage_FWDDECL)
#include <Modloader/app/structs/EventSendingStage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSendingStage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
