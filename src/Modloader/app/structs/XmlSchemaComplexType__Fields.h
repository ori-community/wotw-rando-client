#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaComplexType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaComplexType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaComplexType__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/XmlSchemaType__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaType__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaDerivationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaComplexType__Fields_DEFINED
struct XmlSchemaContentModel;
struct XmlSchemaParticle;
struct XmlSchemaObjectCollection;
struct XmlSchemaAnyAttribute;
struct XmlSchemaObjectTable;
struct XmlSchemaComplexType__Fields {
    struct XmlSchemaType__Fields _;
    XmlSchemaDerivationMethod__Enum block;

    struct XmlSchemaContentModel* contentModel;
    struct XmlSchemaParticle* particle;
    struct XmlSchemaObjectCollection* attributes;
    struct XmlSchemaAnyAttribute* anyAttribute;
    struct XmlSchemaParticle* contentTypeParticle;
    XmlSchemaDerivationMethod__Enum blockResolved;

    struct XmlSchemaObjectTable* localElements;
    struct XmlSchemaObjectTable* attributeUses;
    struct XmlSchemaAnyAttribute* attributeWildcard;
    uint8_t pvFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaComplexType__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaComplexType__Fields_FWDDECL
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaContentModel.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>
#include <Modloader/app/structs/XmlSchemaParticle.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaComplexType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaComplexType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaComplexType__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaComplexType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaComplexType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
