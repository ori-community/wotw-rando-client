#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNamedNodeMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNamedNodeMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamedNodeMap__Fields_DEFINED)
#include <Modloader/app/structs/XmlNamedNodeMap_SmallXmlNodeList.h>
#if defined(IL2CPP_STRUCT_XmlNamedNodeMap_SmallXmlNodeList_DEFINED)
#define IL2CPP_STRUCT_XmlNamedNodeMap__Fields_DEFINED
struct XmlNode;
struct __declspec(align(8)) XmlNamedNodeMap__Fields {
    struct XmlNode* parent;
    struct XmlNamedNodeMap_SmallXmlNodeList nodes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNamedNodeMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNamedNodeMap__Fields_FWDDECL
#include <Modloader/app/structs/XmlNode.h>
#endif
#undef IL2CPP_STRUCT_XmlNamedNodeMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNamedNodeMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNamedNodeMap__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNamedNodeMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNamedNodeMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
