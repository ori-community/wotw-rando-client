#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexReplacement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexReplacement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexReplacement__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexReplacement__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct List_1_System_Int32_;
struct __declspec(align(8)) RegexReplacement__Fields {
    struct String* _rep;
    struct List_1_System_String_* _strings;
    struct List_1_System_Int32_* _rules;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexReplacement__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexReplacement__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegexReplacement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexReplacement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexReplacement__Fields_FWDDECL)
#include <Modloader/app/structs/RegexReplacement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexReplacement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
