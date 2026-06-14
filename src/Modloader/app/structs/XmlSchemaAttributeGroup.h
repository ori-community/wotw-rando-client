#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAttributeGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAttributeGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup_DEFINED)
#include <Modloader/app/structs/XmlSchemaAttributeGroup__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAttributeGroup_DEFINED
struct XmlSchemaAttributeGroup__Class;
struct XmlSchemaAttributeGroup {
    struct XmlSchemaAttributeGroup__Class* klass;
    MonitorData* monitor;
    struct XmlSchemaAttributeGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAttributeGroup_FWDDECL
#include <Modloader/app/structs/XmlSchemaAttributeGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAttributeGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
