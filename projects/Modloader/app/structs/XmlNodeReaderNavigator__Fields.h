#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_DEFINED
struct XmlNode;
struct XmlNameTable;
struct XmlDocument;
struct XmlNodeReaderNavigator_VirtualAttribute__Array;
struct __declspec(align(8)) XmlNodeReaderNavigator__Fields {
    struct XmlNode* curNode;
    struct XmlNode* elemNode;
    struct XmlNode* logNode;
    int32_t attrIndex;
    int32_t logAttrIndex;
    struct XmlNameTable* nameTable;
    struct XmlDocument* doc;
    int32_t nAttrInd;
    int32_t nDeclarationAttrCount;
    int32_t nDocTypeAttrCount;
    int32_t nLogLevel;
    int32_t nLogAttrInd;
    bool bLogOnAttrVal;
    bool bCreatedOnAttribute;
    struct XmlNodeReaderNavigator_VirtualAttribute__Array* decNodeAttributes;
    struct XmlNodeReaderNavigator_VirtualAttribute__Array* docTypeNodeAttributes;
    bool bOnAttrVal;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_FWDDECL
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeReaderNavigator__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNodeReaderNavigator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeReaderNavigator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
