#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestrictionFacets__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestrictionFacets__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictionFacets__Fields_DEFINED)
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaWhiteSpace__Enum_DEFINED) && defined(IL2CPP_STRUCT_RestrictionFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_RestrictionFacets__Fields_DEFINED
struct ArrayList;
struct Object;
struct __declspec(align(8)) RestrictionFacets__Fields {
    int32_t Length;
    int32_t MinLength;
    int32_t MaxLength;
    struct ArrayList* Patterns;
    struct ArrayList* Enumeration;
    XmlSchemaWhiteSpace__Enum WhiteSpace;

    struct Object* MaxInclusive;
    struct Object* MaxExclusive;
    struct Object* MinInclusive;
    struct Object* MinExclusive;
    int32_t TotalDigits;
    int32_t FractionDigits;
    RestrictionFlags__Enum Flags;

    RestrictionFlags__Enum FixedFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestrictionFacets__Fields_FWDDECL)
#define IL2CPP_STRUCT_RestrictionFacets__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_RestrictionFacets__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestrictionFacets__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RestrictionFacets__Fields_FWDDECL)
#include <Modloader/app/structs/RestrictionFacets__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestrictionFacets__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
