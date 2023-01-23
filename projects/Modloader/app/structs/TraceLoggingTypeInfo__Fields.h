#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_DEFINED)
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventOpcode__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED)
#define IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) TraceLoggingTypeInfo__Fields {
    struct String* name;
    EventKeywords__Enum keywords;

    EventLevel__Enum level;

    EventOpcode__Enum opcode;

    EventTags__Enum tags;

    struct Type* dataType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceLoggingTypeInfo__Fields_FWDDECL)
#include <Modloader/app/structs/TraceLoggingTypeInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceLoggingTypeInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
