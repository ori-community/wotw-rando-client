#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_DEFINED
enum class XmlSqlBinaryReader_ScanState__Enum : int32_t {
    Doc = 0x00000000,
    XmlText = 0x00000001,
    Attr = 0x00000002,
    AttrVal = 0x00000003,
    AttrValPseudoValue = 0x00000004,
    Init = 0x00000005,
    Error = 0x00000006,
    EOF = 0x00000007,
    Closed = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlSqlBinaryReader_ScanState__Enum_FWDDECL)
#include <Modloader/app/structs/XmlSqlBinaryReader_ScanState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSqlBinaryReader_ScanState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
