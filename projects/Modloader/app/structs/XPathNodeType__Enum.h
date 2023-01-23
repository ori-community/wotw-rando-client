#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_XPathNodeType__Enum_DEFINED
enum class XPathNodeType__Enum : int32_t {
    Root = 0x00000000,
    Element = 0x00000001,
    Attribute = 0x00000002,
    Namespace = 0x00000003,
    Text = 0x00000004,
    SignificantWhitespace = 0x00000005,
    Whitespace = 0x00000006,
    ProcessingInstruction = 0x00000007,
    Comment = 0x00000008,
    All = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNodeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_XPathNodeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XPathNodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodeType__Enum_FWDDECL)
#include <Modloader/app/structs/XPathNodeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
