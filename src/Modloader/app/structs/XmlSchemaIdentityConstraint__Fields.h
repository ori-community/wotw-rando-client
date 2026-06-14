#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_DEFINED
struct String;
struct XmlSchemaXPath;
struct XmlSchemaObjectCollection;
struct XmlQualifiedName;
struct CompiledIdentityConstraint;
struct XmlSchemaIdentityConstraint__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct String* name;
    struct XmlSchemaXPath* selector;
    struct XmlSchemaObjectCollection* fields;
    struct XmlQualifiedName* qualifiedName;
    struct CompiledIdentityConstraint* compiledConstraint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_FWDDECL
#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaXPath.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaIdentityConstraint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaIdentityConstraint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
