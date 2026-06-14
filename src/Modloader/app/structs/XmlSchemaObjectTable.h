#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObjectTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_DEFINED)
#include <Modloader/app/structs/XmlSchemaObjectTable__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObjectTable__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_DEFINED
struct XmlSchemaObjectTable__Class;
struct XmlSchemaObjectTable {
    struct XmlSchemaObjectTable__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaObjectTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_FWDDECL
#include <Modloader/app/structs/XmlSchemaObjectTable__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObjectTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
