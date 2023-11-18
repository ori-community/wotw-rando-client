#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttribute_DEFINED)
#include <Modloader/app/structs/XmlSchemaAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAttribute_DEFINED
struct XmlSchemaAttribute__Class;
struct XmlSchemaAttribute {
    struct XmlSchemaAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAttribute_FWDDECL
#include <Modloader/app/structs/XmlSchemaAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAttribute_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
