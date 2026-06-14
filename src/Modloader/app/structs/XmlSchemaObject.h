#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObject_DEFINED)
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObject_DEFINED
struct XmlSchemaObject__Class;
struct XmlSchemaObject {
    struct XmlSchemaObject__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObject_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObject_FWDDECL
#include <Modloader/app/structs/XmlSchemaObject__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObject_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObject_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
