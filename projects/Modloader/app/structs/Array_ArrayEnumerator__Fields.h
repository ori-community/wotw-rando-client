#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_DEFINED
struct Array;
struct __declspec(align(8)) Array_ArrayEnumerator__Fields {
    struct Array* _array;
    int32_t _index;
    int32_t _endIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Array.h>
#endif
#undef IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/Array_ArrayEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Array_ArrayEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
