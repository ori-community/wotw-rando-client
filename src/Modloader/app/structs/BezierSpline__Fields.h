#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BezierSpline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BezierSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline__Fields_DEFINED)
#include <Modloader/app/structs/BaseSpline__Fields.h>
#if defined(IL2CPP_STRUCT_BaseSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_BezierSpline__Fields_DEFINED
struct List_1_BezierSpline_BezierSplinePoint_;
struct BezierSpline_BezierSplineSegment__Array;
struct BezierSpline__Fields {
    struct BaseSpline__Fields _;
    struct List_1_BezierSpline_BezierSplinePoint_* points;
    struct BezierSpline_BezierSplineSegment__Array* m_segments;
    float m_precompdiv;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BezierSpline__Fields_FWDDECL)
#define IL2CPP_STRUCT_BezierSpline__Fields_FWDDECL
#include <Modloader/app/structs/BezierSpline_BezierSplineSegment__Array.h>
#include <Modloader/app/structs/List_1_BezierSpline_BezierSplinePoint_.h>
#endif
#undef IL2CPP_STRUCT_BezierSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BezierSpline__Fields_FWDDECL)
#include <Modloader/app/structs/BezierSpline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BezierSpline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
