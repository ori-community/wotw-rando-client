#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleType__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleType__Fields_DEFINED
struct String;
struct SimpleType;
struct XmlQualifiedName;
struct __declspec(align(8)) SimpleType__Fields {
    struct String* _baseType;
    struct SimpleType* _baseSimpleType;
    struct XmlQualifiedName* _xmlBaseType;
    struct String* _name;
    int32_t _length;
    int32_t _minLength;
    int32_t _maxLength;
    struct String* _pattern;
    struct String* _ns;
    struct String* _maxExclusive;
    struct String* _maxInclusive;
    struct String* _minExclusive;
    struct String* _minInclusive;
    struct String* _enumeration;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleType__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleType__Fields_FWDDECL
#include <Modloader/app/structs/SimpleType.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_SimpleType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleType__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
