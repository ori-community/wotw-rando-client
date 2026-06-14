#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventHandlerList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventHandlerList_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList_DEFINED)
#include <Modloader/app/structs/EventHandlerList__Fields.h>
#if defined(IL2CPP_STRUCT_EventHandlerList__Fields_DEFINED)
#define IL2CPP_STRUCT_EventHandlerList_DEFINED
struct EventHandlerList__Class;
struct EventHandlerList {
    struct EventHandlerList__Class* klass;
    MonitorData* monitor;
    struct EventHandlerList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventHandlerList_FWDDECL)
#define IL2CPP_STRUCT_EventHandlerList_FWDDECL
#include <Modloader/app/structs/EventHandlerList__Class.h>
#endif
#undef IL2CPP_STRUCT_EventHandlerList_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList_DEFINED) && !defined(IL2CPP_STRUCT_EventHandlerList_FWDDECL)
#include <Modloader/app/structs/EventHandlerList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventHandlerList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
