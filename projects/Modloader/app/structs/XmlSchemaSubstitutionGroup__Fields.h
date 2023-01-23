#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaObject__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_DEFINED
struct ArrayList;
struct XmlQualifiedName;
struct XmlSchemaSubstitutionGroup__Fields {
    struct XmlSchemaObject__Fields _;
    struct ArrayList* membersList;
    struct XmlQualifiedName* examplar;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaSubstitutionGroup__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaSubstitutionGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaSubstitutionGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
