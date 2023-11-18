#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_DEFINED)
#define IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_DEFINED
struct BitArray;
struct __declspec(align(8)) BitArray_BitArrayEnumeratorSimple__Fields {
    struct BitArray* bitarray;
    int32_t index;
    int32_t version;
    bool currentElement;
};
#endif
#if !defined(IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_FWDDECL)
#define IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_FWDDECL
#include <Modloader/app/structs/BitArray.h>
#endif
#undef IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BitArray_BitArrayEnumeratorSimple__Fields_FWDDECL)
#include <Modloader/app/structs/BitArray_BitArrayEnumeratorSimple__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitArray_BitArrayEnumeratorSimple__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
