#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_DEFINED
struct EventHandlerList_ListEntry;
struct Object;
struct Delegate;
struct __declspec(align(8)) EventHandlerList_ListEntry__Fields {
    struct EventHandlerList_ListEntry* next;
    struct Object* key;
    struct Delegate* handler;
};
#endif
#if !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_FWDDECL
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/EventHandlerList_ListEntry.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventHandlerList_ListEntry__Fields_FWDDECL)
#include <Modloader/app/structs/EventHandlerList_ListEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventHandlerList_ListEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
