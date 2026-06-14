#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED
struct XmlNameTable;
struct SchemaNames;
struct ValidationEventHandler;
struct XmlSchemaCompilationSettings;
struct String;
struct __declspec(align(8)) BaseProcessor__Fields {
    struct XmlNameTable* nameTable;
    struct SchemaNames* schemaNames;
    struct ValidationEventHandler* eventHandler;
    struct XmlSchemaCompilationSettings* compilationSettings;
    int32_t errorCount;
    struct String* NsXml;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseProcessor__Fields_FWDDECL
#include <Modloader/app/structs/SchemaNames.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ValidationEventHandler.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlSchemaCompilationSettings.h>
#endif
#undef IL2CPP_STRUCT_BaseProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
