#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameOptions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED)
#define IL2CPP_STRUCT_NameOptions__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct NameOptions__Fields {
    struct CleverMenuOptionsList__Fields _;
    struct String* m_currentlySelected;
    struct String* _FirstLetter_k__BackingField;
    struct String* _SecondLetter_k__BackingField;
    struct List_1_System_String_* m_availableNames;
    struct List_1_System_String_* m_unavailableNames;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameOptions__Fields_FWDDECL)
#define IL2CPP_STRUCT_NameOptions__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NameOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NameOptions__Fields_FWDDECL)
#include <Modloader/app/structs/NameOptions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameOptions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
