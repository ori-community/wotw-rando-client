#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeWrapper__Fields_DEFINED
struct XmlNode;
struct List_1_Newtonsoft_Json_Converters_IXmlNode_;
struct __declspec(align(8)) XmlNodeWrapper__Fields {
    struct XmlNode* _node;
    struct List_1_Newtonsoft_Json_Converters_IXmlNode_* _childNodes;
    struct List_1_Newtonsoft_Json_Converters_IXmlNode_* _attributes;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeWrapper__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Newtonsoft_Json_Converters_IXmlNode_.h>
#include <Modloader/app/structs/XmlNode.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNodeWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
