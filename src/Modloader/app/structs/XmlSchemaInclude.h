#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaInclude_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaInclude_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInclude_DEFINED)
#include <Modloader/app/structs/XmlSchemaInclude__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaInclude__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaInclude_DEFINED
struct XmlSchemaInclude__Class;
struct XmlSchemaInclude {
    struct XmlSchemaInclude__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaInclude__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaInclude_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaInclude_FWDDECL
#include <Modloader/app/structs/XmlSchemaInclude__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaInclude_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaInclude_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaInclude_FWDDECL)
#include <Modloader/app/structs/XmlSchemaInclude.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaInclude.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
