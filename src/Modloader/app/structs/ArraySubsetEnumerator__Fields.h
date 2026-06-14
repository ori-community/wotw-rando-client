#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_DEFINED
struct Array;
struct __declspec(align(8)) ArraySubsetEnumerator__Fields {
    struct Array* array;
    int32_t total;
    int32_t current;
};
#endif
#if !defined(IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/Array.h>
#endif
#undef IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArraySubsetEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/ArraySubsetEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArraySubsetEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
