#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_DEFINED)
#include <Modloader/app/structs/ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo__DEFINED)
#define IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_DEFINED
struct TraceLoggingTypeInfo__Array;
struct String;
struct Byte__Array;
struct __declspec(align(8)) TraceLoggingEventTypes__Fields {
    struct TraceLoggingTypeInfo__Array* typeInfos;
    struct String* name;
    EventTags__Enum tags;

    uint8_t level;
    uint8_t opcode;
    EventKeywords__Enum keywords;

    struct Byte__Array* typeMetadata;
    int32_t scratchSize;
    int32_t dataCount;
    int32_t pinCount;
    struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo_ nameInfos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingEventTypes__Fields_FWDDECL)
#include <Modloader/app/structs/TraceLoggingEventTypes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingEventTypes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
