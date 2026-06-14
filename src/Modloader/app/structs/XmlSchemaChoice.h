#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaChoice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaChoice_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaChoice_DEFINED)
#include <Modloader/app/structs/XmlSchemaChoice__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaChoice__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaChoice_DEFINED
struct XmlSchemaChoice__Class;
struct XmlSchemaChoice {
    struct XmlSchemaChoice__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaChoice__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaChoice_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaChoice_FWDDECL
#include <Modloader/app/structs/XmlSchemaChoice__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaChoice_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaChoice_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaChoice_FWDDECL)
#include <Modloader/app/structs/XmlSchemaChoice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaChoice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
