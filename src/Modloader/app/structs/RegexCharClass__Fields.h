#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexCharClass__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexCharClass__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCharClass__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexCharClass__Fields_DEFINED
struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_;
struct StringBuilder;
struct RegexCharClass;
struct __declspec(align(8)) RegexCharClass__Fields {
    struct List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* _rangelist;
    struct StringBuilder* _categories;
    bool _canonical;
    bool _negate;
    struct RegexCharClass* _subtractor;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexCharClass__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexCharClass__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_.h>
#include <Modloader/app/structs/RegexCharClass.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_RegexCharClass__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexCharClass__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexCharClass__Fields_FWDDECL)
#include <Modloader/app/structs/RegexCharClass__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexCharClass__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
