#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_DEFINED)
#include <Modloader/app/structs/SchemaNames_Token__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaNames_Token__Enum_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_DEFINED
struct Int32__Array;
struct XdrBuilder_XdrAttributeEntry__Array;
struct XdrBuilder_XdrInitFunction;
struct XdrBuilder_XdrBeginChildFunction;
struct XdrBuilder_XdrEndChildFunction;
struct __declspec(align(8)) XdrBuilder_XdrEntry__Fields {
    SchemaNames_Token__Enum _Name;

    struct Int32__Array* _NextStates;
    struct XdrBuilder_XdrAttributeEntry__Array* _Attributes;
    struct XdrBuilder_XdrInitFunction* _InitFunc;
    struct XdrBuilder_XdrBeginChildFunction* _BeginChildFunc;
    struct XdrBuilder_XdrEndChildFunction* _EndChildFunc;
    bool _AllowText;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrBeginChildFunction.h>
#include <Modloader/app/structs/XdrBuilder_XdrEndChildFunction.h>
#include <Modloader/app/structs/XdrBuilder_XdrInitFunction.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_XdrEntry__Fields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
