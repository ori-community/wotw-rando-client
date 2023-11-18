#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_DEFINED)
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>
#if defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_DEFINED) && defined(IL2CPP_STRUCT_XmlSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_DEFINED
struct String;
struct XmlSqlBinaryReader_NamespaceDecl;
struct XmlSqlBinaryReader_ElemInfo {
    struct XmlSqlBinaryReader_QName name;
    struct String* xmlLang;
    XmlSpace__Enum xmlSpace;

    bool xmlspacePreserve;
    struct XmlSqlBinaryReader_NamespaceDecl* nsdecls;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl.h>
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ElemInfo_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
