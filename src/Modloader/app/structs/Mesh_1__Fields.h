#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Mesh_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Mesh_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mesh_1__Fields_DEFINED)
#include <Modloader/app/structs/NodeNumbering__Enum.h>
#if defined(IL2CPP_STRUCT_NodeNumbering__Enum_DEFINED)
#define IL2CPP_STRUCT_Mesh_1__Fields_DEFINED
struct IPredicates;
struct ILog_1_LogItem_;
struct QualityMesher;
struct Stack_1_TriangleNet_Topology_Otri_;
struct TrianglePool;
struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_;
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_;
struct List_1_TriangleNet_Geometry_Point_;
struct List_1_TriangleNet_Geometry_RegionPointer_;
struct Rectangle;
struct Vertex;
struct TriangleLocator;
struct Behavior;
struct Triangle;
struct SubSegment;
struct __declspec(align(8)) Mesh_1__Fields {
    struct IPredicates* predicates;
    struct ILog_1_LogItem_* logger;
    struct QualityMesher* qualityMesher;
    struct Stack_1_TriangleNet_Topology_Otri_* flipstack;
    struct TrianglePool* triangles;
    struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_* subsegs;
    struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_* vertices;
    int32_t hash_vtx;
    int32_t hash_seg;
    int32_t hash_tri;
    struct List_1_TriangleNet_Geometry_Point_* holes;
    struct List_1_TriangleNet_Geometry_RegionPointer_* regions;
    struct Rectangle* bounds;
    int32_t invertices;
    int32_t insegments;
    int32_t undeads;
    int32_t mesh_dim;
    int32_t nextras;
    int32_t hullsize;
    int32_t steinerleft;
    bool checksegments;
    bool checkquality;
    struct Vertex* infvertex1;
    struct Vertex* infvertex2;
    struct Vertex* infvertex3;
    struct TriangleLocator* locator;
    struct Behavior* behavior;
    NodeNumbering__Enum numbering;

    struct Triangle* dummytri;
    struct SubSegment* dummysub;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Mesh_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Mesh_1__Fields_FWDDECL
#include <Modloader/app/structs/Behavior.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_.h>
#include <Modloader/app/structs/ILog_1_LogItem_.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_RegionPointer_.h>
#include <Modloader/app/structs/QualityMesher.h>
#include <Modloader/app/structs/Rectangle.h>
#include <Modloader/app/structs/Stack_1_TriangleNet_Topology_Otri_.h>
#include <Modloader/app/structs/SubSegment.h>
#include <Modloader/app/structs/Triangle.h>
#include <Modloader/app/structs/TriangleLocator.h>
#include <Modloader/app/structs/TrianglePool.h>
#include <Modloader/app/structs/Vertex.h>
#endif
#undef IL2CPP_STRUCT_Mesh_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Mesh_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Mesh_1__Fields_FWDDECL)
#include <Modloader/app/structs/Mesh_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Mesh_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
