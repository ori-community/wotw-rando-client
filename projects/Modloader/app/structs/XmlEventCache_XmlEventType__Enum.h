#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_DEFINED
enum class XmlEventCache_XmlEventType__Enum : int32_t {
    Unknown = 0x00000000,
    DocType = 0x00000001,
    StartElem = 0x00000002,
    StartAttr = 0x00000003,
    EndAttr = 0x00000004,
    CData = 0x00000005,
    Comment = 0x00000006,
    PI = 0x00000007,
    Whitespace = 0x00000008,
    String = 0x00000009,
    Raw = 0x0000000a,
    EntRef = 0x0000000b,
    CharEnt = 0x0000000c,
    SurrCharEnt = 0x0000000d,
    Base64 = 0x0000000e,
    BinHex = 0x0000000f,
    XmlDecl1 = 0x00000010,
    XmlDecl2 = 0x00000011,
    StartContent = 0x00000012,
    EndElem = 0x00000013,
    FullEndElem = 0x00000014,
    Nmsp = 0x00000015,
    EndBase64 = 0x00000016,
    Close = 0x00000017,
    Flush = 0x00000018,
    Dispose = 0x00000019,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlEventCache_XmlEventType__Enum_FWDDECL)
#include <Modloader/app/structs/XmlEventCache_XmlEventType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEventCache_XmlEventType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
