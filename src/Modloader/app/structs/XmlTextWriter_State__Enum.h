#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_State__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter_State__Enum_DEFINED
enum class XmlTextWriter_State__Enum : int32_t {
    Start = 0x00000000,
    Prolog = 0x00000001,
    PostDTD = 0x00000002,
    Element = 0x00000003,
    Attribute = 0x00000004,
    Content = 0x00000005,
    AttrOnly = 0x00000006,
    Epilog = 0x00000007,
    Error = 0x00000008,
    Closed = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlTextWriter_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter_State__Enum_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
