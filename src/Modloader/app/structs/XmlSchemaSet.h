#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSet_DEFINED)
#include <Modloader/app/structs/XmlSchemaSet__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaSet__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaSet_DEFINED
struct XmlSchemaSet__Class;
struct XmlSchemaSet {
    struct XmlSchemaSet__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaSet_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaSet_FWDDECL
#include <Modloader/app/structs/XmlSchemaSet__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSet_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaSet_FWDDECL)
#include <Modloader/app/structs/XmlSchemaSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
