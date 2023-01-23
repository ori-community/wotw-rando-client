#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_DEFINED)
#include <Modloader/app/structs/BaseSpline_SplineSegmentType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_BaseSpline_SplineSegmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_DEFINED
struct Single__Array;
struct __declspec(align(8)) VelocityBezierSpline_VelocityBezierSplineSegment__Fields {
    struct Vector3 m_startpos;
    struct Vector3 m_endpos;
    struct Vector3 m_startctrl;
    struct Vector3 m_endctrl;
    float m_startlen;
    float m_endlen;
    float m_length;
    BaseSpline_SplineSegmentType__Enum m_type;

    struct Single__Array* m_params;
    struct Single__Array* m_precomps;
    struct Vector3 start_speed;
    struct Vector3 end_speed;
    struct Vector3 start_vc;
    struct Vector3 end_vc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_FWDDECL)
#define IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplineSegment__Fields_FWDDECL)
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplineSegment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
