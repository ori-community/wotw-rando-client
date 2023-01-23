#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_DEFINED)
#include <Modloader/app/structs/BaseSpline_SplinePointType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_BaseSpline_SplinePointType__Enum_DEFINED)
#define IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_DEFINED
struct String;
struct __declspec(align(8)) VelocityBezierSpline_VelocityBezierSplinePoint__Fields {
    struct Vector3 position;
    struct Vector3 m_prevctrl;
    struct Vector3 m_nextctrl;
    BaseSpline_SplinePointType__Enum m_type;

    struct Vector3 speed;
    struct Vector3 prev_velocity;
    struct Vector3 next_velocity;
    struct String* action;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VelocityBezierSpline_VelocityBezierSplinePoint__Fields_FWDDECL)
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VelocityBezierSpline_VelocityBezierSplinePoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
