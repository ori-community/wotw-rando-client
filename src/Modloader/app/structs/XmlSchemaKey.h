#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaKey_DEFINED)
#include <Modloader/app/structs/XmlSchemaKey__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaKey__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaKey_DEFINED
struct XmlSchemaKey__Class;
struct XmlSchemaKey {
    struct XmlSchemaKey__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaKey_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaKey_FWDDECL
#include <Modloader/app/structs/XmlSchemaKey__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaKey_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaKey_FWDDECL)
#include <Modloader/app/structs/XmlSchemaKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
