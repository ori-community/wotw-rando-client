#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaGroup_DEFINED)
#include <Modloader/app/structs/XmlSchemaGroup__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaGroup_DEFINED
struct XmlSchemaGroup__Class;
struct XmlSchemaGroup {
    struct XmlSchemaGroup__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaGroup_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaGroup_FWDDECL
#include <Modloader/app/structs/XmlSchemaGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaGroup_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaGroup_FWDDECL)
#include <Modloader/app/structs/XmlSchemaGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
