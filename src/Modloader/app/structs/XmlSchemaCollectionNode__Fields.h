#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_DEFINED
struct String;
struct SchemaInfo;
struct XmlSchema;
struct __declspec(align(8)) XmlSchemaCollectionNode__Fields {
    struct String* namespaceUri;
    struct SchemaInfo* schemaInfo;
    struct XmlSchema* schema;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_FWDDECL
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchema.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaCollectionNode__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaCollectionNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaCollectionNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
