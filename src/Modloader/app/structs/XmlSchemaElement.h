#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaElement_DEFINED)
#include <Modloader/app/structs/XmlSchemaElement__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaElement__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaElement_DEFINED
struct XmlSchemaElement__Class;
struct XmlSchemaElement {
    struct XmlSchemaElement__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaElement_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaElement_FWDDECL
#include <Modloader/app/structs/XmlSchemaElement__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaElement_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaElement_FWDDECL)
#include <Modloader/app/structs/XmlSchemaElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
