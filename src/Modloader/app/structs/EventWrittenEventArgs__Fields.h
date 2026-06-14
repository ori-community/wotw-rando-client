#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventWrittenEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventWrittenEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventWrittenEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_EventWrittenEventArgs__Fields_DEFINED
struct ReadOnlyCollection_1_System_Object_;
struct String;
struct EventSource;
struct ReadOnlyCollection_1_System_String_;
struct __declspec(align(8)) EventWrittenEventArgs__Fields {
    int32_t _EventId_k__BackingField;
    struct Guid _RelatedActivityId_k__BackingField;
    struct ReadOnlyCollection_1_System_Object_* _Payload_k__BackingField;
    struct String* m_message;
    struct String* m_eventName;
    struct EventSource* m_eventSource;
    struct ReadOnlyCollection_1_System_String_* m_payloadNames;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventWrittenEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventWrittenEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/EventSource.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EventWrittenEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventWrittenEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventWrittenEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/EventWrittenEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventWrittenEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
