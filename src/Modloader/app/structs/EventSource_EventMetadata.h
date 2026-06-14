#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource_EventMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource_EventMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventMetadata_DEFINED)
#include <Modloader/app/structs/EventActivityOptions__Enum.h>
#include <Modloader/app/structs/EventDescriptor.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventDescriptor_DEFINED) && defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventActivityOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_EventSource_EventMetadata_DEFINED
struct String;
struct ParameterInfo_1__Array;
struct TraceLoggingEventTypes;
struct EventSource_EventMetadata {
    struct EventDescriptor Descriptor;
    EventTags__Enum Tags;

    bool EnabledForAnyListener;
    bool EnabledForETW;
    bool HasRelatedActivityID;
    uint8_t TriggersActivityTracking;
    struct String* Name;
    struct String* Message;
    struct ParameterInfo_1__Array* Parameters;
    struct TraceLoggingEventTypes* TraceLoggingEventTypes;
    EventActivityOptions__Enum ActivityOptions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource_EventMetadata_FWDDECL)
#define IL2CPP_STRUCT_EventSource_EventMetadata_FWDDECL
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingEventTypes.h>
#endif
#undef IL2CPP_STRUCT_EventSource_EventMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource_EventMetadata_DEFINED) && !defined(IL2CPP_STRUCT_EventSource_EventMetadata_FWDDECL)
#include <Modloader/app/structs/EventSource_EventMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource_EventMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
