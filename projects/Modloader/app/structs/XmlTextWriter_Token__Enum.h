#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter_Token__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter_Token__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_Token__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter_Token__Enum_DEFINED
enum class XmlTextWriter_Token__Enum : int32_t {
    PI = 0x00000000,
    Doctype = 0x00000001,
    Comment = 0x00000002,
    CData = 0x00000003,
    StartElement = 0x00000004,
    EndElement = 0x00000005,
    LongEndElement = 0x00000006,
    StartAttribute = 0x00000007,
    EndAttribute = 0x00000008,
    Content = 0x00000009,
    Base64 = 0x0000000a,
    RawData = 0x0000000b,
    Whitespace = 0x0000000c,
    Empty = 0x0000000d,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter_Token__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter_Token__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlTextWriter_Token__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_Token__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter_Token__Enum_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter_Token__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter_Token__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
