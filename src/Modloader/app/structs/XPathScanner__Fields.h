#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathScanner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathScanner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathScanner__Fields_DEFINED)
#include <Modloader/app/structs/XPathScanner_LexKind__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#if defined(IL2CPP_STRUCT_XPathScanner_LexKind__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XPathScanner__Fields_DEFINED
struct String;
struct __declspec(align(8)) XPathScanner__Fields {
    struct String* xpathExpr;
    int32_t xpathExprIndex;
    XPathScanner_LexKind__Enum kind;

    uint16_t currentChar;
    struct String* name;
    struct String* prefix;
    struct String* stringValue;
    double numberValue;
    bool canBeFunction;
    struct XmlCharType xmlCharType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathScanner__Fields_FWDDECL)
#define IL2CPP_STRUCT_XPathScanner__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XPathScanner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathScanner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XPathScanner__Fields_FWDDECL)
#include <Modloader/app/structs/XPathScanner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathScanner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
