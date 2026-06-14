#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator_DEFINED)
#include <Modloader/app/structs/XmlSchemaValidator__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaValidator_DEFINED
struct XmlSchemaValidator__Class;
struct XmlSchemaValidator {
    struct XmlSchemaValidator__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaValidator_FWDDECL
#include <Modloader/app/structs/XmlSchemaValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaValidator_FWDDECL)
#include <Modloader/app/structs/XmlSchemaValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
