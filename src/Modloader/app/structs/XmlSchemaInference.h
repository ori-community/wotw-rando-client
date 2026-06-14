#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaInference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaInference_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInference_DEFINED)
#include <Modloader/app/structs/XmlSchemaInference__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaInference__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaInference_DEFINED
struct XmlSchemaInference__Class;
struct XmlSchemaInference {
    struct XmlSchemaInference__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaInference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaInference_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaInference_FWDDECL
#include <Modloader/app/structs/XmlSchemaInference__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaInference_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInference_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaInference_FWDDECL)
#include <Modloader/app/structs/XmlSchemaInference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaInference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
