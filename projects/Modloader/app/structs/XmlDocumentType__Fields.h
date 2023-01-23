#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDocumentType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDocumentType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocumentType__Fields_DEFINED)
#include <Modloader/app/structs/XmlLinkedNode__Fields.h>
#if defined(IL2CPP_STRUCT_XmlLinkedNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDocumentType__Fields_DEFINED
struct String;
struct XmlNamedNodeMap;
struct SchemaInfo;
struct XmlDocumentType__Fields {
    struct XmlLinkedNode__Fields _;
    struct String* name;
    struct String* publicId;
    struct String* systemId;
    struct String* internalSubset;
    bool namespaces;
    struct XmlNamedNodeMap* entities;
    struct XmlNamedNodeMap* notations;
    struct SchemaInfo* schemaInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDocumentType__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlDocumentType__Fields_FWDDECL
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#endif
#undef IL2CPP_STRUCT_XmlDocumentType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocumentType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlDocumentType__Fields_FWDDECL)
#include <Modloader/app/structs/XmlDocumentType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDocumentType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
