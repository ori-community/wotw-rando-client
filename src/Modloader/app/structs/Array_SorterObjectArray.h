#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Array_SorterObjectArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Array_SorterObjectArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_SorterObjectArray_DEFINED)
#define IL2CPP_STRUCT_Array_SorterObjectArray_DEFINED
struct Object__Array;
struct IComparer;
struct Array_SorterObjectArray {
    struct Object__Array* keys;
    struct Object__Array* items;
    struct IComparer* comparer;
};
#endif
#if !defined(IL2CPP_STRUCT_Array_SorterObjectArray_FWDDECL)
#define IL2CPP_STRUCT_Array_SorterObjectArray_FWDDECL
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_Array_SorterObjectArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_SorterObjectArray_DEFINED) && !defined(IL2CPP_STRUCT_Array_SorterObjectArray_FWDDECL)
#include <Modloader/app/structs/Array_SorterObjectArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Array_SorterObjectArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
