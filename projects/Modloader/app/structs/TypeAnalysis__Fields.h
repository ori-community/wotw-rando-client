#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeAnalysis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeAnalysis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAnalysis__Fields_DEFINED)
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventOpcode__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED)
#define IL2CPP_STRUCT_TypeAnalysis__Fields_DEFINED
struct PropertyAnalysis__Array;
struct String;
struct __declspec(align(8)) TypeAnalysis__Fields {
    struct PropertyAnalysis__Array* properties;
    struct String* name;
    EventKeywords__Enum keywords;

    EventLevel__Enum level;

    EventOpcode__Enum opcode;

    EventTags__Enum tags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeAnalysis__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeAnalysis__Fields_FWDDECL
#include <Modloader/app/structs/PropertyAnalysis__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TypeAnalysis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAnalysis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeAnalysis__Fields_FWDDECL)
#include <Modloader/app/structs/TypeAnalysis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeAnalysis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
