#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatatypeImplementation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatatypeImplementation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaDatatypeVariety__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaDatatypeVariety__Enum_DEFINED)
#define IL2CPP_STRUCT_DatatypeImplementation__Fields_DEFINED
struct RestrictionFacets;
struct DatatypeImplementation;
struct XmlValueConverter;
struct XmlSchemaType;
struct __declspec(align(8)) DatatypeImplementation__Fields {
    XmlSchemaDatatypeVariety__Enum variety;

    struct RestrictionFacets* restriction;
    struct DatatypeImplementation* baseType;
    struct XmlValueConverter* valueConverter;
    struct XmlSchemaType* parentSchemaType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__Fields_FWDDECL)
#define IL2CPP_STRUCT_DatatypeImplementation__Fields_FWDDECL
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/RestrictionFacets.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlValueConverter.h>
#endif
#undef IL2CPP_STRUCT_DatatypeImplementation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DatatypeImplementation__Fields_FWDDECL)
#include <Modloader/app/structs/DatatypeImplementation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatatypeImplementation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
