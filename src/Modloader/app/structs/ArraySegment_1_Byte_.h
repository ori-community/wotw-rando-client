#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArraySegment_1_Byte__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArraySegment_1_Byte__INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySegment_1_Byte__DEFINED)
#define IL2CPP_STRUCT_ArraySegment_1_Byte__DEFINED
struct Byte__Array;
struct ArraySegment_1_Byte_ {
    struct Byte__Array* _array;
    int32_t _offset;
    int32_t _count;
};
#endif
#if !defined(IL2CPP_STRUCT_ArraySegment_1_Byte__FWDDECL)
#define IL2CPP_STRUCT_ArraySegment_1_Byte__FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_ArraySegment_1_Byte__INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySegment_1_Byte__DEFINED) && !defined(IL2CPP_STRUCT_ArraySegment_1_Byte__FWDDECL)
#include <Modloader/app/structs/ArraySegment_1_Byte_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArraySegment_1_Byte_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
