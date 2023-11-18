#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexNode__Fields_DEFINED)
#include <Modloader/app/structs/RegexOptions__Enum.h>
#if defined(IL2CPP_STRUCT_RegexOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_RegexNode__Fields_DEFINED
struct List_1_System_Text_RegularExpressions_RegexNode_;
struct String;
struct RegexNode;
struct __declspec(align(8)) RegexNode__Fields {
    int32_t _type;
    struct List_1_System_Text_RegularExpressions_RegexNode_* _children;
    struct String* _str;
    uint16_t _ch;
    int32_t _m;
    int32_t _n;
    RegexOptions__Enum _options;

    struct RegexNode* _next;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegexNode__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Text_RegularExpressions_RegexNode_.h>
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegexNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegexNode__Fields_FWDDECL)
#include <Modloader/app/structs/RegexNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
