#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_DEFINED)
#include <Modloader/app/structs/BinXmlToken__Enum.h>
#include <Modloader/app/structs/DtdProcessing__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ScanState__Enum.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables.h>
#if defined(IL2CPP_STRUCT_XmlSqlBinaryReader_SymbolTables_DEFINED) && defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_BinXmlToken__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_DEFINED) && defined(IL2CPP_STRUCT_DtdProcessing__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_DEFINED
struct Stream;
struct Byte__Array;
struct XmlNameTable;
struct String;
struct XmlSqlBinaryReader_ElemInfo__Array;
struct XmlSqlBinaryReader_AttrInfo__Array;
struct Int32__Array;
struct Type;
struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_;
struct XmlSqlBinaryReader_NestedBinXml;
struct XmlReader;
struct SecureStringHasher;
struct Encoding;
struct __declspec(align(8)) XmlSqlBinaryReader__Fields {
    struct Stream* inStrm;
    struct Byte__Array* data;
    int32_t pos;
    int32_t mark;
    int32_t end;
    int64_t offset;
    bool eof;
    bool sniffed;
    bool isEmpty;
    int32_t docState;
    struct XmlSqlBinaryReader_SymbolTables symbolTables;
    struct XmlNameTable* xnt;
    bool xntFromSettings;
    struct String* xml;
    struct String* xmlns;
    struct String* nsxmlns;
    struct String* baseUri;
    XmlSqlBinaryReader_ScanState__Enum state;

    XmlNodeType__Enum nodetype;

    BinXmlToken__Enum token;

    int32_t attrIndex;
    struct XmlSqlBinaryReader_QName qnameOther;
    struct XmlSqlBinaryReader_QName qnameElement;
    XmlNodeType__Enum parentNodeType;

    struct XmlSqlBinaryReader_ElemInfo__Array* elementStack;
    int32_t elemDepth;
    struct XmlSqlBinaryReader_AttrInfo__Array* attributes;
    struct Int32__Array* attrHashTbl;
    int32_t attrCount;
    int32_t posAfterAttrs;
    bool xmlspacePreserve;
    int32_t tokLen;
    int32_t tokDataPos;
    bool hasTypedValue;
    struct Type* valueType;
    struct String* stringValue;
    struct Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_* namespaces;
    struct XmlSqlBinaryReader_NestedBinXml* prevNameInfo;
    struct XmlReader* textXmlReader;
    bool closeInput;
    bool checkCharacters;
    bool ignoreWhitespace;
    bool ignorePIs;
    bool ignoreComments;
    DtdProcessing__Enum dtdProcessing;

    struct SecureStringHasher* hasher;
    struct XmlCharType xmlCharType;
    struct Encoding* unicode;
    uint8_t version;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SecureStringHasher.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NestedBinXml.h>
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
