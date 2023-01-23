#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeWrapper__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeWrapper__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper__VTable_DEFINED)
#define IL2CPP_STRUCT_XmlNodeWrapper__VTable_DEFINED
struct XmlNodeWrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_LocalName;
    VirtualInvokeData get_ChildNodes;
    VirtualInvokeData get_Attributes;
    VirtualInvokeData get_ParentNode;
    VirtualInvokeData get_Value;
    VirtualInvokeData AppendChild;
    VirtualInvokeData get_NamespaceUri;
    VirtualInvokeData get_WrappedNode;
    VirtualInvokeData get_LocalName_1;
    VirtualInvokeData set_Value;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper__VTable_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeWrapper__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlNodeWrapper__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper__VTable_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeWrapper__VTable_FWDDECL)
#include <Modloader/app/structs/XmlNodeWrapper__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeWrapper__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
