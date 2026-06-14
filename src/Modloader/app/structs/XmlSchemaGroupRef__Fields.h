#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaParticle__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaParticle__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_DEFINED
struct XmlQualifiedName;
struct XmlSchemaGroupBase;
struct XmlSchemaGroup;
struct XmlSchemaGroupRef__Fields {
    struct XmlSchemaParticle__Fields _;
    struct XmlQualifiedName* refName;
    struct XmlSchemaGroupBase* particle;
    struct XmlSchemaGroup* refined;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaGroup.h>
#include <Modloader/app/structs/XmlSchemaGroupBase.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaGroupRef__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaGroupRef__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaGroupRef__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
