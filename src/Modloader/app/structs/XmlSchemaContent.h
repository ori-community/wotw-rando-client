#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaContent_DEFINED)
#include <Modloader/app/structs/XmlSchemaContent__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaContent_DEFINED
struct XmlSchemaContent__Class;
struct XmlSchemaContent {
    struct XmlSchemaContent__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaContent_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaContent_FWDDECL
#include <Modloader/app/structs/XmlSchemaContent__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaContent_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaContent_FWDDECL)
#include <Modloader/app/structs/XmlSchemaContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
