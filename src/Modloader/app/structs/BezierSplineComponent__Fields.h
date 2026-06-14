#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BezierSplineComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BezierSplineComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSplineComponent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BezierSplineComponent__Fields_DEFINED
struct BezierSpline;
struct Vector3__Array;
struct BaseSpline_SplineIterator;
struct BezierSplineComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct BezierSpline* spline;
    int32_t m_buildnum;
    struct Vector3__Array* m_drawcache;
    struct BaseSpline_SplineIterator* it;
    bool lock_transform_on_play;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BezierSplineComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_BezierSplineComponent__Fields_FWDDECL
#include <Modloader/app/structs/BaseSpline_SplineIterator.h>
#include <Modloader/app/structs/BezierSpline.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_BezierSplineComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSplineComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BezierSplineComponent__Fields_FWDDECL)
#include <Modloader/app/structs/BezierSplineComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BezierSplineComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
