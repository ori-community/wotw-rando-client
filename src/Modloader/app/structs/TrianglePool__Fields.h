#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrianglePool__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrianglePool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool__Fields_DEFINED)
#define IL2CPP_STRUCT_TrianglePool__Fields_DEFINED
struct Triangle__Array__Array;
struct Stack_1_TriangleNet_Topology_Triangle_;
struct __declspec(align(8)) TrianglePool__Fields {
    int32_t size;
    int32_t count;
    struct Triangle__Array__Array* pool;
    struct Stack_1_TriangleNet_Topology_Triangle_* stack;
};
#endif
#if !defined(IL2CPP_STRUCT_TrianglePool__Fields_FWDDECL)
#define IL2CPP_STRUCT_TrianglePool__Fields_FWDDECL
#include <Modloader/app/structs/Stack_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Triangle__Array__Array.h>
#endif
#undef IL2CPP_STRUCT_TrianglePool__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrianglePool__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TrianglePool__Fields_FWDDECL)
#include <Modloader/app/structs/TrianglePool__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrianglePool__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
