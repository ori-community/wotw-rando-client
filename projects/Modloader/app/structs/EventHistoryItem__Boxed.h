#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventHistoryItem__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventHistoryItem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHistoryItem__Boxed_DEFINED)
#include <Modloader/app/structs/EventHistoryItem.h>
#if defined(IL2CPP_STRUCT_EventHistoryItem_DEFINED)
#define IL2CPP_STRUCT_EventHistoryItem__Boxed_DEFINED
struct EventHistoryItem__Class;
struct EventHistoryItem__Boxed {
    struct EventHistoryItem__Class* klass;
    MonitorData* monitor;
    struct EventHistoryItem fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventHistoryItem__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventHistoryItem__Boxed_FWDDECL
#include <Modloader/app/structs/EventHistoryItem__Class.h>
#endif
#undef IL2CPP_STRUCT_EventHistoryItem__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHistoryItem__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventHistoryItem__Boxed_FWDDECL)
#include <Modloader/app/structs/EventHistoryItem__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventHistoryItem__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
