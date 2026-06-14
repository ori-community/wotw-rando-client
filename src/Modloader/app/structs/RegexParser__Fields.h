#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexParser__Fields_DEFINED)
#include <Modloader/app/structs/RegexOptions__Enum.h>
#if defined(IL2CPP_STRUCT_RegexOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_RegexParser__Fields_DEFINED
struct RegexNode;
struct String;
struct CultureInfo;
struct Hashtable;
struct Int32__Array;
struct List_1_System_String_;
struct List_1_System_Text_RegularExpressions_RegexOptions_;
struct __declspec(align(8)) RegexParser__Fields {
    struct RegexNode* _stack;
    struct RegexNode* _group;
    struct RegexNode* _alternation;
    struct RegexNode* _concatenation;
    struct RegexNode* _unit;
    struct String* _pattern;
    int32_t _currentPos;
    struct CultureInfo* _culture;
    int32_t _autocap;
    int32_t _capcount;
    int32_t _captop;
    int32_t _capsize;
    struct Hashtable* _caps;
    struct Hashtable* _capnames;
    struct Int32__Array* _capnumlist;
    struct List_1_System_String_* _capnamelist;
    RegexOptions__Enum _options;

    struct List_1_System_Text_RegularExpressions_RegexOptions_* _optionsStack;
    bool _ignoreNextParen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexParser__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_System_Text_RegularExpressions_RegexOptions_.h>
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegexParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexParser__Fields_FWDDECL)
#include <Modloader/app/structs/RegexParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
