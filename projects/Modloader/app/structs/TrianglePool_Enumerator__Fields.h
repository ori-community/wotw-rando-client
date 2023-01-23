#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_DEFINED
struct Triangle__Array__Array;
struct Triangle;
struct __declspec(align(8)) TrianglePool_Enumerator__Fields {
    int32_t count;
    struct Triangle__Array__Array* pool;
    struct Triangle* current;
    int32_t index;
    int32_t offset;
};
#endif
#if !defined(IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_FWDDECL
#include <Modloader/app/structs/Triangle.h>
#include <Modloader/app/structs/Triangle__Array__Array.h>
#endif
#undef IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrianglePool_Enumerator__Fields_FWDDECL)
#include <Modloader/app/structs/TrianglePool_Enumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrianglePool_Enumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
