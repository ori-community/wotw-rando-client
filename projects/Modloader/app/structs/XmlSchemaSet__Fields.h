#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSet__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaSet__Fields_DEFINED
struct XmlNameTable;
struct SchemaNames;
struct SortedList;
struct ValidationEventHandler;
struct Hashtable;
struct SchemaInfo;
struct XmlReaderSettings;
struct XmlSchema;
struct XmlSchemaCompilationSettings;
struct XmlSchemaObjectTable;
struct Object;
struct __declspec(align(8)) XmlSchemaSet__Fields {
    struct XmlNameTable* nameTable;
    struct SchemaNames* schemaNames;
    struct SortedList* schemas;
    struct ValidationEventHandler* internalEventHandler;
    struct ValidationEventHandler* eventHandler;
    bool isCompiled;
    struct Hashtable* schemaLocations;
    struct Hashtable* chameleonSchemas;
    struct Hashtable* targetNamespaces;
    bool compileAll;
    struct SchemaInfo* cachedCompiledInfo;
    struct XmlReaderSettings* readerSettings;
    struct XmlSchema* schemaForSchema;
    struct XmlSchemaCompilationSettings* compilationSettings;
    struct XmlSchemaObjectTable* elements;
    struct XmlSchemaObjectTable* attributes;
    struct XmlSchemaObjectTable* schemaTypes;
    struct XmlSchemaObjectTable* substitutionGroups;
    struct XmlSchemaObjectTable* typeExtensions;
    struct Object* internalSyncObject;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaSet__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaInfo.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/SortedList.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaSet__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
