#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_DEFINED)
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#if defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_DEFINED
struct XmlSchema;
struct String;
struct Hashtable;
struct XmlResolver;
struct SchemaCollectionPreprocessor__Fields {
    struct BaseProcessor__Fields _;
    struct XmlSchema* schema;
    struct String* targetNamespace;
    bool buildinIncluded;
    XmlSchemaForm__Enum elementFormDefault;

    XmlSchemaForm__Enum attributeFormDefault;

    XmlSchemaDerivationMethod__Enum blockDefault;

    XmlSchemaDerivationMethod__Enum finalDefault;

    struct Hashtable* schemaLocations;
    struct Hashtable* referenceNamespaces;
    struct String* Xmlns;
    struct XmlResolver* xmlResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#endif
#undef IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_FWDDECL)
#include <Modloader/app/structs/SchemaCollectionPreprocessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaCollectionPreprocessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
