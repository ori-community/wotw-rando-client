#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaImport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaImport_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaImport_DEFINED)
#include <Modloader/app/structs/XmlSchemaImport__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaImport__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaImport_DEFINED
struct XmlSchemaImport__Class;
struct XmlSchemaImport {
    struct XmlSchemaImport__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaImport__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaImport_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaImport_FWDDECL
#include <Modloader/app/structs/XmlSchemaImport__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaImport_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaImport_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaImport_FWDDECL)
#include <Modloader/app/structs/XmlSchemaImport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaImport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
