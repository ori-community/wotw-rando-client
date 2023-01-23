#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSourceOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSourceOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceOptions_DEFINED)
#include <Modloader/app/structs/EventActivityOptions__Enum.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventTags__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventActivityOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_EventSourceOptions_DEFINED
struct EventSourceOptions {
    EventKeywords__Enum keywords;

    EventTags__Enum tags;

    EventActivityOptions__Enum activityOptions;

    uint8_t level;
    uint8_t opcode;
    uint8_t valuesSet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSourceOptions_FWDDECL)
#define IL2CPP_STRUCT_EventSourceOptions_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventSourceOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceOptions_DEFINED) && !defined(IL2CPP_STRUCT_EventSourceOptions_FWDDECL)
#include <Modloader/app/structs/EventSourceOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSourceOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
