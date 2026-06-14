#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventHandlerList_ListEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventHandlerList_ListEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry_DEFINED)
#include <Modloader/app/structs/EventHandlerList_ListEntry__Fields.h>
#if defined(IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_EventHandlerList_ListEntry_DEFINED
struct EventHandlerList_ListEntry__Class;
struct EventHandlerList_ListEntry {
    struct EventHandlerList_ListEntry__Class* klass;
    MonitorData* monitor;
    struct EventHandlerList_ListEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry_FWDDECL)
#define IL2CPP_STRUCT_EventHandlerList_ListEntry_FWDDECL
#include <Modloader/app/structs/EventHandlerList_ListEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_EventHandlerList_ListEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry_DEFINED) && !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry_FWDDECL)
#include <Modloader/app/structs/EventHandlerList_ListEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventHandlerList_ListEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
