#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaContent__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_DEFINED
struct XmlSchemaParticle;
struct XmlSchemaObjectCollection;
struct XmlSchemaAnyAttribute;
struct XmlQualifiedName;
struct XmlSchemaComplexContentExtension__Fields {
    struct XmlSchemaContent__Fields _;
    struct XmlSchemaParticle* particle;
    struct XmlSchemaObjectCollection* attributes;
    struct XmlSchemaAnyAttribute* anyAttribute;
    struct XmlQualifiedName* baseTypeName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaComplexContentExtension__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaComplexContentExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaComplexContentExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
