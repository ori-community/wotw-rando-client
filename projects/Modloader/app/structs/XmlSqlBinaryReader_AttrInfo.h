#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_DEFINED)
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>
#if defined(IL2CPP_STRUCT_XmlSqlBinaryReader_QName_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_DEFINED
struct String;
struct XmlSqlBinaryReader_AttrInfo {
    struct XmlSqlBinaryReader_QName name;
    struct String* val;
    int32_t contentPos;
    int32_t hashCode;
    int32_t prevHash;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_AttrInfo_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
