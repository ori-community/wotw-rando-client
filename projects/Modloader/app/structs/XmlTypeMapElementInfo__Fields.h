#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaForm__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_DEFINED
struct String;
struct XmlTypeMapMember;
struct Object;
struct XmlTypeMapping;
struct TypeData;
struct __declspec(align(8)) XmlTypeMapElementInfo__Fields {
    struct String* _elementName;
    struct String* _namespace;
    XmlSchemaForm__Enum _form;

    struct XmlTypeMapMember* _member;
    struct Object* _choiceValue;
    bool _isNullable;
    int32_t _nestingLevel;
    struct XmlTypeMapping* _mappedType;
    struct TypeData* _type;
    bool _wrappedElement;
    int32_t _explicitOrder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapping.h>
#endif
#undef IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTypeMapElementInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTypeMapElementInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTypeMapElementInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
