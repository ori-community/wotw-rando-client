#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaParticle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaParticle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_DEFINED)
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#include <Modloader/app/structs/XmlSchemaParticle_Occurs__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED) && defined(IL2CPP_STRUCT_Decimal_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaParticle_Occurs__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaParticle__Fields_DEFINED
struct XmlSchemaParticle__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct Decimal minOccurs;
    struct Decimal maxOccurs;
    XmlSchemaParticle_Occurs__Enum flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaParticle__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlSchemaParticle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaParticle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaParticle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
