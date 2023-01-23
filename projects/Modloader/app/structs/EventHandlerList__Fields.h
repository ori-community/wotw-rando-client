#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventHandlerList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventHandlerList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList__Fields_DEFINED)
#define IL2CPP_STRUCT_EventHandlerList__Fields_DEFINED
struct EventHandlerList_ListEntry;
struct Component;
struct __declspec(align(8)) EventHandlerList__Fields {
    struct EventHandlerList_ListEntry* head;
    struct Component* parent;
};
#endif
#if !defined(IL2CPP_STRUCT_EventHandlerList__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventHandlerList__Fields_FWDDECL
#include <Modloader/app/structs/Component.h>
#include <Modloader/app/structs/EventHandlerList_ListEntry.h>
#endif
#undef IL2CPP_STRUCT_EventHandlerList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventHandlerList__Fields_FWDDECL)
#include <Modloader/app/structs/EventHandlerList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventHandlerList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
