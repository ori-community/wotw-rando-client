#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_DEFINED)
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#include <Modloader/app/structs/XsdBuilder_State__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaNames_Token__Enum_DEFINED) && defined(IL2CPP_STRUCT_XsdBuilder_State__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_DEFINED
struct XsdBuilder_State__Enum__Array;
struct XsdBuilder_XsdAttributeEntry__Array;
struct XsdBuilder_XsdInitFunction;
struct XsdBuilder_XsdEndChildFunction;
struct __declspec(align(8)) XsdBuilder_XsdEntry__Fields {
    SchemaNames_Token__Enum Name;

    XsdBuilder_State__Enum CurrentState;

    struct XsdBuilder_State__Enum__Array* NextStates;
    struct XsdBuilder_XsdAttributeEntry__Array* Attributes;
    struct XsdBuilder_XsdInitFunction* InitFunc;
    struct XsdBuilder_XsdEndChildFunction* EndChildFunc;
    bool ParseContent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_FWDDECL
#include <Modloader/app/structs/XsdBuilder_State__Enum__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdAttributeEntry__Array.h>
#include <Modloader/app/structs/XsdBuilder_XsdEndChildFunction.h>
#include <Modloader/app/structs/XsdBuilder_XsdInitFunction.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_XsdEntry__Fields_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_XsdEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_XsdEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
