#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortKeyBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortKeyBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKeyBuffer__Fields_DEFINED)
#include <Modloader/app/structs/CompareOptions__Enum.h>
#if defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_SortKeyBuffer__Fields_DEFINED
struct Byte__Array;
struct String;
struct __declspec(align(8)) SortKeyBuffer__Fields {
    struct Byte__Array* l1b;
    struct Byte__Array* l2b;
    struct Byte__Array* l3b;
    struct Byte__Array* l4sb;
    struct Byte__Array* l4tb;
    struct Byte__Array* l4kb;
    struct Byte__Array* l4wb;
    struct Byte__Array* l5b;
    struct String* source;
    int32_t l1;
    int32_t l2;
    int32_t l3;
    int32_t l4s;
    int32_t l4t;
    int32_t l4k;
    int32_t l4w;
    int32_t l5;
    int32_t lcid;
    CompareOptions__Enum options;

    bool processLevel2;
    bool frenchSort;
    bool frenchSorted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortKeyBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SortKeyBuffer__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SortKeyBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortKeyBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SortKeyBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/SortKeyBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortKeyBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
