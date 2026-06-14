#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_DEFINED
enum class XmlWellFormedWriter_Token__Enum : int32_t {
    StartDocument = 0x00000000,
    EndDocument = 0x00000001,
    PI = 0x00000002,
    Comment = 0x00000003,
    Dtd = 0x00000004,
    StartElement = 0x00000005,
    EndElement = 0x00000006,
    StartAttribute = 0x00000007,
    EndAttribute = 0x00000008,
    Text = 0x00000009,
    CData = 0x0000000a,
    AtomicValue = 0x0000000b,
    Base64 = 0x0000000c,
    RawData = 0x0000000d,
    Whitespace = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter_Token__Enum_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter_Token__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter_Token__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
