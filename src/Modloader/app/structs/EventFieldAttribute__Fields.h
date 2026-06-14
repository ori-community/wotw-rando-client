#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventFieldAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventFieldAttribute__Fields_DEFINED)
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/EventFieldTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventFieldTags__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventFieldFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_EventFieldAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) EventFieldAttribute__Fields {
    EventFieldTags__Enum _Tags_k__BackingField;

    struct String* _Name_k__BackingField;
    EventFieldFormat__Enum _Format_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventFieldAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventFieldAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EventFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventFieldAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventFieldAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/EventFieldAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventFieldAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
