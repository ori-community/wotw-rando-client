#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_DEFINED)
#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_BaseSpline_SplinePointType__Enum_DEFINED)
#define IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_DEFINED
struct __declspec(align(8)) BezierSpline_BezierSplinePoint__Fields {
    struct Vector3 position;
    struct Vector3 m_prevctrl;
    struct Vector3 m_nextctrl;
    BaseSpline_SplinePointType__Enum m_type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BezierSpline_BezierSplinePoint__Fields_FWDDECL)
#include <Modloader/app/structs/BezierSpline_BezierSplinePoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BezierSpline_BezierSplinePoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
