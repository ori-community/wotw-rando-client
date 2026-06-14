#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VelocityBezierSpline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VelocityBezierSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline__Fields_DEFINED)
#include <Modloader/app/structs/BaseSpline__Fields.h>
#if defined(IL2CPP_STRUCT_BaseSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_VelocityBezierSpline__Fields_DEFINED
struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint_;
struct VelocityBezierSpline_VelocityBezierSplineSegment__Array;
struct VelocityBezierSpline__Fields {
    struct BaseSpline__Fields _;
    struct List_1_VelocityBezierSpline_VelocityBezierSplinePoint_* points;
    struct VelocityBezierSpline_VelocityBezierSplineSegment__Array* segments;
    float m_precompdiv;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline__Fields_FWDDECL)
#define IL2CPP_STRUCT_VelocityBezierSpline__Fields_FWDDECL
#include <Modloader/app/structs/List_1_VelocityBezierSpline_VelocityBezierSplinePoint_.h>
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment__Array.h>
#endif
#undef IL2CPP_STRUCT_VelocityBezierSpline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VelocityBezierSpline__Fields_FWDDECL)
#include <Modloader/app/structs/VelocityBezierSpline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VelocityBezierSpline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
