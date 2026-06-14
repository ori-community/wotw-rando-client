#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_DEFINED
struct VelocityBezierSpline;
struct Vector3__Array;
struct BaseSpline_SplineIterator;
struct SplineEventHandler;
struct VelocityBezierSplineComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct VelocityBezierSpline* spline;
    int32_t m_buildnum;
    struct Vector3__Array* m_drawcache;
    struct BaseSpline_SplineIterator* m_iterator;
    bool lock_transform_on_play;
    struct SplineEventHandler* spline_event;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_FWDDECL
#include <Modloader/app/structs/BaseSpline_SplineIterator.h>
#include <Modloader/app/structs/SplineEventHandler.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/VelocityBezierSpline.h>
#endif
#undef IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VelocityBezierSplineComponent__Fields_FWDDECL)
#include <Modloader/app/structs/VelocityBezierSplineComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VelocityBezierSplineComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
