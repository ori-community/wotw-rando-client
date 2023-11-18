#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleQuadTree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleQuadTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleQuadTree_DEFINED)
#include <Modloader/app/structs/TriangleQuadTree__Fields.h>
#if defined(IL2CPP_STRUCT_TriangleQuadTree__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleQuadTree_DEFINED
struct TriangleQuadTree__Class;
struct TriangleQuadTree {
    struct TriangleQuadTree__Class* klass;
    MonitorData* monitor;
    struct TriangleQuadTree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriangleQuadTree_FWDDECL)
#define IL2CPP_STRUCT_TriangleQuadTree_FWDDECL
#include <Modloader/app/structs/TriangleQuadTree__Class.h>
#endif
#undef IL2CPP_STRUCT_TriangleQuadTree_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleQuadTree_DEFINED) && !defined(IL2CPP_STRUCT_TriangleQuadTree_FWDDECL)
#include <Modloader/app/structs/TriangleQuadTree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleQuadTree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
