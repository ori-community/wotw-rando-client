#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader_QName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_QName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_QName_DEFINED
struct String;
struct XmlSqlBinaryReader_QName {
    struct String* prefix;
    struct String* localname;
    struct String* namespaceUri;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_QName_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader_QName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
