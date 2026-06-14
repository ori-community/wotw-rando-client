#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathResultType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathResultType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathResultType__Enum_DEFINED)
#define IL2CPP_STRUCT_XPathResultType__Enum_DEFINED
enum class XPathResultType__Enum : int32_t {
    Number = 0x00000000,
    String = 0x00000001,
    Boolean = 0x00000002,
    NodeSet = 0x00000003,
    Navigator = 0x00000001,
    Any = 0x00000005,
    Error = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_XPathResultType__Enum_FWDDECL)
#define IL2CPP_STRUCT_XPathResultType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XPathResultType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathResultType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XPathResultType__Enum_FWDDECL)
#include <Modloader/app/structs/XPathResultType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathResultType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
