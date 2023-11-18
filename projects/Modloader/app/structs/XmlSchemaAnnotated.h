#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAnnotated_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAnnotated_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotated_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAnnotated_DEFINED
struct XmlSchemaAnnotated__Class;
struct XmlSchemaAnnotated {
    struct XmlSchemaAnnotated__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaAnnotated__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotated_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAnnotated_FWDDECL
#include <Modloader/app/structs/XmlSchemaAnnotated__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAnnotated_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAnnotated_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAnnotated_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAnnotated.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAnnotated.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
