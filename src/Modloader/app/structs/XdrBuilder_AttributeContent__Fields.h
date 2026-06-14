#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_DEFINED
struct SchemaAttDef;
struct XmlQualifiedName;
struct String;
struct Object;
struct __declspec(align(8)) XdrBuilder_AttributeContent__Fields {
    struct SchemaAttDef* _AttDef;
    struct XmlQualifiedName* _Name;
    struct String* _Prefix;
    bool _Required;
    uint32_t _MinVal;
    uint32_t _MaxVal;
    uint32_t _MaxLength;
    uint32_t _MinLength;
    bool _EnumerationRequired;
    bool _HasDataType;
    bool _Global;
    struct Object* _Default;
};
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_AttributeContent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_AttributeContent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
