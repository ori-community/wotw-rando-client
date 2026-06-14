#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlphabetOptions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlphabetOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphabetOptions__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED)
#define IL2CPP_STRUCT_AlphabetOptions__Fields_DEFINED
struct String;
struct Boolean__Array;
struct AlphabetOptions__Fields {
    struct CleverMenuOptionsList__Fields _;
    struct String* m_currentlySelected;
    uint16_t m_firstFilter;
    uint16_t m_secondFilter;
    struct Boolean__Array* m_filtering;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AlphabetOptions__Fields_FWDDECL)
#define IL2CPP_STRUCT_AlphabetOptions__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AlphabetOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphabetOptions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AlphabetOptions__Fields_FWDDECL)
#include <Modloader/app/structs/AlphabetOptions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlphabetOptions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
