#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IXmlDocument__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IXmlDocument__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDocument__VTable_DEFINED)
#define IL2CPP_STRUCT_IXmlDocument__VTable_DEFINED
struct IXmlDocument__VTable {
    VirtualInvokeData CreateComment;
    VirtualInvokeData CreateTextNode;
    VirtualInvokeData CreateCDataSection;
    VirtualInvokeData CreateWhitespace;
    VirtualInvokeData CreateSignificantWhitespace;
    VirtualInvokeData CreateXmlDeclaration;
    VirtualInvokeData CreateXmlDocumentType;
    VirtualInvokeData CreateProcessingInstruction;
    VirtualInvokeData CreateElement;
    VirtualInvokeData CreateElement_1;
    VirtualInvokeData CreateAttribute;
    VirtualInvokeData CreateAttribute_1;
    VirtualInvokeData get_DocumentElement;
};
#endif
#if !defined(IL2CPP_STRUCT_IXmlDocument__VTable_FWDDECL)
#define IL2CPP_STRUCT_IXmlDocument__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IXmlDocument__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IXmlDocument__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IXmlDocument__VTable_FWDDECL)
#include <Modloader/app/structs/IXmlDocument__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IXmlDocument__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
