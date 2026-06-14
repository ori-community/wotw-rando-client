#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchema__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchema__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchema__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchema__Fields_DEFINED
struct String;
struct XmlSchemaObjectCollection;
struct XmlAttribute__Array;
struct XmlSchemaObjectTable;
struct ArrayList;
struct Uri;
struct Hashtable;
struct XmlDocument;
struct XmlSchema__Fields {
    struct XmlSchemaObject__Fields _;
    XmlSchemaForm__Enum attributeFormDefault;

    XmlSchemaForm__Enum elementFormDefault;

    XmlSchemaDerivationMethod__Enum blockDefault;

    XmlSchemaDerivationMethod__Enum finalDefault;

    struct String* targetNs;
    struct String* version;
    struct XmlSchemaObjectCollection* includes;
    struct XmlSchemaObjectCollection* items;
    struct String* id;
    struct XmlAttribute__Array* moreAttributes;
    bool isCompiled;
    bool isCompiledBySet;
    bool isPreprocessed;
    bool isRedefined;
    int32_t errorCount;
    struct XmlSchemaObjectTable* attributes;
    struct XmlSchemaObjectTable* attributeGroups;
    struct XmlSchemaObjectTable* elements;
    struct XmlSchemaObjectTable* types;
    struct XmlSchemaObjectTable* groups;
    struct XmlSchemaObjectTable* notations;
    struct XmlSchemaObjectTable* identityConstraints;
    struct ArrayList* importedSchemas;
    struct ArrayList* importedNamespaces;
    int32_t schemaId;
    struct Uri* baseUri;
    bool isChameleon;
    struct Hashtable* ids;
    struct XmlDocument* document;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchema__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchema__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#endif
#undef IL2CPP_STRUCT_XmlSchema__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchema__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchema__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchema__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchema__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
