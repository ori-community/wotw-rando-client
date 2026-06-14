#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinXmlToken__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinXmlToken__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlToken__Enum_DEFINED)
#define IL2CPP_STRUCT_BinXmlToken__Enum_DEFINED
enum class BinXmlToken__Enum : int32_t {
    Error = 0x00000000,
    NotImpl = -2,
    EOF = -1,
    XmlDecl = 0x000000fe,
    Encoding = 0x000000fd,
    DocType = 0x000000fc,
    System = 0x000000fb,
    Public = 0x000000fa,
    Subset = 0x000000f9,
    Element = 0x000000f8,
    EndElem = 0x000000f7,
    Attr = 0x000000f6,
    EndAttrs = 0x000000f5,
    PI = 0x000000f4,
    Comment = 0x000000f3,
    CData = 0x000000f2,
    EndCData = 0x000000f1,
    Name = 0x000000f0,
    QName = 0x000000ef,
    XmlText = 0x000000ed,
    Nest = 0x000000ec,
    EndNest = 0x000000eb,
    Extn = 0x000000ea,
    NmFlush = 0x000000e9,
    SQL_BIT = 0x00000006,
    SQL_TINYINT = 0x00000007,
    SQL_SMALLINT = 0x00000001,
    SQL_INT = 0x00000002,
    SQL_BIGINT = 0x00000008,
    SQL_REAL = 0x00000003,
    SQL_FLOAT = 0x00000004,
    SQL_MONEY = 0x00000005,
    SQL_SMALLMONEY = 0x00000014,
    SQL_DATETIME = 0x00000012,
    SQL_SMALLDATETIME = 0x00000013,
    SQL_DECIMAL = 0x0000000a,
    SQL_NUMERIC = 0x0000000b,
    SQL_UUID = 0x00000009,
    SQL_VARBINARY = 0x0000000f,
    SQL_BINARY = 0x0000000c,
    SQL_IMAGE = 0x00000017,
    SQL_CHAR = 0x0000000d,
    SQL_VARCHAR = 0x00000010,
    SQL_TEXT = 0x00000016,
    SQL_NVARCHAR = 0x00000011,
    SQL_NCHAR = 0x0000000e,
    SQL_NTEXT = 0x00000018,
    SQL_UDT = 0x0000001b,
    XSD_KATMAI_DATE = 0x0000007f,
    XSD_KATMAI_DATETIME = 0x0000007e,
    XSD_KATMAI_TIME = 0x0000007d,
    XSD_KATMAI_DATEOFFSET = 0x0000007c,
    XSD_KATMAI_DATETIMEOFFSET = 0x0000007b,
    XSD_KATMAI_TIMEOFFSET = 0x0000007a,
    XSD_BOOLEAN = 0x00000086,
    XSD_TIME = 0x00000081,
    XSD_DATETIME = 0x00000082,
    XSD_DATE = 0x00000083,
    XSD_BINHEX = 0x00000084,
    XSD_BASE64 = 0x00000085,
    XSD_DECIMAL = 0x00000087,
    XSD_BYTE = 0x00000088,
    XSD_UNSIGNEDSHORT = 0x00000089,
    XSD_UNSIGNEDINT = 0x0000008a,
    XSD_UNSIGNEDLONG = 0x0000008b,
    XSD_QNAME = 0x0000008c,
};
#endif
#if !defined(IL2CPP_STRUCT_BinXmlToken__Enum_FWDDECL)
#define IL2CPP_STRUCT_BinXmlToken__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BinXmlToken__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlToken__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BinXmlToken__Enum_FWDDECL)
#include <Modloader/app/structs/BinXmlToken__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinXmlToken__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
