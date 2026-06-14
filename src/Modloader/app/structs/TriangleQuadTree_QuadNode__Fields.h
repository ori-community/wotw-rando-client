#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_DEFINED
struct Rectangle;
struct Point;
struct TriangleQuadTree;
struct TriangleQuadTree_QuadNode__Array;
struct List_1_System_Int32_;
struct __declspec(align(8)) TriangleQuadTree_QuadNode__Fields {
    struct Rectangle* bounds;
    struct Point* pivot;
    struct TriangleQuadTree* tree;
    struct TriangleQuadTree_QuadNode__Array* regions;
    struct List_1_System_Int32_* triangles;
    uint8_t bitRegions;
};
#endif
#if !defined(IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Point.h>
#include <Modloader/app/structs/Rectangle.h>
#include <Modloader/app/structs/TriangleQuadTree.h>
#include <Modloader/app/structs/TriangleQuadTree_QuadNode__Array.h>
#endif
#undef IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriangleQuadTree_QuadNode__Fields_FWDDECL)
#include <Modloader/app/structs/TriangleQuadTree_QuadNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleQuadTree_QuadNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
