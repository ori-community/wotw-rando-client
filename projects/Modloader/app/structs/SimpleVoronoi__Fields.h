#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleVoronoi__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleVoronoi__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleVoronoi__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleVoronoi__Fields_DEFINED
struct IPredicates;
struct Mesh_1;
struct Point__Array;
struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_;
struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point_;
struct Rectangle;
struct __declspec(align(8)) SimpleVoronoi__Fields {
    struct IPredicates* predicates;
    struct Mesh_1* mesh;
    struct Point__Array* points;
    struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_* regions;
    struct Dictionary_2_System_Int32_TriangleNet_Geometry_Point_* rayPoints;
    int32_t rayIndex;
    struct Rectangle* bounds;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleVoronoi__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleVoronoi__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Point__Array.h>
#include <Modloader/app/structs/Rectangle.h>
#endif
#undef IL2CPP_STRUCT_SimpleVoronoi__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleVoronoi__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleVoronoi__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleVoronoi__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleVoronoi__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
