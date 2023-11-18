#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDataAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDataAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDataAttribute__Fields_DEFINED)
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventOpcode__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED)
#define IL2CPP_STRUCT_EventDataAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) EventDataAttribute__Fields {
    EventLevel__Enum level;

    EventOpcode__Enum opcode;

    struct String* _Name_k__BackingField;
    EventKeywords__Enum _Keywords_k__BackingField;

    EventTags__Enum _Tags_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventDataAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventDataAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EventDataAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDataAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventDataAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/EventDataAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDataAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
