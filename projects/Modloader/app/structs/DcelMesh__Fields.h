#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DcelMesh__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DcelMesh__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DcelMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_DcelMesh__Fields_DEFINED
struct List_1_TriangleNet_Topology_DCEL_Vertex_;
struct List_1_TriangleNet_Topology_DCEL_HalfEdge_;
struct List_1_TriangleNet_Topology_DCEL_Face_;
struct __declspec(align(8)) DcelMesh__Fields {
    struct List_1_TriangleNet_Topology_DCEL_Vertex_* vertices;
    struct List_1_TriangleNet_Topology_DCEL_HalfEdge_* edges;
    struct List_1_TriangleNet_Topology_DCEL_Face_* faces;
};
#endif
#if !defined(IL2CPP_STRUCT_DcelMesh__Fields_FWDDECL)
#define IL2CPP_STRUCT_DcelMesh__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_Face_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_HalfEdge_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_Vertex_.h>
#endif
#undef IL2CPP_STRUCT_DcelMesh__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DcelMesh__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DcelMesh__Fields_FWDDECL)
#include <Modloader/app/structs/DcelMesh__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DcelMesh__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
