#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexCharClass__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexCharClass__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCharClass__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RegexCharClass__StaticFields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct String__Array_1;
struct RegexCharClass_LowerCaseMapping__Array;
struct RegexCharClass__StaticFields {
    struct String* InternalRegexIgnoreCase;
    struct String* Space;
    struct String* NotSpace;
    struct String* Word;
    struct String* NotWord;
    struct String* SpaceClass;
    struct String* NotSpaceClass;
    struct String* WordClass;
    struct String* NotWordClass;
    struct String* DigitClass;
    struct String* NotDigitClass;
    struct Dictionary_2_System_String_System_String_* _definedCategories;
    struct String__Array_1* _propTable;
    struct RegexCharClass_LowerCaseMapping__Array* _lcTable;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexCharClass__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RegexCharClass__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/RegexCharClass_LowerCaseMapping__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array_1.h>
#endif
#undef IL2CPP_STRUCT_RegexCharClass__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCharClass__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RegexCharClass__StaticFields_FWDDECL)
#include <Modloader/app/structs/RegexCharClass__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexCharClass__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
