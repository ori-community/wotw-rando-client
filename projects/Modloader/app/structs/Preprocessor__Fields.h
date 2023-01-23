#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Preprocessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Preprocessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Preprocessor__Fields_DEFINED)
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#if defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_Preprocessor__Fields_DEFINED
struct String;
struct XmlSchema;
struct Hashtable;
struct SortedList;
struct XmlReaderSettings;
struct ArrayList;
struct XmlResolver;
struct Preprocessor__Fields {
    struct BaseProcessor__Fields _;
    struct String* Xmlns;
    struct String* NsXsi;
    struct String* targetNamespace;
    struct XmlSchema* rootSchema;
    struct XmlSchema* currentSchema;
    XmlSchemaForm__Enum elementFormDefault;

    XmlSchemaForm__Enum attributeFormDefault;

    XmlSchemaDerivationMethod__Enum blockDefault;

    XmlSchemaDerivationMethod__Enum finalDefault;

    struct Hashtable* schemaLocations;
    struct Hashtable* chameleonSchemas;
    struct Hashtable* referenceNamespaces;
    struct Hashtable* processedExternals;
    struct SortedList* lockList;
    struct XmlReaderSettings* readerSettings;
    struct XmlSchema* rootSchemaForRedefine;
    struct ArrayList* redefinedList;
    struct XmlResolver* xmlResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Preprocessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_Preprocessor__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlResolver.h>
#include <Modloader/app/structs/XmlSchema.h>
#endif
#undef IL2CPP_STRUCT_Preprocessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Preprocessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Preprocessor__Fields_FWDDECL)
#include <Modloader/app/structs/Preprocessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Preprocessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
