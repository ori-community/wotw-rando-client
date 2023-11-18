#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_DEFINED)
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaNames_Token__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_DEFINED
struct XsdBuilder_XsdBuildFunction;
struct __declspec(align(8)) XsdBuilder_XsdAttributeEntry__Fields {
    SchemaNames_Token__Enum Attribute;

    struct XsdBuilder_XsdBuildFunction* BuildFunc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_FWDDECL
#include <Modloader/app/structs/XsdBuilder_XsdBuildFunction.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_XsdAttributeEntry__Fields_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
