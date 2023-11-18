#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaType_DEFINED)
#include <Modloader/app/structs/XmlSchemaType__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaType__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaType_DEFINED
struct XmlSchemaType__Class;
struct XmlSchemaType {
    struct XmlSchemaType__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaType_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaType_FWDDECL
#include <Modloader/app/structs/XmlSchemaType__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaType_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaType_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaType_FWDDECL)
#include <Modloader/app/structs/XmlSchemaType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
