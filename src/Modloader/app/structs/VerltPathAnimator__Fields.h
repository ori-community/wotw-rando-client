#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerltPathAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerltPathAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerltPathAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerltPathAnimator__Fields_DEFINED
struct VerletStructure;
struct Single__Array;
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct Int32__Array;
struct VerltPathAnimator__Fields {
    struct TimelineEntity__Fields _;
    bool m_isFinished;
    struct VerletStructure* VerletStructure;
    struct Single__Array* jointValues;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct AnimationCurve* Curve;
    float m_time;
    struct Vector3 m_initialPosition;
    struct Int32__Array* jointNumbers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerltPathAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerltPathAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_VerltPathAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerltPathAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerltPathAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/VerltPathAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerltPathAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
