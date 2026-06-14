#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Array_SorterGenericArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Array_SorterGenericArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_SorterGenericArray_DEFINED)
#define IL2CPP_STRUCT_Array_SorterGenericArray_DEFINED
struct Array;
struct IComparer;
struct Array_SorterGenericArray {
    struct Array* keys;
    struct Array* items;
    struct IComparer* comparer;
};
#endif
#if !defined(IL2CPP_STRUCT_Array_SorterGenericArray_FWDDECL)
#define IL2CPP_STRUCT_Array_SorterGenericArray_FWDDECL
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IComparer.h>
#endif
#undef IL2CPP_STRUCT_Array_SorterGenericArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_SorterGenericArray_DEFINED) && !defined(IL2CPP_STRUCT_Array_SorterGenericArray_FWDDECL)
#include <Modloader/app/structs/Array_SorterGenericArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Array_SorterGenericArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
