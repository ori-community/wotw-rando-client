#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAll_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAll_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAll_DEFINED)
#include <Modloader/app/structs/XmlSchemaAll__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAll__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAll_DEFINED
struct XmlSchemaAll__Class;
struct XmlSchemaAll {
    struct XmlSchemaAll__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaAll__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAll_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAll_FWDDECL
#include <Modloader/app/structs/XmlSchemaAll__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAll_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAll_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAll_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAll.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAll.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
