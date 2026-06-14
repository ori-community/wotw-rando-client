#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlParserContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlParserContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlParserContext__Fields_DEFINED)
#include <Modloader/app/structs/XmlSpace__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlParserContext__Fields_DEFINED
struct XmlNameTable;
struct XmlNamespaceManager;
struct String;
struct Encoding;
struct __declspec(align(8)) XmlParserContext__Fields {
    struct XmlNameTable* _nt;
    struct XmlNamespaceManager* _nsMgr;
    struct String* _docTypeName;
    struct String* _pubId;
    struct String* _sysId;
    struct String* _internalSubset;
    struct String* _xmlLang;
    XmlSpace__Enum _xmlSpace;

    struct String* _baseURI;
    struct Encoding* _encoding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlParserContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlParserContext__Fields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNamespaceManager.h>
#endif
#undef IL2CPP_STRUCT_XmlParserContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlParserContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlParserContext__Fields_FWDDECL)
#include <Modloader/app/structs/XmlParserContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlParserContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
