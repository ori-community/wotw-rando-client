#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PathTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonFloat;
struct VelocityBezierSplineComponent;
struct AlignSplineToVerletStructure;
struct PathTweenAnimator__Fields {
    struct TimelineEntity__Fields _;
    bool m_isFinished;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct MoonFloat* NormalizedStartPosition;
    struct MoonFloat* NormalizedEndPosition;
    struct MoonFloat* Speed;
    float SpeedChangeSmoothing;
    bool AnimateRotation;
    struct VelocityBezierSplineComponent* VelocityBezierSpline;
    struct AlignSplineToVerletStructure* AlignSplineToVerletStructure;
    float m_currentNormalizedPosition;
    float m_positionAlongCurve;
    float m_time;
    struct Vector3 m_initialPosition;
    float m_speedDampVelocity;
    float m_currentSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PathTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AlignSplineToVerletStructure.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#endif
#undef IL2CPP_STRUCT_PathTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PathTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/PathTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
