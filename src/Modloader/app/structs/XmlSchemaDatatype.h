#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaDatatype_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaDatatype_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaDatatype_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaDatatype_DEFINED
struct XmlSchemaDatatype__Class;
struct XmlSchemaDatatype {
    struct XmlSchemaDatatype__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaDatatype_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaDatatype_FWDDECL
#include <Modloader/app/structs/XmlSchemaDatatype__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaDatatype_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaDatatype_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaDatatype_FWDDECL)
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
