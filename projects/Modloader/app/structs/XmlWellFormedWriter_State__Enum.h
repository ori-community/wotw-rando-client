#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_DEFINED
enum class XmlWellFormedWriter_State__Enum : int32_t {
    Start = 0x00000000,
    TopLevel = 0x00000001,
    Document = 0x00000002,
    Element = 0x00000003,
    Content = 0x00000004,
    B64Content = 0x00000005,
    B64Attribute = 0x00000006,
    AfterRootEle = 0x00000007,
    Attribute = 0x00000008,
    SpecialAttr = 0x00000009,
    EndDocument = 0x0000000a,
    RootLevelAttr = 0x0000000b,
    RootLevelSpecAttr = 0x0000000c,
    RootLevelB64Attr = 0x0000000d,
    AfterRootLevelAttr = 0x0000000e,
    Closed = 0x0000000f,
    Error = 0x00000010,
    StartContent = 0x00000065,
    StartContentEle = 0x00000066,
    StartContentB64 = 0x00000067,
    StartDoc = 0x00000068,
    StartDocEle = 0x0000006a,
    EndAttrSEle = 0x0000006b,
    EndAttrEEle = 0x0000006c,
    EndAttrSCont = 0x0000006d,
    EndAttrSAttr = 0x0000006f,
    PostB64Cont = 0x00000070,
    PostB64Attr = 0x00000071,
    PostB64RootAttr = 0x00000072,
    StartFragEle = 0x00000073,
    StartFragCont = 0x00000074,
    StartFragB64 = 0x00000075,
    StartRootLevelAttr = 0x00000076,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter_State__Enum_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
