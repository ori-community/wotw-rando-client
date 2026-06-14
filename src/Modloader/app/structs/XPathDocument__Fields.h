#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathDocument__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathDocument__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathDocument__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathDocument__Fields_DEFINED
struct XPathNode__Array;
struct XmlNameTable;
struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_;
struct __declspec(align(8)) XPathDocument__Fields {
    struct XPathNode__Array* pageXmlNmsp;
    int32_t idxXmlNmsp;
    struct XmlNameTable* nameTable;
    bool hasLineInfo;
    struct Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_* mapNmsp;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathDocument__Fields_FWDDECL)
#define IL2CPP_STRUCT_XPathDocument__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_MS_Internal_Xml_Cache_XPathNodeRef_MS_Internal_Xml_Cache_XPathNodeRef_.h>
#include <Modloader/app/structs/XPathNode__Array.h>
#include <Modloader/app/structs/XmlNameTable.h>
#endif
#undef IL2CPP_STRUCT_XPathDocument__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathDocument__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XPathDocument__Fields_FWDDECL)
#include <Modloader/app/structs/XPathDocument__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathDocument__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
