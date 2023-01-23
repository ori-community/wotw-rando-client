#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Polygon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Polygon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Polygon__Fields_DEFINED)
#define IL2CPP_STRUCT_Polygon__Fields_DEFINED
struct List_1_TriangleNet_Geometry_Vertex_;
struct List_1_TriangleNet_Geometry_Point_;
struct List_1_TriangleNet_Geometry_RegionPointer_;
struct List_1_TriangleNet_Geometry_ISegment_;
struct __declspec(align(8)) Polygon__Fields {
    struct List_1_TriangleNet_Geometry_Vertex_* points;
    struct List_1_TriangleNet_Geometry_Point_* holes;
    struct List_1_TriangleNet_Geometry_RegionPointer_* regions;
    struct List_1_TriangleNet_Geometry_ISegment_* segments;
    bool _HasPointMarkers_k__BackingField;
    bool _HasSegmentMarkers_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Polygon__Fields_FWDDECL)
#define IL2CPP_STRUCT_Polygon__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_ISegment_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_RegionPointer_.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Vertex_.h>
#endif
#undef IL2CPP_STRUCT_Polygon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Polygon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Polygon__Fields_FWDDECL)
#include <Modloader/app/structs/Polygon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Polygon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
