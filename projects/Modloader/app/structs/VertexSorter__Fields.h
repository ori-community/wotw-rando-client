#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexSorter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexSorter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexSorter__Fields_DEFINED)
#define IL2CPP_STRUCT_VertexSorter__Fields_DEFINED
struct Random;
struct Vertex__Array;
struct __declspec(align(8)) VertexSorter__Fields {
    struct Random* rand;
    struct Vertex__Array* points;
};
#endif
#if !defined(IL2CPP_STRUCT_VertexSorter__Fields_FWDDECL)
#define IL2CPP_STRUCT_VertexSorter__Fields_FWDDECL
#include <Modloader/app/structs/Random.h>
#include <Modloader/app/structs/Vertex__Array.h>
#endif
#undef IL2CPP_STRUCT_VertexSorter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexSorter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VertexSorter__Fields_FWDDECL)
#include <Modloader/app/structs/VertexSorter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexSorter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
