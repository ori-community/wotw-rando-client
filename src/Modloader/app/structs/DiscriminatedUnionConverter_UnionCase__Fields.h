#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_DEFINED)
#define IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_DEFINED
struct String;
struct PropertyInfo_1__Array;
struct FSharpFunction;
struct __declspec(align(8)) DiscriminatedUnionConverter_UnionCase__Fields {
    int32_t Tag;
    struct String* Name;
    struct PropertyInfo_1__Array* Fields;
    struct FSharpFunction* FieldReader;
    struct FSharpFunction* Constructor;
};
#endif
#if !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_FWDDECL)
#define IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_FWDDECL
#include <Modloader/app/structs/FSharpFunction.h>
#include <Modloader/app/structs/PropertyInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_UnionCase__Fields_FWDDECL)
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
