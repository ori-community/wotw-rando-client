#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventAttribute__Fields_DEFINED)
#include <Modloader/app/structs/EventActivityOptions__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#include <Modloader/app/structs/EventTask__Enum.h>
#if defined(IL2CPP_STRUCT_EventLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventTask__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventActivityOptions__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventOpcode__Enum_DEFINED)
#define IL2CPP_STRUCT_EventAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) EventAttribute__Fields {
    int32_t _EventId_k__BackingField;
    EventLevel__Enum _Level_k__BackingField;

    EventKeywords__Enum _Keywords_k__BackingField;

    EventTask__Enum _Task_k__BackingField;

    uint8_t _Version_k__BackingField;
    struct String* _Message_k__BackingField;
    EventTags__Enum _Tags_k__BackingField;

    EventActivityOptions__Enum _ActivityOptions_k__BackingField;

    EventOpcode__Enum m_opcode;

    bool m_opcodeSet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EventAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/EventAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
