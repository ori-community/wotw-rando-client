#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED
enum class XmlNodeType__Enum : int32_t {
    None = 0x00000000,
    Element = 0x00000001,
    Attribute = 0x00000002,
    Text = 0x00000003,
    CDATA = 0x00000004,
    EntityReference = 0x00000005,
    Entity = 0x00000006,
    ProcessingInstruction = 0x00000007,
    Comment = 0x00000008,
    Document = 0x00000009,
    DocumentType = 0x0000000a,
    DocumentFragment = 0x0000000b,
    Notation = 0x0000000c,
    Whitespace = 0x0000000d,
    SignificantWhitespace = 0x0000000e,
    EndElement = 0x0000000f,
    EndEntity = 0x00000010,
    XmlDeclaration = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlNodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeType__Enum_FWDDECL)
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
