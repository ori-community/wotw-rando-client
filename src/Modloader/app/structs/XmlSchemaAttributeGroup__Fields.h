#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_DEFINED
struct String;
struct XmlSchemaObjectCollection;
struct XmlSchemaAnyAttribute;
struct XmlQualifiedName;
struct XmlSchemaAttributeGroup;
struct XmlSchemaObjectTable;
struct XmlSchemaAttributeGroup__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct String* name;
    struct XmlSchemaObjectCollection* attributes;
    struct XmlSchemaAnyAttribute* anyAttribute;
    struct XmlQualifiedName* qname;
    struct XmlSchemaAttributeGroup* redefined;
    struct XmlSchemaObjectTable* attributeUses;
    struct XmlSchemaAnyAttribute* attributeWildcard;
    int32_t selfReferenceCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaAttributeGroup__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaAttributeGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaAttributeGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
