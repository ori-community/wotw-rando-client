#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_DEFINED
struct XmlQualifiedName;
struct XmlSchemaObject;
struct XmlSchemaObjectTable_XmlSchemaObjectEntry {
    struct XmlQualifiedName* qname;
    struct XmlSchemaObject* xso;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XmlSchemaObjectEntry_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObjectTable_XmlSchemaObjectEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
