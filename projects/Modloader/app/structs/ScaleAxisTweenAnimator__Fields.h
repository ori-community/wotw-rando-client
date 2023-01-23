#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonVector3;
struct MoonFloat;
struct MoveTowardsVector3Tweenable;
struct ScaleAxisTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    HandoverMode__Enum HandoverWrite;

    HandoverMode__Enum HandoverReadStart;

    HandoverMode__Enum HandoverReadEnd;

    struct MoonVector3* LocalStartScale;
    struct MoonVector3* LocalEndScale;
    struct MoonFloat* Speed;
    struct Vector3 m_velocity;
    bool m_hasStarted;
    bool m_isFinished;
    struct Vector3 m_currentStartScale;
    struct Vector3 m_currentEndScale;
    struct MoveTowardsVector3Tweenable* m_tweenScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/MoveTowardsVector3Tweenable.h>
#endif
#undef IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScaleAxisTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ScaleAxisTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleAxisTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
