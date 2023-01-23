#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaFacet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaFacet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaFacet__Fields_DEFINED)
#include <Modloader/app/structs/FacetType__Enum.h>
#include <Modloader/app/structs/XmlSchemaAnnotated__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSchemaAnnotated__Fields_DEFINED) && defined(IL2CPP_STRUCT_FacetType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaFacet__Fields_DEFINED
struct String;
struct XmlSchemaFacet__Fields {
    struct XmlSchemaAnnotated__Fields _;
    struct String* value;
    bool isFixed;
    FacetType__Enum facetType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaFacet__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaFacet__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaFacet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaFacet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaFacet__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaFacet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaFacet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
