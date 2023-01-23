#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventKeywords__Enum__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventKeywords__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventKeywords__Enum__Boxed_DEFINED)
#include <Modloader/app/structs/EventKeywords__Enum.h>
#if defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED)
#define IL2CPP_STRUCT_EventKeywords__Enum__Boxed_DEFINED
struct EventKeywords__Enum__Class;
struct EventKeywords__Enum__Boxed {
    struct EventKeywords__Enum__Class* klass;
    MonitorData* monitor;
    EventKeywords__Enum value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventKeywords__Enum__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventKeywords__Enum__Boxed_FWDDECL
#include <Modloader/app/structs/EventKeywords__Enum__Class.h>
#endif
#undef IL2CPP_STRUCT_EventKeywords__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventKeywords__Enum__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventKeywords__Enum__Boxed_FWDDECL)
#include <Modloader/app/structs/EventKeywords__Enum__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventKeywords__Enum__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
