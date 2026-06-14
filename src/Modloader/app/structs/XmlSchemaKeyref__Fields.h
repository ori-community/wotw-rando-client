#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaKeyref__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaKeyref__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaKeyref__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaIdentityConstraint__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaIdentityConstraint__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaKeyref__Fields_DEFINED
struct XmlQualifiedName;
struct XmlSchemaKeyref__Fields {
    struct XmlSchemaIdentityConstraint__Fields _;
    struct XmlQualifiedName* refer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaKeyref__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaKeyref__Fields_FWDDECL
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaKeyref__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaKeyref__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaKeyref__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaKeyref__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaKeyref__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
