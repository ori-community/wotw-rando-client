#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_DEFINED)
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#if defined(IL2CPP_STRUCT_RestrictionFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlTypeCode__Enum_DEFINED)
#define IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_DEFINED
struct DatatypeImplementation;
struct RestrictionFacets;
struct XmlSchemaDatatype;
struct StringBuilder;
struct XmlSchemaPatternFacet;
struct FacetsChecker_FacetsCompiler {
    struct DatatypeImplementation* datatype;
    struct RestrictionFacets* derivedRestriction;
    RestrictionFlags__Enum baseFlags;

    RestrictionFlags__Enum baseFixedFlags;

    RestrictionFlags__Enum validRestrictionFlags;

    struct XmlSchemaDatatype* nonNegativeInt;
    struct XmlSchemaDatatype* builtInType;
    XmlTypeCode__Enum builtInEnum;

    bool firstPattern;
    struct StringBuilder* regStr;
    struct XmlSchemaPatternFacet* pattern_facet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_FWDDECL)
#define IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_FWDDECL
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/RestrictionFacets.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaPatternFacet.h>
#endif
#undef IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_DEFINED) && !defined(IL2CPP_STRUCT_FacetsChecker_FacetsCompiler_FWDDECL)
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FacetsChecker_FacetsCompiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
