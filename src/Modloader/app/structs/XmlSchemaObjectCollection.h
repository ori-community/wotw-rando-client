#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObjectCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObjectCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection_DEFINED)
#include <Modloader/app/structs/XmlSchemaObjectCollection__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObjectCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObjectCollection_DEFINED
struct XmlSchemaObjectCollection__Class;
struct XmlSchemaObjectCollection {
    struct XmlSchemaObjectCollection__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaObjectCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObjectCollection_FWDDECL
#include <Modloader/app/structs/XmlSchemaObjectCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObjectCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObjectCollection_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
