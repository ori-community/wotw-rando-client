#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeData__Fields_DEFINED)
#include <Modloader/app/structs/SchemaTypes__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_TypeData__Fields_DEFINED
struct Type;
struct String;
struct TypeData;
struct XmlSchemaPatternFacet;
struct MethodInfo_1;
struct __declspec(align(8)) TypeData__Fields {
    struct Type* type;
    struct String* elementName;
    SchemaTypes__Enum sType;

    struct Type* listItemType;
    struct String* typeName;
    struct String* fullTypeName;
    struct TypeData* listItemTypeData;
    struct TypeData* mappedType;
    struct XmlSchemaPatternFacet* facet;
    struct MethodInfo_1* typeConvertor;
    bool hasPublicConstructor;
    bool nullableOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeData__Fields_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlSchemaPatternFacet.h>
#endif
#undef IL2CPP_STRUCT_TypeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeData__Fields_FWDDECL)
#include <Modloader/app/structs/TypeData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
