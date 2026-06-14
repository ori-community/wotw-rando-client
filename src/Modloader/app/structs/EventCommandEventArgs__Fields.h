#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventCommandEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventCommandEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventCommandEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/EventCommand__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#if defined(IL2CPP_STRUCT_EventCommand__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED)
#define IL2CPP_STRUCT_EventCommandEventArgs__Fields_DEFINED
struct IDictionary_2_System_String_System_String_;
struct EventSource;
struct EventDispatcher;
struct EventListener;
struct EventCommandEventArgs;
struct __declspec(align(8)) EventCommandEventArgs__Fields {
    EventCommand__Enum _Command_k__BackingField;

    struct IDictionary_2_System_String_System_String_* _Arguments_k__BackingField;
    struct EventSource* eventSource;
    struct EventDispatcher* dispatcher;
    struct EventListener* listener;
    int32_t perEventSourceSessionId;
    int32_t etwSessionId;
    bool enable;
    EventLevel__Enum level;

    EventKeywords__Enum matchAnyKeyword;

    struct EventCommandEventArgs* nextCommand;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventCommandEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventCommandEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/EventCommandEventArgs.h>
#include <Modloader/app/structs/EventDispatcher.h>
#include <Modloader/app/structs/EventListener.h>
#include <Modloader/app/structs/EventSource.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#endif
#undef IL2CPP_STRUCT_EventCommandEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventCommandEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventCommandEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/EventCommandEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventCommandEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
