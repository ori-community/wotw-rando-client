#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_DEFINED)
#define IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_DEFINED
struct Triangle;
struct TrianglePool;
struct Random;
struct __declspec(align(8)) TrianglePool_Sample_d_9__Fields {
    int32_t __1__state;
    struct Triangle* __2__current;
    int32_t __l__initialThreadId;
    struct TrianglePool* __4__this;
    int32_t k;
    int32_t __3__k;
    struct Random* random;
    struct Random* __3__random;
    int32_t _count_5__2;
};
#endif
#if !defined(IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_FWDDECL
#include <Modloader/app/structs/Random.h>
#include <Modloader/app/structs/Triangle.h>
#include <Modloader/app/structs/TrianglePool.h>
#endif
#undef IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrianglePool_Sample_d_9__Fields_FWDDECL)
#include <Modloader/app/structs/TrianglePool_Sample_d_9__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrianglePool_Sample_d_9__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
