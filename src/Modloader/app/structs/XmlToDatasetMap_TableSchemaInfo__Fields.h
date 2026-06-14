#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_DEFINED
struct DataTable;
struct XmlToDatasetMap_XmlNodeIdHashtable;
struct __declspec(align(8)) XmlToDatasetMap_TableSchemaInfo__Fields {
    struct DataTable* TableSchema;
    struct XmlToDatasetMap_XmlNodeIdHashtable* ColumnsSchemaMap;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/XmlToDatasetMap_XmlNodeIdHashtable.h>
#endif
#undef IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlToDatasetMap_TableSchemaInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XmlToDatasetMap_TableSchemaInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlToDatasetMap_TableSchemaInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
