#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_DEFINED)
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaNames_Token__Enum_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_DEFINED
struct XmlSchemaDatatype;
struct XdrBuilder_XdrBuildFunction;
struct __declspec(align(8)) XdrBuilder_XdrAttributeEntry__Fields {
    SchemaNames_Token__Enum _Attribute;

    int32_t _SchemaFlags;
    struct XmlSchemaDatatype* _Datatype;
    struct XdrBuilder_XdrBuildFunction* _BuildFunc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_FWDDECL
#include <Modloader/app/structs/XdrBuilder_XdrBuildFunction.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_XdrAttributeEntry__Fields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
