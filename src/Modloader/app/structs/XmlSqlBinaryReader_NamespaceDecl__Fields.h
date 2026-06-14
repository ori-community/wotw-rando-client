#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_DEFINED
struct String;
struct XmlSqlBinaryReader_NamespaceDecl;
struct __declspec(align(8)) XmlSqlBinaryReader_NamespaceDecl__Fields {
    struct String* prefix;
    struct String* uri;
    struct XmlSqlBinaryReader_NamespaceDecl* scopeLink;
    struct XmlSqlBinaryReader_NamespaceDecl* prevLink;
    int32_t scope;
    bool implied;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl.h>
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_NamespaceDecl__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
