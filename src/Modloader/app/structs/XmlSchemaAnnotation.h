#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAnnotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotation_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotation__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotation__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAnnotation_DEFINED
struct XmlSchemaAnnotation__Class;
struct XmlSchemaAnnotation {
    struct XmlSchemaAnnotation__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaAnnotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotation_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAnnotation_FWDDECL
#include <Modloader/app/structs/XmlSchemaAnnotation__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAnnotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotation_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAnnotation_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAnnotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
