#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaCollection__Fields_DEFINED
struct Hashtable;
struct XmlNameTable;
struct SchemaNames;
struct ReaderWriterLock;
struct ValidationEventHandler;
struct XmlResolver;
struct __declspec(align(8)) XmlSchemaCollection__Fields {
    struct Hashtable* collection;
    struct XmlNameTable* nameTable;
    struct SchemaNames* schemaNames;
    struct ReaderWriterLock* wLock;
    int32_t timeout;
    bool isThreadSafe;
    struct ValidationEventHandler* validationEventHandler;
    struct XmlResolver* xmlResolver;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaCollection__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ReaderWriterLock.h>
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlResolver.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaCollection__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
