#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EdgeIterator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EdgeIterator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeIterator__Fields_DEFINED)
#include <Modloader/app/structs/Osub.h>
#include <Modloader/app/structs/Otri.h>
#if defined(IL2CPP_STRUCT_Otri_DEFINED) && defined(IL2CPP_STRUCT_Osub_DEFINED)
#define IL2CPP_STRUCT_EdgeIterator__Fields_DEFINED
struct IEnumerator_1_TriangleNet_Topology_Triangle_;
struct Edge;
struct Vertex;
struct __declspec(align(8)) EdgeIterator__Fields {
    struct IEnumerator_1_TriangleNet_Topology_Triangle_* triangles;
    struct Otri tri;
    struct Otri neighbor;
    struct Osub sub;
    struct Edge* current;
    struct Vertex* p1;
    struct Vertex* p2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EdgeIterator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EdgeIterator__Fields_FWDDECL
#include <Modloader/app/structs/Edge.h>
#include <Modloader/app/structs/IEnumerator_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Vertex.h>
#endif
#undef IL2CPP_STRUCT_EdgeIterator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeIterator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EdgeIterator__Fields_FWDDECL)
#include <Modloader/app/structs/EdgeIterator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EdgeIterator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
