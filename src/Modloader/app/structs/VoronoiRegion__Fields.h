#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoronoiRegion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoronoiRegion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiRegion__Fields_DEFINED)
#define IL2CPP_STRUCT_VoronoiRegion__Fields_DEFINED
struct Point;
struct List_1_TriangleNet_Geometry_Point_;
struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_;
struct __declspec(align(8)) VoronoiRegion__Fields {
    int32_t id;
    struct Point* generator;
    struct List_1_TriangleNet_Geometry_Point_* vertices;
    bool bounded;
    struct Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_* neighbors;
};
#endif
#if !defined(IL2CPP_STRUCT_VoronoiRegion__Fields_FWDDECL)
#define IL2CPP_STRUCT_VoronoiRegion__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_TriangleNet_Voronoi_Legacy_VoronoiRegion_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/Point.h>
#endif
#undef IL2CPP_STRUCT_VoronoiRegion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiRegion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VoronoiRegion__Fields_FWDDECL)
#include <Modloader/app/structs/VoronoiRegion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoronoiRegion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
