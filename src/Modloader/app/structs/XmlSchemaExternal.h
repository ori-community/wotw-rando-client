#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaExternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaExternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaExternal_DEFINED)
#include <Modloader/app/structs/XmlSchemaExternal__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaExternal__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaExternal_DEFINED
struct XmlSchemaExternal__Class;
struct XmlSchemaExternal {
    struct XmlSchemaExternal__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaExternal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaExternal_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaExternal_FWDDECL
#include <Modloader/app/structs/XmlSchemaExternal__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaExternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaExternal_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaExternal_FWDDECL)
#include <Modloader/app/structs/XmlSchemaExternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaExternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
