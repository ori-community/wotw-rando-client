#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleQuadTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleQuadTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleQuadTree__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleQuadTree__Fields_DEFINED
struct TriangleQuadTree_QuadNode;
struct ITriangle__Array;
struct __declspec(align(8)) TriangleQuadTree__Fields {
    struct TriangleQuadTree_QuadNode* root;
    struct ITriangle__Array* triangles;
    int32_t sizeBound;
    int32_t maxDepth;
};
#endif
#if !defined(IL2CPP_STRUCT_TriangleQuadTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriangleQuadTree__Fields_FWDDECL
#include <Modloader/app/structs/ITriangle__Array.h>
#include <Modloader/app/structs/TriangleQuadTree_QuadNode.h>
#endif
#undef IL2CPP_STRUCT_TriangleQuadTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleQuadTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriangleQuadTree__Fields_FWDDECL)
#include <Modloader/app/structs/TriangleQuadTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleQuadTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
